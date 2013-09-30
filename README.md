g4-diningphilosophersproblem
============================
A Classic Problem - Dining Philosophers
The Dining Philosophers problem is a classic OS problem that is usually stated in very non-OS terms:
1.	Five silent philosophers sit at a table around a bowl of rice.
2.	There are exactly five chopsticks.
3.	At any particular time , the philosophers are either thinking or eating.
4.	A philosopher can only eat rice when he has both left and right chopsticks.
5.	Each chopstick can be held by only one philosopher and so a philosopher can use the chopstick only if it's not being 
    used by another philosopher.
6.	After a philosopher finishes eating, he needs to put down both chopsticks so they become available to others and 
    then he starts thinking.
7.	A philosopher can grab the chopstick on his right or the one on his left as they become available, but can't start 
    eating before getting both of them.

Eating is not limited by the amount of rice left: assume an infinite supply.
The problem is how to design a program such that
1.	There is no deadlock.
2.	There is no starvation.
