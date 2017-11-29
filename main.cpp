/*Eoin Finlay
  Binary Decimal Conversion
  18 Oct 2017*/

//Preprocessor Directives
#include <iostream>
#include <math.h>

using namespace std;
//Function Prototypes
int main(void);
long int bin_2_dec(long int);
long int dec_2_bin(long int);

//Main Function
int main()
{
    //Variable Declarations
    char input;
    long int b, d, decBin, binDec;


    //do while loop to run menu until program is quit
    do
    {
        cout << "\n\t\t Choose from one of the following options" <<
                "\n\n\t\t Press B for Bin to Dec conversion" <<
                "\n\t\t Press D for Dec to Bin conversion" <<
                "\n\t\t Press Q to Quit program" << endl;

        cout << "\n\t\t Value entered is: ";

        cin >> input;

        //switch case to accept one of the possible values within the menu
        switch(input)
        {
            case 'b': cout << "\n\t\t Enter Binary Value to be converted: ";//Prompt user to enter Binary Number
                      cin >> b;//input binary value
                      binDec = bin_2_dec(b);//Calling of another function
                      cout << "\n\t\t Binary to Decimal = " << binDec <<endl;//Displaying equivalent Decimal Value
                      break;

            case 'd': cout << "\n\t\t Enter Decimal Value to be converted: ";//Prompt user to enter Decimal Value
                      cin >> d;//input decimal value
                      decBin = dec_2_bin(d);//Calling of another function
                      cout << "\n\t\t Decimal to Binary = " << decBin <<endl;//Displaying equivalent Binary Value
                      break;


            case 'q': cout << "\n\t\t Goodbye!"<<endl;//Program will quit
                      break;

            default : cout << "\n\t\t Not a letter"<<endl;//default if anything selected other than the menu options
                      break;
        }

    }
    while (input != 'q');

return 0;

}

//Binary to Decimal Function
long int bin_2_dec(long int b)

{
    //local variable declarations
    long int dec = 0;
    int n = 0, remainder;
    //while loop so program will loop unless binary value is zero
    while (b != 0)
    {
        remainder = b % 10;//remainder of binary value divided by 10
        b = b / 10;//binary divided by 10
        dec = dec + remainder * pow(2, n);//initialising decimal value to equation
        n++;//incrementing weight
    }
    return dec;//returning value to main function

}


//Decimal to Binary Function
long int dec_2_bin(long int d)
{
    //local variable declarations
    long int Binary = 0;
    int remainder, n = 1;

    //while loop so program will loop unless decimal value is zero
    while (d != 0)
    {
        remainder = d % 2;//initialising remainder to decimal divided by 2
        d = d / 2;//assigning decimal value to decimal divided by 2
        Binary = Binary + remainder * n;
        n = n * 10;
    }
    return Binary;//returning value to main function

}
