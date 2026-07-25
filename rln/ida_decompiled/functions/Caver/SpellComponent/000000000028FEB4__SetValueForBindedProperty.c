/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028FEB4
 * Mangled: _ZN5Caver14SpellComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x000000000028FEC4 string=0x000000000028FEC8 "U"
 *   insn=0x000000000028FEE0 string=0x000000000028FEE4 "9"
 *   insn=0x000000000028FEE0 string=0x00000000001F9320 "0'"
 *   insn=0x000000000028FEF0 string=0x000000000028FEF4 "`B"
 *   insn=0x000000000028FEF0 string=0x00000000001F4540 "P'"
 *   insn=0x000000000028FF04 string=0x000000000028FF08 "\n"
 *   insn=0x000000000028FF04 string=0x000000000028FF14 "tR@"
 *   insn=0x000000000028FF08 string=0x000000000028FF0C "J"
 *   insn=0x000000000028FF0C string=0x000000000028FF10 "\n"
 *   insn=0x000000000028FF14 string=0x000000000028FF18 "i"
 *   insn=0x000000000028FF18 string=0x000000000028FF1C "4"
 *   insn=0x000000000028FF20 string=0x000000000028FF24 ""
 *   insn=0x000000000028FF30 string=0x000000000028FF34 "\t@"
 *   insn=0x000000000028FF40 string=0x000000000028FF44 ""
 *   insn=0x000000000028FF50 string=0x000000000028FF54 "@"
 *   insn=0x000000000028FF64 string=0x000000000028FF68 "\n"
 *   insn=0x000000000028FF64 string=0x000000000028FF74 "tZ@"
 *   insn=0x000000000028FF68 string=0x000000000028FF6C "J"
 *   insn=0x000000000028FF6C string=0x000000000028FF70 "\n"
 *   insn=0x000000000028FF74 string=0x000000000028FF78 "i"
 *   insn=0x000000000028FF78 string=0x000000000028FF7C "4"
 *   insn=0x000000000028FF80 string=0x000000000028FF84 ""
 *   insn=0x000000000028FF90 string=0x000000000028FF94 "\t@"
 *   insn=0x000000000028FFA0 string=0x000000000028FFA4 ""
 *   insn=0x000000000028FFB0 string=0x000000000028FFB4 "@"
 *   insn=0x000000000028FFEC string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028FFFC string=0x0000000000290000 "1"
 *   insn=0x000000000029000C string=0x00000000001F3EB0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpellComponent::SetValueForBindedProperty(
        Caver::SpellComponent *this,
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
    sub_56A6A8((char *)this + 144);
    v5 = v14[1];
    v4 = v15;
    if ( v15 )
      ++*(_QWORD *)(v15 + 8);
    v6 = (_QWORD *)*((_QWORD *)this + 20);
    *((_QWORD *)this + 19) = v5;
    *((_QWORD *)this + 20) = v4;
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
    v11 = (_QWORD *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 21) = v10;
    *((_QWORD *)this + 22) = v9;
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

