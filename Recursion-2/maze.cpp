#include<iostream>
using namespace std;
int findInMaze(int sr,int sc,int er,int ec) {
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int downways = findInMaze(sr+1,sc,er,ec);
    int rightways = findInMaze(sr,sc+1,er,ec);
    return downways+rightways;
}
int main()
{
    cout<<findInMaze(0,0,2,2); //starting row-sr, starting column->sc, ending row- er, ending column- ec

    return 0;
}