# Blinky for Raspberry Pico W

## Building

Make sure `PICO_SDK_PATH` is set in your environment.

```sh
mkdir build
cd build

cmake .. -DPICO_BOARD=pico_w

cmake --build .
```