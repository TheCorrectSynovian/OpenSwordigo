/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281EEC
 * Mangled: _ZN5Caver23DimensionSpellComponent4CastEv
 * Demangled: Caver::DimensionSpellComponent::Cast(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA3D0  Caver::SpellComponent::Cast(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000281EF8 string=0x0000000000281EFC "5"
 *   insn=0x0000000000281EFC string=0x00000000001FA3D0 "0'"
 *   insn=0x0000000000281F00 string=0x0000000000281F04 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DimensionSpellComponent::Cast(Caver::DimensionSpellComponent *this)
{
  __int64 result; // x0

  result = Caver::SpellComponent::Cast(this);
  *((_BYTE *)this + 184) = 1;
  return result;
}

