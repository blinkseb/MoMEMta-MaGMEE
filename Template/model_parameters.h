/*
 *  This file was automatically generated by MoMEMta-MaGMEE,
 *  A MadGraph Matrix Element Exporter plugin for MoMEMta.
 *  
 *  It is subject to MoMEMta-MaGMEE's license and copyright:
 *  
 *  Copyright (C) 2016  Universite catholique de Louvain (UCL), Belgium
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

#pragma once

#include <complex>
#include <memory>

#include <momemta/MEParameters.h>

namespace SLHA { class Reader; }

namespace %(namespace)s_%(model_name)s {

class Parameters_%(model_name)s: public momemta::MEParameters
{

    public:

        Parameters_%(model_name)s(const SLHA::Reader& card); 
        
        /**
         * Cache parameters. This is implementation dependent
         */
        virtual void cacheParameters();
        virtual void cacheCouplings();

        virtual void updateParameters();
        virtual void updateCouplings();

        // Define "zero"
        double zero, ZERO;
        %(independent_parameters)s
        %(independent_couplings)s
        %(dependent_parameters)s
        %(dependent_couplings)s
};

}
