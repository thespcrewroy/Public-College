/*___________________________________________________________________*/
/*  Problem chapter2_37                                              */
/*  Name: Swapnil Roy                                                */
/*  Date Modified: February 2, 2023                                  */
/*  This program computes the molecular weight of the                */
/*  amino acid glycine.                                              */

#include <iostream>

using namespace std;

/*  Defines symbolic constants for the appropriate atomic weights.  */
const double OXYGEN = 15.9994;
const double CARBON = 12.011;
const double NITROGEN = 14.00674;
const double HYDROGEN = 1.00794;

int main()
{
    /*  Declare variables.  */
    double molecular_weight;

    /*  Compute the molecular weight of glycine.  */
    molecular_weight = (2 * OXYGEN) + (2 * CARBON) +
        NITROGEN + (5 * HYDROGEN);

    /*  Print the molecular weight.  */
    cout << "The molecular weight of glycine is " << molecular_weight << endl;

    /*  Exit program.  */
    return 0;
}
/*--------------------------------------------------------------------*/
