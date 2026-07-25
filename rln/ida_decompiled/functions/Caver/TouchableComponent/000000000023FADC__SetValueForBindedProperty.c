/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023FADC
 * Mangled: _ZN5Caver18TouchableComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F9980  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F9980  Caver::TouchableComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x000000000023FAEC string=0x000000000023FAF0 "U"
 *   insn=0x000000000023FAF8 string=0x000000000023FAFC "?"
 *   insn=0x000000000023FB08 string=0x000000000023FB0C "H"
 *   insn=0x000000000023FB0C string=0x000000000023FB10 ""
 *   insn=0x000000000023FB10 string=0x000000000023FB14 "hr"
 *   insn=0x000000000023FB14 string=0x000000000023FB18 "<"
 *   insn=0x000000000023FB24 string=0x000000000023FB28 "`"
 *   insn=0x000000000023FB24 string=0x00000000001F4540 "P'"
 *   insn=0x000000000023FB38 string=0x000000000023FB3C "\n"
 *   insn=0x000000000023FB38 string=0x000000000023FB48 "tJ@"
 *   insn=0x000000000023FB3C string=0x000000000023FB40 "J"
 *   insn=0x000000000023FB40 string=0x000000000023FB44 "\n"
 *   insn=0x000000000023FB48 string=0x000000000023FB4C "i"
 *   insn=0x000000000023FB4C string=0x000000000023FB50 "4"
 *   insn=0x000000000023FB54 string=0x000000000023FB58 ""
 *   insn=0x000000000023FB64 string=0x000000000023FB68 "\t@"
 *   insn=0x000000000023FB74 string=0x000000000023FB78 ""
 *   insn=0x000000000023FB84 string=0x000000000023FB88 "@"
 *   insn=0x000000000023FB98 string=0x000000000023FB9C "\n"
 *   insn=0x000000000023FB98 string=0x000000000023FBA8 "tR@"
 *   insn=0x000000000023FB9C string=0x000000000023FBA0 "J"
 *   insn=0x000000000023FBA0 string=0x000000000023FBA4 "\n"
 *   insn=0x000000000023FBA8 string=0x000000000023FBAC "i"
 *   insn=0x000000000023FBAC string=0x000000000023FBB0 "4"
 *   insn=0x000000000023FBB4 string=0x000000000023FBB8 ""
 *   insn=0x000000000023FBC4 string=0x000000000023FBC8 "\t@"
 *   insn=0x000000000023FBD4 string=0x000000000023FBD8 ""
 *   insn=0x000000000023FBE4 string=0x000000000023FBE8 "@"
 *   insn=0x000000000023FC04 string=0x00000000001F9320 "0'"
 *   insn=0x000000000023FC2C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023FC3C string=0x000000000023FC40 "!"
 *   insn=0x000000000023FC48 string=0x000000000023FC4C "M"
 *   insn=0x000000000023FC4C string=0x00000000001F9980 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TouchableComponent::SetValueForBindedProperty(
        Caver::TouchableComponent *this,
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
  if ( a2 == 1 )
  {
    Caver::BindingValue::ProgramValue(v14, a3);
    sub_56A6A8((char *)this + 128);
    v5 = v14[1];
    v4 = v15;
    if ( v15 )
      ++*(_QWORD *)(v15 + 8);
    v6 = (_QWORD *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 17) = v5;
    *((_QWORD *)this + 18) = v4;
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
    v11 = (_QWORD *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 19) = v10;
    *((_QWORD *)this + 20) = v9;
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
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    *((_DWORD *)this + 28) = **((_DWORD **)a3 + 1);
  }
}

