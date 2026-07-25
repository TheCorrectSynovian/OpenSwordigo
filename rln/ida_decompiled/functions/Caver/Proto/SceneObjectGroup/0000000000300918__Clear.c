/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300918
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup5ClearEv
 * Demangled: Caver::Proto::SceneObjectGroup::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 15
 *   insn=0x0000000000300924 string=0x0000000000300928 "h"
 *   insn=0x0000000000300928 string=0x000000000030092C "h"
 *   insn=0x000000000030092C string=0x0000000000300978 "h"@"
 *   insn=0x0000000000300930 string=0x0000000000300934 ")"
 *   insn=0x0000000000300934 string=0x0000000000300938 "`\n@"
 *   insn=0x0000000000300938 string=0x000000000030093C ")A"
 *   insn=0x0000000000300944 string=0x0000000000300948 ""
 *   insn=0x0000000000300958 string=0x000000000030095C "hb@"
 *   insn=0x0000000000300968 string=0x000000000030096C "`.@"
 *   insn=0x000000000030096C string=0x0000000000300970 "@"
 *   insn=0x0000000000300970 string=0x0000000000300974 ""
 *   insn=0x0000000000300974 string=0x00000000001F4DE0 "P'"
 *   insn=0x0000000000300984 string=0x0000000000300988 "h"
 *   insn=0x0000000000300994 string=0x0000000000300998 ""
 *   insn=0x00000000003009A0 string=0x00000000003009A4 "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x20
  _QWORD *v4; // x0

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 96);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 96) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::SceneObjectGroup::_default_identifier_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 96);
      }
    }
    *(_WORD *)(v1 + 80) = 0;
    *(_BYTE *)(v1 + 82) = 0;
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(v1 + 88);
      if ( this )
        this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
    }
  }
  if ( *(int *)(v1 + 32) >= 1 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD **)(*(_QWORD *)(v1 + 24) + 8 * v3);
      this = sub_568CB8(v4, 0, *(_QWORD *)(*v4 - 24LL), 0);
      ++v3;
    }
    while ( v3 < *(int *)(v1 + 32) );
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  return this;
}

