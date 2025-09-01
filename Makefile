# --- Kompilator i flagi ---
CXX := g++
CXXFLAGS := -std=gnu++17 -O2 -Wall -Wextra -I.

# --- Wspólne źródła Twoich klas ---
SRC := author.cpp article.cpp chapter.cpp book.cpp
OBJ := $(SRC:.cpp=.o)

# --- Catch2 (ma main()) ---
CATCH := catch_amalgamated.cpp

# --- Domyślny cel ---
.PHONY: all
all: test_author test_article test_chapter test_book app

# --- Reguła ogólna dla .o ---
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Testy ---
test_author: $(OBJ) $(CATCH) test_author.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

test_article: $(OBJ) $(CATCH) test_article.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

test_chapter: $(OBJ) $(CATCH) test_chapter.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

test_book: $(OBJ) $(CATCH) test_book.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# --- Twoja aplikacja z main.cpp (nie uruchamiamy jej automatycznie) ---
app: $(OBJ) main.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# --- Sprzątanie ---
.PHONY: clean
clean:
	rm -f *.o test_author test_article test_chapter test_book app