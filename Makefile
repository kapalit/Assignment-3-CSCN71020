# Makefile for Rock Paper Scissors
# CSCN71020 Assignment 3

CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g
TARGET = rps_game
SRCDIR = R_P_S
BUILDDIR = build
SOURCES = $(SRCDIR)/main.c

# Default target
all: $(BUILDDIR)/$(TARGET)

# Create build directory and compile
$(BUILDDIR)/$(TARGET): $(SOURCES) | $(BUILDDIR)
	$(CC) $(CFLAGS) -o $@ $^
	@echo "✅ Build complete: $@"

# Create build directory
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Clean build files
clean:
	rm -rf $(BUILDDIR)
	@echo "🧹 Cleaned build directory"

# Test build (compile only)
test-build: $(BUILDDIR)/$(TARGET)
	@echo "✅ Test build successful"

# Demo run (requires a main function to be added)
demo:
	@echo "🎮 Rock Paper Scissors Demo"
	@echo "Add a main() function to run interactive demo"

.PHONY: all clean test-build demo
