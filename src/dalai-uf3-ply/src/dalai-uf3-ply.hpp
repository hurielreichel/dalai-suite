/*
 *  dalai-suite - uf3-ply
 *
 *      Nils Hamel - nils.hamel@bluewin.ch
 *      Copyright (c) 2016-2017 EPFL CDH DHLAB
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

    /*! \file   dalai-uf3-ply.hpp
     *  \author Nils Hamel <nils.hamel@bluewin.ch>
     *
     *  dalai-suite - uf3-ply
     */

    /*! \mainpage dalai-suite
     *
     *  \section dalai-suite
     *
     *  The _dalai-suite_ is designed to be a gathering and standardising
     *  interface to the geodetic system developed at the DHLAB of EPFL. It
     *  consists in a set of softwares having to convert any kind of geodetic
     *  data, mainly point clouds, into the defined universal format considered
     *  in the geodetic system. In other words, it is well described by its
     *  tibetan name.
     *
     *  \section Copyright and License
     *
     *  **dalai-suite** - Nils Hamel <br >
     *  Copyright (c) 2016-2017 EPFL CDH DHLAB
     *
     *  This program is licensed under the terms of the GNU GPLv3.
     */

/*
    header - inclusion guard
 */

    # ifndef __DL_UF3_PLY__
    # define __DL_UF3_PLY__

/*
    header - internal includes
 */

/*
    header - external includes
 */

    # include <iostream>
    # include <fstream>
    # include <common-args.h>

/*
    header - preprocessor definitions
 */

    /* define universal format chunk size */
    # define DL_UF3_PLY_CHUNK ( 131072ll )

/*
    header - preprocessor macros
 */

/*
    header - type definition
 */

/*
    header - structures
 */

/*
    header - function prototypes
 */

    /*! \brief main methods
     *
     *  The main function reads the provided universal format file and converts
     *  it into a ply file :
     *
     *      ./dalai-uf3-ply --uf3/-i [uf3_file]
     *                      --ply/-o [ply_file]
     *
     *  The function starts by allocating the required i/o buffers memory and
     *  creating the i/o stream. it the create and export the output ply file
     *  header. It then reads the input file by chunk. Each chunk is converted
     *  and written in the output stream. As all the input file chunks have been
     *  read, the function closes the stream and release the allocted memory.
     *
     *  The ply format, being a very complicated format, is considered only for
     *  its little endian binary format. The function does not allow to choose
     *  another format to avoid too large code for a simple conversion tool.
     *
     *  \param argc Standard parameter
     *  \param argv Standard parameter
     *
     *  \return Returns standard exit code
     */

    int main( int argc, char ** argv );

/*
    header - inclusion guard
 */

    # endif
