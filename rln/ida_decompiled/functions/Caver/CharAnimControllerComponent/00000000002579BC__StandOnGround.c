/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002579BC
 * Mangled: _ZN5Caver27CharAnimControllerComponent13StandOnGroundEv
 * Demangled: Caver::CharAnimControllerComponent::StandOnGround(void)
 *
 * Callers: 1
 *   0x00000000001F9D70  Caver::CharAnimControllerComponent::StandOnGround(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002579BC string=0x00000000002579C0 "h"
 *   insn=0x00000000002579C0 string=0x00000000002579C4 ") "
 *   insn=0x00000000002579C4 string=0x00000000002579C8 "\tY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharAnimControllerComponent::StandOnGround(__int64 this)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(this + 344);
  if ( v1 )
    *(_WORD *)(v1 + 44) = 257;
  return this;
}

