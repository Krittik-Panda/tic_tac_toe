
#include<stdio.h>
#include<stdlib.h>
//function to print grid
void show_grid(char grid[3][3])
{
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%c\t",grid[i][j]);
        }
        printf("\n");
    }
}
//function for print turn
void turn_first()
{
    printf("1st player's turn \n");
}
//function for print turn
void turn_second()
{
    printf("2nd player's turn \n");
}

int main()
{
    char grid[3][3]= {'-','-','-','-','-','-','-','-','-'};
    int pos;
    char sign;

    //notice
    printf("\n\n");
    printf("\t----------------WELCOME TO TIC-TAC-TO GAME--------------\n\n\n");
    printf("\tTURN ON CAPS LOCK \n\n\n");
    printf("\t_________________________________________________________\n\n\n");
    printf("\tASSUME - THIS MEANS EMPTY BLOCK \n\n\n  LETS START THE GAME \n\n\n");
    show_grid(grid);

    printf("\n\n");
    for(int i=0;i<9;i++)
    {
        //alter the turn of the players 
      if(i%2==0)
      {
            turn_first();
      }
      else
      {
            turn_second();
      }
        //main code for game     
        printf("Enter the position  in between 1 to 9 : \n");
        scanf("%d",&pos);

        if(pos<1 || pos>9)
        {
            printf("enter the valid position   \n  TRY AGAIN !! \n");
            exit(0);
            
        }

        printf("enter X or O \n");
        scanf(" %c",&sign);
       
        if(sign!='X' && sign!='O')
        {
            printf("enter X or O \n  TRY AGAIN !! \n");
            exit(0);
        }

        printf("\n\n");

//grid allocation
        if(pos==1)
        {
            grid[0][0]=sign;
        }
        else if(pos==2)
        {
            grid[0][1]=sign;
        }
         else if(pos==3)
        {
            grid[0][2]=sign;
        }
        else if(pos==4)
        {
            grid[1][0]=sign;
        }
        else if(pos==5)
        {
            grid[1][1]=sign;
        }
        else if(pos==6)
        {
            grid[1][2]=sign;
        }
        else if(pos==7)
        {
            grid[2][0]=sign;
        }
        else if(pos==8)
        {
            grid[2][1]=sign;
        }
        else
        {
            grid[2][2]=sign;
        }

        //winning condition
        
        for(int i=0;i<3;i++)
        {
            if((grid[i][0]=='X' && grid[i][1]=='X' && grid[i][2]=='X')||(grid[i][0]=='O' && grid[i][1]=='O' && grid[i][2]=='O'))
            {
                if(i%2==0)
                {
                printf("player 1 win the game \n\n\n");
                show_grid(grid);
                exit(0);
                }
                else
                {
                printf("player 2 win the game \n\n\n");
                show_grid(grid);
                exit(0);
                }

            }

        }

        for(int j=0;j<3;j++)
        {
            if((grid[0][j]=='X' && grid[1][j]=='X' && grid[2][j]=='X')||(grid[0][j]=='O' && grid[1][j]=='O' && grid[2][j]=='O'))
            {
                 if(i%2==0)
                {
                printf("player 1 win the game \n\n\n");
                show_grid(grid);
                exit(0);
                }
                else
                {
                printf("player 2 win the game \n\n\n");
                show_grid(grid);
                exit(0);
                }
            }
        }

        if((grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X')||(grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O'))
        {
             if(i%2==0)
                {
                printf("player 1 win the game \n\n\n");
                show_grid(grid);
                exit(0);
                }
                else
                {
                printf("player 2 win the game \n\n\n");
                show_grid(grid);
                exit(0);
                }
        }
       
        show_grid(grid);
   
    }
     
    //show_grid(grid);
    printf("\n\n");
    printf("\tNONE WIN , IT'S A DRAW !!!\n\n\n");
    
    return 0;

}
