CSE 332 Lab4: Single-Player and Multi-Player Board Games

(*) Extra Credit:

As for the Extra Credit part in this Lab, we did our best to try to perfectly finish it. Although we poured our best effort into it, we did not completely solve it. Therefore, we decided to add the code for Extra Credit (i.e. "EnglishDraught.cpp" and "EnglishDraught.h") as comments in our whole file so that it would not influence the normal operations of our other games. We finished most of the Extra Credit part and decided to show our endeavor in this way. 

Note: The NineAlmonds, MagicSquare and Reversi games could work properly.

(1) Copy Control Design Decisions:

1. GameBase Class

a. copy constructor: 
We decided to prevent the use of copy constructor in GameBase Class, because we did not want any of other users to potentially copy the 
game state and record into his or her state from another player's game. From our perspective, the implementation of copy function among 
different games is hazardous to the normal operation of the program and will bring about chaos of various game states. We implement our 
design by ending the declaration of copy constructor with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently 
prevent calls to this method. However, in VS2012, we implemented this by declaring it as private attribute because VS2012 does not support
"=delete" in c++ 11 standard as far as we concerned.

b. move constructor:	
We decided to prevent the use of move constructor in GameBase Class, because we did not want to give access to user for potentially 
allocating and messing up various game states. Furthermore, if one game state is moved to another place, the original state will not 
exist anymore and thus will be problematic if the original state is called or used in the following functions. We implement our design 
by ending the declaration of move constructor with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent 
calls to this method. However, in VS2012, we implemented this by declaring it as private attribute because VS2012 does not support
"=delete" in c++ 11 standard as far as we concerned.

c. copy-assignment operator:
We decided to prevent the use of copy-assignment operator in GameBase Class, and the reason is similar to that for the prevention for 
copy constructor, i.e. we did not want any of other users to get the access to other game states, whether it is for the same player or
other players. The prevention of copy-assignment operator could reinforce the robustness and the independence among various game states. 
We implement our design by ending the declaration of copy-assignment operator with " =  delete " and do not define it. Under c++ 11 
standard, it will sufficiently prevent calls to this method. However, in VS2012, we implemented this by declaring it as private attribute 
because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

d. move-assignment operator
We decided to prevent the use of move-assignment operator in GameBase Class, and the reason is similar to that for the prevention for 
move constructor, i.e. we did not want give users the access for potentially allocating and messing up various game states. What's more,
the implementation of move operation or function could possibly result in a "slicing" problem when moving the inherited game classes 
into the base game and thus losing some important information. We implement our design by ending the declaration of move-assignment operator 
with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, we 
implemented this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

e. destructor:
We decided to allow the use of destructor in GameBase Class, because in this way whenever the inherited game is finished it could be deleted 
and thus release the space it previously occupied by calling the destructor, thus effectively saving the storage for the program in the computer.


2. NineAlmonds Class

a. copy constructor: 
We decided to prevent the use of copy constructor in NineAlmonds Class, because we did not want any of other users to potentially copy the game 
state and record into his or her state from another player's game. From our perspective, the implementation of copy function among different games 
is hazardous to the normal operation of the program and will bring about chaos of various game states. We implement our design by ending the 
declaration of copy constructor with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method.
 However, in VS2012, we implemented this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as 
far as we concerned.

b. move constructor:	
We decided to prevent the use of move constructor in NineAlmonds Class, because we did not want to give access to user for potentially allocating 
and messing up various game states. Furthermore, if one game state is moved to another place, the original state will not exist anymore and thus 
will be problematic if the original state is called or used in the following functions. We implement our design by ending the declaration of move 
constructor with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, 
we implemented this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

c. copy-assignment operator:
We decided to prevent the use of copy-assignment operator in NineAlmonds Class, and the reason is similar to that for the prevention for copy 
constructor, i.e. we did not want any of other users to get the access to other game states, whether it is for the same player or other players. 
The prevention of copy-assignment operator could reinforce the robustness and the independence among various game states. We implement our design 
by ending the declaration of copy-assignment operator with " =  delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent
calls to this method. However, in VS2012, we implemented this by declaring it as private attribute 
because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

d. move-assignment operator
We decided to prevent the use of move-assignment operator in NineAlmonds Class, and the reason is similar to that for the prevention for move 
constructor, i.e. we did not want give users the access for potentially allocating and messing up various game states. What's more, the implementation
of move operation or function could possibly result in a "slicing" problem when moving the inherited game classes into the base game and thus losing 
some important information. We implement our design by ending the declaration of move-assignment operator with " = delete " and do not define it. Under 
c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, we implemented this by declaring it as private attribute 
because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

e. destructor:
We decided to allow the use of destructor in NineAlmonds Class, because in this way whenever the inherited game is finished it could be deleted and thus 
release the space it previously occupied by calling the destructor, thus effectively saving the storage for the program in the computer.

3. MagicSquare Class

a. copy constructor:
We decided to prevent the use of copy constructor in MagicSquare Class, because we did not want any of other users to potentially copy the game state 
and record into his or her state from another player's game. From our perspective, the implementation of copy function among different games is hazardous 
to the normal operation of the program and will bring about chaos of various game states. We implement our design by ending the declaration of copy 
constructor with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, we 
implemented this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

b. move constructor:	
We decided to prevent the use of move constructor in MagicSquare Class, because we did not want to give access to user for potentially allocating and 
messing up various game states. Furthermore, if one game state is moved to another place, the original state will not exist anymore and thus will be 
problematic if the original state is called or used in the following functions. We implement our design by ending the declaration of move constructor 
with " = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, we implemented 
this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

c. copy-assignment operator:
We decided to prevent the use of copy-assignment operator in MagicSquare Class, and the reason is similar to that for the prevention for copy constructor, 
i.e. we did not want any of other users to get the access to other game states, whether it is for the same player or other players. The prevention of 
copy-assignment operator could reinforce the robustness and the independence among various game states. We implement our design by ending the declaration 
of copy-assignment operator with " =  delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in 
VS2012, we implemented this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

d. move-assignment operator
We decided to prevent the use of move-assignment operator in MagicSquare Class, and the reason is similar to that for the prevention for move constructor, 
i.e. we did not want give users the access for potentially allocating and messing up various game states. What's more, the implementation of move operation 
or function could possibly result in a "slicing" problem when moving the inherited game classes into the base game and thus losing some important information. 
We implement our design by ending the declaration of move-assignment operator with " = delete " and do not define it. Under c++ 11 standard, it will 
sufficiently prevent calls to this method. However, in VS2012, we implemented this by declaring it as private attribute because VS2012 does not support 
"=delete" in c++ 11 standard as far as we concerned.

e. destructor:
We decided to allow the use of destructor in MagicSquare Class, because in this way whenever the inherited game is finished it could be deleted and thus 
release the space it previously occupied by calling the destructor, thus effectively saving the storage for the program in the computer.


4. Reversi Class

a. copy constructor: 
We decided to prevent the use of copy constructor in Reversi Class, because we did not want any of other users to potentially copy the game state and record 
into his or her state from another player's game. From our perspective, the implementation of copy function among different games is hazardous to the normal 
operation of the program and will bring about chaos of various game states. We implement our design by ending the declaration of copy constructor with 
" = delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, we implemented this by 
declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

b. move constructor:	
We decided to prevent the use of move constructor in Reversi Class, because we did not want to give access to user for potentially allocating and messing up 
various game states. Furthermore, if one game state is moved to another place, the original state will not exist anymore and thus will be problematic if the 
original state is called or used in the following functions. We implement our design by ending the declaration of move constructor with " = delete " and do 
not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in VS2012, we implemented this by declaring it as private 
attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

c. copy-assignment operator:
We decided to prevent the use of copy-assignment operator in Reversi Class, and the reason is similar to that for the prevention for copy constructor, i.e. 
we did not want any of other users to get the access to other game states, whether it is for the same player or other players. The prevention of 
copy-assignment operator could reinforce the robustness and the independence among various game states. We implement our design by ending the declaration 
of copy-assignment operator with " =  delete " and do not define it. Under c++ 11 standard, it will sufficiently prevent calls to this method. However, in 
VS2012, we implemented this by declaring it as private attribute because VS2012 does not support "=delete" in c++ 11 standard as far as we concerned.

d. move-assignment operator
We decided to prevent the use of move-assignment operator in Reversi Class, and the reason is similar to that for the prevention for move constructor, i.e. 
we did not want give users the access for potentially allocating and messing up various game states. What's more, the implementation of move operation or 
function could possibly result in a "slicing" problem when moving the inherited game classes into the base game and thus losing some important information. 
We implement our design by ending the declaration of move-assignment operator with " = delete " and do not define it. Under c++ 11 standard, it will 
sufficiently prevent calls to this method. However, in VS2012, we implemented this by declaring it as private attribute because VS2012 does not support 
"=delete" in c++ 11 standard as far as we concerned.

e. destructor:
We decided to allow the use of destructor in Reversi Class, because in this way whenever the inherited game is finished it could be deleted and thus release 
the space it previously occupied by calling the destructor, thus effectively saving the storage for the program in the computer.

(2) The Problem We Met During The Programming:

Problem a:
In the process of designing the third game, namely, Reversi game, we ran into the problem that we did not know how to implement the function so that it 
could remember the current player and alternate two players when the turn() function is called
Solution: 
To solve this problem, we add another variable in the Reversi class called "current_player" and store the current player's name into this variable so that 
we can use this to identify which player is playing the current game later in the turn() function and then alternate the two players each time.

Problem b:
In the process of designing done() and stalemate() functions, we met the problem about how to effectively judge whether the current game state is finished 
or could not be continued further according to the criteria given by the instructions of this lab.
Solution:
To solve this problem, we firstly declare three variables of int type, i.e. black_num, white_num, and blank_num. Secondly, we traverse the whole game board 
to calculate the total number of each type of states on it and then store the number into three variables above. Furthermore, in the stalemate() function,
to refactor and simplify our code, we wrote another function named hasValidSquare() to judge if there is valid square left on the whole game board.

Problem c:
In the process of designing hasValidSquare() function, we met the problem about how to tell if a blank place on the game board is a valid place for placing 
checkers. More specifically, we did not know how to write the code for checking the requirements for valid places.
Solution:
To solve this problem, we discussed and wrote some conditions on the paper to help us organize our thoughts. Eventually, we successfully solve this problem 
by going to the eight directions from the current blank place and then check after a series of opposite checker: if there is a following checker which 
belongs to the current player, the square is valid; otherwise, if there is a following blank at the end of the series of checker for the opposite player, 
the square is invalid. 

Problem d:
In the process of designing the function for flipping all the checkers in the path that is valid for one of two players, we met with the problem that we did 
not know how to effectively check and select the valid path from the eight directions while turning the checkers on the path into the opposite checkers.
Solution:
To solve this problem, we discussed and make some adjustments to the function for problem c so that it could firstly check out if one path from all the 
eight directions is valid. Then if it is a valid path, as we already have the coordinations for the destinations and the beginning point, we could write a 
loop to flip all the checkers on the path into the checkers that belong to the current player. However, the difference is that we are still not done when we 
have checked and flipped the checkers on the first valid path - we have to keep checking all the remaining directions because it is possible for the player 
to place one checker on the game board and simultaneously change the states on multiple routes.

(3) Testing and Results

1. Test of NineAlmondsGame:


 Test 1:

 Input: CSE332_Lab3

 Output: usage: usage:CSE332_Lab3 arg1 arg2 arg3 or type CSE332_Lab3 -h for help

 return value: 4



 Test 2:

 Input: CSE332_Lab3 as

 Output: usage: usage:CSE332_Lab3 arg1 arg2 arg3 or type CSE332_Lab3 -h for help

 return value: 2



 Test 3:

 Input: CSE332_Lab3 as fd er as f

 Output: usage: usage:CSE332_Lab3 arg1 arg2 arg3 or type CSE332_Lab3 -h for help

 return value: 3



 Test 4:

 Input: CSE332_Lab3 NineAlmonds

 we give a coordinate 6,6 that is out of our gameboard, then we give another coordinate 0,0. The program will print out the move

 is invalid, please try another move. Then we can type new coordinate to try again. The program will not terminate unless you type quit. 



 Test 5:

 Input: CSE332_Lab3 NineAlmonds

 we give a coordinate 2,2, then we give another coordinate 0,0. The program will print out the new gamestate, and ask us to continue this turn or not.

 we type n. Then the program ask me for a new coordinate or to quit. we type quit. The program terminates, and it tells us how many moves we have used so far.

 Return value: 8



 Test 6:

 Input: CSE332_Lab3 NineAlmonds

 I give coordinate 2,2 and 2,0, then program prints out the new game state. Then I type y to continue the turn. Then the program ask me for a new coordinate

 to continue this turn. I type 4,2, the program prints out the new game state. Then we keep playing, here is the moves that leads me to win.

 Turn 1: 2,2 to 2,0 to 4,2 to 2,4 to 0,2

 Turn 2: 3,2 to 1,4

 Turn 3: 1,1 to 1,3

 Turn 4: 1,4 to 1,2

 Turn 5: 0,2 to 2,2

 At the last turn, We type n to not continue the turn, the program indicates we win and we used 5 turns.

 Return value: 0

 

 Test 7:

 Input: CSE332_Lab3 NineAlmonds

 Here is a move we make the game to a stalemate. 

 Turn 1: 2,2 to 0,0

 Turn 2: 2,1 to 4,1

 Turn 3: 2,3 to 4,3 to 2,1 to 0,3 to 2,3

 At last turn, We type n to not continue and the program says a stalemate occurs and we used 3 turns.

 Return value: 7





2. Test of MagicSquare Game:


 Test 1:

 Input:CSE332_Lab3 -h

 Output:

  usage: CSE332_Lab3 arg1 arg2 arg3



  arg1  - Name of the games: NineAlmonds or MagicSquare   

          e.g CSE332_Lab3 NineAlmonds



  arg2  - (Optional) You can choose the size of the game board in MagicSquare   

          e.g CSE332_Lab3 MagicSquare 6



  arg3  - (Optional) You can choose the size of the game board and the starting number in MagicSquare 

          e.g CSE332_Lab3 MagicSquare 6 -2



 return Value:0



 Test 2:

 Input: CSE332_Lab3 MagicSquare

 The Game enters successfully, and it prints out a 3X3 gameboard and correct available game pieces numbers which are 1 to 9. We randomly give a sequence of inputs which will lead the game to stalemate.

 Return Value:7



 Test 3:

 Input: CSE332_Lab3 MagicSquare a

 Output:usage: usage:CSE332_Lab3 arg1 arg2 arg3 or type CSE332_Lab3 -h for help

 Return Value: 1



 Test 4:

 Input: CSE332_Lab3 MagicSquare 5

 The Game enters successfully, and it prints out a 5X5 gameboard and correct available game pieces numbers which are 1 to 25. We randomly give a sequence of inputs which will lead the game to stalemate.

 Return Value: 7



 Test 5:

 Input: CSE332_Lab3 MagicSquare 5 4

 The Game enters successfully, and it prints out a 5X5 gameboard and correct available game pieces numbers which are 4 to 29. We randomly give a sequence of inputs which will lead the game to stalemate.

 Return Value: 7



 Test 6:

 Input: CSE332_Lab3 MagicSquare 7 -3

 The Game enters successfully, and it prints out a 5X5 gameboard and correct available game pieces numbers which are -3 to 45. We randomly give a sequence of inputs which will lead the game to stalemate.

 Return Value: 7



 Test 7:

 Input: CSE332_Lab3 MagicSquare 3 1

 The Game enters successfully, and it prints out a 3X3 gameboard and correct available game pieces numbers which are 1 to 9. We go to wikipedia find a solution for this magic square. The solution gives us a correct result.

 Return Value: 0



 Test 8:

 Input: CSE332_Lab3 MagicSquare 5 1

 The Game enters successfully, and it prints out a 5X5 gameboard and correct available game pieces numbers which are 1 to 25. We go to wikipedia find a solution for this magic square. The solution gives us a correct result.

 Return Value: 0



 Test 9:

 Input: CSE332_Lab3 MagicSquare 5 1

 The game enters successfully, and it asks us to enter a coordinate or type quit. This time, we just type quit. The game terminate and prints "Successfully quit!".

 Return Value: 9

3. Test of Reversi Game:

Illegal Input:

 This is the turn for Yang
Please enter a valid coordinate e.g, 0,0 or type quit
2,4
7
6
5
4     X X X
3       X O
2
1
0
X 0 1 2 3 4 5 6 7

 This is the turn for Long
Please enter a valid coordinate e.g, 0,0 or type quit
6,7

Your move is invalid, Please try an another move

 This is the turn for Long
Please enter a valid coordinate e.g, 0,0 or type quit


Alternatively Play:

 This is the turn for Yang
Please enter a valid coordinate e.g, 0,0 or type quit
7,4
7 X   X X X X X
6 X X X O X X O O
5 X X O X X O X
4 X X X X X X X X
3 X O O O X O X O
2 X O X X X X O O
1 X X O O O O O
0 X X X O X X O
X 0 1 2 3 4 5 6 7


 This is the turn for Long
Please enter a valid coordinate e.g, 0,0 or type quit
7,5
7 X   X X X X X
6 X X X O X X O O
5 X X O O O O O O
4 X X X X X X O O
3 X O O O X O X O
2 X O X X O X O O
1 X X O O O O O
0 X X X O X X O
X 0 1 2 3 4 5 6 7


Successfully Done:

 This is the turn for Long
Please enter a valid coordinate e.g, 0,0 or type quit
7,1
7 X O X X X X X X
6 X X O O X X X O
5 X O X O O X O O
4 X O X X O X O O
3 X O O X X O X O
2 X O X X O X O O
1 X X O O O O O O
0 X X X X X X X X
X 0 1 2 3 4 5 6 7

Congratulations! The winner is Yang !
Yang has 37 pieces
Long has 27 pieces


Stalemate Condition:

 This is the turn for Yang
Please enter a valid coordinate e.g, 0,0 or type quit
0,5
7 X X X X X X X X
6   X X X X X X X
5 O O O X X X X X
4 X O X X X X X X
3   X O X X X X X
2 X O X O X X X X
1 X O X X X X X X
0 O O O O X X X X
X 0 1 2 3 4 5 6 7

 This is the turn for Long
Please enter a valid coordinate e.g, 0,0 or type quit
0,3
7 X X X X X X X X
6   X X X X X X X
5 O O X X X X X X
4 X X X X X X X X
3 X X O X X X X X
2 X X X O X X X X
1 X O X X X X X X
0 O O O O X X X X
X 0 1 2 3 4 5 6 7

 This is the turn for Yang
You do not have a remaining valid moveYang
 This is the turn for Long
Please enter a valid coordinate e.g, 0,0 or type quit
0,6
7 X X X X X X X X
6 X X X X X X X X
5 X X X X X X X X
4 X X X X X X X X
3 X X O X X X X X
2 X X X O X X X X
1 X O X X X X X X
0 O O O O X X X X
X 0 1 2 3 4 5 6 7

Congratulations! The winner is Long !
Long has 57 pieces
Yang has 7 pieces


