/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011-2013 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Class
    Foam::localAxesRotation

Description
    A local coordinate rotation.
    Each rotational tensor is defined with two vectors (dir and e3)
    where dir =  cellC - origin and e3 is the rotation axis.
    Per each cell an axesRotation type of rotation is created

    \verbatim
        localAxesRotation
        {
            type        localAxes;
            e3          (0 0 1);
        }
    \endverbatim

\*---------------------------------------------------------------------------*/

#ifndef localAxesRotation_H
#define localAxesRotation_H

#include "point.H"
#include "vector.H"
#include "coordinateRotation.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                    Class localAxesRotation Declaration
\*---------------------------------------------------------------------------*/

class localAxesRotation
:
    public coordinateRotation
{
    // Private data

        //- AutoPtr to transformation tensor
        autoPtr<tensorField> Rptr_;

        //- Origin of the coordinate system
        point origin_;

        //- Rotation axis
        vector e3_;


    // Private members

        //- Init transformation tensor
        void init(const dictionary& dict, const objectRegistry& obr);


public:

    //- Runtime type information
    TypeName("localAxesRotation");

    // Constructors

        //- Construct from dictionary and objectRegistry
        localAxesRotation(const dictionary&, const objectRegistry&);

        //- Construct from dictionary
        localAxesRotation(const dictionary&);

        //- Return clone
        autoPtr<localAxesRotation> clone() const
        {
            return autoPtr<localAxesRotation>(new localAxesRotation(*this));
        }


    //- Destructor
    virtual ~localAxesRotation()
    {}


    // Member Functions

        //- Reset rotation to an identity rotation
        virtual void clear();

        //- Return local-to-global transformation tensor
        virtual const tensor& R() const
        {
            notImplemented("const tensor& localAxesRotation::R() const");
            return tensor::zero;
        }

        //- Return global-to-local transformation tensor
        virtual const tensor& Rtr() const
        {
             notImplemented("const tensor& localAxesRotation::Rtr() const");
             return tensor::zero;
        }

        //- Return local Cartesian x-axis
        virtual const vector e1() const
        {
            notImplemented("const tensor& localAxesRotation::e1() const");
            return vector::zero;
        }

        //- Return local Cartesian y-axis
        virtual const vector e2() const
        {
            notImplemented("const tensor& localAxesRotation::e2() const");
            return vector::zero;
        }

        //- Return local Cartesian z-axis
        virtual const vector e3() const
        {
            return e3_;
        }

        virtual const tensorField& Tr() const
        {
            return Rptr_();
        }

        //- Transform vectorField using transformation tensor field
        virtual tmp<vectorField> transform(const vectorField& st) const;

        //- Transform vector using transformation tensor
        virtual vector transform(const vector& st) const;

        //- Inverse transform vectorField using transformation tensor field
        virtual tmp<vectorField> invTransform(const vectorField& st) const;

        //- Inverse transform vector using transformation tensor
        virtual vector invTransform(const vector& st) const;

        //- Return if the rotation is uniform
        virtual bool uniform() const
        {
            return false;
        }

        //- Transform tensor field using transformation tensorField
        virtual tmp<tensorField> transformTensor(const tensorField& st) const;

        //- Transform tensor using transformation tensorField
        virtual tensor transformTensor(const tensor& st) const;

        //- Transform tensor sub-field using transformation tensorField
        virtual tmp<tensorField> transformTensor
        (
            const tensorField& st,
            const labelList& cellMap
        ) const;

        //- Transform vectorField using transformation tensorField and return
        // symmetrical tensorField
        virtual tmp<symmTensorField> transformVector
        (
            const vectorField& st
        ) const;

        //- Transform vector using transformation tensor and return
        // symmetrical tensor (R & st & R.T())
        virtual symmTensor transformVector(const vector& st) const;


    // Write

        //- Write
        virtual void write(Ostream&) const;

};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
