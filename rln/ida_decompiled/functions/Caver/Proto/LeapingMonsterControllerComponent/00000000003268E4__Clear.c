/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003268E4
 * Mangled: _ZN5Caver5Proto33LeapingMonsterControllerComponent5ClearEv
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000003268E4 string=0x00000000003268E8 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LeapingMonsterControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 20) )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
  }
  *(_DWORD *)(this + 20) = 0;
  return this;
}

