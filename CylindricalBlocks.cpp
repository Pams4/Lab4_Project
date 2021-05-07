#include<Header.h>

class CylindricalBlocks: public SqrBaseRectBlocks{
public:

    void mycylindricalBlocks(){

        double diameterArr[60];
        double lenghtArr[60];
        double surfAreaArr[60];
        const double PI = 3.14;

        //loop that assigns the diameter, height, and surface area for every cylindrical Blocks in the array
        cout<< "Surf"<<"\t"<<"Diam"<<"\t"<<"Len"<<endl;
        for(int i = 0; i<60;i++){

            if ((i%3 == 0)&&(squareBaseSide[i] == squareBaseSide[i+1])&&(squareBaseSide[i+1] == squareBaseSide[i+2])){

                    cout<< endl<< " "<<endl;

                    diameterArr[i] = squareBaseSide[i]*4/PI;
                    lenghtArr[i] = squareBaseSide[i+2];
                    surfAreaArr[i]= diameterArr[i]*PI*(lenghtArr[i]+ (lenghtArr[i]/2));

                    cout<<surfAreaArr[i]<<" \t"<< diameterArr[i]<< "\t "<<lenghtArr[i] ;

            }

        }
        cout<<endl;
        cout<<endl;


    }

};
