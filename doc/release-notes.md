(note: this is a temporary file, to be added-to by anybody, and moved to release-notes at release time)

Ion Core version *version* is now available from:  <https://github.com/cevap/ion/releases>

This is a new major version release, including various bug fixes and performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github: <https://github.com/cevap/ion/issues>

#### Downloads and statistics
![GitHub Releases (by Release)](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/total.svg?style=social)
- ###### windows
  - [![Download ion installer for Windows 32-bit](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-win32-setup-unsigned.exe.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-win32-setup-unsigned.exe) [![Download ion installer for Windows 64-bit](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-win64-setup-unsigned.exe.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-win64-setup-unsigned.exe)
  - [![Download ion binaries for Windows 32-bit](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-win32.zip.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-win32.zip) [![Download ion binaries for Windows 64-bit](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-win64.zip.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-win64.zip)
- ###### linux Downloads
  - _i686/x86_64_
    - [![Download ion v*version* for Linux 32-bit (i686)](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-i686-pc-linux-gnu.tar.xz.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-i686-pc-linux-gnu.tar.xz) [![Download ion v*version* for Linux 64-bit (x86_x64)](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-x86_64-linux-gnu.tar.xz.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-x86_64-linux-gnu.tar.xz)
  - _arm/aarch64/riscv64_
    - [![Download ion v*version* for ARM Linux](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-arm-linux-gnueabihf.tar.xz.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-arm-linux-gnueabihf.tar.xz) [![Download ion v*version* for aarch64 Linux](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-aarch64-linux-gnu.tar.xz.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-aarch64-linux-gnu.tar.xz) [![Download ion v*version* for riscv64 Linux](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-riscv64-linux-gnu.tar.xz.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-riscv64-linux-gnu.tar.xz)
- ###### mac os
  - [![Download ion Setup for OSX 32-bit](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-osx-unsigned.dmg.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-osx-unsigned.dmg) [![Download ion Setup for OSX 64-bit](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/ion-*version*-osx64.tar.xz.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/ion-*version*-osx64.tar.xz)
- ###### checksums
  - [![Download SHA256SUMS.asc](https://img.shields.io/github/downloads/ioncoincore/ion/v*version*/SHA256SUMS.asc.svg)](https://github.com/ioncoincore/ion/releases/download/v*version*/SHA256SUMS.asc)

Mandatory Update
==============


How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/Ion-Qt (on Mac) or iond/ion-qt (on Linux).


Compatibility
==============

Ion Core is extensively tested on multiple operating systems using the Linux kernel, macOS 10.10+, and Windows 7 and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support), No attempt is made to prevent installing or running the software on Windows XP, you can still do so at your own risk but be aware that there are known instabilities and issues. Please do not report issues about Windows XP to the issue tracker.

Ion Core should also work on most other Unix-like systems but is not frequently tested on them.
 
Notable Changes
==============


*version* Change log
==============

Detailed release notes follow. This overview includes changes that affect behavior, not code moves, refactors and string updates. For convenience in locating the code changes and accompanying discussion, both the pull request and git merge commit are mentioned.

### Core Features

### Build System
 
### P2P Protocol and Network Code

### GUI
 
### RPC/REST

### Wallet
 
### Miscellaneous
 
 
## Credits

Thanks to everyone who directly contributed to this release:


As well as everyone that helped translating on [Transifex](https://www.transifex.com/cevap/iocoin//), the QA team during Testing and the Node hosts supporting our Testnet.
