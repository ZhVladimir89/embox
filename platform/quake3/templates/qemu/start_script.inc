"export HOME=/",
"export PWD=/",
"export TERM=tish",
"ifconfig lo 127.0.0.1 netmask 255.0.0.0 up",
"route add 127.0.0.0 netmask 255.0.0.0 lo",
"mkdir -v /mnt",
"mount -t ext4 /dev/hda /mnt",
"cd mnt",
"quake3",