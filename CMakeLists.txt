cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Cars)

set(SRC_LIST
    ElectricCar.cpp
    ElectricEngine.cpp
    HybridCar.cpp
    main.cpp
    PetrolCar.cpp
    PetrolEngine.cpp
    Car.cpp
    
)

find_package(Catch2)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wpedantic -Wextra)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})

enable_testing()
add_executable(${PROJECT_NAME}-ut test/Cars.ut.cpp )
target_compile_options(${PROJECT_NAME}-ut PRIVATE ${FLAGS})
target_compile_features(${PROJECT_NAME}-ut PRIVATE cxx_std_17)
#target_link_libraries(${PROJECT_NAME}-ut ${PROJECT_NAME}-lib Catch2::Catch2WithMain)
target_link_libraries(${PROJECT_NAME}-ut  Catch2::Catch2WithMain)
add_test(NAME CarsHomeWorkTest COMMAND ${PROJECT_NAME}-ut)
