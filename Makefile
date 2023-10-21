# Define the compiler and compiler flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++1z

# Define the source directory, build directory, and the executable name
SRCDIR = src
BUILDDIR = build
EXECUTABLE = $(BUILDDIR)/main

# List of source files (all .cpp files in and under the src directory)
SOURCES = $(shell find $(SRCDIR) -type f -name "*.cpp")

# Define the object files by replacing .cpp with .o
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(BUILDDIR)/%.o)

# Libraries to link (in this case, ncurses)
LIBS = -lncurses

# Main build target
all: $(EXECUTABLE)

# Build rule for the executable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@ $(LIBS)

# Build rule for object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(BUILDDIR)

# Target to force a complete rebuild
rebuild: clean all

.PHONY: all clean rebuild
