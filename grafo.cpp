#include <iostream>
#include <list>
#include <iostream>
#include <fstream>
#include <time.h> 
#include <stdio.h>  
#include <limits.h>

using namespace std;

class Grafo {
    int num;
    list<int> *list_ad;   
  public:
    Grafo(int num); 
    void add_arista(int v, int w); 
};

Grafo::Grafo(int num){
    this->num = num;
    list_ad = new list<int>[num];
}

void Grafo::add_arista(int ini, int fin){
    list_ad[ini].push_back(fin); 
}
int main()
{

    Grafo g(5);
    g.add_arista(5, 0);
    g.add_arista(0, 1);
    g.add_arista(0, 2);
    g.add_arista(1, 2);
    g.add_arista(2, 0);
    g.add_arista(2, 3);
    g.add_arista(4, 2);
    g.add_arista(3, 3);


    return 0;
}
