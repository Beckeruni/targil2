CC = gcc

FLAGS = -Wall -g

all: my_graph my_Knapsack

my_graph: my_graph.o my_mat.h
	$(CC) $(FLAGS) -o my_graph my_graph.c 

my_graph.o: my_graph.c my_mat.h
	$(CC) $(FLAGS) -c my_graph.c



my_Knapsack: my_Knapsack.o
	$(CC) $(FLAGS) -o my_Knapsack my_Knapsack.c

my_Knapsack.o: my_Knapsack.c
	$(CC) $(FLAGS) -c my_Knapsack.c


clean:
	rm -f *.o *.out




