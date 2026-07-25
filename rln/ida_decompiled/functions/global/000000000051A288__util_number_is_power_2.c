/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051A288
 * Mangled: _Z22util_number_is_power_2j
 * Demangled: util_number_is_power_2(uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000051A288 string=0x000000000051A28C ""
 *   insn=0x000000000051A28C string=0x000000000051A290 "\t"
 *   insn=0x000000000051A290 string=0x000000000051A294 ""
 *   insn=0x000000000051A294 string=0x000000000051A298 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall util_number_is_power_2(_BOOL8 result)
{
  if ( result )
    return (result ? result : -1) == ((result - 1) ^ result);
  return result;
}

