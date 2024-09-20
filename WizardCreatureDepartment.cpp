/*==========================================================

 Description: Wizard Creature Department

 ==========================================================
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Creature {
    protected:
    string name;
    int quantity;
    string Ctype;
    public:
void setQuantity(int number) {
    if (number < 0) {
        quantity=3;
    } else {
        quantity = number;
    }
}
int getQuantity(){
    return quantity;
}
void setName(string inputN) {
    name = inputN;
}
string getName() {
    return name;
}
void setCtype(string type) {
    Ctype = type;
}
string getCtype() {
    return Ctype;
}
void printStatement() {
    cout<<"There's "<<quantity<<" of creature's named "<<name<<endl;
}
Creature(string inputN, int number, string type) {
    setName(inputN);
    setQuantity(number);
    setCtype("unknown");
}
Creature() {
 }
};
class Phoenix: public Creature {
    public:
    Phoenix(){
    setCtype("Phoenix");
    }
    public:
    string color;
void setColor(string shade) {
    color = shade;
}
string getColor() {
    return color;
}
void printStatement() {
    cout<<"There's "<<quantity<<" "<< color<<" phoenixes named "<<name<<endl;
 }
};

class Basilisk : public Creature {
    public:
    Basilisk() {
    setQuantity(1);
    setCtype("Basilisk");
    }
void printStatement() {
    cout<<"There's "<<quantity<<" basilisk named "<<name<<endl;
}
};
//Make Creature, Phoenix, Basilisk class here



int main()
{
string nameArr[3];
for(int i =0; i>2; i++){
    cout<<"Clover"<<(i+1)<<endl;
}
// CREATE empty array of size 3 for storing names

	// CREATE a loop to record user input as names
    // sets third name to “Clover”

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();
	
	// extra credit here - 3 points
}





