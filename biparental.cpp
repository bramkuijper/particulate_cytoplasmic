// some starter code for model of biparental mitochondrial inheritance in C/C++

#include <iostream>
#include <vector>

// lots of probability density functions and associated coefficients
// in gnu scientific library, which should be installed on rstudio
#include <gsl/gsl_sf.h>


int main()
{
    unsigned int m{5};
    unsigned int j{2};

    unsigned int Pdim{(m+1)*2};

    // initialize frequency matrix
    std::vector < std::vector < double> > Pt0(Pdim, std::vector<double>(Pdim, 0.0) );

    // initialize Pt0
    for (unsigned int row_idx{0}; row_idx < Pdim; ++row_idx)
    {
        for (unsigned int col_idx{0}; col_idx < Pdim; ++col_idx)
        {

            // some function of some scalar frequency of initial frequency of mutant 
            // mitochondria and initial mutant vs resident frequency
            //
            if (row_idx < m + 1)
            {
                // output is resident nuclear genotype
            }

            if (col_idx < m + 1)
            {
                // input is mutant nuclear genotype
            }
            
            // for compilation's sake initializing to 0
            // but function needs to be more complicated
            Pt0[row_idx][col_idx] = 0.0;
        }
    }

    // mutation
    // for sake of example  calculate just one of the M+1 binomial coefficients:
    double binomial_coefficient{gsl_sf_choose(2*m,j)};

    std::cout << binomial_coefficient << std::endl;
}
