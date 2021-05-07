#include<Header.h>

int * squareBaseSide = new int[60]; //array to be used in the derived class

class SqrBaseRectBlocks: public RectBlocks{
public:

    void mysqrBaseRectBlocks(){

        cout<< " The SqrBaseRectBlocks class content is: "<<endl;

        for (int i=0;i<60;i++){

                if ((i%3 ==0)&& (NumArray[i] == NumArray[i+1])){

                    cout<<endl<<" "<<endl;

                    squareBaseSide[i] = NumArray[i];
                    squareBaseSide[i+1]=NumArray[i+1];
                    squareBaseSide[i+2] = NumArray[i+2];

                    cout<<" "<<NumArray[i]<<" "<< NumArray[i+1]<< " "<<NumArray[i+2]<<endl;

                }
                if((i%3 ==0)&& (NumArray[i] != NumArray[i+1])){

                    squareBaseSide[i] = 0;
                }
        }

    cout<<endl;


    }
};
