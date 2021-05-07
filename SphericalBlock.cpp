#include<Header.h>
class SphericalBlock: public CuboidBlocks{
public:

    void mysphericalBlock(){

        double diameterArr[60];
        double SurfareaArr[60];
        double VolumeArr[60];

        const double PI = 3.14;

        cout<< "Diam"<<"\t"<<"Area"<<"\t"<<"volume"<<endl;

        for (int i=0; i<60;i++){

            if ((i%3==0)&&(squareBaseSide[i] == squareBaseSide[i+1])&& (squareBaseSide[i+1]==squareBaseSide[i+2])){

                     cout<< endl<< " "<<endl;

                    diameterArr[i] = squareBaseSide[i]*4 / PI;

                    VolumeArr[i] = (4/3)*PI*(diameterArr[i]/2) *(diameterArr[i]/2)*(diameterArr[i]/2);

                    SurfareaArr[i]= 4*PI*(diameterArr[i]/2) * (diameterArr[i]/2);

                    cout<<diameterArr[i]<<"\t"<<  SurfareaArr[i]<< "\t "<<VolumeArr[i] ;

            }

        }
        cout<<endl;
        cout<<endl;
}

};

