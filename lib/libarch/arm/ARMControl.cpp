/*
 * Copyright (C) 2015 Niek Linnenbank
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ARMControl.h"

ARMControl::ARMControl()
{
}

ARMControl::~ARMControl()
{
}

u32 ARMControl::read(Register reg)
{
    switch (reg)
    {
        case MainID: return mrc(p15, 0, 0, c0, c0);
        default:     break;
    }
    return 0;
    /*
    return ARMCoProcessor::read(registers[reg].opcode1,
                                registers[reg].opcode2,
                                registers[reg].reg,
                                registers[reg].subReg);
    */
}

void ARMControl::write(Register reg, u32 value)
{
    /*
    ARMCoProcessor::write(registers[reg].opcode1,
                          registers[reg].opcode2,
                          registers[reg].reg,
                          registers[reg].subReg,
                          value);
     */
}
