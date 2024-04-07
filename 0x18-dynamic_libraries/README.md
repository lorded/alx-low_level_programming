Tasks

1. **Create a dynamic library**: Write C functions and compile them into a shared library (`libdynamic.so`) containing various utility functions.

2. **Create a script to build a dynamic library**: Write a shell script (`1-create_dynamic_lib.sh`) that compiles all `.c` files in the current directory into a single dynamic library (`liball.so`).

3. **Call C functions from Python**: Create a dynamic library (`100-operations.so`) containing C functions that can be called from Python. Write a Python script (`100-tests.py`) to demonstrate calling these functions.

4. **Code injection: Win the Giga Millions!**: Write a shell script (`101-make_me_win.sh`) that runs two commands on a server hosting a lottery program. The objective is to inject code into the program execution environment using `LD_PRELOAD` to manipulate the program's behavior and output a winning message.
