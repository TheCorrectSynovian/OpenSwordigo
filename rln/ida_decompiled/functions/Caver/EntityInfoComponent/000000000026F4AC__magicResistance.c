/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F4AC
 * Mangled: _ZNK5Caver19EntityInfoComponent15magicResistanceEv
 * Demangled: Caver::EntityInfoComponent::magicResistance(void)
 *
 * Callers: 1
 *   0x00000000001FB960  Caver::EntityInfoComponent::magicResistance(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000026F4AC string=0x000000000026F4B0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::EntityInfoComponent::magicResistance(Caver::EntityInfoComponent *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 16);
  if ( v1 )
    return *(float *)(v1 + 20);
  else
    return 0.0;
}

