# DEB TEST

 - debian/control - project and package overview
 - debian/<pack-name>.dirs - info about package directories
 - debian/<pack-name>.install - files for copying
 - debian/<pack-name>.service - SystemD service file
 - debian/gbp.conf - gbp util config
 - debian/rules - build rules

```bash
# generate changelog file
$ gbp dch -R

# build deb package
$ dpkg-buildpackage -us -uc -d
```
