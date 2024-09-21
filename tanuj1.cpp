#include<iostream>
using namespace std;
class savingacc{
private :
double savingbalance;
static double annualIR;

public :
savingacc(double balance){
savingbalance = balance;
}
void calmonthlyIR(){
double monthlyI = (savingbalance* annualIR)/12;
savingbalance = savingbalance + monthlyI;
}
static void modifyIR(double newrate){
annualIR = newrate;
}

double getbalance(){
return savingbalance;
}
};
double savingacc::annualIR = 0.04;

int main(){
savingacc a1(10099999.00);
savingacc a2(29999999.00);
cout<<a1.getbalance()<<endl;
cout<<a2.getbalance()<<endl;

a1.calmonthlyIR();
a2.calmonthlyIR();

cout<<a1.getbalance()<<endl;
cout<<a2.getbalance()<<endl;

savingacc::modifyIR(0.05);

a1.calmonthlyIR();
a2.calmonthlyIR();


cout<<a1.getbalance()<<endl;
cout<<a2.getbalance()<<endl;


return 0;
}
