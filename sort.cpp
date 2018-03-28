#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;


void BubbleSort(auto data);//prototype


int main()
{
  vector<string> inputs;
  string search_key, input;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   
 

	BubbleSort(inputs);


   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}



void BubbleSort(auto Data)
{
	string temp;
	
	for(int k = 1; k < Data.size(); k++)
	{
		for(int i = 0; i < Data.size() -1 - k; i++)
		{
			if(Data[i] > Data[i + 1])
			{
				temp = Data[i];
				Data[i] = Data[i+1];
				Data[i+1] = temp;
			
			}
			else;
		}

	}	
	cout << "The Sorted List" << endl;
	for(int i=0; i < Data.size(); i++)
	{
		cout << Data[i] << endl;
	}
}

