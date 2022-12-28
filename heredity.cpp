
#include <iostream>
using namespace std;

/*
Developer : BruceLee13
Github    : https://github.com/3xx
Telegram  : https://t.me/ppphp

*/
class A
{
private:
    string name;
    int age;
    int grade;

public:
    int speed;
    int model;
    string color;

    void Informations()
    {
        cout << " The Car Speed Is " << speed << endl;
        cout << " The Car Color Is " << color << endl;
        cout << " The Car Model Is " << model << endl;
    }
    void print()
    {
        cout << " Name is " << name << endl;
        cout << " Age is  " << age << endl;
        cout << " grade is " << grade << endl;
    }
    void set(string n, int a, int g)
    {
        name = n;
        age = a;
        grade = g;

    }
};
class B :public A
{

private:
    string nm;
    int ag;
    float Rpm;
public:
    void Informations()
    {
        cout << " The Car Model Is " << model << endl;
    }
    void setvalue()
    {
        cout << " Enter Your Name : ";
        cin >> nm;
        cout << " Enter Your age : ";
        cin >> ag;
        cout << " Enter Your grade : ";
        cin >> Rpm;

    }
    void printvalue()
    {
        cout << " Your Name is " << nm << endl;
        cout << " Your Age is  " << ag << endl;
        cout << " Your grade is " << Rpm << endl;
    }
};

class C :public B
{

};
int main()
{
    C x;
    x.color = "Red";
    x.model = 2005;
    x.speed = 240;
    x.A::Informations(); // genetics ambiguity [A]
    x.set("BruceLee13", 29, 100);
    x.print();
    B op;
    op.setvalue();
    op.printvalue();

}

