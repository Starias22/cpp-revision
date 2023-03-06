#include<iostream>
#include<tuple>

using namespace std;
struct Duration{
    int seconds;
};
bool is_negative(Duration d){
    return d.seconds<0;
}

int abs(int val){
    return val>=0?val:-val;
}
Duration create_duration(int seconds);
Duration create_duration_wm(int minutes);
Duration create_duration_wh(int hours);

/*Duration create_duration_wms(int minutes);
Duration create_duration_whm(int hours);
Duration create_duration_wh(int hours);*/



int seconds(Duration duration);
auto duration_ms(Duration duration);
auto duration_hms(Duration duration);
Duration operator +(Duration d1,Duration d2);
Duration operator -(Duration duration);
Duration operator -(Duration d1,Duration d2);
bool operator ==(Duration d1,Duration d2);
bool operator !=(Duration d1,Duration d2);
bool operator <=(Duration d1,Duration d2);
bool operator >=(Duration d1,Duration d2);
bool operator <(Duration d1,Duration d2);
bool operator >(Duration d1,Duration d2);
ostream& operator<<(ostream& stream,Duration d);



 

int main()
{
    /*Créer une durée à partir de secondes, minutes (optionnel), heures (optionnel).
— Renvoyer la durée sous forme de secondes.
— Renvoyer la durée sous forme de tuple {minutes, secondes}. Le signe de la durée sera
porté par les minutes.
— Renvoyer la durée sous forme de tuple {heures, minutes, secondes}. Le signe de la durée
sera porté par les heures.
— Additionner des durées.
— Renvoyer l’opposé d’une durée.
— Soustraire des durées.
— Comparer des durées.
— Injecter une durée dans un flux sortant, au format H:mm'ss" . Le signe de la durée sera
mis devant les heures.*/

Duration d1=create_duration(20),d2,d3,d4,d;
d2=create_duration(60);
d=create_duration(83);

cout<<"d1->"<<d1<<endl;
cout<<"d2->"<<d2<<endl;
cout<<"d->"<<d<<endl;
d3=create_duration(3778);
cout<<"d3->"<<d3<<endl;
d4=d1+d2;
cout<<"d1+d2->"<<d4<<endl;
d4=d3+d2;
cout<<"d3+d2->"<<d4<<endl;
d4=-d;
cout<<"-d->"<<d4<<endl;

//comparaison de d1 et d2
cout<<"d1->"<<d1<<endl;
cout<<"d2->"<<d2<<endl;

if(d1==d2)
    cout<<"d1 est différent à d2\n";


else if(d1>d2)
    cout<<"d1 est supérieur à d2\n";
else 
    cout<<"d1 est inférieur à d2\n";















/*int a=6;
string var="kfg";
var+=a;
var+=6;
var+=5.5;
var+=to_string(6);
cout<<"var="<<var<<endl;*/


    return 0;
}
Duration create_duration(int seconds){
    Duration d={seconds};
    return d;

}
Duration create_duration_wm(int minutes){
    Duration d={minutes*60};
    return d;

}
Duration create_duration_wh(int hours){
    Duration d={hours*60*60};
    return d;

}
int seconds(Duration duration){
    return duration.seconds;

}
auto duration_ms(Duration duration){
    //cout<<"***"<<duration.seconds<<endl;
    auto [min,sec]=make_tuple(0,abs(duration.seconds));
    if(sec>=60)
    {
    min=sec/60;
    sec=sec%60;
    }
    return make_tuple(min, sec);

}
auto duration_hms(Duration duration){
    int hour,min,sec;

    tie(min, sec)=duration_ms(duration);

    tie(hour, min, sec)=make_tuple(0,min,sec);
    if(min>=60)
    {
    hour=min/60;
    min%=60;
    }
        return make_tuple(hour,min,sec);


}
Duration operator +(Duration d1,Duration d2){
    Duration d={d1.seconds+d2.seconds};
    return d;

}
Duration operator -(Duration duration){
    Duration d={-duration.seconds};
    return d;
    


}
Duration operator -(Duration d1,Duration d2){
        Duration d={d1.seconds-d2.seconds};
        return d;


}
bool operator ==(Duration d1,Duration d2){
    return d1.seconds==d2.seconds;

}
bool operator !=(Duration d1,Duration d2){
    return !(d1==d2)/* ou d1.seconds!=d2.seconds*/;

}
bool operator <=(Duration d1,Duration d2){
    return d1.seconds<=d2.seconds;


}
bool operator >=(Duration d1,Duration d2){
        return d1.seconds>=d2.seconds;

    

}
bool operator <(Duration d1,Duration d2){
    return !(d1>=d2);

}
bool operator >(Duration d1,Duration d2){
        return !(d1<=d2);


}
ostream& operator<<(ostream& stream,Duration d){
    auto[hour,min,sec]=duration_hms(d);

    //cout<<"d.seconds:"<<d.seconds<<endl;
    //cout<<hour<<"->"<<min<<"->"<<sec<<endl;
    string formated_duration="";
     //H:mm'ss"
     if (is_negative(d))
     {
     formated_duration="-";
     //sec*=-1;
     }
     formated_duration+=to_string(hour)+":";
    if(min<10)
    formated_duration+="0";
    formated_duration+=to_string(min)+"'";


    if(sec<10)
    formated_duration+="0";
    formated_duration+=to_string(sec)+"\"";
   
    cout<<formated_duration;
    return stream;


}