# find src/ -type f -name "*.cpp" -print0 | xargs -0 g++ -o build/main && ./build/main
# find src/ -type f -name "*.cpp" -print0 | xargs -0 g++ -o build/main -lncurses && ./build/main
make -s && ./build/main