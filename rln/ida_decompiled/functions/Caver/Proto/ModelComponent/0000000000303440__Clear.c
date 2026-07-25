/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303440
 * Mangled: _ZN5Caver5Proto14ModelComponent5ClearEv
 * Demangled: Caver::Proto::ModelComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 16
 *   insn=0x000000000030344C string=0x0000000000303450 "h"A9"
 *   insn=0x0000000000303458 string=0x000000000030345C ")"
 *   insn=0x000000000030345C string=0x0000000000303460 "`\n@"
 *   insn=0x0000000000303460 string=0x0000000000303464 ")"
 *   insn=0x000000000030346C string=0x0000000000303470 ""
 *   insn=0x0000000000303480 string=0x0000000000303484 "hJ@"
 *   insn=0x0000000000303488 string=0x000000000030348C "`"
 *   insn=0x000000000030348C string=0x0000000000303490 "`"
 *   insn=0x0000000000303494 string=0x0000000000303498 "hJ@"
 *   insn=0x00000000003034A4 string=0x00000000003034A8 "`"
 *   insn=0x00000000003034A8 string=0x00000000003034AC "`"
 *   insn=0x00000000003034B0 string=0x00000000003034B4 "hJ@"
 *   insn=0x00000000003034B0 string=0x00000000001FBAB0 "0'"
 *   insn=0x00000000003034BC string=0x00000000003034C0 "`"@"
 *   insn=0x00000000003034C0 string=0x00000000003034C4 "@"
 *   insn=0x00000000003034C4 string=0x00000000003034C8 "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 72);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 72) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::ModelComponent::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 72);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 72);
      }
    }
    *(_QWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(v1 + 48);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 72);
      }
    }
    *(_BYTE *)(v1 + 56) = 0;
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 64);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
  }
  *(_DWORD *)(v1 + 72) = 0;
  return this;
}

