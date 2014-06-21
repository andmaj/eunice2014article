loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	table_unrank_posvect( rand() % binom[WIDTH][weight], &posvect, weight);
	
#ifdef CHECK
	posvect_print(posvect, WIDTH);
#endif
}

#ifdef TEST
CALLGRIND_STOP_INSTRUMENTATION;
#endif
