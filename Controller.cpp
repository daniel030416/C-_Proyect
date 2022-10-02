#include "Controller.h"
#include <bits/stdc++.h>

Controller::Controller(){}

GUI gui;
Logic logic;

void Controller::getController(){

    string text = gui.getText("Digite un texto: ");
    char letter = gui.getletter("Digite una letra: ");

    //gui.showresult(logic.getText(text, letter));
    
}