#AT COMMANDS

AT COMMANDS are a great way to connect physical components or sensors to a GSM network.  
In this lab we will use an Arduino, a GSM shield, along with the software CoolTerm.  
In the second part of the lesson we will connect a button to the Arduino and have pressed button send an SMS.

##1. Connect the Arduino to GSM shield:

![alt tag](https://github.com/saycel/towers-of-power/blob/master/Arduino_GSM_Simple.png)

Insert an active SIM card.

##2. Modify the SoftwareSerial.h file.
SoftwareSerial.h file has a limited buffer size and this causes SMS messages to be truncated or shortened. In rder to get most if not all the message you have to modify the file.

       1. Right click on Arduino Application and click on view contents. 
       2. Navigate to Arduino/hardware/arduino/avr/libraries/SoftwareSerial/src/SoftwareSerial.h
       3. Change      "#define _SS_MAX_RX_BUFF 64"    to      "#define _SS_MAX_RX_BUFF 256"
       4. Save file. 
       
##3. Upload Arduino_AT_Command_Basic.ino sketch to your Arduino.  
This sketch uses software serial to send serial commands from your computer through the Arduino onto the GSM board. 
Serial communication is the process of sending data one bit at a time, and in this sketch we define the digital pins 6 and 5 for serial communication. Therefore all serial data is sent from these pins instead of digital pins 0 and 1.


##4. CoolTerm Application. 
Download and install CoolTerm.  (http://freeware.the-meiers.org/)
CoolTerm is an application that lets you access the serial terminal in order to send and receive information directly.

Go into ‘Options’ and select the serial port. 
Re-scan to find the Arduino if necessary. 
Once the port is selected, in the ‘Terminal’ option, change the “Terminal Mode” to “Line Mode” and check the box next to ‘Local Echo’. These setting make communication much easier. Hit ‘OK’. 

##5. Connect to GSM Device
In CoolTerm hit the ‘Connect’ button. You should then see the message “Device Ready”. This means you have successfully started and connected to the GSM module. 
To confirm this, type the command ‘AT’. 
Hit ‘Enter’ and you should receive the response ‘OK’ from the module. 
You just sent your first AT Command!

## Sending an SMS with AT Commands
There are a series of commands which must be executed in order to send an SMS using AT Commands.  First the module must be in text mode.  Then, you must send the AT+CMGS command with the destination number, 129, body of the message and a return character.  

     1. AT+CMGF=1        //press "Enter"  ///Set the module into text mode

     2. AT+CMGS="destination phone number", 129       //press "Enter"   
     ///Note: When sending SMS messages through OpenBSC you do not need to use the 129 code.
     
     3. > "write the body of your text"               //Press "Enter"
     
     4.                                              //Press "Ctrl-Z"



## Receiving SMS messages
The module must be in text mode.  Then you can query the network for all of the messages or a message at a specific index.
- __AT+CMGF=1__ Set the module into text mode
- __AT+CMGL="ALL"__ List all text messages that are on the network
- __AT+CMGR=\<index\>__ read an SMS at a specific index
- __AT+CNMI=2,2,0,0,0__   //Sets module to automatically displays message as they arrive. 
- __AT+CNMI=2,1,0,0,0__   //Sets module to notify you a new message has arrived. 

## Deleting SMS messages
Deleting messages is very simple but very important to do as the buffer size of the GSM is not very big.  This means that it can only display two or three messages at a time when you use the command __AT+CMGL="ALL"__. By deleting old messages, you will be able to see the newest message.

- __AT+CMGD=\<index\>__ delete an SMS message at a certain index


## Notes for using AT Commands
All of these commands work on the Quectel M10 GSM module which is used on the Arduino GSM Shield.  If using other GSM modules, consult the data sheet or manual for that specific module.  Each company adds and uses different commands which may cause confusion.  That being said, there is a list of standard AT Commands which work across all modules.  They too can be found online.  Below are all most common commands.

- __AT__  Check to see if the module is active.  Should return 'OK'
- __AT+CREG?__ Is the module registered to the network?
- __AT+COPS?__ What network is the module registered?
- __AT+CMGF=1__ This puts the module into text mode so messages can be sent/received
- __AT+CMGS="number",129, \<body of message\> \<hex return character '1A'\>__ Send a text message.  When using CoolTerm, enter this command, the use 'Command+T' to bring up another window.  This will let you type ASCII and Hex.  Type your message, and the add '1A' as Hex. Note: When sending a message through OpenBTS, you do not need to use the 129.
- __AT+CMGL="ALL"__ Lists all text messages that are on the device (or network)
- __AT+CMGR=\<index\>__ Read SMS message at index number
- __AT+QBAND?__ What band am I on?
- __AT+CIMI__ Get the IMSI number from the module
- __AT+CSQ__ Check the signal strength


# Use a button to send SMS. 
![alt tag](https://github.com/saycel/towers-of-power/blob/master/Arduino_GSM_Button.png)


Portions of this documentation hwhere previously written by Benedetta Piantella and Kina Smith
https://github.com/ITPNYU/TowersOfPower/tree/master/Arduino
