/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1F18
 * Mangled: _ZN5Caver5Proto5Quest5ClearEv
 * Demangled: Caver::Proto::Quest::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 26
 *   insn=0x00000000002E1F24 string=0x00000000002E1F28 "h"
 *   insn=0x00000000002E1F28 string=0x00000000002E1F2C ""
 *   insn=0x00000000002E1F30 string=0x00000000002E1F34 ") "
 *   insn=0x00000000002E1F34 string=0x00000000002E1F38 "`\n@"
 *   insn=0x00000000002E1F38 string=0x00000000002E1F3C ")"
 *   insn=0x00000000002E1F44 string=0x00000000002E1F48 ""
 *   insn=0x00000000002E1F54 string=0x00000000002E1F58 "X\n"
 *   insn=0x00000000002E1F58 string=0x00000000002E1F5C "h2@"
 *   insn=0x00000000002E1F60 string=0x00000000002E1F64 ") "
 *   insn=0x00000000002E1F64 string=0x00000000002E1F68 "`"
 *   insn=0x00000000002E1F68 string=0x00000000002E1F6C ")"
 *   insn=0x00000000002E1F74 string=0x00000000002E1F78 ""
 *   insn=0x00000000002E1F84 string=0x00000000002E1F88 "L\n"
 *   insn=0x00000000002E1F88 string=0x00000000002E1F8C "h2@"
 *   insn=0x00000000002E1F90 string=0x00000000002E1F94 ") "
 *   insn=0x00000000002E1F90 string=0x00000000002E1FC0 "h"
 *   insn=0x00000000002E1F94 string=0x00000000002E1F98 "`"
 *   insn=0x00000000002E1F98 string=0x00000000002E1F9C ")"
 *   insn=0x00000000002E1FA4 string=0x00000000002E1FA8 ""
 *   insn=0x00000000002E1FB4 string=0x00000000002E1FB8 "@\n"
 *   insn=0x00000000002E1FB8 string=0x00000000002E1FBC "h2@"
 *   insn=0x00000000002E1FC0 string=0x00000000002E1FC4 " "
 *   insn=0x00000000002E1FC4 string=0x00000000002E1FC8 "`"
 *   insn=0x00000000002E1FC8 string=0x00000000002E1FCC "AF"
 *   insn=0x00000000002E1FD4 string=0x00000000002E1FD8 ""
 *   insn=0x00000000002E1FE4 string=0x00000000002E1FE8 "4\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Quest::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 48);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 48) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Quest::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::Quest::_default_title_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::Quest::_default_follow_up_quest_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 48);
      }
    }
    if ( (v2 & 8) != 0 )
    {
      this = *(_QWORD *)(v1 + 40);
      if ( (__int64 *)this != &Caver::Proto::Quest::_default_map_location_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  *(_DWORD *)(v1 + 48) = 0;
  return this;
}

