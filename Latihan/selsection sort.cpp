#include<iostream>
using namespace std;

int main()
{   int a,k,c,d,g;
    k=4;
    int b[4];
    cout<<"SELECTION SORT "<<endl;
    cout<<"mengurutkan nilai dari besar ke kecil"<<endl<<endl;
    for(a=0;a<k;a++)
    {
        cout<<"Masukkan nilai "<<a+1<<" : ";cin>>b[a];
    }
    for(a=0;a<k-1;a++)
    {
    c=a;
        for(d=a+1;d<k;d++)
        {
            if(b[c]<b[d])
            {
                c=d;
            }
        }
        g=b[c];
        b[c]=b[a];
        b[a]=g;
    }
    cout<<"\n setelah diurutkan akan menjadi : \n";
    for(a=0;a<k;a++)
    {
        cout<<b[a]<<" \n";
    }
}

