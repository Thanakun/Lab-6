#include<iostream>
#include<string>

using namespace std;

int main(){
    string text;
    string name_NPC;
    string name_of_user;
    string name_dialog;
    string name_of_Day;
    int year = 0;
    string name_of_Movie;
    name_dialog =  "?????";
    name_NPC = "Fahsai";
    cout << name_NPC << ": Sawadee ka...Can you tell me your name?" << endl;
    cout << name_dialog << ": ";
    getline(cin,name_of_user);
    cout << name_NPC << ": Wow!!! " << name_of_user << " is a really cool name." << endl;
    cout << name_NPC << ": I think you are an Engineering student. What is your student ID?" << endl;
    cout << name_of_user << ": ";
    cin >> year;
    cin.ignore();
    int gear = (year/10000000) -12;
    cout << name_NPC << ": I think you may be GEAR " << gear << ". I have a free movie ticket for you." << endl;
    cout << name_NPC << ": Let's go to the cinema together!!!" << endl;
    cout << name_NPC << ": What movie do you want to watch?" << endl;
    cout << name_of_user << ": ";
    getline(cin,name_of_Movie);
    cout << name_NPC << ": So....which day are you free to go with me?" << endl;
    cout << name_of_user << ": ";
    getline(cin,name_of_Day);
    cout << name_NPC << ": " << name_of_Day << "....that is OK!!! I'm looking forward to watching\n" << name_of_Movie <<  " with you." << endl;
    cout << name_of_user << ": ";
    getline(cin,text);
    cout << name_NPC << ": 555+ see you " << name_of_Day << ". Bye Bye \\(^ ^)/";
    return 0;


}
