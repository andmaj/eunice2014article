loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	bv=lexico_unrank_bitvect( rand() % binom[WIDTH+1][weight+1], weight, WIDTH);
	
#ifdef CHECK
	printf("%" PRIu64 "\n", bv);
#endif
}
