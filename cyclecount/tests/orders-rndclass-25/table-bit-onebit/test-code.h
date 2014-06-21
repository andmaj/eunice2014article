loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	bv=table_unrank_onebit( rand() % binom[WIDTH][weight], weight, rand()%WIDTH);
}
