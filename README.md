# ass2-compiler
Compiler course, assignement 2

To submit ---------------------------------------------------------
tar czf submission.tgz ass2-comp
To transform tree into svg picture --------------------------------
dot cfg.dot -Ocfg.svg -Tsvg 

To run ------------------------------------------------------------
tar xzf submission.tgz
cd ass2-comp
make clean
make
./comp testcase.lua
# [optionally] Output from interpreter to stdout, dot-format parse tree into the text file.
# Output of the CFG into cfg.dot
dot cfg.dot -Ocfg.svg -Tsvg 
g++ target.cc -o target
./target
