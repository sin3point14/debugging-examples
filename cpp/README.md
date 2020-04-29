# CPP Debug example

### Building

Install cmake

Run-
```
cmake .
```

Then,

For Unix-

```
make
./cpp_debug
```

For Windows -

Build in VS using the `.sln` generated
OR Build using MinGW
```
cmake . -G "MinGW Makefiles"
mingw32-make
./cpp_debug
```