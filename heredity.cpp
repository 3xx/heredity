
#include <iostream>
using namespace std;

/*
Developer : BruceLee13
Github    : https://github.com/3xx
Telegram  : https://t.me/ppphp

*/
class A
{
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
};
class B:public A
{
    void Informations()
    {
        cout << " The Car Model Is " << model << endl;
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
  

}

