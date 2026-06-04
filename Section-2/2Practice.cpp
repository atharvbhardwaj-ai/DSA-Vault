#include<iostream>
using namespace std;

struct Character{
    int health;
    int mana;
};

void upgradecharacter(Character *cptr){
    (cptr->health)+=50;
    (cptr->mana)+=20;
}

int main(){
    Character AB;
    Character *ptr= &AB;
    ptr->health=100;
    ptr->mana=10;
    upgradecharacter(ptr);
    cout << ptr->health <<endl << ptr->mana <<endl;
    return 0;
}