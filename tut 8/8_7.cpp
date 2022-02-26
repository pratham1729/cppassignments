#include<iostream>

using namespace std;
class Strings{
    private:
        int length;
        char*str=new char[length];// we cannot increase the size
    public:
    //Constructors:
        Strings(){length=0;}
        Strings(int len){length=len;}
        Strings(int len, char*s){length=len;str=s;}
        // member functions
        void get_string();
        void print_string(){cout<<"Your string is: "<<str<<endl;}
        // friend functions
        friend void strcmp( Strings s1, Strings s2);
        friend Strings strcat( Strings s1, Strings s2);
        // Operator overloading
        Strings operator+(const Strings& s);
};
Strings Strings:: operator+(const Strings& s){
    Strings ans{length+s.length};
    for (int i = 0; i < ans.length; i++)
    {
            if((i+1)<=(length))ans.str[i]=str[i];
            else ans.str[i]=s.str[i-length];
    }
    return ans;
}
void Strings::get_string(){

    cout<<"Enter the string:";
    for (int i = 0; i < length; i++)
    {
        cin>>str[i];
    } 
}
Strings strcat( Strings s1, Strings s2){
    Strings s3{s1.length+s2.length};
    for (int i = 0; i < s3.length; i++)
        {
            if((i+1)<=(s1.length))s3.str[i]=s1.str[i];
            else s3.str[i]=s2.str[i-s1.length];
        }
    return s3;
}
void strcmp( Strings s1, Strings s2){
    int minlen{s1.length>s2.length?s2.length:s1.length};
    for (int i = 0; i < minlen; i++)            {
            if(s1.str[i]!=s2.str[i])cout<<"False\n";return;
    } 
    cout<<"True\n";return;
}

int main(){
    Strings s1{5};
    s1.get_string();
    Strings s2{2};
    s2.get_string();
    s1.print_string();
    s2.print_string();
    Strings s3=strcat(s1,s2);
    s3.print_string();
    strcmp(s1,s2);
    (s1+s2).print_string();

    return 0;
}