# Simple and portable CMake template for raylib

This is a basic project template for raylib using CMake and has been tested with Visual Studio Code. it was build upon fom the original by SasLuca found here https://github.com/SasLuca/raylib-cmake-template

The master branch of the raylib/ftm/spdlog/cxxopts source code is downloaded using CMake FetchContent from github and compiled from source as it is much easier than including prebuilt binaries for every platform and configuration.

Building from the cmake file will build all added git libs src libs and `app/main.cpp` which includes a basic example of a raylib program.

cmake additions include thread sanirizer, git gitsubmodules, doxygen, LTO, warnings and unit tests.
I recommend checking the out franneck94 who did a great udemy tutorial(https://www.udemy.com/course/cmake-tests-and-tooling-for-cc-projects/#instructor-1) with this git https://github.com/franneck94/UdemyCmake

## Asset handling

The example in `app/main.cpp` uses an example image located in the `assets` folder.
To load it we use `ASSETS_PATH`, which is a string macro with the *absolute* path "assets" directory.
This macro is defined in the `CMakeLists.txt` file on line `23`.

In C you can concatenate string literals by putting them next to each other, 
eg: `"A" "B"` is `"AB"`. So ASSETS_PATH `"test.png"` becomes `"/path/to/your/assets/test.png"`

If you wanna share your game with others you should set ASSETS_PATH to be a *relative* path like "./assets/". You can do this in the CMakeLists.txt file. 
