/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CB14
 * Mangled: _ZN5Caver25EntityControllerComponent26SetMoveDirectionAfterDelayEif
 * Demangled: Caver::EntityControllerComponent::SetMoveDirectionAfterDelay(int,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000026CB1C string=0x000000000026CB38 ""
 *   insn=0x000000000026CB20 string=0x000000000026CB24 ""
 *   insn=0x000000000026CB24 string=0x000000000026CB28 "   "
 *   insn=0x000000000026CB28 string=0x000000000026CB2C " L "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::SetMoveDirectionAfterDelay(__int64 this, int a2, float a3)
{
  if ( *(_DWORD *)(this + 300) == a2 )
  {
    if ( *(float *)(this + 308) < a3 )
      a3 = *(float *)(this + 308);
    *(float *)(this + 308) = a3;
  }
  else
  {
    *(_DWORD *)(this + 300) = a2;
    *(float *)(this + 308) = a3;
  }
  return this;
}

