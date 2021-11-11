Flow of Compilation
-------------------
1. Preprocessor															
	Input - Source File ('.c' or '.cpp')
	Output - '.i' file 
	Options: 'gcc filname.c -E' or gcc filename.c  -save-temps

2. Hello.i -> Compiler -> Assembly_code (".s" file)
3. (Assembler) -> ".s" -> ".o" Object File -> linker -> "a.out" FInal




Tool Chain -
---------------
Cross Compiler |
Linker		   |-> 
Libraries	   |
Scripts		   |
Binary-		   |
Utilities      |



4. Types of Errors
	---------------
	1. Preprocessor Error
		- Preprocessing Stages (Macros, HeaderFile, ...)

	2. Compiler Erros
		- Syntatical Errors

	3. Linker Errors
		- undefined reference error

	4. Runtime Errors
		- Difficult
		- Errors
			- Logical  Errors
			- Segmentation Fault
			- Bus Error

Exception Handling:
-------------------

1. Advantage
	- Build Reliable Softwares

2. Tech
	- Fault Avoidance
	- Fault Tolerance


Error Handling
