/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() 
{
    int N;
    float subtotal;
	float serviceCharge;
	float tax;
	float finalBill;
    float finalAmounts[100];   

    cout << "Enter number of tables: ";
    cin >> N;

    for (int i = 0; i < N; i++) 
	{
        cout << "\nEnter subtotal for table " << i + 1 << ": ";
        cin >> subtotal;

        serviceCharge = subtotal * 0.07;  
        tax = subtotal * 0.09;            
        finalBill = subtotal + serviceCharge + tax;

        finalAmounts[i] = finalBill;      
    }
    
    cout << "\nFinal Amount for Each Table:\n";

    for (int i = 0; i < N; i++) 
	{
        if (finalAmounts[i] > 1500)
		{
		
            cout << "Table " << i + 1 << ": " << finalAmounts[i] << " (LARGE)\n";
        }
        else
        {
		
            cout << "Table " << i + 1 << ": " << finalAmounts[i] << endl;
        }
    }
    return 0;
}