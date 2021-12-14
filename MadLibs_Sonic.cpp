// This is a basic program on C++
//
// Try to modify and run it and check out
// the output in the terminal below.
//
// Happy coding! :-)

#include <iostream>
using namespace std;

int main() {
    string animal, color, food, bodyPart, shrekCharacter, verb, celebrity;
    string nouns[5];
    string pluralNouns[2];
    string adjectives[4];
    string miles;


  
    cout << "Enter an animal: ";
    getline(cin,animal);
    
    cout << "Enter a noun: ";
    getline(cin,nouns[0]);
    
    cout << "Enter a color:";
    getline(cin,color);
    
    cout << "Enter a noun : ";
    getline(cin,nouns[1]);
  
    cout << "Enter a number: ";
    getline(cin,miles);

    cout << "Enter a celebrity: ";
    getline(cin,celebrity);
  
    cout << "Enter a pluralnoun: ";
    getline(cin,pluralNouns[0]);
  
    cout << "Enter a verb: ";
    getline(cin,verb);
  
    cout << "Enter a pluralNoun: ";
    getline(cin,pluralNouns[1]);
  
    cout << "Enter an adjective: ";
    getline(cin, adjectives[0]);
  
    cout << "Enter a character from Shrek: ";
    getline(cin,shrekCharacter);
  
    cout << "Enter a noun: ";
    getline(cin,nouns[2]);
  
    cout << "Enter an adjective: ";
    getline(cin,adjectives[1]);
  
    cout << "Enter a type of food:";
    getline(cin,food);
  
    cout << "Enter an adjective: ";
    getline(cin,adjectives[2]);
  
    cout << "Enter a noun: ";
    getline(cin,nouns[3]);
  
    cout << "Enter a part of the body: ";
    getline(cin,bodyPart);
  
    cout << "Enter an adjective: ";
    getline(cin,adjectives[3]);


    cout <<"\n\n\nSonic the Hedge-( " << animal <<" ) is a Sonic ( " << nouns[0]<< " ) with"<< endl;
    cout <<"( " << color << " ) fur. He is the fastest ( " << nouns[1] << " ) around and can"<< endl;
    cout <<"run ( " << miles<< " ) miles an hour. ( " <<celebrity<< " ) the Hedgehog also" << endl;
    cout <<"has super_power ( " << pluralNouns[0] << " ) and can ( " << verb << " ) better"<< endl;
    cout <<"than almost anyone. Sonic is able to harness the power of the "<< endl;
    cout <<"Chaos ( " << pluralNouns[1] << " ), which are ( "<< adjectives[0]<<"powered crystals that"<< endl; 
    cout <<"allow him to transform into Super ( " << shrekCharacter << " ). Sonic may be a/an"<< endl;
    cout <<"( "<< nouns[2] <<" ),but he doesn't just use his ( " <<  adjectives[1]<< " ) abilities for fun,"<<endl;
    cout <<"he uses the to defeat his enemies, such as Dr.( " << food << " )-man."<<endl;
    cout <<"And he does it all with a ( " << adjectives[2] << " ) smile and a confident"<<endl; 
    cout <<"( " << nouns[3] << " )-even though somepeople think that his ( " << bodyPart << " )" << endl;
    cout <<"is too big. One thing is for certain: Sonic is definitely a ( " << adjectives[3]<< " )" << endl;
    cout <<"hero.";
  
    return 0;
}
