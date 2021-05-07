#include<Header.h>

class CuboidBlocks: public SqrBaseRectBlocks{

public:

    void mycuboidBlocks(){

        //loop to check if W=H=L

        cout<< " The content for the CuboidBlocks class: "<<endl;

        for (int i=0; i<60;i++){

            if((i%3 == 0)&&(squareBaseSide[i] == squareBaseSide[i+1])&&(squareBaseSide[i+1]==squareBaseSide[i+2])){
                    cout<<endl<<" "<<endl;

                    //display L,W,H

                    cout<< " "<<squareBaseSide[i]<<" "<<squareBaseSide[i+1]<<" "<<squareBaseSide[i+2]<<endl;

            }
        }
        cout<<endl;
    }

};
