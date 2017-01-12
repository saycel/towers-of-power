# OpenVPN notes for now
When working with remote machines its important that you are able to connect to them from a distance. 
Just because two machines might be connected to the internet doesn't necessarily mean that they are able to communicate. 
The internet is a network of networks, and machines must be on the same network to communicate. 
IP addressing...etc. 

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
