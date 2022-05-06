# Tiny CMake Project
Uses `CMakeLists.txt` to generate a Makefile to compile `hello_fmt.cpp`.  What is nice about this set up, is that using the function `fmt::print` comes from [the fmt library](https://github.com/fmtlib/fmt.git) and the `CMakeLists.txt` contains instructions on downloading from git locally. The fmt library is an external library and must be downloaded before it can be used.

<br><div style="display: inline-block; width: 49%; background-color: #654321">
## To build CMake files (usually do once)
```sh
cmake -S . -B build/
```
</div>
<div style="display: inline-block; width: 49%; background-color: #123456">
## Compiling the CMake generated Makefile (do everytime to compile)
```sh
cmake --build build/
```
</div>
## To execute the code
```
./build/hello_world
```

## Installing CMake
On Ubuntu-based systems
```sh
sudo apt install cmake
```
<!---
<mark style="background-color: #FFFFFF;">highlight</mark>
--->