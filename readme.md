# Message Passing Interface (MPI)
Hey, this is my repo for some Message Passing Interface code snippets.
I'm presently learning about this stuff, and will keep adding new things that I try out.

## Installing MPI on Ubuntu
  Use the following command on the terminal to install the MPI compiler on Ubuntu:
  ```
    sudo apt install lam4-dev 
    sudo apt install libmpich-dev 
  ```

## Compiling MPI programs
  To compile MPI programs, use the following commnad:
  ```
    mpicc foo.c
  ```
  You can also use the following command to place the output in the file _myfoo_ instead of a.out:
  ```
    mpicc -o myfoo foo.c
  ```
  
## Running your MPI programs
  To run your MPI programs you can either of the follwing commands:
  
``` 
    mpirun -np 2 myfoo  
```
   __OR__
 
```
    mpiexec -np 2 myfoo  
```
  
  Here -np specifies how many processses to create. In the above case, 2 processes are created and both run the myfoo   
  executable.
  
  For more details, please see the man pages of the commands :
  ```
    man mpicc
  ```
  ```
    man mpiexec
  ```  
  
