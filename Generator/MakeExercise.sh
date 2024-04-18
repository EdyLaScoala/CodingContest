#!/bin/bash

# Check if the exercise number argument is provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 <exercise_number>"
    exit 1
fi

# Exercise number argument provided
exercise_number="$1"

# Set the parent folder for exercises (one level above your project directory)
parent_folder="./Exercises"

# Define the exercise directory based on the exercise number
exercise_directory="$parent_folder/$exercise_number"

# Check if the exercise directory exists, create it if needed
if [ ! -d "$exercise_directory" ]; then
    echo "Creating exercise directory: $exercise_directory"
    mkdir -p "$exercise_directory"
fi

# Define the path to the local template.cpp file
template_path="./template.cpp"

# Copy the local template.cpp file to the exercise directory
cp "$template_path" "$exercise_directory/${exercise_number}.cpp"

echo "Exercise template copied to: $exercise_directory/${exercise_number}.cpp"