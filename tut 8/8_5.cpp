#include<iostream>
using namespace std;
class pascal
{
    private:
    int n;
    public:
    void setvalue(int n)
    {
        this->n=n;
    }
    int bincoeff(int n,int k)
    {
        int f=1;
        if(k>n-k)
       {
            k=n-k;
        }
    for(int i=0;i<k;i++)    
    {
        f=f*(n-i);
        f=f/(i+1);
    }
    return f;
    }
    friend void pascalseries(pascal);
};
void pascalseries(pascal h)
    {
        h.n=h.n-1;
        cout<<1<<endl;
        for(int i=1;i<=h.n;i++)
        {
            cout<<1<<" ";
            for(int j=1;j<=i;j++)
        {
        cout<<h.bincoeff(i,j)<<" ";
        }
        cout<<endl;
        }
        }
int main()
    {
    int n;
    cout<<"Enter number of rows for pascal triangle : "<<endl;
    cin>>n;
    pascal b1;
    b1.setvalue(n);
    pascalseries(b1);
    }