binom_fill();
table_generate(WIDTH);

#ifdef TEST
CALLGRIND_START_INSTRUMENTATION;
#endif

loop_i = LOOP_COUNT;

#ifdef CHECK
srand(12345);
#else
srand(time(NULL));
#endif

