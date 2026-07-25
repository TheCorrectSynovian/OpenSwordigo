/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A38C
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent5ClearEv
 * Demangled: Caver::Proto::WaterMeshComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000030A398 string=0x000000000030A39C "h"
 *   insn=0x000000000030A39C string=0x000000000030A3A0 "h"
 *   insn=0x000000000030A3A8 string=0x000000000030A3AC "`"
 *   insn=0x000000000030A3AC string=0x000000000030A3B0 "`"
 *   insn=0x000000000030A3B4 string=0x000000000030A3B8 "h*@"
 *   insn=0x000000000030A3B4 string=0x00000000001FBAB0 "0'"
 *   insn=0x000000000030A3BC string=0x000000000030A3C0 "`"
 *   insn=0x000000000030A3C0 string=0x000000000030A3C4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = 0;
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(this + 24);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( this )
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

