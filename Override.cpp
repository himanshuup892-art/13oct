#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"The animals make sound"<<endl;
    }
};
class dog : public Animal{
    public:
    void sound() override{
        cout<< "Dog Barks"<<endl;
    }
};
class Cat : public dog{
    public:
    void sound() override{ 
        cout<< "Cat meows"<<endl;
    }
};
int main(){
    Animal *ace; // *ace is the pointer here
    Animal a;
    dog d;
    Cat c;
    ace= &d;
    ace -> sound();
    ace= &c;
    ace -> sound();
}