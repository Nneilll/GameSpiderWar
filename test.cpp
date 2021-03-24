#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

//function---------------------------------------------------------------------------------------------------------------------------------
int spider00(int min, int max) {
    srand(static_cast < unsigned int >(time(0)));
         static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
         return static_cast<int>(rand() * fraction * (max - min + 1) + min);
    }

    
int main(){

     int sum01, sum02, sum03;

    //Let's talk to the user explain to him the game game, find out the name ------------------------------------------------------------------
    string name;
    cout << "Welcome to the game player !!!" << endl;
    cout <<     "Enter your name newcomer - ";
    cin >> name;
    cout << "Welcome " << name << "We wish to defeat and nicely spend time!)" << endl;
    cout << "!!!RULES OF THE GAME!!!" << endl;
    cout << "1.You will have 100 soldiers. " << endl;
    cout << "2.Spiders will attack you with 3 waves, and all of them will be 90." << endl;
    cout << "3. 1 killed spider gives you 150 points, so " << name << " Your goal as you already understood) to collect as much glasses as possible!" << endl;
    cout << "4.The minimum number of scan points for killed spiders to protect the fortress - 11.000 " << endl;
    cout << "5.In general, as you already understood the essence of the game whether to divide your hundred soldiers in such a way to kill the maximum number of spiders!" << endl;
    cout << "6. Each wave will be waiting for you an unknown collical spiders, so show intuition)" << endl;
    cout << " " << endl;
    cout << "Well,) Let's start the battle!)" << endl;
    //We introduce the waves 
    int wane01, wane02, wane03;
    
    // here we have the beginning of the first wave------------------------------------------------------------------------------------------------------
    cout << "Enter the number of soldiers for the first wave! - ";
    cin >> wane01;
    if (wane01 > 100 ){
        cout << "Not bad, but still it doesn't seem to you that it is too much for one wave? " << endl;
        cout << "Try to enter another number) - ";
        cin >> wane01;  
    } else if (wane01 < 1) {
        cout << "Well, this will be too little for one wave)" << endl;
        cout << "Try to enter another number) - ";
        cin >> wane01;
    } else {
        cout << "Perfect " << name << ", This number is incomprehensible)" << endl;
    }
    //here we have spiders for the first wave------------------------------------------------------------------------------------------------
     int spider01 = spider00(1, 50);
    cout << "Number of spiders on the first wave - " << spider01 << ", I hope you put out enough soldiers desperate " << name << endl;

    // Fight soldiers with spiders wave first)--------------------------------------------------------------------------------------------
    
    int result01;
    result01 = spider01 - wane01;
    int Score = result01 * 150;
    cout << "Result of the Battle of the First Wave - " << Score << endl;
    
    //here we have 2 waves----------------------------------------------------------------------------------------------------------------
    cout << "Enter the number of soldiers for the second wave! - ";
    cin >> wane02;
    if (wane02 > 100 ){
        cout << "Not bad, but still you do not think that it is too much for one wave?" << endl;
        cout << "Try to enter another number) - ";
        cin >> wane02;  
    } else if (wane02 < 1) {
        cout << "Well, this will be too little for one wave)" << endl;
        cout << "Try to enter another number) - ";
        cin >> wane02;
    } else {
        cout << "Perfect " << name << ", This number is incomprehensible)" << endl;
    }
    //Spiders for 2 waves------------------------------------------------------------------------------------------------------------------
    int spider02 = spider00(1, 50);
    cout << "Number of spiders on the first wave - " << spider02 << ",I hope you put out enough soldiers desperate " << name << endl;

    // Fight soldiers with spiders wave second) --------------------------------------------------------------------------------------------
    
   int result02;
    result02 = spider02 - wane02;
    int Score02 = result02 * 150;
    cout << "The result of the battle of the second wave - " << Score02 << endl;
    
    // Third wave-----------------------------------------------------------------------------------------------------------------------
    cout << "Enter the number of soldiers for the third wave! - ";
    cin >> wane03;
    if (wane01 > 100 ){
        cout << "Not bad, but still you do not think that it is too much for one wave?" << endl;
        cout << "Try to enter another number) - ";
        cin >> wane03;  
    } else if (wane03 < 1) {
        cout << "Well, this will be too little for one wave.)" << endl;
        cout << "Try to enter another number) - ";
        cin >> wane03;
    } else {
        cout << "Perfect " << name << ", This number is incomprehensible)" << endl;
    }
    // spiders for 3 waves
    int spider03 = spider00(1, 50);
    cout << "Number of spiders on the first wave - " << spider03 << ", I hope you put out enough soldiers desperate " << name << endl;

    //Fight soldiers with spiders wave third) ------------------------------------------- -------------------------------------------------
    int result03;
    result02 = spider03 - wane03;
    int Score03 = result03 * 150;
    cout << "The result of the Battle of the Three Waves - " << Score03 << endl;
    
    // end of the block with waves registration of soldiers and spiders--------------------------------------------------------------------------------------------------
    cout << "Well, hehe))) the number of soldiers allocated for the first wave - " << wane01 << ".Collision of soldiers for 2 waves - " << wane02 << ",Collision of soldiers for 3 waves - " << wane03 << endl;
    cout << "So let's see how good luck to you brave " << name << "!!!" << endl;

    // Calculate the result of three waves
    int Finish = result01 + result02 + result03;
    cout << "Palmous glasses for 3 waves - " <<  Finish << endl;

    //The system praise player
    if (Finish <= 11000){
        cout << "Что ж " << name << " You are a loser ... You scored less than 11000 points and your durability collapsed .... I'm sorry...." << endl;
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!" << endl;
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!" << endl;
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!";
        cout << "GAME OVER!!!" << endl;
    } 
     if (Finish >= 11000){
        cout << "Боже " << name << " You are really a stunning warrior, you managed to defeat spiders with the score - " << Finish << endl;
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!" << endl;
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!" << endl;
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!";
        cout << "YOU WIN!!!" << endl;
    }

    return 0;
}