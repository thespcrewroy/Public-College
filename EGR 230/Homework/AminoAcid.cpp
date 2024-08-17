/*___________________________________________________________________*/
/*  Problem chapter2_40                                              */
/*  Name: Swapnil Roy                                                */
/*  Date Modified: February 19, 2023                                 */
/*  This program asks the user to enter the number of atoms of each	 */
/*	of the five elements for an amino acid.Then computeand print	 */
/*	the average weight of the atoms in the amino acid.				 */


#include <iostream>

using namespace std;

/*  Defines symbolic constants for the appropriate molecule weights.  */
const double OXYGEN = 15.9994;
const double CARBON = 12.011;
const double NITROGEN = 14.00674;
const double HYDROGEN = 1.00794;
const double SULFUR = 32.066;

int main()
{
    /*  Declare variable.  */
    int no_oxy, no_carbon, no_nitro, no_hydro, no_sulfur;
    double molecular_weight;
    double average_weight;
    int total;

    /*  Enter the number of atoms for each of the five elements.  */
    cout << "Enter the number of oxygen atoms found "
        "in the amino acid. \n";
    cin >> no_oxy;
    cout << "Enter the number of carbon atoms. \n";
    cin >> no_carbon;
    cout << "Enter the number of nitrogen atoms. \n";
    cin >> no_nitro;
    cout << "Enter the number of sulfur atoms. \n";
    cin >> no_sulfur;
    cout << "Enter the number of hydrogen atoms. \n";
    cin >> no_hydro;

    /*  Compute the molecular weight.  */
    molecular_weight = (no_oxy * OXYGEN) + (no_carbon * CARBON) +
        (no_nitro * NITROGEN) + (no_sulfur * SULFUR) +
        (no_hydro * HYDROGEN);

    /*  Compute the total number of atoms. */
    total = no_oxy + no_carbon + no_nitro + no_sulfur + no_hydro;
   
    /*  Compute the average weight.  */
    average_weight = (double)molecular_weight / total;

    /*  Print the average weight.  */
    cout << "The average weight of this particular amino acid is "
        << average_weight << endl;

    /*  Exit program.  */
    return 0;
}
/*--------------------------------------------------------------------*/
