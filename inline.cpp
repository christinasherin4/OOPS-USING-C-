#include<iostream>
#include<string>
using namespace std;
double getIncome(string);
double computeTaxes(double);
void printTaxes(double);

int main()
{
    double income=getIncome("Please enter the employee name:");
    double taxes=computeTaxes(income);
    printTaxes(taxes);
return 0;
}

double computeTaxes(double income)
{

    if(income<5000)
        return 0.0;
    return 0.07*(income-5000.0);

}

double getIncome(String prompt)
{
    cout<<prompt;
    double income;
    cin>>income;
 return income;
}

void printTaxes(double taxes)
{
    cout<<"The tax is $"<<taxes<<endl;
}
}

