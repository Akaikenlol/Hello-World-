#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "give me your age ";
    cin>>x;
    if  (x <= 16){cout <<"your age is :child";}
    else if ((x>=16)||(x<=22)){cout  << "Your age is: Adult";}
    else if ((x>=22)&&(x<=40)){cout << "Your age is :Grown up";}
    else if ((x>=40)&&(x<=60)){cout << "Your age is :Old";}
    else {cout << "Your age is :Grand ";}


    return 0;



    return 0;
}
