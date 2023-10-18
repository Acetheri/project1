#include <iostream>
#include <string>



std::string project1(std::string input){
    char inputArr[] = {'w','e','r','t','y','u','i','o','p','[',']','s','d','f','g','h','j'
    ,'k','l',';','x','c','v','b','n','m',',','.'};
    char outputArr[] = {'q','w','e','r','t','y','u','i','o','p','[','a','s','d','f','g','h','j'
    ,'k','l','z','x','c','v','b','n','m',','};
    int length = 30;
    for(int k = 0; k < length; k++){
        inputArr[k] = toupper(inputArr[k]);
    }
    for(int m = 0; m < length; m++){
        outputArr[m] = toupper(outputArr[m]);
    }

    std::string temp;
    for(int i = 0; i < input.length(); i++){
        for(int j = 0; j < 30; j++){
            if(input[i] == inputArr[j]){  
                temp += outputArr[j];
            }
        }
        if(input[i] == ' '){
            temp += ' ';
        }
    }
    return temp;
}



int main(){
    std::cout << project1("O S, GOMR YPFSU")<< std::endl; 
}