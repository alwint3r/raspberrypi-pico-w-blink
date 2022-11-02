# Blinky for Raspberry Pico W

## Building

Make sure `PICO_SDK_PATH` is set in your environment.

```sh
mkdir build
cd build

cmake .. -DPICO_BOARD=pico_w

cmake --build .
```

## Flashing

Reset the board (can unplug-plug the USB cable) while holding the BOOT button.
Then, release the button.
Copy `build/blinky.uf2` to the Raspberry Pi Pico W (as the USB drive).