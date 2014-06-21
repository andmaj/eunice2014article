loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	weight = rand() % (WIDTH+1);
	b=table_unrank_onebit( rand() % binom[WIDTH][weight], weight, rand()%WIDTH);
	
#ifdef CHECK
	printf("%" PRIuFAST8 "\n", b);
#endif
}

#ifdef TEST
CALLGRIND_STOP_INSTRUMENTATION;
#endif
