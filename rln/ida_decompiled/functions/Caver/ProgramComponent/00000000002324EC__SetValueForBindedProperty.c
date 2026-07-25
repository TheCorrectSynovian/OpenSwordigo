/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002324EC
 * Mangled: _ZN5Caver16ProgramComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FEE60  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F4540  Caver::BindingValue::ProgramValue(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FEE60  Caver::ProgramComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x00000000002324FC string=0x0000000000232500 "U"
 *   insn=0x0000000000232508 string=0x000000000023250C "?"
 *   insn=0x0000000000232514 string=0x0000000000232518 "?"
 *   insn=0x000000000023251C string=0x0000000000232520 "A"
 *   insn=0x000000000023251C string=0x0000000000232534 "H"
 *   insn=0x0000000000232520 string=0x0000000000232524 "H"
 *   insn=0x0000000000232524 string=0x0000000000232528 ""
 *   insn=0x0000000000232528 string=0x000000000023252C "hv"
 *   insn=0x000000000023252C string=0x0000000000232530 "@"
 *   insn=0x0000000000232534 string=0x0000000000232538 ""
 *   insn=0x0000000000232538 string=0x000000000023253C "h"
 *   insn=0x000000000023253C string=0x0000000000232540 "<"
 *   insn=0x000000000023254C string=0x0000000000232550 "`"
 *   insn=0x000000000023254C string=0x00000000001F4540 "P'"
 *   insn=0x0000000000232554 string=0x0000000000232558 "T"
 *   insn=0x0000000000232560 string=0x0000000000232564 "\n"
 *   insn=0x0000000000232560 string=0x0000000000232570 "tJ@"
 *   insn=0x0000000000232564 string=0x0000000000232568 "J"
 *   insn=0x0000000000232568 string=0x000000000023256C "\n"
 *   insn=0x0000000000232570 string=0x0000000000232574 "i"
 *   insn=0x0000000000232574 string=0x0000000000232578 "4"
 *   insn=0x000000000023257C string=0x0000000000232580 ""
 *   insn=0x000000000023258C string=0x0000000000232590 "\t@"
 *   insn=0x000000000023259C string=0x00000000002325A0 ""
 *   insn=0x00000000002325AC string=0x00000000002325B0 "@"
 *   insn=0x00000000002325C0 string=0x00000000002325C4 "\n"
 *   insn=0x00000000002325C0 string=0x00000000002325D0 "tR@"
 *   insn=0x00000000002325C4 string=0x00000000002325C8 "J"
 *   insn=0x00000000002325C8 string=0x00000000002325CC "\n"
 *   insn=0x00000000002325D0 string=0x00000000002325D4 "i"
 *   insn=0x00000000002325D4 string=0x00000000002325D8 "4"
 *   insn=0x00000000002325DC string=0x00000000002325E0 ""
 *   insn=0x00000000002325EC string=0x00000000002325F0 "\t@"
 *   insn=0x00000000002325FC string=0x0000000000232600 ""
 *   insn=0x000000000023260C string=0x0000000000232610 "@"
 *   insn=0x000000000023261C string=0x0000000000232620 "T5"
 *   insn=0x0000000000232628 string=0x000000000023262C "="
 *   insn=0x000000000023262C string=0x00000000001F9320 "0'"
 *   insn=0x0000000000232654 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023265C string=0x0000000000232660 "D5"
 *   insn=0x0000000000232668 string=0x000000000023266C "8o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProgramComponent::SetValueForBindedProperty(
        Caver::ProgramComponent *this,
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
  if ( a2 == 2 )
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
  else if ( a2 == 1 )
  {
    *((_BYTE *)this + 120) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    *((_DWORD *)this + 29) = **((_DWORD **)a3 + 1);
  }
}

