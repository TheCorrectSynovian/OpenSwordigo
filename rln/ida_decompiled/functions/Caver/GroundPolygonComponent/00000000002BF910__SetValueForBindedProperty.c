/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BF910
 * Mangled: _ZN5Caver22GroundPolygonComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F4070  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4070  Caver::GroundPolygonComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 49
 *   insn=0x00000000002BF920 string=0x00000000002BF924 "U"
 *   insn=0x00000000002BF92C string=0x00000000002BF930 "?"
 *   insn=0x00000000002BF938 string=0x00000000002BF93C "I"
 *   insn=0x00000000002BF940 string=0x00000000002BF944 ")A>"
 *   insn=0x00000000002BF944 string=0x00000000002BF948 "(y"
 *   insn=0x00000000002BF948 string=0x00000000002BF94C ""
 *   insn=0x00000000002BF950 string=0x00000000002BF954 "H"
 *   insn=0x00000000002BF950 string=0x00000000002BF964 "H"
 *   insn=0x00000000002BF950 string=0x00000000002BFA58 "H"
 *   insn=0x00000000002BF954 string=0x00000000002BF958 ""
 *   insn=0x00000000002BF958 string=0x00000000002BF95C "h"
 *   insn=0x00000000002BF95C string=0x00000000002BF960 "D"
 *   insn=0x00000000002BF964 string=0x00000000002BF968 ""
 *   insn=0x00000000002BF968 string=0x00000000002BF96C "h"
 *   insn=0x00000000002BF96C string=0x00000000002BF970 "@"
 *   insn=0x00000000002BF97C string=0x00000000002BF980 "`"
 *   insn=0x00000000002BF97C string=0x00000000001F4540 "P'"
 *   insn=0x00000000002BF984 string=0x00000000002BF988 "H"
 *   insn=0x00000000002BF990 string=0x00000000002BF994 "\n"
 *   insn=0x00000000002BF990 string=0x00000000002BF9A0 "tj@"
 *   insn=0x00000000002BF994 string=0x00000000002BF998 "J"
 *   insn=0x00000000002BF998 string=0x00000000002BF99C "\n"
 *   insn=0x00000000002BF9A0 string=0x00000000002BF9A4 "i"
 *   insn=0x00000000002BF9A4 string=0x00000000002BF9A8 "4"
 *   insn=0x00000000002BF9AC string=0x00000000002BF9B0 ""
 *   insn=0x00000000002BF9BC string=0x00000000002BF9C0 "\t@"
 *   insn=0x00000000002BF9CC string=0x00000000002BF9D0 ""
 *   insn=0x00000000002BF9DC string=0x00000000002BF9E0 "@"
 *   insn=0x00000000002BF9F0 string=0x00000000002BF9F4 "\n"
 *   insn=0x00000000002BF9F0 string=0x00000000002BFA00 "tr@"
 *   insn=0x00000000002BF9F4 string=0x00000000002BF9F8 "J"
 *   insn=0x00000000002BF9F8 string=0x00000000002BF9FC "\n"
 *   insn=0x00000000002BFA00 string=0x00000000002BFA04 "i"
 *   insn=0x00000000002BFA04 string=0x00000000002BFA08 "4"
 *   insn=0x00000000002BFA0C string=0x00000000002BFA10 ""
 *   insn=0x00000000002BFA1C string=0x00000000002BFA20 "\t@"
 *   insn=0x00000000002BFA2C string=0x00000000002BFA30 ""
 *   insn=0x00000000002BFA3C string=0x00000000002BFA40 "@"
 *   insn=0x00000000002BFA4C string=0x00000000002BFA50 "H"
 *   insn=0x00000000002BFA50 string=0x00000000002BFA54 ""
 *   insn=0x00000000002BFA58 string=0x00000000002BFA5C ""
 *   insn=0x00000000002BFA5C string=0x00000000002BFA60 "h"
 *   insn=0x00000000002BFA68 string=0x00000000002BFA6C "-"
 *   insn=0x00000000002BFA6C string=0x00000000001F9320 "0'"
 *   insn=0x00000000002BFA94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002BFA9C string=0x00000000002BFAA0 "4"
 *   insn=0x00000000002BFAA8 string=0x00000000002BFAAC "(:"
 *   insn=0x00000000002BFAB0 string=0x00000000002BFAB4 "o"
 *   insn=0x00000000002BFAB4 string=0x00000000001F4070 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundPolygonComponent::SetValueForBindedProperty(
        Caver::GroundPolygonComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v15; // [xsp+10h] [xbp-40h]
  __int64 v16; // [xsp+18h] [xbp-38h]
  __int64 v17; // [xsp+20h] [xbp-30h]
  __int64 v18; // [xsp+28h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 0:
      *((_BYTE *)this + 176) = **((_BYTE **)a3 + 1);
      break;
    case 1:
      *((_DWORD *)this + 45) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_BYTE *)this + 184) = **((_BYTE **)a3 + 1);
      break;
    case 3:
      Caver::BindingValue::ProgramValue(v14, a3);
      sub_56A6A8((char *)this + 192);
      v5 = v14[1];
      v4 = v15;
      if ( v15 )
        ++*(_QWORD *)(v15 + 8);
      v6 = (_QWORD *)*((_QWORD *)this + 26);
      *((_QWORD *)this + 25) = v5;
      *((_QWORD *)this + 26) = v4;
      if ( v6 )
      {
        v7 = v6[1] - 1LL;
        v6[1] = v7;
        if ( !v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
          v8 = v6[2] - 1LL;
          v6[2] = v8;
          if ( !v8 )
            (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
        }
      }
      v10 = v16;
      v9 = v17;
      if ( v17 )
        ++*(_QWORD *)(v17 + 8);
      v11 = (_QWORD *)*((_QWORD *)this + 28);
      *((_QWORD *)this + 27) = v10;
      *((_QWORD *)this + 28) = v9;
      if ( v11 )
      {
        v12 = v11[1] - 1LL;
        v11[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
          v13 = v11[2] - 1LL;
          v11[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
        }
      }
      Caver::Program::~Program((Caver::Program *)v14);
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

