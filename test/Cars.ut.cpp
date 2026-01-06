#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_ENABLE_BENCHMARKING
// #include <catch2/catch.hpp>
#include <catch2/catch_all.hpp>
// #include "../greeter.hpp"
#include "../Car.cpp"
#include "../PetrolEngine.hpp"
#include <stdexcept>
#include "../PetrolEngine.cpp"
#include <algorithm>
#include <numeric>
#include "../PetrolCar.cpp"

TEST_CASE("test", "aa")
{
    REQUIRE(1 == 1);
}
TEST_CASE("spalinowySilik", "[zmiana biegu >1]")
{
    // PetrolEngine(int power, float capacity, int gears);
    PetrolEngine e(100, 25, 6);
    REQUIRE_THROWS_AS(e.changeGear(2), std::logic_error);
}
TEST_CASE("spalinowySilik1", "zmiana biegu ==1")
{
    // PetrolEngine(int power, float capacity, int gears);
    PetrolEngine e(100, 25, 6);
    REQUIRE_NOTHROW(e.changeGear(1));
}


TEST_CASE("spalinowy2_petla", "[zmianaa]")
{

    BENCHMARK_ADVANCED("change gear!")(Catch::Benchmark::Chronometer meter)
    {

        PetrolEngine e(100, 25, 6);

        meter.measure([&](int)
                      {
                          for (int i = 1; i < 7; ++i)
                          {
                              e.changeGear(i);
                          }
                    
                          for (int i = 5; i > -1; i--)
                          {

                              e.changeGear(i);
                          } });
    };
};
TEST_CASE("spalinowy2_transform", "[zmiana22]")
{

    BENCHMARK_ADVANCED("change gear!")(Catch::Benchmark::Chronometer meter)
    {
        std::vector<int> vec_p(6);
        std::vector<int> vec_n(6);
        std::iota(vec_p.begin(), vec_p.begin() + 6, 1);
        std::iota(vec_n.rbegin(), vec_n.rbegin() + 6, 0);
        for (auto ee : vec_n)
        {
            std::cout << ee << ", ";
        }

        PetrolEngine e(100, 25, 6);

        meter.measure([&]()
                      {
                       
                          std::transform(vec_p.begin(), vec_p.end(), vec_p.begin(), [&](int x)
                                         {e.changeGear(x);return x; });
                          std::cout << "Reverse \n";
                          std::transform(vec_n.begin(), vec_n.end(), vec_n.begin(), [&](int x)
                                         {e.changeGear(x);return x; });
                                          
                      });
                 
    };
};

TEST_CASE("Acc100", "[Acc100]")
{
    PetrolCar c(new PetrolEngine(120, 1800, 6));
    REQUIRE_NOTHROW(c.accelerate(100));
}
TEST_CASE("Acc0", "[Acc0]")
{
    PetrolCar c(new PetrolEngine(120, 1800, 6));
    REQUIRE_NOTHROW(c.accelerate(0));
}
TEST_CASE("Acc-1", "[Acc-1]")
{
    PetrolCar c(new PetrolEngine(120, 1800, 6));
    
    REQUIRE_THROWS_AS(c.accelerate(-1), std::logic_error);
}
TEST_CASE("Acc301", "[Acc301]")
{
    PetrolCar c(new PetrolEngine(120, 1800, 6));
    
    REQUIRE_THROWS_AS(c.accelerate(301), std::logic_error);
}
TEST_CASE("Acc300", "[Acc300]")
{
    PetrolCar c(new PetrolEngine(120, 1800, 6));
    REQUIRE_NOTHROW(c.accelerate(300));
}