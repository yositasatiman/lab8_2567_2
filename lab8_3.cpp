#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int height;
    int bounty;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){
            cout << "Your character = Chopper";
            return 0;
        }else if(height < 180){
            cout << "Your character = Usopp";
            return 0;
        }
    }else if(age > 60){
        cout << "Your character = Brook";
        return 0;
    }
    cout << "Enter your bounty: ";
    cin >> bounty;
    if(age <= 25 && bounty <= 1100000000){
        cout << "Your character = Sanji";
    }else if(age <= 25 && bounty > 1100000000){
        cout << "Your character = Zoro";
    }else if(age > 25 && bounty > 500000000){
        cout << "Your character = Jinbe";
    }else if(age > 25 && bounty <= 500000000){
        cout << "Your character = Franky";
    }
    return 0;
}
