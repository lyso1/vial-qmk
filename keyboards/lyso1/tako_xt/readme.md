# TAKO-XT	

A XT TKL replacement pcb for use with oring mount boards and other mounting styles. 

* Keyboard Maintainer: [Lyso1](https://github.com/Lyso1)
* Hardware Supported: TAKO-XT
* Hardware Availability: [/u/TheLysol_27](https://www.reddit.com/user/TheLysol_27)

Make example for this keyboard (after setting up your build environment):

    make lyso1/tako_xt:default

Enter into the bootloader to flash new firmware in 3 ways:

	* **Bootmagic reset**: Hold down the key at (0,0) in the matrix(The ESC key in this case) and plug the the keyboard in. 
	* **Physical reset button**: Briefly press the button on the back and left side of the PCB(exactly under where the "2" key would be located) while the PCB is plugged in.
	* **Keycode in layout**: Press the key mapped to `RESET` (RALT + R in this case) while the keyboard is plugged in. 

Flashing example for this keyboard:

    make lyso1/tako_xt:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
