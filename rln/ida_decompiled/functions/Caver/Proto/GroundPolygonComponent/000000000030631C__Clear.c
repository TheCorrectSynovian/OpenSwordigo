/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030631C
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent5ClearEv
 * Demangled: Caver::Proto::GroundPolygonComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *   0x00000000001F56A0  Caver::Proto::Polygon::Clear(void)
 *
 * Referenced strings: 16
 *   insn=0x0000000000306328 string=0x000000000030632C "h"
 *   insn=0x0000000000306330 string=0x0000000000306368 "h"@"
 *   insn=0x0000000000306334 string=0x0000000000306338 "`\n@"
 *   insn=0x0000000000306338 string=0x000000000030633C "`"
 *   insn=0x0000000000306340 string=0x0000000000306344 "hn@"
 *   insn=0x0000000000306340 string=0x00000000001F4DE0 "P'"
 *   insn=0x0000000000306348 string=0x000000000030634C "`*@"
 *   insn=0x000000000030634C string=0x0000000000306350 "@"
 *   insn=0x0000000000306354 string=0x00000000001F56A0 "P'"
 *   insn=0x000000000030635C string=0x0000000000306360 "hb"
 *   insn=0x000000000030636C string=0x0000000000306370 "k"
 *   insn=0x0000000000306374 string=0x0000000000306378 "h"
 *   insn=0x000000000030637C string=0x0000000000306380 ""
 *   insn=0x0000000000306380 string=0x0000000000306384 ""
 *   insn=0x0000000000306388 string=0x000000000030638C "h""
 *   insn=0x0000000000306394 string=0x0000000000306398 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 108);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 108) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
        v2 = *(_DWORD *)(v1 + 108);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 80);
      if ( this )
        this = Caver::Proto::Polygon::Clear((Caver::Proto::Polygon *)this);
    }
    *(_QWORD *)(v1 + 97) = 0;
    *(_BYTE *)(v1 + 88) = 1;
    *(_QWORD *)(v1 + 92) = 0;
  }
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8 * v3);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 32) );
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  return this;
}

