# C++ Core Guidelines: 

## Avoid Unncessary Includes - Forward Declaration only way ? 
* You only need to declare the existence of the class when using a reference/pointer. Full definition is unnecessary in this header.
* Use forward declaration if just passing a reference argument. 
* Helps in inc compilation speed. 

## Multiple file definitions avoidance - using Header Guard 

#ifndef SERVER_H
#define SERVER_H
...
#endif

or using # pragma once 


## Speed up compilation 

* Isolating complex code for compilation like templates
* Compilation parallelization
* Compilizer optmizations 
* Pre compiled headers 
* Include guards 
* Forward declaration 
* Don't inline unless necessary - because it needs to compile this again and again



