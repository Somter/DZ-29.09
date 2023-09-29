// DZ 29.09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>			
#include <iostream>		
using namespace std;		

int main()
{
    ifstream wr;
    wr.open("index.html", ios::in);

    int symbolLessThan = 0;
    int symbolGreaterThan = 0;
    char buffer;

    if (wr.is_open())
    {
        while (wr.get(buffer))
        {
            if (buffer == '<')
            {
                symbolLessThan++;
            }
            if (buffer == '>')
            {
                symbolGreaterThan++;
            }
        }

        cout << "Quantity '<': " << symbolLessThan << endl;
        cout << "Quantity '>': " << symbolGreaterThan << endl; 
        
        int temp = symbolGreaterThan;    

        if (symbolLessThan == symbolGreaterThan)
        {
            cout << "The file is valid! " << endl;
        }
        if (symbolLessThan > symbolGreaterThan)
        {
            cout << "file is invalid! " << endl;
            int rez1 = symbolLessThan - symbolGreaterThan;
            cout << "Number of invalid tags: " << rez1 << endl;
        }
        if (symbolLessThan < symbolGreaterThan) 
        {
            cout << "file is invalid! " << endl;
            int rez2 = symbolGreaterThan - symbolLessThan;  
            cout << "Number of invalid tags: " << rez2 << endl; 
        }
        wr.close();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
