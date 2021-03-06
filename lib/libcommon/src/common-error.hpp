/*
 *  dalai-suite - common library
 *
 *      Nils Hamel - nils.hamel@alumni.epfl.ch
 *      Copyright (c) 2016-2020 DHLAB, EPFL
 *      Copyright (c) 2020 Republic and Canton of Geneva
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

    /*! \file   common-error.hpp
     *  \author Nils Hamel <nils.hamel@alumni.epfl.ch>
     *
     *  dalai-suite - common library - error
     */

/*
    header - inclusion guard
 */

    # ifndef __LC_ERROR__
    # define __LC_ERROR__

/*
    header - internal includes
 */

/*
    header - external includes
 */

    # include <iostream>

/*
    header - preprocessor definitions
 */

    /* define errors code */
    # define LC_ERROR_NONE      (  0 )
    # define LC_ERROR_MEMORY    (  1 )
    # define LC_ERROR_IO_ACCESS (  2 )
    # define LC_ERROR_IO_READ   (  3 )
    # define LC_ERROR_IO_WRITE  (  4 )
    # define LC_ERROR_IO_REMOVE (  5 )
    # define LC_ERROR_FORMAT    (  6 )
    # define LC_ERROR_CONTEXT   (  7 )
    # define LC_ERROR_DOMAIN    (  8 )
    # define LC_ERROR_RANDOM    (  9 )
    # define LC_ERROR_CONVERT   ( 10 )

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

    /*! \brief error methods
     *
     *  This function analysis the provided error code and displays the related
     *  error message on the error output (cerr).
     *
     *  If the provided code is not linked to an implemented error, the function
     *  does nothing. The same behaviour applies when \b LC_ERROR_NONE code is
     *  is provided.
     *
     *  \param lc_code Error code
     */

    void lc_error( int lc_code );

/*
    header - inclusion guard
 */

    # endif

