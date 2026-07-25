/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5B30
 * Mangled: _ZN5Caver5Proto7Program5ClearEv
 * Demangled: Caver::Proto::Program::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 16
 *   insn=0x00000000002D5B3C string=0x00000000002D5B40 "h"
 *   insn=0x00000000002D5B4C string=0x00000000002D5B50 "`\n@"
 *   insn=0x00000000002D5B50 string=0x00000000002D5B54 ")"
 *   insn=0x00000000002D5B5C string=0x00000000002D5B60 ""
 *   insn=0x00000000002D5B6C string=0x00000000002D5B70 "RL\n"
 *   insn=0x00000000002D5B70 string=0x00000000002D5B74 "h*@"
 *   insn=0x00000000002D5B78 string=0x00000000002D5BA8 "h"
 *   insn=0x00000000002D5B7C string=0x00000000002D5B80 "`"
 *   insn=0x00000000002D5B80 string=0x00000000002D5B84 ")mB"
 *   insn=0x00000000002D5B8C string=0x00000000002D5B90 ""
 *   insn=0x00000000002D5B9C string=0x00000000002D5BA0 "FL\n"
 *   insn=0x00000000002D5BA0 string=0x00000000002D5BA4 "h*@"
 *   insn=0x00000000002D5BAC string=0x00000000002D5BB0 "`"
 *   insn=0x00000000002D5BB0 string=0x00000000002D5BB4 "9@"
 *   insn=0x00000000002D5BBC string=0x00000000002D5BC0 ""
 *   insn=0x00000000002D5BCC string=0x00000000002D5BD0 ":L\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Program::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 40) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Program::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::Program::_default_string_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::Program::_default_bytes_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

