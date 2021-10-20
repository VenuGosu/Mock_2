
output: two_d_array.o swap_matrix.o print_2d_array.o multiply_two_d.o 
	gcc two_d_array.o swap_matrix.o print_2d_array.o multiply_two_d.o -o output
two_d_array.o: two_d_array.c header.h
	gcc -c two_d_array.c
swap_matrix.o: swap_matrix.c header.h
	gcc -c swap_matrix.c
print_2d_array.o: print_2d_array.c header.h
		gcc -c print_2d_array.c
multiply_two_d.o:multiply_two_d.c header.h
		gcc -c multiply_two_d.c
		
clean: 
	rm -f output
