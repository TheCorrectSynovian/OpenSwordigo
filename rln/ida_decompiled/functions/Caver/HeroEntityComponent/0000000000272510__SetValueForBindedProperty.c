/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272510
 * Mangled: _ZN5Caver19HeroEntityComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FA010  Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C40  Caver::EntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FA010  Caver::HeroEntityComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x0000000000272520 string=0x0000000000272524 "U"
 *   insn=0x000000000027252C string=0x0000000000272530 "?"
 *   insn=0x0000000000272534 string=0x0000000000272538 "A"
 *   insn=0x0000000000272544 string=0x0000000000272548 "`B"
 *   insn=0x0000000000272544 string=0x00000000001F4540 "P'"
 *   insn=0x000000000027254C string=0x0000000000272550 "V"
 *   insn=0x0000000000272558 string=0x000000000027255C "\n"
 *   insn=0x0000000000272558 string=0x0000000000272568 "t"
 *   insn=0x000000000027255C string=0x0000000000272560 "J"
 *   insn=0x0000000000272560 string=0x0000000000272564 "\n"
 *   insn=0x0000000000272568 string=0x000000000027256C "i"
 *   insn=0x000000000027256C string=0x0000000000272570 "4"
 *   insn=0x0000000000272574 string=0x0000000000272578 ""
 *   insn=0x0000000000272584 string=0x0000000000272588 "\t@"
 *   insn=0x0000000000272594 string=0x0000000000272598 ""
 *   insn=0x00000000002725A4 string=0x00000000002725A8 "@"
 *   insn=0x00000000002725B8 string=0x00000000002725BC "\n"
 *   insn=0x00000000002725B8 string=0x00000000002725C8 "t"
 *   insn=0x00000000002725BC string=0x00000000002725C0 "J"
 *   insn=0x00000000002725C0 string=0x00000000002725C4 "\n"
 *   insn=0x00000000002725C8 string=0x00000000002725CC "i"
 *   insn=0x00000000002725CC string=0x00000000002725D0 "4"
 *   insn=0x00000000002725D4 string=0x00000000002725D8 ""
 *   insn=0x00000000002725E4 string=0x00000000002725E8 "\t@"
 *   insn=0x00000000002725F4 string=0x00000000002725F8 ""
 *   insn=0x0000000000272604 string=0x0000000000272608 "@"
 *   insn=0x0000000000272614 string=0x0000000000272618 "V5"
 *   insn=0x0000000000272624 string=0x00000000001F8C40 "0'"
 *   insn=0x0000000000272634 string=0x000000000027264C "!"
 *   insn=0x000000000027264C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000272654 string=0x0000000000272658 "F5"
 *   insn=0x0000000000272660 string=0x0000000000272664 ":o"
 *   insn=0x0000000000272668 string=0x000000000027266C "i"
 *   insn=0x000000000027266C string=0x00000000001FA010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::SetValueForBindedProperty(
        Caver::HeroEntityComponent *this,
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
  if ( a2 == 100 )
  {
    Caver::BindingValue::ProgramValue(v14, a3);
    sub_56A6A8((char *)this + 336);
    v5 = v14[1];
    v4 = v15;
    if ( v15 )
      ++*(_QWORD *)(v15 + 8);
    v6 = (_QWORD *)*((_QWORD *)this + 44);
    *((_QWORD *)this + 43) = v5;
    *((_QWORD *)this + 44) = v4;
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
    v11 = (_QWORD *)*((_QWORD *)this + 46);
    *((_QWORD *)this + 45) = v10;
    *((_QWORD *)this + 46) = v9;
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
  else
  {
    Caver::EntityComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

