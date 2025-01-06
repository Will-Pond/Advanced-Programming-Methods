#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void top(int*, int);
void pop(int*, int&);
void push(int*, int, int&, int);


void processData(ifstream & inf,vector<int>CPPstack, int * Cstack, int size)
{
    int numelts = 0;
    string word;
    int number;
    vector<int>::reverse_iterator iter;

    while(inf >> word >> number)
    {
        if(word == "PUSH")
        {
            push(Cstack, size, numelts, number);
            if(numelts < size)
            {
                CPPstack.push_back(number);
                numelts++;
            }
            else
            {
                cout<<"NO PUSH - STACK IS FULL"<<endl;
                exit(0);
            }
        }
        else if(word == "TOP")
        {
            top(Cstack,numelts);
            if(!CPPstack.empty())
            {
                cout<<CPPstack.back()<<endl;
            }
            else
            {
                cout<<"NO TOP"<<endl;
            }
        }
        else if(word == "POP")
        {
            pop(Cstack,numelts);
            if(!CPPstack.empty())
            {

                CPPstack.erase(CPPstack.end());
            }
            else
            {
                cout<<"NO POP - STACK IS EMPTY"<<endl;
            }
        }
    }
    cout<<"\nCPPSTACK"<<endl;
    if(!CPPstack.empty())
    {
        for(iter = CPPstack.rbegin(); iter != CPPstack.rend(); iter++)
        {
            cout<<*iter<<endl;
        }
    }
    else
    {
        cout<<"STACK IS EMPTY"<<endl;
    }
    cout<<"\nCSTACK"<<endl;
    if(numelts != 0)
    {
        for(int i = numelts; i > 0; i--)
        {
            cout<<Cstack[i -1]<<endl;
        }
    }
    else
    {
        cout<<"STACK IS EMPTY"<<endl;
    }
}

int main()
{
    string Path;
    int *Cstack;
    int size;
    vector<int> CPPstack;

    cout<<"Enter Path for a file\n";
    cin>>Path;
    ifstream inf(Path);

    if(!inf)
    {
        cout<<"File Not Found\n";
        exit(25);
    }

    inf>>size;
    Cstack = (int*)malloc(size * sizeof(int));

    processData(inf,CPPstack,Cstack, size);

    inf.close();
    return 0;
}
void push(int * Cstack, int size, int &numelts, int number)
{
    if(numelts < size)
    {
        Cstack[numelts] = number;
    }
    else
    {
        cout<<"NO PUSH - STACK IS FULL"<<endl;
    }

}

void pop(int * Cstack, int &numelts)
{
    if(numelts == 0)
    {
        cout<<"NO POP - STACK IS EMPTY"<<endl;
    }
    else
    {
        Cstack[numelts-1] = Cstack[numelts-1];
        numelts--;
    }
}

void top(int * Cstack, int numelts)
{
    if(numelts == 0)
    {
        cout<<"NO TOP"<<endl;
    }
    else
    {
        cout <<Cstack[numelts-1]<< endl;
    }
}










