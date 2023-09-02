## Problem: 
Reverse the array 
https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

[Note: Sir gave the link for array. But platform showing for string. Think so, its happened because of platform upgradation...]


## Description: 
Given a string, you need to reverse it.

## Approach:

#### Case I --> If allow to change input.

**Way 1:**  "Using C++ STL".

Another way to reverse the string is to utilize the C++ Standard Template Library (STL).
We can use the std::reverse function, which is concise and efficient, to reverse the string in a single line.

**Way 2:** "Iterative Approach".

Initialize two pointers, one at the beginning and one at the end of the string.
Swap the characters at these pointers and move them towards each other until they meet in the middle. 

**Way 3:** "Recursive Approach".

Make the base condition i.e, start & end pointer should not come on same location.
Till then, Swap the characters at these pointers and move them towards each other until they meet the base condition. 

#### Case II --> If not allow to chang input.

**Way 1:** "Iterative Approach".

First create empty string. Initialize temp pointer at end of input string. Add character to empty string & move the pointer towards 1st character.

**Way 2:** "Recursive Approach".

Initialize temp pointer at end of input string. Make base condition i.e, temp should not cross 1st character of input string. Add character to empty string & move the pointer towards 1st character.



