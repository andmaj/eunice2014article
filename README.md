# Development and Performance Evaluation of Fast Combinatorial Unranking Implementations
Source codes of benchmarking suite and combinatorial unranking implementations

## Usage

### Article 
The article is in the article folder.

### Cycle accurate benchmark
```
cd cyclecount
./make.py
./run.py
```

Results are in the results folder (plot.png)

```cd ..```

### Valgrind cycle estimation
```
cd profile
make test
make run-test
```

Results are in the result folder (plot.png)

```cd ..```

### Optional: validate results
```
cd profile
make check
make run-check
```
Results are written to the console

```cd ..```

## Author

Written by Andras Majdan.

License: GNU General Public License Version 3

Report bugs to <majdan.andras@gmail.com>
