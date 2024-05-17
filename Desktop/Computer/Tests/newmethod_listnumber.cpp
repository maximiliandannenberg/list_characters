#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

class Myclass {
    public: 

        char character;
        int times;
        bool remove;

    Myclass (char initialcharacter, int initialtimes, bool startfrom0) : character(initialcharacter), times(initialtimes), remove(startfrom0){}

    void display(){  
     std::cout << "Character: " << character << "    times: "  << times << /*"   " << remove <<*/ "\n";      
    }
};

// hello world

// h : 1, e : 1, l:2

//Thank you Rohan for helping me implement a hashmap to more efficiently search through characters.
//Rest of the code has still not been fully implented to order the values.

void count2(std::string& myText)
{
    std::unordered_map<char, int> counts;

    for (int i=0; i < myText.length(); i++)
    {
        if (counts.find(myText[i]) == counts.end())
        {
            counts[myText[i]] = 1;
        }
        else
        {
            counts[myText[i]]++;
        }
    }

    //
    for (const auto& letterCountPair : counts)
    {
        std::cout << letterCountPair.first << " : " << letterCountPair.second << "\n";
    }

}


int main(){

    std::string mytext;
    std::cout << "insert a text or number and we will tell you the most common digit" << "\n";
    std::getline(std::cin, mytext); 

    count2(mytext);


//     std::vector<Myclass> myobjects;

//     for(int i = 0; i < mytext.length(); i++){ //we start at 1 instead of 0 because we already initialized obj[1]

//         bool found = false;

//             for(int j = 0; j < myobjects.size(); j++){
//             if (mytext[i] == myobjects[j].character){
//                 myobjects[j].times = myobjects[j].times + 1;
//                 found = true;
//                 break;
//                 }
//             }


//             if (found == false){
//                 myobjects.push_back(Myclass(mytext[i],1,0));
//                 //changed from my.objects.push_back(Obj); This worked just aswell. But then you also have to initialize all the values.
                
//             } 

//     }

//     // create a function to order them correctly.

//     for (int i = 0; i < myobjects.size(); i++){
// // Compare leading largest to rest. to find the largest
// // remove from loop by creating a remove data type in the obj from false to true.
// // i will be the leading group, j will be the contenders.

//         for (int j = 0; j < myobjects.size(); j++){
//              if(myobjects[i].times < myobjects[j].times && myobjects[j].remove == false){

//                 std::swap (myobjects[i], myobjects[j]);
//                 //code will find the largest element from the nonremoved. 
//              }
//                 //removes indices from the next j for loop.
//         }
//                      myobjects[i].remove = true;
//     }

//     std::cout << "\n";
//     std::cout << myobjects.size();
//     std::cout << "\n";
//     std::cout << myobjects[1].times;
//     std::cout << "\n";

// for(int i = 0; i < myobjects.size(); i++){
//     myobjects[i].display();
// }

    return 0;
}
