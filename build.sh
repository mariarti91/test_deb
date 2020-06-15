#!/bin/bash

dpkg-buildpackage -us -uc -d
mv ../test-service_*.deb ./
rm ../deb-test_0.1.*
rm ../test-service-dbgsym*.deb
