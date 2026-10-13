#include<iostream>
using namespace std;
class student{
    public : //Overloading = same name, different parameters.
    void add(int a){
        cout<<"The value of a is : "<<a<<endl;
    }
    void add(int a, int b){
        cout<<"The sum of a & b : "<<a+b<<endl;
    }
    void add(int a,int b, int c){
        cout<<"The sum of a,b & c : "<<a+b+c<<endl;
    }
};
int main(){
    student obj;
    obj.add(10);
    obj.add(10,20);
    obj.add(10,20,30);
}