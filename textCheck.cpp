#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class LineWord
{
  int wline;
  string line; 
};

int main ()
{
  ifstream fin;
  ifstream finn;
  fin.open("post_process_Tue 02282_12-05-11-18.log");
  finn.open("post_process_Wed 03012_12-05-11-42.log");

  string text1;
  string text2;
  vector<LineWord> LineWord;
  LineWord a;
  int lineCounter = 0;
  bool difference = true;

  while (fin.good())
  {
    cin.ignore(1,1000);
    getline(fin,text1); 
    cin.ignore(1,1000);
    getline(finn,text2);
    lineCounter++;
    if( text1 != text2)
    {
      a.wline = lineCounter;
      a.LineWord = text2;
      LineWord.push_back(a);
    }
  }

    cout << text1 << endl;
    cout << text2 << endl;

    fin.close();
    finn.close();

}