/* -*- c++ -*- */
/*
 * Copyright 2018 Michel Barbeau, Carleton University.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_UWSPR_FDR_H
#define INCLUDED_UWSPR_FDR_H

#include <uwspr/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace uwspr {

    /*!
     * \brief <+description of block+>
     * \ingroup uwspr
     *
     */
    class UWSPR_API FDR : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<FDR> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of uwspr::FDR.
       *
       * To avoid accidental use of raw pointers, uwspr::FDR's
       * constructor is in a private implementation
       * class. uwspr::FDR::make is the public interface for
       * creating new instances.
       */
      static sptr make(int fs, int fl, int spb, int maxdrift, int maxfreqs,
        int halfbandwidth, int cf, int threshold);
    };

  } // namespace uwspr
} // namespace gr

#endif /* INCLUDED_UWSPR_FDR_H */
