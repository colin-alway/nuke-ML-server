# local build instructions

NUKE_INSTALL_PATH=/mnt/storage/Documents/Nuke14.0v4/

```
cmake -DNUKE_INSTALL_PATH=/mnt/storage/Documents/Nuke14.0v4/ ..
make
```

## Files modified to get to compile
| File | Notes |
|------|-------|
| CMakeLists.txt | Nuke-14 code is C++14 |
| Plugins/Client/CMakeLists.txt | Only windows DLLs installed |
