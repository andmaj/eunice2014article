loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	bv=colex_unrank_bitvect( rand() % binom[WIDTH][weight], weight);
	
#ifdef CHECK
	printf("%" PRIu64 "\n", bv);
#endif
}
