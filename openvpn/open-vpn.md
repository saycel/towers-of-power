# OpenVPN Assignment
The internet is a network of networks.  Proprietary wires, Radio-Links, and miles of undersea cables form networks that at some point need to connect with eachother.  IP Addresses identify a computer to their network and indicate how packets of data are to be routed to their final destination.  At some point a packet on the internet will leave its own network and may travel thousands of miles to reach a server -- https://github.com/dmehrotra/packet-reach .   

A public IP address is a unique IP address that can be accessed over the Internet, like a postal address. However when connected to a network, you're computer is likely not given a public IP address.  In fact your personal IP address is only visible to those on the same network as you.  How then can you safely access a remote machine on a different network?  

We solve this problem with VPNs. A VPN will establish a safe way to create a virtual link between two or more computers / machines/ smart devices across different networks. The machines, still without public IP addresses, are invisible to the internet, but communicate with each other through a remote server with a public IP address.  

Why is this important? Accessing a device remotely is an incredibly valuable skill for maintaining networked devices.  We access remote devices using a protocol called ssh. In simplest terms, when you SSH onto a remote machine you are given access to a terminal window of that machine.  From that terminal you can perform any operation as if you were on your own machine.  

## Assignment

In general I don't really know what I am doing. In fact at Saycel, we don't really know what we are doing. We generally fake things, read documentation, make mistakes, look things up, fix mistakes, and learn as we go. This assignment is meant to expose you to technology you and concepts you may not familiar with. Networks are weird and the best way to learn them is to dive in.  Through this assignment you should get used to the terminal, the process of SSH, and reading documentation. 

The goal:  Make any device a client of our Towers of Power VPN so you can access it remotely.  
How: https://openvpn.net/index.php/open-source/documentation/howto.html#pki

### WTF?
We have set up a Towers of Power server and have generated keys for each one of you on it. We want you to turn your virtual box, your refrigerator, your IP camera, your whatever linux device, into a client of our server. This way, from anywhere in the world, you can ssh into our towers of power vpn, and thus ssh into your machine.  

We don't want to give too much instruction, and we want you reading the [documentation](https://openvpn.net/index.php/open-source/documentation/howto.html). The general steps below assume virtual box.

1. Install openvpn and openssh-server on a device or in virtual box ( sudo apt-get install ). If you have trouble ensure your host machine is sharing its internet connection with your ubuntu virtual box 
2. Ensure ssh server is running ( ps aux | grep ssh ) -> what does this output mean.  Look up what these commands do. You should see two lines of output.  Why do you need an ssh server to be running?
4. Create a client.conf file in /etc/openvpn ( you can copy and paste the text of this one into your client.conf ) 
5. SSH into our towers of power server and find your keys ( ssh itpstudent@104.236.122.246 ). You will need to read the documentation to find the files and determine which you need.   
6. Copy the necessary files into the root directory your devices openvpn installation. You will need to read the documentation to determine the correct files.  NOTE: You will be unable to copy and paste these files, that wont work.  You will need to use a command called scp or secure copy.  HINT: scp itpstudent@ipaddress:/route-to-individual-file-on-our-server /route-to-location-on-your-device
7. Start openVPN, you will know its working if see an interface called tun0 when you type ifconfig. 

###RULES

1. YOU WILL NOT NEED TO GENERATE ANY FILES ON OUR SERVER.  WE HAVE GENERATED THE NECESSARY FILES, YOU JUST NEED TO MOVE THEM TO YOUR MACHINE.  
2. READ THE DOCUMENTATION.
3.  THE STEPS ABOVE ARE PURPOSEFULLY VAGUE.  YOU NEED TO READ THE DOCUMENTATION.

