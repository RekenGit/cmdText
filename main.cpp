#include <iostream>
using namespace std;
/* 0.A  1.B  2.C  3.D  4.E  5.F  6.G  7.H  8.I  9.J
10.K  11.L  12.M  13.N  14.O  15.P  16.Q  17.R  18.S  19.T
20.U  21.V  22.W  23.X  24.Y  25.Z  26.Inny znak*/
string lib[27] = {"05565","35353","61116","35553","61316","61311",
"61156","55655","00000","62556","55355","11116","59977","35555",
"05550","65611","05554","65635","61626","60000","55556","55550",
"77795","55055","55000","62016","87778"};
string znaki[10] = {"    #    ","  #      ","      #  ","  # #    ",
                    "    # #  ","  #   #  ","  # # #  ","#       #",
                    "# # # # #","#   #   #"};
int lit=0;
void Litery(char x){
    switch(toupper(x)){
        case 'A': lit=0; break;
        case 'B': lit=1; break;
        case 'C': lit=2; break;
        case 'D': lit=3; break;
        case 'E': lit=4; break;
        case 'F': lit=5; break;
        case 'G': lit=6; break;
        case 'H': lit=7; break;
        case 'I': lit=8; break;
        case 'J': lit=9; break;
        case 'K': lit=10; break;
        case 'L': lit=11; break;
        case 'M': lit=12; break;
        case 'N': lit=13; break;
        case 'O': lit=14; break;
        case 'P': lit=15; break;
        case 'Q': lit=16; break;
        case 'R': lit=17; break;
        case 'S': lit=18; break;
        case 'T': lit=19; break;
        case 'U': lit=20; break;
        case 'V': lit=21; break;
        case 'W': lit=22; break;
        case 'X': lit=23; break;
        case 'Y': lit=24; break;
        case 'Z': lit=25; break;
        default: lit=26; break;
    }
}
void Zamien(string x){
    int dlugosc = x.size();
    for(int i=0; i<5; i++){
        for(int j=0; j<dlugosc; j++){
            Litery(x[j]);
            cout<<znaki[lib[lit][i]-'0'];
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"! jesli napis jest za dlugi to trzeba powiekszyc okno !"<<endl;
    for(;;){
        cout<<endl;
        string inic = "";
        cout<<"Podaj slowo"<<endl;
        cin>>inic;
        cout<<endl<<endl;
        Zamien(inic);
    }
    return 0;
}
