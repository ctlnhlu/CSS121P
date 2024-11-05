#include <iostream>
#include <iomanip>
using namespace std;
// global declaration
int i;
const int size = 10;
typedef double *pointers; // typedefinition used for miles per gallon pointer variables
// prototype
// for grade elimination
void getInput(double *input); // prompt the user to input 10 grades
double getLow(double *low);   // compute and returns the value of the lowest grade
double getSum(double *sum);   // compute for the sum of 10 grades
// choices and try again
char getChoice(char *ch); // display the menu of choices and input the choice of the user
// miles per gallon
void MilesPerrGallon(double *ptr1, double *ptr2, int sz); // final output of the computer miles
// and gallons
void MperG(); // prompts the user to specify the size of the array for miles and gallons
// verify and validate the input for miles and gallons using exception handling
int main()
{
    // add only declaration here
    do
    {
        chr = &choice;
        opt = getChoice(chr);
        switch (*chr)
        {
        case '1':
        {
            double grade[size];
            double *ptr;
            double *plow, *psum, *pave;
            double gsum, glow;
            double ave;
            system("cls");
            // add declaration here
            system("cls");
            // add code here
            // NOTE ALL CODES MUST USE pointer variables –input,process and
            // output
        }
        break;
        case '2':
            MperG();
            break;
        case '3':
            cout << "goodbye for now....\n";
            system("pause");
            exit(1);
            break;
        }
        // Add code here
        cout << endl;
        system("pause");
        return 0;
    }
    ///////////////////////////
    char getChoice(char *ch)
    {
        // add code here
    }
    //////////////////////////////
    void getInput(double *input)
    {
        // add code here
    }
    /////////////////////////////
    double getSum(double *sum)
    {
        double add = 0;
        // add code here
        return add;
    }
    ////////////////////////////////
    double getLow(double *low)
    {
        double baba;
        // add code here
        return baba;
    }
    /////////////////////////
    void MperG()
    {
        int ctr;
        pointers milPtr, galPtr;
        int msize;
        system("cls");
        // add code here
        for (ctr = 0; ctr < msize; ctr++)
        {
            // add code here
            try
            {
            } // end try
            // add code here
            catch (double e)
            {
                // add code here
            } // end catch
            // add code here
        } // end while
    } // loop for miles
    /*********************************************************/
    cout << "GALLONS\n";
    for (ctr = 0; ctr < msize; ctr++)
    {
        bool ans = true;
        while (ans)
        {
            // add code here
            try
            {
                // add code here
            } // end try
            catch (double e)
            {
                // add code here
            } // end catch
            // add code here
        } // end while
    } // loop for gallons
    MilesPerrGallon(milPtr, galPtr, msize);
}
////////////////////////
void MilesPerrGallon(double *ptr1, double *ptr2, int sz)
{
    double mpg[sz];
    pointers mpgPtr;
    int index;
    // add code here
}
