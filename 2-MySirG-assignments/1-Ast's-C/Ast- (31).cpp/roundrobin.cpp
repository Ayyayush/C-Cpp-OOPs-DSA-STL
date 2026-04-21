s#include <iostream>
using namespace std;
void update_score_board( int p1,p2,int result,int score_board[][4])
    {
     score_board[p1][p2]=result;
     score_board[p2][p1]=2-result;
   }


   void display_score_board(int score_board[][4])
   {
    int i,j;
    cout<<"score board"<<endl;
    for(i=0;i<=3;i++)
    for(j=0;j<=3;j++)1
    {
    cout<<score_board[i][j];
    cout<<endl;
   }
   }


    int get_player_score(int player,int s)
    {
        int j,sum=0;
        for(j=0;j<=3;j++)
        sum=score_board[player][j];
        return sum;
    }


int find_winner(int score_board[][4])
{
    int player,score;
    player=0;
    winner=player;
   score= get_player_score(player,score_board);
   for(++player;player<=3;player++)
   {
s1=get_player_score(player,score_board);
if(score<s1)
{
    winner=plaer;
    score=s1;
}
   }
   return winner;
   }
 

   