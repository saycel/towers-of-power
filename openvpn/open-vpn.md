# OpenVPN Assignment
The internet is a network of networks.  Proprietary wires, Radio-Links, and miles of undersea cables form networks that at some point need to connect with eachother.  IP Addresses identify a computer to their network and indicate how packets of data are to be routed to their final destination.  At some point a packet on the internet will leave its own network and may travel thousands of miles to reach a server -- https://github.com/dmehrotra/packet-reach .   

A public IP address is a unique IP address that can be accessed over the Internet, like a postal address. However when connected to a network, you're computer is likely not given a public IP address.  In fact your personal IP address is only visible to those on the same network as you.  How then can you safely access a remote machine on a different network?  

We solve this problem with VPNs. A VPN will establish a safe way to create a virtual link between two or more computers / machines/ smart devices across different networks. The machines, still without public IP addresses, are invisible to the internet, but communicate with each other through a remote server with a public IP address.  

Why is this important? Accessing a device remotely is an incredibly valuable skill for maintaining networked devices.  We access remote devices using a protocol called ssh. In simplest terms, when you SSH onto a remote machine you are given access to a terminal window of that machine.  From that terminal you can perform any operation as if you were on your own machine.  

## Assignment

In general I don't really know what I am doing. 

In fact at SayCel, we don't really know what we are doing. 
We generally fake things, read documentation, make mistakes, look things up, fix mistakes, and learn as we go. This assignment is meant to expose you to technology you and concepts you may not familiar with. Networks are weird and the best way to learn them is to dive in.  Through this assignment you should get used to the terminal, the process of SSH, and reading documentation. 

## The goal:  Make your Raspberry Pi a client of Towers of Power VPN Server.  
OpenVPN documentation: https://openvpn.net/index.php/open-source/documentation/howto.html#pki

### INSTRUCTIONS
We have set up a Towers of Power server and have generated keys for each one of you on it. 

### 0.1. Install PNK Raspberry Pi Image on an MicroSD card and boot it up.  
See: http://pnkgo.com/how-to/
If you have a mac use Etcher (https://etcher.io/) to install PNK image on your SD card. 
   
### 0.2. You will need to register your Pi on the ITP sandbox. Connect your Pi with an ethernet cable.  
It is also possible to share your internet from your computer (https://galem.wordpress.com/2014/10/14/configuring-the-raspberry-pi-to-share-a-macs-internet-connection/), but I can not garantee this will work properly.  You will find it helpful if you use a monitor and keyboard with your Pi.  
   
### 1. On your laptop, login to the Towers of Power server.

ssh yourfirstname@162.243.17.139
   I will give you your password in class. 
 
### 2. Make sure you have files in the "keys" folder.
ca.crt  client.conf  yourfirstname.crt  yourfirstname.key  ta.key
You can DELETE client.conf, you will be using the client conf in this Github repo.  

### 3. Login into your Raspberry Pi
login: pi  password:raspberry

### 4. Install OpenVPN
sudo apt-get install openvpn

### 5.1. Move key files from Towers of Power Server to your Raspberry Pi's /etc/openvpn/client/keys folder.
From Raspberry Pi navigate to /etc/openvpn/client/keys folder
use cd .. to go back a folder
Use ls to view files and folder
You can also directly navigate to folder by
cd /etc/openvpn
client and keys folders may not be there and you have to make them using 
mkdir

### 5.2. SCP (Secure Copy) is a command that allows you to remotely move files from a server to a computer or vice versa.

once inside your /etc/openvpn/client/keys folder do the following

-# SuperUser SecureCopy location-of-current-file copy-file-to-new-location
sudo scp yourfirstname@162.243.17.139:/keys/name-of-file.crt /etc/openvpn/client/keys/name-of-file.crt

You will have to do this for each file, be sure to use the same file name.  You should have 4 files in your key folder.  

### 6. Change priledges to yourname.key and ta.key
sudo chmod 400 yourname.key
sudo chmod 400 ta.key

### 7. Navigate back to /etc/openvpn and create client.conf file 

sudo nano client.conf

### 8. Copy text from https://github.com/saycel/towers-of-power/blob/2018/openvpn/client.conf into your client.conf.
Change file names for your keys, and be sure they are located in the right folder. 

### 9. Start Openvpn
sudo openvpn client.conf

### 10. Check Connection
If it is successful you should open up a new terminal window, login to Raspberry Pi.
type

#Check network configuration
ifconfig
You should see TUN entry with a 10.8.0.x ip address.
Save this address, its your VPN address for the pi. 

#Ping the VPN server
ping 10.8.0.1 

### 11. Connect to your Pi remotely

Login into Tower-of-Power server
ssh into your pi
ssh pi@10.8.0.x

# Now you can control your pi from anywhere in the world!

