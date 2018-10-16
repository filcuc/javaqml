# JavaQml 
[![Build Status](https://travis-ci.org/filcuc/javaqml.svg?branch=master)](https://travis-ci.org/filcuc/javaqml)

## Java bindings for Qt Qml
Simple test of interfacing DOtherSide with Java

## Requirements
- DOtherSide >= 6.3 compiled and installed in your system path
- C++11 compiler

## Compile steps
```
javac -h . DOtherSideJNI.java
mkdir build
cd build
cmake ..
make
cd ..
export LD_LIBRARY_PATH=`pwd`/build
./gradlew build test run
```

