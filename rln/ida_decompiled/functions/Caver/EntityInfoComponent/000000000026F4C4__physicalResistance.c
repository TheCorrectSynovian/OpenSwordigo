/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F4C4
 * Mangled: _ZNK5Caver19EntityInfoComponent18physicalResistanceEv
 * Demangled: Caver::EntityInfoComponent::physicalResistance(void)
 *
 * Callers: 1
 *   0x00000000002019A0  Caver::EntityInfoComponent::physicalResistance(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000026F4C4 string=0x000000000026F4C8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::EntityInfoComponent::physicalResistance(Caver::EntityInfoComponent *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 16);
  if ( v1 )
    return *(float *)(v1 + 24);
  else
    return 0.0;
}

