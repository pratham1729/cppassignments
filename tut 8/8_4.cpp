#include<iostream>
using namespace std;
class player{
    private:
    int player_no;
    string name;
    int matches_played;
    int* goals_per_match=new int[2];
    public:
    player(int p_no,string s,int matchesplayed){
        cout<<"Enter the number of goals scored: "<<endl;
        for (int i = 0; i < matchesplayed; i++)
        {   
            cin>>goals_per_match[i];
        }
        player_no=p_no;
        name=s;
        matches_played=matchesplayed;
    }
    void getdata(){
        cout<<"Player Name-NO: "<<name<<"-"<<player_no<<endl;
        cout<<"Matches played: "<<matches_played<<endl;
        for (int i = 0; i < matches_played; i++)
        {
            cout<<"Match "<<i+1<<" Goals scored: "<<goals_per_match[i]<<endl;
        }
        
    }
};
int main(){
    player p1{7,"CR",5};
    p1.getdata();
    player p2{10,"M",3};
    p2.getdata();
    return 0;
}