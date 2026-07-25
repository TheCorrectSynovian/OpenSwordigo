/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002335DC
 * Mangled: _ZN5Caver19PropertiesComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000202A60  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000202A60  Caver::PropertiesComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x00000000002335EC string=0x00000000002335F0 "U"
 *   insn=0x0000000000233604 string=0x0000000000233608 "F"
 *   insn=0x0000000000233608 string=0x000000000023360C "9"
 *   insn=0x0000000000233608 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000233618 string=0x000000000023361C "`"
 *   insn=0x0000000000233618 string=0x00000000001F4540 "P'"
 *   insn=0x0000000000233620 string=0x0000000000233624 "!"
 *   insn=0x000000000023362C string=0x0000000000233630 "\n"
 *   insn=0x000000000023362C string=0x000000000023363C "tF@"
 *   insn=0x0000000000233630 string=0x0000000000233634 "J"
 *   insn=0x0000000000233634 string=0x0000000000233638 "\n"
 *   insn=0x000000000023363C string=0x0000000000233640 "i""
 *   insn=0x0000000000233640 string=0x0000000000233644 "4"
 *   insn=0x0000000000233648 string=0x000000000023364C ""
 *   insn=0x0000000000233658 string=0x000000000023365C "\t@"
 *   insn=0x0000000000233668 string=0x000000000023366C ""
 *   insn=0x0000000000233678 string=0x000000000023367C "@"
 *   insn=0x000000000023368C string=0x0000000000233690 "\n"
 *   insn=0x000000000023368C string=0x000000000023369C "tN@"
 *   insn=0x0000000000233690 string=0x0000000000233694 "J"
 *   insn=0x0000000000233694 string=0x0000000000233698 "\n"
 *   insn=0x000000000023369C string=0x00000000002336A0 "i"\t"
 *   insn=0x00000000002336A0 string=0x00000000002336A4 "4"
 *   insn=0x00000000002336A8 string=0x00000000002336AC ""
 *   insn=0x00000000002336B8 string=0x00000000002336BC "\t@"
 *   insn=0x00000000002336C8 string=0x00000000002336CC ""
 *   insn=0x00000000002336D8 string=0x00000000002336DC "@"
 *   insn=0x00000000002336E8 string=0x00000000002336EC "!1"
 *   insn=0x0000000000233714 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000233724 string=0x0000000000233728 "g8"
 *   insn=0x0000000000233728 string=0x000000000023372C "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PropertiesComponent::SetValueForBindedProperty(
        Caver::PropertiesComponent *this,
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
  if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    Caver::BindingValue::ProgramValue(v14, a3);
    sub_56A6A8((char *)this + 120);
    v5 = v14[1];
    v4 = v15;
    if ( v15 )
      ++*(_QWORD *)(v15 + 8);
    v6 = (_QWORD *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 16) = v5;
    *((_QWORD *)this + 17) = v4;
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
    v11 = (_QWORD *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 18) = v10;
    *((_QWORD *)this + 19) = v9;
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
  }
}

