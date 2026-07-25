/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E585C
 * Mangled: _ZN5Caver5Proto11GameOptions5ClearEv
 * Demangled: Caver::Proto::GameOptions::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202290  Caver::Proto::GUIViewLayout::Clear(void)
 *
 * Referenced strings: 19
 *   insn=0x00000000002E5868 string=0x00000000002E586C "hn@"
 *   insn=0x00000000002E5874 string=0x00000000002E5878 ") "
 *   insn=0x00000000002E587C string=0x00000000002E5880 "i"
 *   insn=0x00000000002E5880 string=0x00000000002E5884 "`"
 *   insn=0x00000000002E5888 string=0x00000000002E588C "`.@"
 *   insn=0x00000000002E588C string=0x00000000002E5890 "`"
 *   insn=0x00000000002E5894 string=0x00000000002E5898 "hn@"
 *   insn=0x00000000002E589C string=0x00000000002E58A0 "`2@"
 *   insn=0x00000000002E58A0 string=0x00000000002E58A4 "`"
 *   insn=0x00000000002E58A4 string=0x00000000002E58A8 "zr"
 *   insn=0x00000000002E58A8 string=0x00000000002E58AC "hn@"
 *   insn=0x00000000002E58B4 string=0x00000000002E58B8 "@"
 *   insn=0x00000000002E58B8 string=0x00000000002E58C0 "h"
 *   insn=0x00000000002E58C4 string=0x00000000002E58C8 "k"
 *   insn=0x00000000002E58CC string=0x00000000002E58D0 "h\n@"
 *   insn=0x00000000002E58D4 string=0x00000000002E58D8 ""
 *   insn=0x00000000002E58D8 string=0x00000000002E58DC ""
 *   insn=0x00000000002E58E0 string=0x00000000002E58E4 "h"
 *   insn=0x00000000002E58EC string=0x00000000002E58F0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameOptions::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v8; // x20
  __int64 v9; // x0

  v1 = this;
  v2 = *(_DWORD *)(this + 108);
  if ( (v2 & 0x1FE) != 0 )
  {
    __asm { FMOV            V0.2S, #1.0 }
    *(_WORD *)(this + 72) = 257;
    *(_QWORD *)(this + 76) = _D0;
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(this + 88);
      if ( this )
      {
        this = Caver::Proto::GUIViewLayout::Clear((Caver::Proto::GUIViewLayout *)this);
        v2 = *(_DWORD *)(v1 + 108);
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      this = *(_QWORD *)(v1 + 96);
      if ( this )
      {
        this = Caver::Proto::GUIViewLayout::Clear((Caver::Proto::GUIViewLayout *)this);
        v2 = *(_DWORD *)(v1 + 108);
      }
    }
    *(_BYTE *)(v1 + 104) = 0;
  }
  if ( (v2 & 0xFF00) != 0 )
    *(_WORD *)(v1 + 105) = 0;
  if ( *(int *)(v1 + 24) >= 1 )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8 * v8);
      this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      ++v8;
    }
    while ( v8 < *(int *)(v1 + 24) );
  }
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  return this;
}

