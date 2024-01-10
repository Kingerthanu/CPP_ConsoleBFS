#include "map.h"


using namespace std;

int main()
{

  Map map(10, 10);

  map.setStart(0,1);
  map.setEnd(9, 9);

  Block* tmp = map.BFS(map.getStart());

  while(tmp){

    tmp->setState(8);
    tmp = tmp->prev;
    
  }

  map.display();
  
}