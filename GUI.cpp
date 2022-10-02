#include "GUI.h"

GUI::GUI(){};

string GUI::getText(string message){
    
    string text = "";
    cout<<message<<endl;
    getline(cin, text);

    return text;
}
char GUI::getletter(string message){
    
    char text;
    cout<<message<<endl;
    cin>>text;

    return text;
}
void GUI::showresult(string message){
    cout<<message<<endl;
}