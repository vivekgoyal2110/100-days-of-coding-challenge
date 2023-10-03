#include<iostream>
#include<windows.h>
#include<unistd.h>
#include<ctime>
using namespace std;

int main(){
    int n;
    srand(static_cast<unsigned int>(std::time(nullptr)));
    int ans = 1 + (rand() % 100);
    // sleep(2);
    cout<<"\t\t\t!!!GUESS THE NUMBER GAME!!!\n\n";
    // sleep(2);
    // sleep(2);
    cout<<"\t  Guess a number between 1-100. If you guessed right, you Won!"<<endl;
    cout<<"\t\t\t  ---Try Until You Win---\n"<<endl;
    cout<<"\t\t\t    Press Enter to Start";
    cin.get();
    int attempts = 0, score = 100;
    cout<<"\n";
    while(true){
        cout<<"Guess the number : ";
        cin>>n;
        attempts++;
        if(n < 1 || n > 100 ){
            cout<<"Please guess between 1 and 100"<<endl;
        }
        else if(n > ans){
            cout<<"Too High Guess!\n"<<endl;
            score--;
        }
        else if(n < ans){
            cout<<"Too Low Guess!\n"<<endl;
            score--;
        }
        else{
            cout<<"\t\t\tCongratulations, You Won the Game!!!\n"<<endl;
            cout<<"\t\tAttempts : "<<attempts<<"\t\t\t\tScore : "<<score<<"\n"<<endl;
            char ask;
            cout<<"Wanna Play Again??? (Y/N) : ";
            cin>>ask;
            if(ask == 'y' || ask == 'Y'){
                ans = 1 + (rand() % 100);
                attempts = 0;
            }
            else{
                cout<<"\t\t\t\t!!!Hope You Enjoyed!!!\n\n\t\t\t\t  Thanks for Playing";
                break;
            }
        }
    }
}