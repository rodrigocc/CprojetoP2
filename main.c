#include <stdio.h>

char table[3][3];
char player1[50] , player2[50];

void runTable(){
    int indexLine, indexColumn;

    for (indexLine = 0; indexLine < 3; indexLine++)
    {
        for (indexColumn = 0; indexColumn < 3; indexColumn++)
        {
            table[indexLine][indexColumn] = 'a';
        }
    }


}

int isCharacterValid(char character){
    if(character == 'x' || character == '0')
    return 1;
    else
        return 0;
}

int coordinateIsValid(int coordLine , int coordColumn){
    if(coordLine >= 0 && coordLine<3){
        if(coordColumn >= 0 && coordColumn< 3 )
            return 1;
    }
    return 0;

}

int positionIsEmpty(int  coordLine , int coordColumn){

    if(table[coordLine][coordColumn] != 'x'&& table[coordLine][coordColumn]!= '0')
        return 1;
    return 0;
}


int winByLines(){
    int coordLine ,coordColumn , igual = 1;
    for(coordLine = 0 ; coordLine <3 ; coordLine++){
        for(coordColumn = 0; coordColumn<2; coordColumn++){
            if(isCharacterValid(table[coordLine][coordColumn]) && table[coordLine][coordColumn+1])
                igual ++;
        }
        if(igual == 3){
            return 1 ;
            igual = 1 ;
        }
        return 0 ;
    }
}

int winByColumns(){
    int coordLine ,coordColumn , igual = 1;
    for(coordLine = 0 ; coordLine <3 ; coordLine++){
        for(coordColumn = 0; coordColumn<2; coordColumn++){
            if(isCharacterValid(table[coordColumn][coordLine]) && table[coordColumn + 1][coordLine])
                igual ++;
        }
        if(igual == 3){
            return 1 ;

            igual = 1 ;
        }
        return 0 ;
    }
}



int winByMainDiagonals(){
    int i, igual =1 ;

//    for(i = 0 ; i < 3 ; i++){
//        if(isCharacterValid())
//    }
}

int winBySecondaryDiagonals(){
}

int main()

{

}
