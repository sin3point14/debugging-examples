# Debugging Discussion Examples

The preferred way of building is to open any project folder in VSCode and hit F5, this will automatically build and attach the debugger.
Have CMake installed on your system to build the C++ projects.
Have MinGW installed on Windows to use the debugger in VSCode and update `miDebuggerPath` in `.vscode/launch.json` with your MinGW gdb path in each project folder, otherwise follow the normal build instructions and build for Visual Studio.

Each folder still contains the manual steps for building each project