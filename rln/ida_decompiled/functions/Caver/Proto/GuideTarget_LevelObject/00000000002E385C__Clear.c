/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E385C
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject5ClearEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 13
 *   insn=0x00000000002E3868 string=0x00000000002E386C "h"
 *   insn=0x00000000002E386C string=0x00000000002E3870 ""
 *   insn=0x00000000002E3874 string=0x00000000002E3878 "\t "
 *   insn=0x00000000002E3874 string=0x00000000002E38A4 "h"
 *   insn=0x00000000002E3878 string=0x00000000002E387C "`\n@"
 *   insn=0x00000000002E387C string=0x00000000002E3880 ")"
 *   insn=0x00000000002E3888 string=0x00000000002E388C ""
 *   insn=0x00000000002E3898 string=0x00000000002E389C ""
 *   insn=0x00000000002E389C string=0x00000000002E38A0 "h"@"
 *   insn=0x00000000002E38A4 string=0x00000000002E38A8 "( "
 *   insn=0x00000000002E38A8 string=0x00000000002E38AC "`"
 *   insn=0x00000000002E38AC string=0x00000000002E38B0 ""
 *   insn=0x00000000002E38B8 string=0x00000000002E38BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 32);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 32) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::GuideTarget_LevelObject::_default_level_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 32);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
  }
  *(_DWORD *)(v1 + 32) = 0;
  return this;
}

