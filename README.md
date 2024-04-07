# CPP_ConsoleBFS
  C++ file in which uses BFS traversal in order to go through a 2D object array to find the shortest path amongst two points, a start and a end.

<img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/ac29acf7-bb79-45bd-af9e-d2ac70e19bc9" alt="Cornstarch <3" width="95" height="149">

  
  The answer (path) will be writted with 7's and walls will be 1's with 0's being free open spots to traverse; this will be printed to console. The walls of the area to traverse will be randomly assigned on runtime. Current version doesn't request user input and goes from top left to bottom right.


----------------------------------------------

<img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/0aaaf75b-04e0-41d3-b2b0-12f14e674c2c" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/0aaaf75b-04e0-41d3-b2b0-12f14e674c2c" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/0aaaf75b-04e0-41d3-b2b0-12f14e674c2c" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/0aaaf75b-04e0-41d3-b2b0-12f14e674c2c" alt="Cornstarch <3" width="55" height="49">


**The Breakdown:**

  A Program Using The Terminal To Display Dynamic Traversals On A Random 2D-Array Labrinth. 

 This Program Works To Include std::queues, As Well As Linked-List Data Structures To Create A BFS Traversal On A Dynamically-Sized and Randomly Layout'ed 2D World Map. 

  On Startup, We Make A 2D Map Of Width and Height 10. We Then Also Tell The Map To Initialize The Starting Node At (x: 0, y: 1). As Well As This, We Also Set Our End Position To (x: 9, y: 9).

  Our 2D Map Is Deep Down Working With A 2D Array Of Our Block ClassType. 

  Each Block Will Have Its Coorindates As Well As Setters And Getters For Its Type And State. Also We Will Make This A Linked Structure By Having It Store A Member To Its Previous Node In Our Linked Traversal.

  The Blocks Also Themselves Don't Call Their Draw Functionality, With This Being Relegated To Our Main Loop. As The Maps Print Function Will "Draw" Our Map But Will Use Its Type ID To Define Its Shape/Type (With '7' Being The Final, Shortest Path Found By BFS Algo.).

  The Breadth First Traversal Will Be Done In Our Map Class In Which We Will Use A Queue Struct To Prioritize Traversals. At The End Of The BFS We Will Either Return A Nullptr For A Invalid Path Or A Pointer To The Last Node In Our Traversal. This Last Node By The End Will Be Linked Fully By Its this->prev ptr In Which Will Backtrack Us Through The Path Found.



<img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/9e848571-cb04-442f-a5b0-364f5f593f45" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/9e848571-cb04-442f-a5b0-364f5f593f45" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/9e848571-cb04-442f-a5b0-364f5f593f45" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/9e848571-cb04-442f-a5b0-364f5f593f45" alt="Cornstarch <3" width="55" height="49">


----------------------------------------------

<img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/8b74338a-1214-4256-819d-5dd620486861" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/8b74338a-1214-4256-819d-5dd620486861" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/8b74338a-1214-4256-819d-5dd620486861" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/8b74338a-1214-4256-819d-5dd620486861" alt="Cornstarch <3" width="55" height="49">


**Features:**
   
  ![2024-01-1017-44-45-ezgif com-video-to-gif-converter](https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/e2360d48-6231-44fa-aee8-c035ea878263)


<img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/e857ed11-ab2b-4cc5-b038-470feb001a61" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/e857ed11-ab2b-4cc5-b038-470feb001a61" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/e857ed11-ab2b-4cc5-b038-470feb001a61" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_ConsoleBFS/assets/76754592/e857ed11-ab2b-4cc5-b038-470feb001a61" alt="Cornstarch <3" width="55" height="49">
