#!/bin/bash
for i in *.c
do
gcc -c $i
done
for i in *.o
do
ar cr liball.a $i
done
