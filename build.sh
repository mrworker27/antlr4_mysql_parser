#!/bin/bash

cd grammar/grammar
java -jar ../../antlr-4.7-complete.jar -Dlanguage=Cpp MySQLLexer.g4
java -jar ../../antlr-4.7-complete.jar -Dlanguage=Cpp MySQLParser.g4
cd -

mkdir build
cd build
cmake ..
make -j8
cd -
