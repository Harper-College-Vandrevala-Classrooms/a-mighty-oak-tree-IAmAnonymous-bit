using namespace std;

#include "squirrel.hpp"
#include "oak.hpp"
#include <iostream>

int main()
{
    OakNode on1;
    Squirrel s1("Cheeks");

    on1.set_squirrel(&s1);

    Squirrel s2("Squeaks");
    Squirrel s3("Mr.Fluffy Butt");
    OakNode on2(&s2);
    OakNode on3(&s3);

    on1.set_left(&on2);
    on1.set_right(&on3);

    OakNode r1o2 = on1.left();
    OakNode r1o3 = on1.right();

    cout << "Squirrel Name: " << r1o2.get_squirrel().get_name() << endl;
    cout << "Squirrel Name: " << r1o3.get_squirrel().get_name() << endl;



    return 0;
}