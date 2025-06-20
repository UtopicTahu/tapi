# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I$(SRC_DIR)

# Directories
SRC_DIR = src
BUILD_DIR = build
TARGET = tapi

# Find all .cpp files in src and subdirectories
SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
# Generate .o file paths in build/ while preserving subfolder structure
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

# Default target
all: $(TARGET)

# Link the object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp files to .o files in build/, preserving directory structure
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)