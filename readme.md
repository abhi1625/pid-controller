# PID Controller
[![Build Status](https://travis-ci.org/abhi1625/pid-controller.svg?branch=master)](https://travis-ci.org/abhi1625/pid-controller)
[![Coverage Status](https://coveralls.io/repos/github/abhi1625/pid-controller/badge.svg?branch=master)](https://coveralls.io/github/abhi1625/pid-controller?branch=master)
---

## Authors - Part 1

- Driver    : [abhi1625](https://github.com/abhi1625)
- Navigator : [namangupta98](https://github.com/namangupta8)

## Authors - Part 2 

- Driver    : [swagquotient0](https://github.com/swagquotient0)
- Navigator : [gautam-balachandran](https://github.com/Gautam-Balachandran)

## Overview

Simple PID Controller for velocity control. The overview of the code implementation is explained in the [PID_UML_activity_diagram](https://github.com/abhi1625/pid-controller/blob/master/PID_UML_activity_diagram.pdf). More detailed explanation of the class implementation and required methods is available as [PID_UML_class_diagram](https://github.com/abhi1625/pid-controller/blob/master/PID_UML_class_diagram.pdf) and [computePID_UML_activity_diagram](https://github.com/abhi1625/pid-controller/blob/master/computePID_UML_activity_diagram.pdf).   

## Standard install via command-line
```
git clone --recursive https://github.com/abhi1625/pid-controller
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## To-Do
- 94\% coverage due to getDt() method in class PID. Can be used more or cna be removed.

## GMock
 - Class mocked - PIDparams in general_controller.hpp
 - Added virtual class to implement GMock tests
 - Class diagram updated as per modified structure
 You can run mock tests once you have build the package using:
```
./test/cpp-test
```