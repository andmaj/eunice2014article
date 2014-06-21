loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	colex_unrank_bitvect( rand() % binom[WIDTH][weight], weight);
}
