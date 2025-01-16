#include <iostream>
#include <limits>
#include "XO_logic.h"
//Developed by Saad RABIA.

int main(){
    int x[10];
    int o[10];
    int xp = 0;
    int op = 0;
    int c = 0;
    int pos[10];
    char chose;
    bool game = true;
    bool exist = false;
    std::cout <<"*********************** XO Game By Saad RABIA ***********************\n";
    std::cout <<"the game work by calling the square from (1-9)\n";
    draw_xo();
    do{
        std::cout<<"Please Chose between X OR O : ";
        std::cin>>chose;  
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        if (chose != 'X' && chose != 'x' && chose != 'O' && chose != 'o') std::cout<<"Invalid choise !\n";
         
    }while(chose != 'X' && chose != 'x' && chose != 'O' && chose != 'o');
    draw(x,o);
    while(game){
        if (chose == 'X' or chose == 'x'){
            do{
                exist = false;
                std::cout<<"Player X, enter your move: ";
                std::cin>>xp;
                if (std::cin.fail() || ((xp<1 || xp >9))){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    draw(x,o);
                    std::cout<<"Invalid choise !\n";
                    continue;
                }
                for (int i = 0;i<=c;i++){     
                    if (pos[i] == xp){
                        exist = true;
                        draw(x,o);
                        std::cout<<"Invalid choise !\n";
                        break;
                       
                    }    
                }
            }while(((xp<1 || xp >9)) || exist);
            x[xp] = xp;
            pos[c] = xp;
            chose = 'o';           
        }
        else if (chose == 'O' or chose == 'o'){
            do{
                exist = false;
                std::cout<<"Player O, enter your move: ";
                std::cin>>op;
                if (std::cin.fail() || ((op<1 || op >9) || exist)){
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    draw(x,o);
                    std::cout<<"Invalid choise !\n";
                    exist = false;
                    continue;
                }
                for (int i = 0;i<=c;i++){     
                    if (pos[i] == op){
                        exist = true;
                        draw(x,o);
                        std::cout<<"Invalid choise !\n";
                        break; 
                    }
                } 
            }while(((op<1 || op >9) || exist));
            
            o[op] = op;
            pos[c] = op;
            chose = 'x';
        }
        c++;
        draw(x,o);
        check_win(x,o,game,c);
    }
    std::cout <<'\n';
    std::cout <<"*********************** I Hope you enjoy ****************************";
    return 0;
}

