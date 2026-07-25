/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304C68
 * Mangled: _ZN5Caver5Proto23BlendAnimationComponent5ClearEv
 * Demangled: Caver::Proto::BlendAnimationComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000304C68 string=0x0000000000304C6C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BlendAnimationComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 28) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
  }
  *(_DWORD *)(this + 28) = 0;
  return this;
}

