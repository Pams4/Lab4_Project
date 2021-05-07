#include<Header.h>

int* NumArray = new int [60];

class RectBlocks{
public:
    void myRectBlocks(){

        ifstream data("dataBlocks.txt");
        istream_iterator<double> start(data), end;

        vector <double> numbers(start,end);

        cout<< "The dataBlocks.txt content: "<< endl;
        for(int i = 0; i<60; i++){

            if (i%3 ==0){

                cout<<endl<<" "<<endl;
            }
           NumArray[i] = numbers[i];
           cout<<" "<< NumArray[i];

        }

        cout<<endl;
            }

};
