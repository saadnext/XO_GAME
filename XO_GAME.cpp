#include <iostream>

void draw_xo(){
    int count = 1;
    for (int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            std::cout<< "  " <<count << (j<2 ? "  |" : "");
            count++;
        }
        std::cout<<"\n";
        if (i<2){
            for (int j = 0;j<3;j++){
                std::cout<< (j < 2 ? "-----|" : "-----");
        }
        }
       
        
        std::cout<<"\n";
    }
}

void draw(int x[],int o[]){
    int count = 1;
    for (int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            if (x[count] == count){
               std::cout<<(j<2 ? "  X  |" :  "  X   ");
            }
            else if (o[count] == count){
               std::cout<<(j<2 ? "  O  |" :  "  O   ");
            }
            else if(j<2){
               std::cout<<"     |" ;
            }
            
            count++;
        }
        std::cout<<"\n";
        if (i<2){
            for (int j = 0;j<3;j++){
                std::cout<< (j < 2 ? "-----|" : "-----");
        }
        }
        std::cout<<"\n";
    
    }
}

void check_win(int x[],int o[],bool &game,int c){
     bool x_win = false;
     bool o_win = false;
     int win_pos1 [8][3] = {
                          {1,2,3},
                          {4,5,6},
                          {7,8,9},
                          {1,4,7},
                          {2,5,8},
                          {3,6,9},
                          {1,5,9},
                          {7,5,3},
                          };
    for (int i = 0;i<=7;i++){
        for (int j = 0; j<3;j++){
            if(win_pos1[i][j] == x[win_pos1[i][j]]){
               x_win = true;
            }
            else{
                x_win = false;
                break;
            }
        }
        for (int j = 0; j<3;j++){
            if(win_pos1[i][j] == o[win_pos1[i][j]]){
               o_win = true;
            }
            else{
                o_win = false;
                break;
            }
        }
        if (x_win){
           std::cout<<"*********************** Player X is the Winner **********************\n";
           game = false;
           break;
        }
        else if (o_win){
           std::cout<<"*********************** Player O is the Winner **********************\n";
           game = false;
           break;
        }
        else if (c == 9){
           std::cout<<"*********************** Its a Draw ! ********************************\n";
           game = false;
           break;
        }
    }
}

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
    }while(chose != 'X' && chose != 'x' && chose != 'O' && chose != 'o');
    while(game){
        if (chose == 'X' or chose == 'x'){
           do{
              exist = false; 
              std::cout<<"Player X, enter your move: ";
              std::cin>>xp;
              for (int i = 0;i<=c;i++){     
                  if (pos[i] == xp){
                      exist = true;
                      break; 
                  } 
           }
           }while((xp<1 || xp >9) || exist == true);
           x[xp] = xp;
           pos[c] = xp;
           chose = 'o';
        }
        else if (chose == 'O' or chose == 'o'){
             do{
                 exist = false; 
                 std::cout<<"Player O, enter your move: ";
                 std::cin>>op;
                 for (int i = 0;i<=c;i++){     
                     if (pos[i] == op){
                         exist = true;
                         break;
                     }
           } 
           }while((op<1 || op >9) || exist == true);
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









