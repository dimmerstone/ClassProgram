#include <iostream>

using namespace std;

class age {
    public:
        int yearnow; //current year
        int yob;    //year of birth

};

int main (){
    age andy;
    age anton;
    int umur;

    //andy's age
    andy.yearnow = 2020;
    andy.yob = 1990;

    //anton's age
    anton.yearnow = 2020;
    anton.yob = 2000;

    //age of andy
    umur = andy.yearnow - andy.yob;
    cout << "umur andy adalah: " << umur <<endl;

    //age of anton
    umur = anton.yearnow - anton.yob;
    cout << "umur anton adalah: " << umur <<endl;

    return 0;

}
