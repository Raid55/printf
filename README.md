## _printf

### Summary
This is a miniature version of the popular function `printf()` part of the `#include <stdio.h>`. It scans a format string for flags
and replaces them with datatype the flag points to (see chart below). It prints the string and returns the amount of chars printed to stdout.
If the function fails, it will print until the moment it fails and return `-1`. 

### Files

|   **Files**   |   **Description**   |
| -------------- | --------------------- |
| \_printf.c | Main file, printf and vprintf logic |
| print\_funcs.c   | Functions that handle printing of specific main flags |
| print\_funcs\_extra.c | Extra functions needed to handle printing of extra flags |
| helpers.c  | Helps certain function complete their task |
| utils.c | Holds utility functions, such as \_putchar |
| holberton.h | File that holds all prototypes and data structs and others |

### Usage

`_printf([FORMAT], [...]);`

|  **Flags**  |  **Description**  |
| ----------- | ----------------- |
| `%c` | Prints a single char |
| `%s` | Prints string |
| `%i` | Prints Integer |
| `%d` | Prints a decimal value...same as above |
| `%r` | Prints a string in reverse |
| `%R` | Prints string in ROT13 encryption |


### Notes
Tested on *Ubuntu 14.04 LTS*.  
Features still in development.  
No known bugs at this time.  
Ty Kevan for help with the README  

### Author

* [**Raid55 (Nick B.)**](https://github.com/Raid55)

<p align="center">
<a href="https://www.holbertonschool.com"><img src="https://intranet.hbtn.io/assets/holberton-logo-simplified-d4e8a1e8bf5ad93c8c3ce32895b4b53749b477b7ba7342d7f064e6883bcd3be2.png"></a>
</p>

