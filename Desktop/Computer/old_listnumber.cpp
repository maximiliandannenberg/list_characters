#include <iostream>
#include <string>
#include <vector>

/*/////////////////////////////////////////////////////////////////////////////
// This is the old copy using a different style with the objects and classes //
/////////////////////////////////////////////////////////////////////////////*/


class Myclass {
    public: 

        char character;
        int times;
        bool remove;

    void display(){  
     std::cout << "item: " << character << "    times: "  << times << /*"   " << remove <<*/ "\n";      
    }

};


int main(){

    std::string mytext;
    std::cout << "insert a text or number and we will tell you the most common digit" << "\n";
    std::getline(std::cin, mytext);

        
  

    std::vector<Myclass> myobjects;
       
        Myclass Obj; 
        Obj.character = mytext[0];
        Obj.times = 1;
        Obj.remove = false;
        myobjects.push_back(Obj);


    for(int i = 1; i < mytext.length(); i++){ //we start at 1 instead of 0 because we already initialized obj[1]

        bool found = false;


            for(int j = 0; j < myobjects.size(); j++){
            if (mytext[i] == myobjects[j].character){
                myobjects[j].times = myobjects[j].times + 1;
                found = true;
                break;
                }
            }


            if (found == false){
                Obj.character = mytext[i];
                Obj.times = 1;
                Obj.remove = false;
                myobjects.push_back(Obj);
            } 

    }

    // create a function to order them correctly.

    for (int i = 0; i < myobjects.size(); i++){
// Compare leading largest to rest. to find the largest
// remove from loop by creating a remove data type in the obj from false to true.
// i will be the leading group, j will be the contenders.

        for (int j = 0; j < myobjects.size(); j++){
             if(myobjects[i].times < myobjects[j].times && myobjects[j].remove == false){

                std::swap (myobjects[i], myobjects[j]);
                //code will find the largest element from the nonremoved. 
             }
                //removes indices from the next j for loop.
        }
                     myobjects[i].remove = true;
    }

    std::cout << "\n";
    std::cout << myobjects.size();
    std::cout << "\n";
    std::cout << myobjects[1].times;
    std::cout << "\n";

for(int i = 0; i < myobjects.size(); i++){
    myobjects[i].display();
}

    return 0;
}