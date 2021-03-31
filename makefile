main: main.o conversion.o boolAlgebra.o console.o
			gcc -o release/main main.o conversion.o boolAlgebra.o console.o -Wall

main.o: main.c conversion.h console.h boolAlgebra.h
			gcc -c main.c -Wall

console.o: console.c console.h
			gcc -c console.c -Wall

conversion.o: conversion.c conversion.h
			gcc -c conversion.c -Wall

boolAlgebra.o: boolAlgebra.c boolAlgebra.h
			gcc -c boolAlgebra.c -Wall