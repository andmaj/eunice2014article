loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	b=lexico_unrank_onebit( rand() % binom[WIDTH+1][weight+1], weight, WIDTH, rand()%WIDTH);
	
#ifdef CHECK
	printf("%" PRIuFAST8 "\n", b);
#endif
}
