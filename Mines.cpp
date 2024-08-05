#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void mines_board();
void user_input();
int random_no();
int amnt();
bool check();
void main_2();
void mines_board_2();
bool check_2();
void main_3();
void mines_board_3();
bool check_3();
void main_4();
void mines_board_4();
bool check_4();
void main_5();
void mines_board_5();
bool check_5();
string spaces[5][5]={{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "}};
int f,b;
int amt=999999;
int main()
{
    cout<<" Enter your bet:";
    cin>>b;
    amt=amt-b;
    mines_board();
    user_input();
    random_no();
    check();
    mines_board();
}
void mines_board()
{
    cout<<"\n---------------------------------------------------\n";
    cout<<"|  "<<spaces[0][0]<<"  |    |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|  "<<spaces[0][1]<<"  |    |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|  "<<spaces[0][2]<<"  |    |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|  "<<spaces[0][3]<<"  |    |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|  "<<spaces[0][4]<<"  |    |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
}
void user_input()
{
    cout<<"Enter a number between 1 and 5:";
    cin>>f;
    if(f<1 || f>5)
    {
        cout<<"Enter again..";
        cin>>f;
    }

}
int random_no()
{
    srand(time(0));
    int r= rand() % 6;
    return r;
}
bool check()
{
    if(f==random_no())
    {
        cout<<"CONGRATULATIONS YOU WIN!!\n"<<
        "YOUR BET IS DOUBLED\n";
        cout<<"Amount="<<amt+2*b<<"\n";
        spaces[0][random_no()-1]="+";
        main_2();
    }
    else
    {
        cout<<"Uh oh..You lose.\n";
        spaces[0][random_no()-1]="-";
        cout<<"Amount="<<amt<<"\n";
    }
}
void main_2()
{
    mines_board();
    user_input();
    random_no();
    check_2();
    mines_board_2();
}
void mines_board_2()
{
    cout<<"\n---------------------------------------------------\n";
    cout<<"|    |  "<<spaces[1][0]<<"  |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |  "<<spaces[1][1]<<"  |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |  "<<spaces[1][2]<<"  |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |  "<<spaces[1][3]<<"  |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |  "<<spaces[1][4]<<"  |    |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
}
bool check_2()
{
    if(f==random_no())
    {
        cout<<"CONGRATULATIONS YOU WIN!!\n"<<
        "YOUR BET IS DOUBLED\n";
        cout<<"Amount="<<amt+2*b<<"\n";
        spaces[1][random_no()-1]="+";
        main_3();
    }
    else
    {
        cout<<"Uh oh..You lose.\n";
        spaces[1][random_no()-1]="-";
        cout<<"Amount="<<amt<<"\n";
    }
}
void main_3()
{
    mines_board_2();
    user_input();
    random_no();
    check_3();
    mines_board_3();
}
void mines_board_3()
{
    cout<<"\n---------------------------------------------------\n";
    cout<<"|    |    |  "<<spaces[2][0]<<"  |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |  "<<spaces[2][1]<<"  |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |  "<<spaces[2][2]<<"  |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |  "<<spaces[2][3]<<"  |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |  "<<spaces[2][4]<<"  |    |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
}
bool check_3()
{
    if(f==random_no())
    {
        cout<<"CONGRATULATIONS YOU WIN!!\n"<<
        "YOUR BET IS DOUBLED\n";
        cout<<"Amount="<<amt<<"\n";
        spaces[2][random_no()-1]="+";
        main_4();
    }
    else
    {
        cout<<"Uh oh..You lose.\n";
        spaces[2][random_no()-1]="-";
        cout<<"Amount="<<amt<<"\n";
    }
}
void main_4()
{
    mines_board_3();
    user_input();
    random_no();
    check_4();
    mines_board_4();
}
void mines_board_4()
{
    cout<<"\n---------------------------------------------------\n";
    cout<<"|    |    |    |  "<<spaces[3][0]<<"  |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |  "<<spaces[3][1]<<"  |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |  "<<spaces[3][2]<<"  |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |  "<<spaces[3][3]<<"  |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |  "<<spaces[3][4]<<"  |    |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
}
bool check_4()
{
    if(f==random_no())
    {
        cout<<"CONGRATULATIONS YOU WIN!!\n"<<
        "YOUR BET IS DOUBLED\n";
        cout<<"Amount="<<amt+2*b<<"\n";
        spaces[3][random_no()-1]="+";
        main_5();
    }
    else
    {
        cout<<"Uh oh..You lose.\n";
        spaces[3][random_no()-1]="-";
        cout<<"Amount="<<amt<<"\n";
    }
}
void main_5()
{
    mines_board_4();
    user_input();
    random_no();
    check_5();
    mines_board_5();
}
void mines_board_5()
{
    cout<<"\n---------------------------------------------------\n";
    cout<<"|    |    |    |    |  "<<spaces[4][0]<<"  |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |    |  "<<spaces[4][1]<<"  |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |    |  "<<spaces[4][2]<<"  |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |    |  "<<spaces[4][3]<<"  |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
    cout<<"|    |    |    |    |  "<<spaces[4][4]<<"  |    |    |    |    |    |\n";
    cout<<"---------------------------------------------------\n";
}
bool check_5()
{
    if(f==random_no())
    {
        cout<<"CONGRATULATIONS YOU WIN!!\n"<<
        "YOUR BET IS DOUBLED\n";
        cout<<"Amount="<<amt+2*b<<"\n";
        cout<<"CONGRATS YOU WON THE GAME!!!\n";
        spaces[4][random_no()-1]="+";
        
    }
    else
    {
        cout<<"Uh oh..You lose.\n";
        spaces[4][random_no()-1]="-";
        cout<<"Amount="<<amt<<"\n";
    }
}
