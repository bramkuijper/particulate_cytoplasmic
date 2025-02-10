# numerical analysis of particulate cytoplasmic inheritance 
Initial code to get a project on particulate cytoplasmic inheritance on its way. 

## Installing GSL
Prior to building the executable below, one needs to install the
GNU scientific library (`libgsl`) within your local directory. This contains some
nifty functions to calculate binomial densities and coefficients.

See [here](https://coral.ise.lehigh.edu/jild13/2016/07/11/hello/) for instructions how to install the GNU Scientific Library

## The source code
1. `biparental.cpp` contains the actual source code resulting in the executable, 
it shows how to initialize a matrix and some functionality of the binomial distribution in GSL

3. `makefile` this is a recipe with which to compile the source code. It is automatically
used when typing `make` within the repository's main directory.


## How to run
Below some bash shell commands to build and run this:

1. First download the source code (`git` should be installed):
```
git clone https://github.com/bramkuijper/particulate_cytoplasmic.git
```

2. Move to the actual directory:
```
cd particulate_cytoplasmic
```

3. Compile the executable
```
make
```

4. Then run the executable
```
./biparental.exe
```

