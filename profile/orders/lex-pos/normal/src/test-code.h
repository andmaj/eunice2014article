loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	lexico_unrank_posvect( rand() % binom[WIDTH][weight], posvect, weight, WIDTH);

#ifdef CHECK
	posvect_print(posvect, WIDTH);
#endif
	
}
