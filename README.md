# Chocolate Doom Nintendo Switch Port

## Compiling

* Install devkitpro and install SDL2 and SDL Mixer (more details in [this video](https://www.youtube.com/watch?v=F4Dv32-PoU4))

* Build Doom with 		make -f makefile.doom
* Build Heretic with 	make -f makefile.heretic
* Build Hexen with 		make -f makefile.hexen
* Build Strife with 	make -f makefile.heretic

## Running on Emulator

* Download a compiled build for [Ryujinx](https://ryujinx.org/)
* Goto the emulated sd card location ```%appdata%\RyuFs\sdmc``` and place inside:
   - an empty folder called 'tmp'
   - doom.nro
   - default.cfg
   - chocolate-doom.cfg
   - doom.wad (or doom1.wad, doom2.wad, doom3.wad) please source yourself
* Run the releases/doom.nro on the emulator via command line or drag and drop ```Ryujinx.exe ./doom.nro```

## Running on the Nintendo Switch

* Create a folder called 'doom' (or the same name as the .nro) on the switch homebrew folder (currently /switch/
* Place inside the following files
   - doom.nro
   - default.cfg
   - chocolate-doom.cfg
   - doom.wad (or doom1.wad, doom2.wad, doom3.wad) please source yourself

## Controls

You need to add the ```/releases/default.cfg``` and ```/releases/chocolate-doom.cfg``` access these controls

* Left stick - Strafe and move
* Right stick - Look
* ZR - Fire
* ZL - Sprint
* L - Previous Weapon
* R - Next Weapon
* B - Use Item

# Chocolate Doom

Chocolate Doom aims to accurately reproduce the original DOS version of
Doom and other games based on the Doom engine in a form that can be
run on modern computers.

Originally, Chocolate Doom was only a Doom source port. The project
now includes ports of Heretic and Hexen, and Strife.

Chocolate Doom’s aims are:

 * To always be 100% Free and Open Source software.
 * Portability to as many different operating systems as possible.
 * Accurate reproduction of the original DOS versions of the games,
   including bugs.
 * Compatibility with the DOS demo, configuration and savegame files.
 * To provide an accurate retro “feel” (display and input should
   behave the same).

More information about the philosophy and design behind Chocolate Doom
can be found in the PHILOSOPHY file distributed with the source code.

## Setting up gameplay

For instructions on how to set up Chocolate Doom for play, see the
INSTALL file.

## Configuration File

Chocolate Doom is compatible with the DOS Doom configuration file
(normally named `default.cfg`). Existing configuration files for DOS
Doom should therefore simply work out of the box. However, Chocolate
Doom also provides some extra settings. These are stored in a
separate file named `chocolate-doom.cfg`.

The configuration can be edited using the chocolate-setup tool.

## Command line options

Chocolate Doom supports a number of command line parameters, including
some extras that were not originally suported by the DOS versions. For
binary distributions, see the CMDLINE file included with your
download; more information is also available on the Chocolate Doom
website.

## Playing TCs

With Vanilla Doom there is no way to include sprites in PWAD files.
Chocolate Doom’s ‘-file’ command line option behaves exactly the same
as Vanilla Doom, and trying to play TCs by adding the WAD files using
‘-file’ will not work.

Many Total Conversions (TCs) are distributed as a PWAD file which must
be merged into the main IWAD. Typically a copy of DEUSF.EXE is
included which performs this merge. Chocolate Doom includes a new
option, ‘-merge’, which will simulate this merge. Essentially, the
WAD directory is merged in memory, removing the need to modify the
IWAD on disk.

To play TCs using Chocolate Doom, run like this:

```
chocolate-doom -merge thetc.wad
```

Here are some examples:

```
chocolate-doom -merge batman.wad -deh batman.deh vbatman.deh  (Batman Doom)
chocolate-doom -merge aoddoom1.wad -deh aoddoom1.deh  (Army of Darkness Doom)
```

## Other information

 * Chocolate Doom includes a number of different options for music
   playback. See the README.Music file for more details.

 * More information, including information about how to play various
   classic TCs, is available on the Chocolate Doom website:

     https://www.chocolate-doom.org/

   You are encouraged to sign up and contribute any useful information
   you may have regarding the port!

 * Chocolate Doom is not perfect. Although it aims to accurately
   emulate and reproduce the DOS executables, some behavior can be very
   difficult to reproduce. Because of the nature of the project, you
   may also encounter Vanilla Doom bugs; these are intentionally
   present; see the NOT-BUGS file for more information.

   New bug reports can be submitted to the issue tracker on Github:

     https://github.com/chocolate-doom/chocolate-doom/issues

 * Source code patches are welcome, but please follow the style
   guidelines - see the file named HACKING included with the source
   distribution.

 * Chocolate Doom is distributed under the GNU GPL. See the COPYING
   file for more information.

 * Please send any feedback, questions or suggestions to
   chocolate-doom-dev-list@chocolate-doom.org. Thanks!
