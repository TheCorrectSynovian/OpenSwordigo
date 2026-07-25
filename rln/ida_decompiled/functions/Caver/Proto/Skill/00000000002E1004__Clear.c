/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1004
 * Mangled: _ZN5Caver5Proto5Skill5ClearEv
 * Demangled: Caver::Proto::Skill::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 16
 *   insn=0x00000000002E1010 string=0x00000000002E1014 "h"
 *   insn=0x00000000002E101C string=0x00000000002E1020 ") "
 *   insn=0x00000000002E1020 string=0x00000000002E1024 "`\n@"
 *   insn=0x00000000002E1024 string=0x00000000002E1028 ")"
 *   insn=0x00000000002E1030 string=0x00000000002E1034 ""
 *   insn=0x00000000002E1044 string=0x00000000002E1048 "h6@"
 *   insn=0x00000000002E104C string=0x00000000002E1050 ") "
 *   insn=0x00000000002E104C string=0x00000000002E107C "h"
 *   insn=0x00000000002E1050 string=0x00000000002E1054 "`"
 *   insn=0x00000000002E1054 string=0x00000000002E1058 ")"
 *   insn=0x00000000002E1060 string=0x00000000002E1064 ""
 *   insn=0x00000000002E1074 string=0x00000000002E1078 "h6@"
 *   insn=0x00000000002E107C string=0x00000000002E1080 "( "
 *   insn=0x00000000002E1080 string=0x00000000002E1084 "`"
 *   insn=0x00000000002E1084 string=0x00000000002E1088 ""
 *   insn=0x00000000002E1090 string=0x00000000002E1094 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Skill::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 52);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 52) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::Skill::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 52);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::Skill::_default_title_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 52);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 32);
      if ( (__int64 *)this != &Caver::Proto::Skill::_default_description_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_QWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 48) = 0;
  }
  *(_DWORD *)(v1 + 52) = 0;
  return this;
}

