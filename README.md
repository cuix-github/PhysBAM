Physbam Public
==============

A modified version of the public physbam repo to support using [Cmake](http://www.cmake.org/) and newer GCC compilers
This is using the public version of [physbam](http://physbam.stanford.edu/)

Latest Compiling Options:

```
-> option(PHYSBAM_USE_DOUBLE   		"Turn ON to enable double support"  										ON  )
-> option(PHYSBAM_USE_DYADIC   		"Turn ON to enable dyadic support"  										ON  )
-> option(PHYSBAM_USE_BINTREE  		"Turn ON to enable bintree support" 										OFF )
-> option(PHYSBAM_USE_RLE      		"Turn ON to enable RLE support"     										OFF )
-> option(PHYSBAM_USE_ZLIB     		"Turn ON to enable zlib support"    										ON  )
-> option(PHYSBAM_USE_ID_TYPES   	"Treat ID types as int to avoid possible performance consequences"    		OFF )
-> option(PHYSBAM_USE_FFMPEG   		"Turn ON to enable ffmpeg support"  										OFF )
-> option(PHYSBAM_USE_JPEG     		"Turn ON to enable libjpeg support" 										OFF )
-> option(PHYSBAM_USE_PNG      		"Turn ON to enable png support"     										OFF )
-> option(PHYSBAM_USE_OPENEXR  		"Turn ON to enable OpenEXR support" 										ON  )
-> option(PHYSBAM_USE_FFTW     		"Turn ON to enable FFTW support"    										OFF )
-> option(PHYSBAM_USE_MPI      		"Turn ON to enable MPI support"     										OFF )
-> option(PHYSBAM_USE_PTHREADS      "Turn ON to enable PThreads support"     									OFF )
-> option(PHYSBAM_USE_COMPRESSION   "Turn ON to enable Compression support"     								ON  )
-> option(PHYSBAM_BUILD_PROJECTS    "Turn ON to build example projects"         								OFF )
```

Note that these options probably based on the libraries installed locally. If any errors pop up, go check the corresponding libraries.

Currently tested on the following:

```
Linux:
GCC 4.4.6
GCC 4.6.3
GCC 4.7.2
GCC 4.8.1  -- (Does not compile several examples in project, Linking issue)
GCC 5.4.0 pass (Ubuntu 16.04 x64)

OSX:
GCC 4.7.3
GCC 4.9.0
Apple LLVM version 6.0 (clang-600.0.56) (based on LLVM 3.5svn)
Will also compile using XCode


Extra packages installed using homebrew:
brew install ffmpeg openexr fftw zlib libpng libjpeg

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



