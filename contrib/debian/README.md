
Debian
====================
This directory contains files used to package nodetraded/nodetrade-qt
for Debian-based Linux systems. If you compile nodetraded/nodetrade-qt yourself, there are some useful files here.

## nodetrade: URI support ##


nodetrade-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install nodetrade-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your nodetrade-qt binary to `/usr/bin`
and the `../../share/pixmaps/nodetrade128.png` to `/usr/share/pixmaps`

nodetrade-qt.protocol (KDE)

