# OpenVPN Assignment
The internet is a network of networks.  Proprietary wires, Radio-Links, and miles of undersea cables form networks that at some point need to connect with eachother.  IP Addresses identify a computer to their network and indicate how packets of data are to be routed to their final destination.  At some point a packet on the internet will leave its own network and may travel thousands of miles to reach a server -- https://github.com/dmehrotra/packet-reach .   

A public IP address is a unique IP address that can be accessed over the Internet, like a postal address. However when connected to a network, you're computer is likely not given a public IP address.  In fact your personal IP address is only visible to those on the same network as you.  How then can you safely access a remote machine on a different network?  

We solve this problem with VPNs. A VPN will establish a safe way to create a virtual link between two or more computers / machines/ smart devices across different networks. The machines, still without public IP addresses, are invisible to the internet, but communicate with each other through a remote server with a public IP address.  

Why is this important? Accessing a device remotely is an incredibly valuable skill for maintaining networked devices.  We access remote devices using a protocol called ssh. In simplest terms, when you SSH onto a remote machine you are given access to a terminal window of that machine.  From that terminal you can perform any operation as if you were on your own machine.  

In this assignment 


We use an OpenVPN server to remotely connect and configure our BSC's



nd smartphones connected to your router (via wired or wifi) get a private IP address from your router via DHCP protocol.


We use an OpenVPN server to remotely connect and configure our BSC's

we need to talk about ssh....

This setup assumes you are using virtualbox on your OSX.  Though most of the same steps apply for any linux based device.
The excersize involves installing openvpn onto your virtual machine and becoming a client of a remote server. 

Much of learning this stuff involves reading documentation and making mistakes.  So we wanted to design an excersize that gets you working directly with documentation on a live environment. 
We have set up a towers of power remote server with openvpn installed and have generated keys for each one of you on it.

Your job is to become a client of our remote server. 

You can do this on your virtual machine, or on a rasperry pi, a smart refrigator.  Any device with an OS that can handle openvpn
By doing this you will be able to accss that device remotely from anywhere in the world. 

The basic process will be to

1. sudo apt-get install openvpn openssh-server on a device
2. ensure your host machine is sharing its connection with your ubuntu virtual box....ping
3. ensure ssh server is running....ps aux grep sshor something
4. create a client.conf file...you can use this one. 
5. ssh into our towers of power server and find your keys.
6. copy the necessary files into the root directory OF YOUR CLIENTS openvpn installation...you will need to read the documentation to find the files
7. start openvpn.  
8. you will know its working if you type ifconfig and see something called tun0. 

dont remove any files from the server. 
dont take someone elses key
dont be mean.  its a live server we are giving you root access to.  We have taken some security precautions but....i mean...this is a class so dont try to break anything
r


The internet
networking basics
ssh
terminal commands
openvpn
