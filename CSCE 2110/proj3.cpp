/*
Author:		Daniel McGartland(danielmcgartland@my.unt.edu)
Date:		12/5/2018
Description:	Turn a file inputed adjacency matrix into an adjacency list
*/
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<string.h>

using namespace std;

//for use assaining colors to the color count
string colorFunc(int x)
{
	switch(x){
		case 0:
			return "<BLUE>";
			break;
		case 1:
			return "<GREEN>";
			break;
		case 2:
			return "<RED>";
			break;
		case 3:
			return "<CYAN>";
			break;
		case 4:
			return "<MAGENTA>";
			break;
		case 5:
			return "<LIGHT GREY>";
			break;
		default:
			return "<OOPS>";
			break; 
	}	
}


int main()
{	
	vector<string> places;
	vector<string> borderVec;
	string input, line;
	int parse = 0;

	//get input file
	cout << "Please enter the name of your input file\n";
	cin  >> input;
	
	//open input file
	ifstream fin(input.c_str());

	//parse file
	stringstream comma;
	if(fin)
	{
		while(getline(fin, input))
		{
			istringstream comma(input);
			if(parse == 0)
			{
				while(getline(comma, input, ','))
				{
					places.push_back(input);
				}
				parse++;
			}
			while(getline(comma, input, ','))
			{
				borderVec.push_back(input);
			}
		}
	}
	fin.close();

	//declare the matrix
	string border[places.size()][places.size()];
	int color[places.size()];
	int z = 0;

	//initialize colors array
	for(int i = 0; i< places.size(); i++)
	{
		color[i] = 1;
	}
	color[places.size()-1] = 0;
	
	//place bordervec into border
	for(int k = 0; k < places.size(); k++)
	{
		for(int j = 0; j < places.size(); j++)
		{
			string temp3;
			temp3 = borderVec[z];
			border[j][k] = temp3;

			z++;
		}
	}
	
	//assign color array
	int colorCount = 1;
	for(int i = 0; i< places.size();i++)//for y axis of the matrix
        {
                for(int j = 0; j < places.size(); j++)//for x axis of the matrix
                {
                        string tempstr = "1";
                        if(!border[i][j].compare(tempstr))//check for border
                        {
                                if(color[i] == color[j] && color[i] == colorCount && i != j)
				{
					color[j] += 1;
				}
                        }
			for(int m = i; m < places.size(); m++)
			{
				if(!border[m][j].compare(tempstr))
				{
					if(color[m] == color[j] && color[m] == colorCount && m != j)
					{
						color[m] += 1;
					}
				}
                	}
		}
		colorCount +=1;
        } 


	//print the matrix
	/*for(int i = 0; i < places.size();i++)
	{
		for(int j = 0; j < places.size(); j++)
		{
			cout << border[i][j] << " ";
		}
		cout << endl;
	}*/

	//print out the adjacency list
	for(int i = 0; i< places.size();i++)
        {
		cout << places[i] << " :" << colorFunc(color[i]) << " -";
                for(int j = 0; j < places.size(); j++)
                {
			string tempstr = "1";
                        if(!border[i][j].compare(tempstr))
			{
				cout << places[j] << " :" << colorFunc(color[j]) << ", ";
			}
                }
                cout << endl;
        }
	
	//print out degree of each country
	cout << "\n\n";
	int total =0;
	for(int i = 0; i< places.size();i++)
        {
		int count = 0;
                cout << places[i] << " is degree - ";
                for(int j = 0; j < places.size(); j++)
                {
                        string tempstr = "1";
                        if(!border[i][j].compare(tempstr))
                        {
                                count++;
                        }
                }
		cout << count;
		total = (total + count);
                cout << endl;
        }

	total = (total/places.size());
	cout << "\nThe Average degree is: " << total << endl;
	return 0;
}
