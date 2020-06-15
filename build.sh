#!/bin/bash

dpkg-buildpackage -us -uc -d
mv ../debtest_*.deb ./
rm ../deb-test_0.1.*
rm ../debtest-dbgsym*.deb
