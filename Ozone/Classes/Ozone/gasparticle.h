/*
* Ozone - iOS Edition
* Copyright (C) 2009-2013 Ignacio Sanchez

* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program. If not, see http://www.gnu.org/licenses/
*
*/

/* 
 * File:   gasparticle.h
 * Author: nacho
 *
 * Created on 5 de octubre de 2009, 1:43
 */

#pragma once
#ifndef _GASPARTICLE_H
#define	_GASPARTICLE_H

#include "particle.h"

class GasParticle : public Particle
{
public:
    GasParticle();

    virtual void Init(void);
    virtual void Update(Timer* timer);

    virtual void Enable(void);
    virtual void Disable(void);
};

#endif	/* _GASPARTICLE_H */

