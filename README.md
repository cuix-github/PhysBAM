Physbam Public
==============

A modified version of the public physbam repo to support using [Cmake](http://www.cmake.org/) and newer GCC compilers
This is using the public version of [physbam](http://physbam.stanford.edu/)

Latest Compiling Options:

```
option(PHYSBAM_USE_DOUBLE		"Description to the option"	OFF)
option(PHYSBAM_USE_DYADIC		"Description to the option"	OFF)
option(PHYSBAM_USE_BINTREE		"Description to the option"	OFF)
option(PHYSBAM_USE_RLE			"Description to the option"	OFF)
option(PHYSBAM_USE_ZLIB			"Description to the option"	OFF)
option(PHYSBAM_USE_ID			"Description to the option"	OFF)
option(PHYSBAM_USE_FFMPEG		"Description to the option"	OFF)
option(PHYSBAM_USE_JPEG			"Description to the option"	OFF)
option(PHYSBAM_USE_PNG			"Description to the option"	OFF)
option(PHYSBAM_USE_OPENEXR		"Description to the option"	OFF)
option(PHYSBAM_USE_FFTW			"Description to the option"	OFF)
option(PHYSBAM_USE_MPI			"Description to the option"	OFF)
option(PHYSBAM_USE_PTHREADS		"Description to the option"	OFF)
option(PHYSBAM_USE_COMPRESSION	"Description to the option"	OFF)
option(PHYSBAM_BUILD_PROJECTS	"Description to the option"	ON)
```

Note that these options probably based on the libraries installed locally. If any errors pop up, go check the corresponding libraries.

Currently tested on the following:

```
Linux:
GCC 4.4.6
GCC 4.6.3
GCC 4.7.2
GCC 4.7.4
GCC 4.8.1  -- (Does not compile several examples in project, Linking issue)

OSX:
GCC 4.7.3
GCC 4.9.0
Apple LLVM version 6.0 (clang-600.0.56) (based on LLVM 3.5svn)
Will also compile using XCode


Extra packages installed using homebrew:
brew install ffmpeg openexr fftw zlib libpng libjpeg

Note that currently we don't build the PhysBAM renderer which is in the directory PhysBAM/Projects/ray_tracing

```


Currently does not compile on:

```
Linux:
OSX:
Windows:
```
Build testing using GCC 4.6.3 is availible [here](https://drone.io/github.com/hmazhar/physbam_public)

Physbam is Copyright 1999-2010:

Andrew Selle, Andy Lutimirski, Avi Robinson-Mosher, Bridget Vuong, Christopher Allocco, Craig Schroeder, Don Hatch, Douglas Enright, Duc Nguyen, Eftychios Sifakis, Eilene Hao, Elliot English, Eran Guendelman, Fen Zhao, Frank Losasso, Frederic Gibou, Geoffrey Irving, Huamin Wang, Igor Neverov, Jared Go, Jeffrey Hellrung, Jeong-Mo Hong, Jerry Talton, Jiayi Chong, Jonathan Su, Jon Gretarsson, Joseph Teran, Joyce Pan, Justin Solomon, Kevin Der, Mark A. Wicks, Michael Lentine, Michael Turitzin, Mike Rodgers, Neil Molino, Nick Rasmussen, Nipun Kwatra, Paul, James White, Rachel Weinstein, Ranjitha Kumar, Robert Bridson, Robert Travis, Ron Fedkiw, Ryan Kautzman, Sergey Koltakov, Sergey Levine, Silvia Salinas-Blemker, Tamar Shinar, Unnur Gretarsdottir, Wen Zheng, Zhaosheng Bao. All rights reserved. 



