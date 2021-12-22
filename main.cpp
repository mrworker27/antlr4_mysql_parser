/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "antlr4-runtime.h"
#include "MySQLLexer.h"
#include "MySQLParser.h"

using namespace antlrcpp;
using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input("SELECT * FROM index;"); 
  MySQLLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  /*
  MySQLParser parser(&tokens);
  tree::ParseTree* tree = parser.main();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
  */
  return 0;
}