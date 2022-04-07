//This program overload the +,- and = operators relative to coord class.
#include<iostream>
using namespace std;

class coord
{
    int x,y; //coordinate values.
public:
    coord()
    {
        x=0;
        y=0;
    }
    coord(int i, int j)
    {
        x=i;
        y=j;
    }
    void get_xy(int &i, int &j)
    {
        i=x;
        j=y;
    }
    coord operator+(coord ob2);
    coord operator-(coord ob2);
    coord operator=(coord ob2);

};
//overload + relative to coord class.

coord coord::operator+(coord ob2)
{
    coord temp;

    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;

}
//overload - relative to coord class.

coord coord::operator-(coord ob2)
{
    coord temp;

    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;

}
//overload = relative to coord class.

coord coord::operator=(coord ob2)
{
    x = ob2.x;
    y = ob2.y;

    return *this;//return the object that is assigned.
}
int main()
{
    coord ob1(10,10),ob2(5,3),ob3;
    int x,y;

    ob3 = ob1 + ob2;
    ob3.get_xy(x,y);
    cout<< "(ob1+ob2) X:" << x <<", Y:" << y <<endl;

    ob3 = ob1 - ob2;
    ob3.get_xy(x,y);
    cout<< "(ob1-ob2) X:" << x <<",  Y:" << y <<endl;

    ob3=ob1;//assign an object.
    ob3.get_xy(x,y);
    cout << "(ob3=ob1) X:" << x <<", Y:" << y <<endl;

    return 0;
}
