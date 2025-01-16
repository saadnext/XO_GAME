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
               std::cout<<(j<2 ? " ❌  |" :  "  ❌   ");
            }
            else if (o[count] == count){
               std::cout<<(j<2 ? " 🟢  |" :  "  🟢    ");
            }
            else if(j<3){
                std::cout<<"  "<<count << (j<2 ? "  |" : "   ") ;
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
    bool x_win , o_win;
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
    for (int i = 0;i<8;i++){
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
    }
    if (c == 9 && !o_win && !x_win){
           std::cout<<"*********************** Its a Draw ! ********************************\n";
           game = false;
    }
}
