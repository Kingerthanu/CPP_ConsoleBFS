#ifndef BLOCK_H
#define BLOCK_H


class Block{

  private:
    int state = 0;
    bool visit = 0;

  public:
    int x, y;
    Block* prev = nullptr;

    Block(int xCoord, int yCoord)
    {

      this->x = xCoord;
      this->y = yCoord;

    }

    /*
      Desc: Set if not visited (0), Visited/Wall (1), or exit (-1)
    */
    void setState(const int& newState)
    {

      this->state = newState;

    };

    /*
      Desc: Get state for display
    */
    int getState()
    {

      return this->state;

    };

    /*
      Desc: Check if state is 1
    */
    bool isVisited()
    {

      return (this->visit == 1);

    };

    /*
      Desc: Check if state is 1
    */
    void setVisited(const bool& state)
    {

      this->visit = state;

    };

};



#endif