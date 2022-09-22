#include<iostream>
using namespace std;
int main()
{
    int l,w,peri,area;
    cout<<"input the length";
    cin>>l;
    cout<<"input the width";
    cin>>w;

    peri=2*(l+w);
    area=(l*w);

    cout<<endl<<"The perimeter is: "<<peri;
    cout<<endl<<"The area is: "<<area<<endl;
    return 0;
}
