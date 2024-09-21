#include<iostream>
using namespace std;
class Time{
private:
int hours ;
int min ;
int sec;
public:
Time(){
int hours(0);
int min(0);
int sec(0);
}
Time(int h, int m, int s){
int hours(h);
int min(m);
int sec(s);
}
void add(Time t1,Time t2){
sec = t1.sec+t2.sec;
min = t1.min+t2.min + (sec/60);
hours = t1.hours+t2.hours+(min/60);
sec %= 60;
min %= 60;
hours %= 24;
}
void display(){
cout<<hours<<"hours"<<endl<<min<<"min"<<endl<<sec<<"sec"<<endl;
}
};
int main(){
Time t1(10,11,12);
Time t2(12,11,10);
Time t3;

cout<<" time 1 : ";t1.display();
cout<<" time 2: ";t2.display();
cout <<"time after addition:";t3.display();
return 0;
}

