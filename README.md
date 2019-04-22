## Conversion Specifiers (printf)

`%c`	Single character

`%d`	Signed decimal integer (int)

`%e`	Signed floating-point value in E notation

`%f`	Signed floating-point value (float)

`%g`	Signed value in %e or %f format, whichever is shorter

`%i`	Signed decimal integer (int)

`%o`	Unsigned octal (base 8) integer (int)

`%s`	String of text

`%u`	Unsigned decimal integer (int)

`%x`	Unsigned hexadecimal (base 16) integer (int)

## Setting up a MIPS environment on LINUX
```
apt update && apt upgrade
apt install gcc-5-mips-linux-gnu
apt install binutils-mips-linux-gnu
apt install qemu-user
```
### To assemble MIPS to binary:
`mips-linux-gnu-as shell.asm --32`
### To compile C to MIPS binary:
`mips-linux-gnu-gcc-5 shell_sort.c -static`
### To run compiled code:
`qemu-mips a.out`