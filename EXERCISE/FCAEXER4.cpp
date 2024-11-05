#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

// global declaration
int i;
const int size = 10;
typedef double *pointers; // typedefinition used for miles per gallon pointer variables

// prototype
void getInput(double *input); // prompt the user to input 10 grades
double getLow(double *low);   // compute and returns the value of the lowest grade
double getSum(double *sum);   // compute for the sum of 10 grades
char getChoice(char *ch);     // display the menu of choices and input the choice of the user
void MilesPerrGallon(double *ptr1, double *ptr2, int sz); // final output of the computer miles and gallons
void MperG(); // prompts the user to specify the size of the array for miles and gallons

int main()
{
    char choice;
    do
    {
        char *chr = &choice;
        char opt = getChoice(chr);
        switch (*chr)
        {
        case '1':
        {
            double grade[size];
            double *ptr = grade;
            double *plow, *psum;
            double gsum, glow;
            double ave;
            system("clear");
            getInput(ptr);
            glow = getLow(ptr);
            gsum = getSum(ptr);
            ave = (gsum - glow) / (size - 1);
            cout << "SUM: " << gsum << endl;
            cout << "LOWEST GRADE: " << glow << endl;
            cout << "AVERAGE: " << ave << endl;
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
        cout << endl;
        system("pause");
    } while (choice != '3');

    return 0;
}

char getChoice(char *ch)
{
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> *ch;
    return *ch;
}

void getInput(double *input)
{
    for (int i = 0; i < size; i++)
    {
        do {
            cout << "Enter grade " << i + 1 << " (0-100): ";
            cin >> input[i];
        } while (input[i] < 0 || input[i] > 100);
    }
}

double getSum(double *sum)
{
    double add = 0;
    for (int i = 0; i < size; i++)
    {
        add += sum[i];
    }
    return add;
}

double getLow(double *low)
{
    double min = low[0];
    for (int i = 1; i < size; i++)
    {
        if (low[i] < min)
        {
            min = low[i];
        }
    }
    return min;
}

void MperG()
{
    int ctr;
    pointers milPtr, galPtr, mpgPtr;
    int msize;
    system("clear");
    cout << "Enter the size of the array for miles and gallons: ";
    cin >> msize;
    milPtr = new double[msize];
    galPtr = new double[msize];
    mpgPtr = new double[msize];

    for (ctr = 0; ctr < msize; ctr++)
    {
        do {
            cout << "Enter miles for trip " << ctr + 1 << " (100-250): ";
            try
            {
                cin >> milPtr[ctr];
                if (milPtr[ctr] < 100 || milPtr[ctr] > 250)
                    throw out_of_range("Miles must be between 100 and 250.");
            }
            catch (const out_of_range &e)
            {
                cout << e.what() << endl;
            }
        } while (milPtr[ctr] < 100 || milPtr[ctr] > 250);
    }

    cout << "GALLONS\n";
    for (ctr = 0; ctr < msize; ctr++)
    {
        do {
            cout << "Enter gallons for trip " << ctr + 1 << " (5-25): ";
            try
            {
                cin >> galPtr[ctr];
                if (galPtr[ctr] < 5 || galPtr[ctr] > 25)
                    throw out_of_range("Gallons must be between 5 and 25.");
            }
            catch (const out_of_range &e)
            {
                cout << e.what() << endl;
            }
        } while (galPtr[ctr] < 5 || galPtr[ctr] > 25);
    }

    MilesPerrGallon(milPtr, galPtr, msize);
    delete[] milPtr;
    delete[] galPtr;
    delete[] mpgPtr;
}

void MilesPerrGallon(double *ptr1, double *ptr2, int sz)
{
    double mpg[sz];
    for (int i = 0; i < sz; i++)
    {
        mpg[i] = ptr1[i] / ptr2[i];
        cout << "Miles per gallon for trip " << i + 1 << ": " << mpg[i] << endl;
    }
}