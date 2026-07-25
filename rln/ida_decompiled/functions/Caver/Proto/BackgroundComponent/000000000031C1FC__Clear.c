/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031C1FC
 * Mangled: _ZN5Caver5Proto19BackgroundComponent5ClearEv
 * Demangled: Caver::Proto::BackgroundComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x000000000031C208 string=0x000000000031C20C "hb@9h"
 *   insn=0x000000000031C20C string=0x000000000031C210 "h"
 *   insn=0x000000000031C210 string=0x000000000031C214 "H"
 *   insn=0x000000000031C214 string=0x000000000031C218 "`\n@"
 *   insn=0x000000000031C218 string=0x000000000031C21C "UC"
 *   insn=0x000000000031C224 string=0x000000000031C228 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( (__int64 *)this != &Caver::Proto::BackgroundComponent::_default_texture_name_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

