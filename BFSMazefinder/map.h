#ifndef MAP_H
#define MAP_H

#include <vector>
#include "block.h"
#include <queue>
#include <iostream>
#include <random>

class Map{

  private:
    int height, width; // Size of map
    Block* start = nullptr, *end = nullptr;
    std::vector<std::vector<Block*>> map; // Map for BFT

  public:
    /*
      Desc: Take in size of map to traverse for search algorithm
    */
    Map(int h, int w)
    {

      this->map = std::vector<std::vector<Block*>>(h, std::vector<Block*>(w));
      this->height = h;
      this->width = w;

      for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
          this->map[i][j] = new Block(i, j);
        }
      }

      this->randWalls();

    };
    
    /*
      Desc: Gets kids of current block (MAY WANT TO USE STACK AS RETURN BUT PROBS FINE)
    */
    std::queue<Block*> getKids(int x, int y)
    {

      if((x >= height || y >= width) || (x < 0 || y < 0)) return std::queue<Block*>();

      std::queue<Block*> tmp;

      if(x-1 > -1 && !this->map[x-1][y]->isVisited()) tmp.push(this->map[x-1][y]);

      if(y-1 > -1 && !this->map[x][y-1]->isVisited()) tmp.push(this->map[x][y-1]);

      if(x+1 < this->height && !this->map[x+1][y]->isVisited()) tmp.push(this->map[x+1][y]);

      if(y+1 < this->width && !this->map[x][y+1]->isVisited()) tmp.push(this->map[x][y+1]);

      return tmp;
    };

    /*
      Desc: Set end block for search algorithm
    */
    void setEnd(int x, int y)
    {
      
      end = this->map[x][y];

    };

    Block* getStart()
    {
      return this->start;
    }

    /*
      Desc:  Set start block for search algorithm
    */
    void setStart(int x, int y)
    {
      
      start = this->map[x][y];

    };

    /*
      Desc:  Returns true if end block for search algorithm
    */
    bool isExit(Block const*& node)
    {

      return (node == this->end);

    };

    Block* BFS(Block* head)       // Need to add walls; may need to do some funnies to work with them.
    {

      std::queue<Block*> tmp({head});

      while(!tmp.empty()){ // While we still have nodes

        head = tmp.front(); // Get closest

        tmp.pop();

        if(!head->isVisited()){ // If this node isn't a wall, check

          head->setVisited(1); // Set current to checked

          std::queue<Block*> kids = this->getKids(head->x, head->y); // Find children of current node

          for(Block* cur; !kids.empty(); kids.pop()){ // Go through children and check if they are needed to be considered

            cur = kids.front(); // Set to first child

            if(!cur->isVisited()){
              tmp.push(cur);
              cur->prev = head; // Treat like recursion; this current path will connect implicitly with end if there is one.

              if(cur == this->end) return cur; // Yippe! We found our path so return

            }

          }

          
        }

      }

      
      // Else, return nothing
      std::cout << "None found.\n";
      return nullptr;

    };

    void check(int x, int y)
    {

      std::queue<Block*> tmp = this->getKids(x, y);

      std::cout << "\n\nTEST RAN: \n";
      while(!tmp.empty()){
        Block* tm = tmp.front();
        tmp.pop();
        tm->setState(1);
        std::cout << tm << ' ';

      }

    };

    void randWalls()    // Expected to be called during start of map; as will not check other states and will instantly set
    {

      int x, y;
      std::random_device rand;   // Making seeded gen
      std::mt19937 seed(rand()); // Seeding with quicker gen with seed
      std::uniform_int_distribution<int> randX(0, this->height-1); // Range of values
      std::uniform_int_distribution<int> randY(0, this->width-1); // Range of values

      
      for(int i = 0; i < 30; i++){

        x = randX(seed);
        y = randY(seed);
        this->map[x][y]->setState(1);
        this->map[x][y]->setVisited(1);

      }

    };

    void display()
    {
      
      std::cout << "\n\n";

      for(std::vector<Block*> eachRow : this->map){
        for(Block* eachEle : eachRow){
          std::cout << eachEle->getState();
        }
        std::cout << '\n';
      }

      std::cout << "\n\n";

    };






};

#endif