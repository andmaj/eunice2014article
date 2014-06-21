test:
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/colex-bit/bin/colex-bit-test -std=c99 -I orders/common -I orders/colex-bit/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/colex.c 
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/colex-pos/bin/colex-pos-test -std=c99 -I orders/common -I orders/colex-pos/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/colex.c 
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/normal/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/normal/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/normal/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/opt1/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/opt1/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/opt1/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/opt2/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/opt2/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/opt2/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/opt3/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/opt3/src src/test.c orders/common/shifted_binom/binom.c orders/common/posvect.c orders/common/opt3/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/opt4/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/opt4/src src/test.c orders/common/shifted_binom/binom.c orders/common/posvect.c orders/common/opt4/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/opt3-onebit/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/opt3-onebit/src src/test.c orders/common/shifted_binom/binom.c orders/common/opt3/lexico-onebit.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-bit/opt4-onebit/bin/lex-bit-test -std=c99 -I orders/common -I orders/lex-bit/opt4-onebit/src src/test.c orders/common/shifted_binom/binom.c orders/common/opt4/lexico-onebit.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-pos/normal/bin/lex-pos-test -std=c99 -I orders/common -I orders/lex-pos/normal/src src/test.c orders/common/normal_binom/binom.c orders/common/normal/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/lex-pos/opt1/bin/lex-pos-test -std=c99 -I orders/common -I orders/lex-pos/opt1/src src/test.c orders/common/shifted_binom/binom.c orders/common/opt1/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/table-bit/bin/table-bit-test -std=c99 -I orders/common -I orders/table-bit/src src/test.c orders/common/normal_binom/binom.c orders/common/table.c orders/common/opt1/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/table-bit-onebit/bin/table-bit-test -std=c99 -I orders/common -I orders/table-bit-onebit/src src/test.c orders/common/normal_binom/binom.c orders/common/table-onebit.c orders/common/opt1/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DTEST -o orders/table-pos/bin/table-pos-test -std=c99 -I orders/common -I orders/table-pos/src src/test.c orders/common/normal_binom/binom.c orders/common/table.c orders/common/opt1/lexico.c orders/common/posvect.c

check:
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/colex-bit/bin/colex-bit-check -std=c99 -I orders/common -I orders/colex-bit/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/colex.c 
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/colex-pos/bin/colex-pos-check -std=c99 -I orders/common -I orders/colex-pos/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/colex.c 
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/normal/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/normal/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/normal/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/opt1/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/opt1/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/opt1/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/opt2/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/opt2/src src/test.c orders/common/normal_binom/binom.c orders/common/posvect.c orders/common/opt2/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/opt3/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/opt3/src src/test.c orders/common/shifted_binom/binom.c orders/common/posvect.c orders/common/opt3/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/opt4/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/opt4/src src/test.c orders/common/shifted_binom/binom.c orders/common/posvect.c orders/common/opt4/lexico.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/opt3-onebit/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/opt3-onebit/src src/test.c orders/common/shifted_binom/binom.c orders/common/opt3/lexico-onebit.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-bit/opt4-onebit/bin/lex-bit-check -std=c99 -I orders/common -I orders/lex-bit/opt4-onebit/src src/test.c orders/common/shifted_binom/binom.c orders/common/opt4/lexico-onebit.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-pos/normal/bin/lex-pos-check -std=c99 -I orders/common -I orders/lex-pos/normal/src src/test.c orders/common/normal_binom/binom.c orders/common/normal/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/lex-pos/opt1/bin/lex-pos-check -std=c99 -I orders/common -I orders/lex-pos/opt1/src src/test.c orders/common/shifted_binom/binom.c orders/common/opt1/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/table-bit/bin/table-bit-check -std=c99 -I orders/common -I orders/table-bit/src src/test.c orders/common/normal_binom/binom.c orders/common/table.c orders/common/opt1/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/table-bit-onebit/bin/table-bit-check -std=c99 -I orders/common -I orders/table-bit-onebit/src src/test.c orders/common/normal_binom/binom.c orders/common/table-onebit.c orders/common/opt1/lexico.c orders/common/posvect.c
	gcc -g -O2 -DBINOMN=27 -march=core2 -DCHECK -o orders/table-pos/bin/table-pos-check -std=c99 -I orders/common -I orders/table-pos/src src/test.c orders/common/normal_binom/binom.c orders/common/table.c orders/common/opt1/lexico.c orders/common/posvect.c

run-check:
	./orders/colex-bit/bin/colex-bit-check > orders/colex-bit/check/colex-bit.txt
	./orders/colex-pos/bin/colex-pos-check > orders/colex-pos/check/colex-pos.txt
	./orders/lex-bit/normal/bin/lex-bit-check > orders/lex-bit/check/lex-bit-normal.txt
	./orders/lex-bit/opt1/bin/lex-bit-check > orders/lex-bit/check/lex-bit-opt1.txt
	./orders/lex-bit/opt2/bin/lex-bit-check > orders/lex-bit/check/lex-bit-opt2.txt
	./orders/lex-bit/opt3/bin/lex-bit-check > orders/lex-bit/check/lex-bit-opt3.txt
	./orders/lex-bit/opt4/bin/lex-bit-check > orders/lex-bit/check/lex-bit-opt4.txt
	./orders/lex-bit/opt3-onebit/bin/lex-bit-check > orders/lex-bit/check/lex-bit-opt3-onebit.txt
	./orders/lex-bit/opt4-onebit/bin/lex-bit-check > orders/lex-bit/check/lex-bit-opt4-onebit.txt
	./orders/lex-pos/normal/bin/lex-pos-check > orders/lex-pos/check/lex-pos-normal.txt
	./orders/lex-pos/opt1/bin/lex-pos-check > orders/lex-pos/check/lex-pos-opt1.txt
	@echo Note: lookup tables filled in a dumb and extremely slow way, fix it!
	./orders/table-bit/bin/table-bit-check > orders/table-bit/check/table-bit.txt
	./orders/table-bit-onebit/bin/table-bit-check > orders/table-bit-onebit/check/table-bit-onebit.txt
	./orders/table-pos/bin/table-pos-check > orders/table-pos/check/table-pos.txt
	@echo Checking differences in lex-bit optimizations..
	@diff orders/lex-bit/check/lex-bit-normal.txt orders/lex-bit/check/lex-bit-opt1.txt
	@diff orders/lex-bit/check/lex-bit-normal.txt orders/lex-bit/check/lex-bit-opt2.txt
	@diff orders/lex-bit/check/lex-bit-normal.txt orders/lex-bit/check/lex-bit-opt3.txt
	@echo Note: skip checking opt4, see paper for lex versus rev lex
	@echo Checking differences lex-bit vs table-bit..
	@diff orders/lex-bit/check/lex-bit-normal.txt orders/table-bit/check/table-bit.txt
	@echo Checking differences lex-bit-opt3-onebit vs table-bit-onebit..
	@diff orders/lex-bit/check/lex-bit-opt3-onebit.txt orders/table-bit-onebit/check/table-bit-onebit.txt
	@echo Note: skip checking opt4-onebit, see paper for lex versus rev lex
	@echo Checking differences in lex-pos optimizations..
	@diff orders/lex-pos/check/lex-pos-normal.txt orders/lex-pos/check/lex-pos-opt1.txt

run-test:
	rm -f result/cycles.txt
	rm -f result/plot.eps
	rm -f result/plot.png
	rm -f callgrind.out.*
	echo "no orders-25" >> result/cycles.txt
	valgrind -q --tool=callgrind ./orders/colex-bit/bin/colex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_bitvect | cut -d" " -f1 | tr -d "," | awk '{print "colex-bit\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/colex-pos/bin/colex-pos-test
	callgrind_annotate callgrind.out.* | grep unrank_posvect | cut -d" " -f1 | tr -d "," | awk '{print "colex-pos\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/normal/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_bitvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-normal\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/opt1/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_bitvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-opt1\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/opt2/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_bitvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-opt2\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/opt3/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_bitvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-opt3\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/opt4/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_bitvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-opt4\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/opt3-onebit/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_onebit | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-opt3-onebit\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-bit/opt4-onebit/bin/lex-bit-test
	callgrind_annotate callgrind.out.* | grep unrank_onebit | cut -d" " -f1 | tr -d "," | awk '{print "lex-bit-opt4-onebit\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-pos/normal/bin/lex-pos-test
	callgrind_annotate callgrind.out.* | grep unrank_posvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-pos-normal\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind ./orders/lex-pos/opt1/bin/lex-pos-test
	callgrind_annotate callgrind.out.* | grep unrank_posvect | cut -d" " -f1 | tr -d "," | awk '{print "lex-pos-opt1\t"int(int($$1)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	@echo Note: lookup tables filled in a dumb and extremely slow way, fix it!
	valgrind -q --tool=callgrind --cache-sim=yes --instr-atstart=no ./orders/table-bit/bin/table-bit-test
	callgrind_annotate callgrind.out.* | tr -d "," | grep table_unrank_bitvect | awk 'BEGIN { FS=" " } { print "table-bit\t"int(($$1+$$5*10+$$8*100)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind --cache-sim=yes --instr-atstart=no ./orders/table-bit-onebit/bin/table-bit-test
	callgrind_annotate callgrind.out.* | tr -d "," | grep table_unrank_onebit | awk 'BEGIN { FS=" " } { print "table-bit-onebit\t"int(($$1+$$5*10+$$8*100)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	valgrind -q --tool=callgrind --cache-sim=yes --instr-atstart=no ./orders/table-pos/bin/table-pos-test
	callgrind_annotate callgrind.out.* | tr -d "," | grep table_unrank_posvect | awk 'BEGIN { FS=" " } { print "table-pos\t"int(($$1+$$5*10+$$8*100)/1000000)}' >> result/cycles.txt
	rm callgrind.out.*
	gnuplot result/plot.cmd

clean:
	rm -f result/cycles.txt
	rm -f result/plot.eps
	rm -f result/plot.png
	rm -f callgrind.out.*
	rm -f orders/colex-bit/bin/*
	rm -f orders/colex-bit/check/*
	rm -f orders/colex-pos/bin/*
	rm -f orders/colex-pos/check/*
	rm -f orders/lex-bit/check/*
	rm -f orders/lex-bit/normal/bin/*
	rm -f orders/lex-bit/opt1/bin/*
	rm -f orders/lex-bit/opt2/bin/*
	rm -f orders/lex-bit/opt3/bin/*
	rm -f orders/lex-bit/opt4/bin/*
	rm -f orders/lex-bit/opt3-onebit/bin/*
	rm -f orders/lex-bit/opt4-onebit/bin/*
	rm -f orders/lex-pos/check/*
	rm -f orders/lex-pos/normal/bin/*
	rm -f orders/lex-pos/opt1/bin/*
	rm -f orders/table-bit/check/*
	rm -f orders/table-bit/bin/*
	rm -f orders/table-bit-onebit/check/*
	rm -f orders/table-bit-onebit/bin/*
	rm -f orders/table-pos/check/*
	rm -f orders/table-pos/bin/*
