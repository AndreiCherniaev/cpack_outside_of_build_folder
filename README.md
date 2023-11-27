This proj based on https://github.com/AndreiCherniaev/QCoreApplication_quit_example
## Clone and build
```
git clone https://github.com/AndreiCherniaev/cpack_outside_of_build_folder
cd cpack_outside_of_build_folder
cmake -S src/ -B build/ -DCMAKE_BUILD_TYPE=Release --fresh
cmake --build build/ --parallel
cmake --install build/
```
## Make deb packet
```
cpack -B build/ --trace --verbose
```
In my case I get  
CPack Error: CPack generator not specified
