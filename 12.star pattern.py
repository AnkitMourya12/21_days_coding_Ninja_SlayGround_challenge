#NinjaSlayground,    #CodingNinjasStudio and tag @CodingNinjasOff and @DrinkSlayCoffee



from os import *
from sys import *
from collections import *
from math import *


def printPattern(n):

 

    #Write your code here

    k=1

    for i in range(1,n+1):

        print(" "*(n-i)+"*"*k)

        k+=2
