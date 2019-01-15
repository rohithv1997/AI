#include<iostream>
using namespace std;
int main()
{
    string e1,e2,h;
    double cef1,cef2,che1;
    cout<<"Enter the hypothesis\n";
    getline(cin,h);
    cout<<"Enter the evidence 1 \n";
    getline(cin,e1);
    cout<<"Enter the certainty factor of evidence 1";
    cin>>cef1;
    cout<<"Enter the evidence 2\n";
    getline(cin,e2);
    cout<<"Enter the certainty factor of evidence 2";
    cin>>cef2;
    cout<<"Certainty factor of evidence 1 and evidence 2  occurring together \t"<<min(cef1,cef2)<<"\n";
    cout<<"Certainty factor of either evidence 1 or evidence 2 occurring alternately \t"<< max(cef1,cef2);
    cout<<"Enter the certainty of hypothesis given the evidence 1 and evidence 2\n";
    cin>>che1;
    cout<<"Certainty factor of the hypothesis = \n";
    if(cef1 >0)
        cout<<che1*cef1<<"\n";
    else
        cout<<" 0 \n";
    cout<<"\nCertainty factor of the hypothesis given evidence 1 and 2 occurring together ="<< min(cef1,cef2)* che1;
    cout<<"\nCertainty factor of the hypothesis given either evidence 1 or 2 occurring  ="<< max(cef1,cef2)* che1;
    return 0;
}
