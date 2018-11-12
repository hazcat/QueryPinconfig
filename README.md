# QueryPinconfig
Routines to describe the pin configuration of Arduino boards

Outputs looks something like
DigitalPin,Port,Bitmask,Timer
0,4,1,0
1,4,10,0
2,4,100,0
3,4,1000,8
(etc...)

Formatted nicely:

### Arduino UNO
DigitalPin | Port | Bitmask | Timer
--- | --- | ---: | ---
0 | 4 | 1 | 0
1 | 4 | 10 | 0
2 | 4 | 100 | 0
3 | 4 | 1000 | 8
4 | 4 | 10000 | 0
5 | 4 | 100000 | 2
6 | 4 | 1000000 | 1
7 | 4 | 10000000 | 0
8 | 2 | 1 | 0
9 | 2 | 10 | 3
10 | 2 | 100 | 4
11 | 2 | 1000 | 7
12 | 2 | 10000 | 0
13 | 2 | 100000 | 0
14 | 3 | 1 | 0
15 | 3 | 10 | 0
16 | 3 | 100 | 0
17 | 3 | 1000 | 0
18 | 3 | 10000 | 0
19 | 3 | 100000 | 0
