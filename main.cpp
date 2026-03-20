#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;
    cout << "Input if you are student/nonstudent, gender (male/female/other), and major (cs/other): (separate by spaces, not commas)\n";
    cin >> status >> gender >> major;
    if (status == "student"){
        if (gender =="female"){
            if (major =="cs"){
                factor=3.0;
                
            }
            else{
                factor=1.0;
            }
        }
        else{
            if (major =="cs"){
                factor=2.0;
            }
            else{
                factor=0.2;
            }
        }
    }
    else{
        if (major =="cs"){
            factor=0.5;
        }
        else{
            factor=0.1; //The default factor.
        }
    }
    cout << setprecision(2) << fixed;
    double amount = scholarship*factor;
    cout << "factor=" << factor <<  ", amount=" << amount << endl;
    return 0;
}
