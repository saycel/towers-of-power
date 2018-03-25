# Towers of Power 2018: Development and Infrastructure

In NYC we take our cellphone and wifi signals for granted.  Its always on and we are always connected. This not the case for 2 billion people who lack affordable communication and 700 Million people who have no coverage at all.  New technologies are democratizing communications infrastructure; Software defined radios, lowered hardware pricing and open source solutions have made it possible to install low cost infrastructure that can be controlled by communities instead of multinational corporations.  

In this class you learn how to create your own communications networks. We will cover the software, and hardware used today in community based cellular networks in Mexico and Nicaragua, as well the DIY infrastructure solutions data networks. We will also delve into the business of international development through guest speakers working in the development or telecommunications fields.  


# Class Dates
  0. March 21 CANCELED
  
  1. March 28
  2. April 4 
  3. April 11
  4. April 18 -- CANCELED -- RESCEDULING --
  5. April 25 - 
  6. May 2
  7. RESCEDULE FINAL -- FRIDAY May 4(12:10-3PM) or MONDAY May 7(6-9 PM) or TUESDAY May 9(6-9 PM) 
  
  
# Office Hours
I will be available for office hours by appointment on Tuesday and Wednesdays.

Book Appointments on my [Google Calander](https://calendar.google.com/calendar/selfsched?sstoken=UUtrN2U2d1RsdDEwfGRlZmF1bHR8NjlhZTM2Y2NkM2U5MjU0OWM4ZDA5ODA0ZTg1YTdlMzI), or email (ereedsanchez@gmail.com ) if those times do not work.        


# Syllabus
## Week 1
### Introduction to Towers of Power
+ Student Introductions: an ITP tradition!
+ Syllabus and expectations
+ History of SayCel
+ Basic of GSM Infrastructure
+ Basic Terminal Workshop https://docs.google.com/presentation/d/1tLC7XzMhGAKJri2ZYf2lvHvoR0w-OxHzxErKkz0C_jI/edit?usp=sharing

#### Guest Speaker: [Peter Bloom, Rhizomatica](https://www.rhizomatica.org/)

#### Homework:  
1. [Install Virtual Box/ Linux Ubuntu](https://github.com/saycel/towers-of-power/blob/master/virtual-box/VirtualBox.md)
2. [Install GQRX on Virtual Machine using the Terminal](http://gqrx.dk/download/install-ubuntu). After the last command, you can exit the process by pressing ctrl-z. Start GQRX by typing "gqrx" in the terminal.  
3. Order RTL-SDR.  
4. Find the IMSI and IMEI number for your phone/account. Write a blog post explaining how you found your IMSI/IMEI number.  
5. Read [Built to Last by Jim Collins](https://www.amazon.com/Built-Last-Successful-Visionary-Essentials/dp/0060516402) Chapters 1 & 2. Write a blog post about the reading.  
6. Optional: [history of internet infrastructure](https://www.theatlantic.com/technology/archive/2015/11/how-railroad-history-shaped-internet-history/417414)


## Week 2 
### Building a GSM Network from software to hardware installation.
+ Basic SDR introduction and options for building an GSM network. 
+ History of Open Source Cellular - Osmocom, OpenBTS, YateBTS, Rhizomatica, Open Cellular   
+ Rhizomatica / SayCel installation Software Overview: Osmo-NITB, Osmo-TRX, Freeswitch, Kannel, RAI, etc
+ Rhizomatica / SayCel installation Hardware Overview: Nuran Litecel, Antennas, Cables, Solar, etc. 
+ Tower Installations, maintenance and concerns.  
+ Virtual Private Networks (VPN) - Why it’s important and why we use it. 

#### Homework:  
1. [OpenVPN Assignment](https://github.com/saycel/towers-of-power/blob/master/openvpn/open-vpn.md)   
Write a blog post about your experience. 
2. Read [Built to Last by Jim Collins](https://www.amazon.com/Built-Last-Successful-Visionary-Essentials/dp/0060516402) Chapters 3 & 4. Write a blog post about the reading.  


## Week 3 
+ SayCel Update
+ Software Osmocom / Rhizomatica / Puppet GSM / Software Installation
+ Tower Installation Procedures

### Radio Waves, SDR, Wifi and Politics
+ Basic Radio Wave propagation, modulation
+ SDRs- what equipment is available? 
+ Long Distance Wifi Backhaul
+ RTL-SDR - Demo RTL-SDR in class.  We will use the RTL-SDR to see phone calls we make with an our open source cellular system.  
+ [Dhruv Mehrotra: Satellite Sounds](http://satellite-sounds.dhruvmehrotra.info),
+ [Surya Mattu: SDR 101 + Analog TV](https://samatt.github.io/sdr-101)

#### Guest Speaker: [Kurtis Heimerl](https://www.engr.washington.edu/facresearch/newfaculty/2015/kurtis-heimerl) - University of Washington, [ENDAGA](https://www.endaga.com/), [FACEBOOK](https://code.facebook.com/posts/1754757044806180/introducing-opencellular-an-open-source-wireless-access-platform), 

#### Homework: 
1. Start thinking about your final project - Research a community that needs communications technology or think about an innovative application of the GSM spectrum and how it can be used in rural development work.   Write a blog post about it. 

2. Do one of the following assignments below (you may work in groups): 
+ Look at Radio spectrum and record something interesting. If you don’t know what it is, try to figure it out, better yet try to demodulate it.  

3. Come up with an initial idea of a community porblem that could be solved using a GSM solution. Can be a local problem, or a problem in a developing region.  It can be eviornmental or social.  Write a blog post, and we will go over this in the next class.  



## Week 4 
+ Discuss Built to Last 
+ Discuss Ideas for Final
+ Discuss RTL-SDR Homework
+ Review Radio Spectrum

### Getting Hardware to speak GSM
+ Overview of different hardware options: GSM modems, GSM modules and shields, GSM breakout boards for micro-controllers and micro-controller platforms.
+ Communicating with GSM hardware and setting the hardware up: AT Commands.
+ Hands-on demo in pairs or small groups on how to use a serial communication application to talk to GSM breakout boards and more.
+ How to send an SMS and review of SMS protocol.

#### Homework (you may work in groups):  
1. Define your groups and final Project
2. Write a brief synopsis of the project. 


## Week 5
### Phone Based Applications 
+ Twilio - Overview of how to use Twilio to make phone based projects.
##Business, Budgets, Proposal, and Raising Financial Capital.
+ All the important details a tech person needs to know to run a business.  

#### Guest Speaker: [Kashif Ali / Facebook Open Cellular](https://code.facebook.com/posts/1754757044806180/introducing-opencellular-an-open-source-wireless-access-platform)

#### Homework (you may work in groups):  
Work on your final!
Your final will be a pitch to potential investors about a location you want to install a cellular network, a product that uses the GSM spectrum, or telephony service.  Your project should be useable in developing communities and you should have an understanding of the background of the region or people your service or product would target. 

For next week you will present the class with a prototype in order to beta test and allow us to provide constructive criticism.
The prototype can be a simple paper prototype or a complex system. The objective is to have a clear understanding of the product or service. In addition to your prototype prepare your inital pitch.  


## Week 6
### Prototype Workshop
+ Present your prototype.  
+ Present your initial pitch.  


## Week 7
### Final Presentations / Pitch your Project
