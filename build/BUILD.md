# local build instructions

## install path on windows - will not link correctly
NUKE_INSTALL_PATH=/mnt/storage/Documents/Nuke14.0v4/
```
cmake -DNUKE_INSTALL_PATH=/mnt/storage/Documents/Nuke14.0v4/ ..
make
```

## install path on linux
```
cmake -DNUKE_INSTALL_PATH=/opt/foundry/Nuke14.0v5/ ..
make
```

## Files modified to get to compile
| File | Notes |
|------|-------|
| CMakeLists.txt | Nuke-14 code is C++14 |
| Plugins/Client/CMakeLists.txt | Only windows DLLs installed |


## ignore warning

add this to source code
`#pragma GCC diagnostic ignored "-Wno-deprecated-declarations"`

add this to CMakeLists.txt
`set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")`

## download nuke

product downloads
https://www.foundry.com/products/nuke/download

previous versions
https://www.foundry.com/products/nuke/download/previous

complete list
Q100600: Downloading a previous version of Nuke
https://support.foundry.com/hc/en-us/articles/360019296599

* 14.0v5
    * https://thefoundry.s3.amazonaws.com/products/nuke/releases/14.0v5/Nuke14.0v5-linux-x86_64.tgz
    * https://thefoundry.s3.amazonaws.com/products/nuke/releases/14.0v5/Nuke14.0v5-win-x86_64.zip
* 13.2v8
    * https://thefoundry.s3.amazonaws.com/products/nuke/releases/13.2v8/Nuke13.2v8-linux-x86_64.tgz
    * https://thefoundry.s3.amazonaws.com/products/nuke/releases/13.2v8/Nuke13.2v8-win-x86_64.zip
