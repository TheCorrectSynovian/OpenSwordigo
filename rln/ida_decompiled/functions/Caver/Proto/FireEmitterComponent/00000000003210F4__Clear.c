/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003210F4
 * Mangled: _ZN5Caver5Proto20FireEmitterComponent5ClearEv
 * Demangled: Caver::Proto::FireEmitterComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3B50  Caver::Proto::Vector2::Clear(void)
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 15
 *   insn=0x0000000000321100 string=0x0000000000321104 "h"
 *   insn=0x0000000000321110 string=0x0000000000321114 "`"
 *   insn=0x0000000000321114 string=0x0000000000321118 "`"
 *   insn=0x000000000032111C string=0x0000000000321120 "hB@"
 *   insn=0x000000000032111C string=0x00000000001F3B50 "P'"
 *   insn=0x0000000000321124 string=0x0000000000321128 "`"
 *   insn=0x0000000000321128 string=0x000000000032112C "`"
 *   insn=0x0000000000321130 string=0x0000000000321134 "hB@"
 *   insn=0x0000000000321138 string=0x000000000032113C "`"
 *   insn=0x000000000032113C string=0x0000000000321140 "`"
 *   insn=0x0000000000321140 string=0x0000000000321144 "[j"
 *   insn=0x0000000000321144 string=0x0000000000321148 "hB@"
 *   insn=0x0000000000321144 string=0x00000000001FBAB0 "0'"
 *   insn=0x0000000000321150 string=0x0000000000321154 "`"
 *   insn=0x0000000000321154 string=0x0000000000321158 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FireEmitterComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 64);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
      {
        this = Caver::Proto::Vector2::Clear((Caver::Proto::Vector2 *)this);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    if ( (v2 & 0x10) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 64);
      }
    }
    *(_QWORD *)(v1 + 48) = 0;
    if ( (v2 & 0x80) != 0 )
    {
      this = *(_QWORD *)(v1 + 56);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
  }
  *(_DWORD *)(v1 + 64) = 0;
  return this;
}

