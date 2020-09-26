#include<iostream>
using namespace std;

class Time{
    private:
        int HH,MM,SS;
        float t;
    public:
        getTime();
        ConverttoSeconds();
        displayTime();
};

Time::getTime(){
    cout<<"Hours?";
    cin>>HH;
    cout<<"\nMinutes?";
    cin>>MM;
    cout<<"\nSeconds?";
    cin>>SS;
}

Time::ConverttoSeconds(){
    t=3600*HH+60*MM+SS;
    return t;
}

Time::displayTime(){
    cout<<"\nTime is:"<<HH<<":"<<MM<<":"<<SS;
    cout<<"\nTime in Seconds is:"<<t;
}

int main(){
    Time t1;
    t1.getTime();
    t1.ConverttoSeconds();
    t1.displayTime();
    return 0;
}
