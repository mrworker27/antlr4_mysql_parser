add_library(
    grammar
    grammar/MySQLLexer.h
    grammar/MySQLLexer.cpp
    grammar/MySQLParser.h
    grammar/MySQLParser.cpp
    grammar/MySQLBaseLexer.h
    grammar/MySQLBaseParser.h
    grammar/SqlMode.h
)

target_include_directories(grammar PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/grammar")

target_link_libraries(grammar antlr4_static)
