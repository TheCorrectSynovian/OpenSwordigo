/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003119B8
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponent5ClearEv
 * Demangled: Caver::Proto::AnimationControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000003119B8 string=0x00000000003119BC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 24) )
  {
    *(_BYTE *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
  }
  *(_DWORD *)(this + 24) = 0;
  return this;
}

