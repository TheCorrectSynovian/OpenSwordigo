/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003043F4
 * Mangled: _ZN5Caver5Proto26KeyframeAnimationComponent5ClearEv
 * Demangled: Caver::Proto::KeyframeAnimationComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000304400 string=0x0000000000304404 "h"
 *   insn=0x000000000030440C string=0x0000000000304410 "h"
 *   insn=0x0000000000304410 string=0x0000000000304414 ""
 *   insn=0x0000000000304414 string=0x0000000000304418 "`\n@"
 *   insn=0x0000000000304418 string=0x000000000030441C "ID"
 *   insn=0x0000000000304424 string=0x0000000000304428 ""
 *   insn=0x0000000000304434 string=0x0000000000304438 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::KeyframeAnimationComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  char v2; // w8

  v1 = this;
  v2 = *(_BYTE *)(this + 32);
  if ( v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::KeyframeAnimationComponent::_default_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_WORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 28) = 0;
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

