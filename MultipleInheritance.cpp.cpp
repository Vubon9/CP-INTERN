#include <bits/stdc++.h>
using namespace std;
class Producer
{
public:
    void produce()
    {
        cout << "Producing item" << endl;
    }
};
class PrimaryConsumer : public Producer
{
public:
    void rate()
    {
        cout << "Rat eats producing item" << endl;
    }
};
class SecondaryConsumer : public PrimaryConsumer
{
public:
    void review()
    {
        cout << "Snake eats primary consumer" << endl;
    }
};
class TertiaryConsumer : public SecondaryConsumer
{
public:
    void ecosystem()
    {
        cout << "Ecosystem balance" << endl;
    }
};
class MGForest
{
public:
    void MG()
    {
        cout<<"Mangrove Forest"<<endl;
    }
};
class Mammal
{
public:
    void mammal()
    {
        cout<<"Tiger is a mammal"<<endl;
    }
};
int main()
{
    TertiaryConsumer ob;
    MGForest ob1;
    Mammal ob2;
    ob.produce();
    ob.rate();
    ob.review();
    ob.ecosystem();
    ob1.MG();
    ob2.mammal();


    return 0;
}
