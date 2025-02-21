#include<iostream>
#include<vector>
using namespace std;

class Animal{

    public:
//    virtual void speak(){
//         cout<<"huhu\n";
//     }

    virtual void speak() = 0;  //pure virtual function, Abstract class(don't have any object)
};
class Dog : public Animal{

    public:
    void speak(){
        cout<<"Bark\n";
    }
};
class Cat : public Animal{

    public:
    void speak(){
        cout<<"meow\n";
    }
};

int main(){

//    Animal *p;
//    p = new Dog();
//    p->speak();

Animal *p;
vector<Animal*> animals;
animals.push_back(new Dog());
animals.push_back(new Cat());
// animals.push_back(new Animal());
animals.push_back(new Dog());
animals.push_back(new Cat());
for(int i=0; i<animals.size(); i++){
    animals[i]->speak();
}


    return 0;
}
