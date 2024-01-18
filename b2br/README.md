https://baigal.medium.com/born2beroot-e6e26dfb50ac

------------
VM INSTALL
------------

Set all as default
Timezone : central

hostname : llahaye42
root password : Born2BeRoot
full name : test user
username : llahaye
user password : Motdepasse1
passphrase : Ceciestlapassphrase1

Guided - use entire disk and set up encrypted LVM
Separate /ho;e /var and /tmp partitions
Yes

Amount of volume group to use for guided partitioning : max
Scan extra installation media : No
France
deb.debian.org
Leave it blank
No
Install the grub boot loader : Yes
Boot loader install : /dev/sda


------------
VM COMMANDS
------------

Create group : groupadd "groupname"
Add user to a group : usermod -aG "groupname" "your_username"
Edit sudoers file : sudo visudo
Edit ssh file config : vim /etc/ssh/sshd_config
UFW list rules : sudo ufw status numbered
UFW add rules : sudo ufw allow "rule"
Edit password quality : sudo vim /etc/security/pwquality.conf
change hostname : hostnamectl set-hostname 
