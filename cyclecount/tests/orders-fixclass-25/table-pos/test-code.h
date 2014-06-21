loop_i=LOOP_COUNT;
while(loop_i-- > 0)
{
	table_unrank_posvect( rand() % binom[WIDTH][WEIGHT], &posvect, WEIGHT);
}
