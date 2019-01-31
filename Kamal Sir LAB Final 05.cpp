#include<bits/stdc++.h>
using namespace std;
class DATA
{
public:
    int day, month,year,match,wicket,run;
    DATA() {}
    DATA(int a, int b, int c,int d, int e, int f)
    {
        day = a;
        month = b;
        year = c;
        match=d;
        wicket=e;
        run=f;
    }

    void show()
{
    cout<<"Date of birth : "<<day<<"."<<month<<"."<<year<<endl;
    cout<<"Match : "<<match<<endl;
    cout<<"Wicket : "<<wicket<<endl;
    cout<<"Runs : "<<run<<endl;
}

    int putyear()
    {
        return year;
    }
};

class Person
{
public:
    DATA Iob;
    string name;
    void getData(string name, DATA data)
    {
        this->name = name;
        Iob = data;
    }
    int fun()
    {
        return Iob.putyear();
    }
    void putData()
{
    cout<<"Name : "<<name<<endl;
    Iob.show();
}
};


class Player: public Person,public DATA
{
public:
    DATA Iop;
    string category;
    void getPlayer(string na, DATA duc, string category)
    {
        getData(na, duc);
        this->category = category;
    }
    string getcategory()
    {
        return category;
    }
    int fun1()
    {
        return fun();
    }
    void putInfo();
};
void Player :: putInfo()
{
    putData();
    cout<<"Player Category : "<<category<<endl;
}
int main()
{
    Player squad[15];
    Player arr[11];
    int c1=0,c2=0,c3=0,c4=0,t=0,cnt=1,i;

    squad[0].getPlayer("Musfiqur Rahim",DATA(5,11,1992,150,0,5600), "Wicket Keeper");
    squad[1].getPlayer("Mehedi Hasan Miraz",DATA(5,9,1996,50,70,560), "Spin Bowler");
    squad[2].getPlayer("Mostafizur Rahman",DATA(5,10,1996,72,98,190), "Fast Bowler");
    squad[3].getPlayer("Mashrafi Bin Mortaza",DATA(5,1,1996,200,205,1400), "Fast bowler");
    squad[4].getPlayer("Tamim Iqbal",DATA(5,11,1991,203,0,6500), "Batsman");
    squad[5].getPlayer("Imrul kayes",DATA(5,11,1986,135,0,3100), "Batsman");
    squad[6].getPlayer("Sakib al Hassan",DATA(5,11,1993,201,264,5800), "Batsman");
    squad[7].getPlayer("Mithun Hossain",DATA(5,11,1992,11,5,360), "Batsman");
    squad[8].getPlayer("Liton Das",DATA(5,12,1996,36,0,890), "Wicket Keeper");
    squad[9].getPlayer("Nasir Hossain",DATA(5,10,1996,120,76,2900), "Batsman");
    squad[10].getPlayer("Sabbir Rahman",DATA(5,9,1995,76,45,1200), "Batsman");
    squad[11].getPlayer("Mominul Islam",DATA(5,12,1996,43,17,630), "Batsman");
    squad[12].getPlayer("Taskin Ahamed",DATA(5,9,1997,65,97,134), "Fast Bowler");
    squad[13].getPlayer("Taijul Islam",DATA(5,05,1996,15,21,54), "Spin Bowler");
    squad[14].getPlayer("Rubel Hossain",DATA(5,06,1995,23,0,534), "Fast Bowler");

    for(i=0; i<15; i++)
    {
        if(squad[i].getcategory()=="Wicket Keeper" && (2018-squad[i].fun1()>20) && (2018-squad[i].fun1()<30)&& c1<1)
        {
            arr[t] = squad[i];
            c1++;
            t++;
        }
        if(squad[i].getcategory()=="Fast bowler" && (2018-squad[i].fun1()>20) && (2018-squad[i].fun1()<30) && c2<2)
        {
            arr[t] = squad[i];
            c2++;
            t++;
        }
        if(squad[i].getcategory()=="Spin Bowler" && (2018-squad[i].fun1()>20) && (2018-squad[i].fun1()<30) && c3<1)
        {
            arr[t] = squad[i];
            c3++;
            t++;
        }
        if(squad[i].getcategory()=="Batsman"  && (2018-squad[i].fun1()>20) && (2018-squad[i].fun1()<30) && c4<4)
        {
            arr[t] = squad[i];
            c4++;
            t++;
        }
    }

    for(i = 0; i < t; i++)
    {
        cout << "Player No :: " << cnt <<endl;
        arr[i].putInfo();
        cout<<endl<< endl;
        cnt++;
    }
    return 0;
}
