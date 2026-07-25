/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002382D0
 * Mangled: _ZN5Caver14ShapeComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::ShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F5CD0  Caver::ShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 7
 *   0x00000000001F5CD0  Caver::ShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000002382E4 string=0x00000000002382E8 "V"
 *   insn=0x00000000002382F0 string=0x00000000002382F4 "?"
 *   insn=0x0000000000238318 string=0x000000000023831C "a"
 *   insn=0x000000000023831C string=0x0000000000238320 "?"
 *   insn=0x0000000000238328 string=0x000000000023832C "("
 *   insn=0x0000000000238330 string=0x0000000000238334 "("
 *   insn=0x0000000000238338 string=0x000000000023833C "("
 *   insn=0x0000000000238340 string=0x0000000000238344 "\t"
 *   insn=0x0000000000238344 string=0x0000000000238348 ")"
 *   insn=0x0000000000238348 string=0x000000000023834C "\t"
 *   insn=0x0000000000238350 string=0x0000000000238354 "("
 *   insn=0x0000000000238358 string=0x000000000023835C "("
 *   insn=0x0000000000238360 string=0x0000000000238364 "\t"
 *   insn=0x0000000000238360 string=0x0000000000238370 "("
 *   insn=0x0000000000238364 string=0x0000000000238368 ")"
 *   insn=0x0000000000238368 string=0x000000000023836C "\t"
 *   insn=0x0000000000238370 string=0x0000000000238374 "h"
 *   insn=0x0000000000238388 string=0x000000000023838C "Q!"
 *   insn=0x0000000000238390 string=0x0000000000238394 "5"
 *   insn=0x0000000000238398 string=0x000000000023839C ""
 *   insn=0x00000000002383A8 string=0x00000000002383AC "\t@"
 *   insn=0x00000000002383B8 string=0x00000000002383BC ""
 *   insn=0x00000000002383C8 string=0x00000000002383CC "@"
 *   insn=0x00000000002383D8 string=0x00000000002383DC "5"
 *   insn=0x00000000002383E0 string=0x00000000002383E4 ""
 *   insn=0x00000000002383F4 string=0x00000000002383F8 "\t@"
 *   insn=0x0000000000238400 string=0x0000000000238404 ""
 *   insn=0x0000000000238414 string=0x0000000000238418 "@"
 *   insn=0x0000000000238428 string=0x000000000023842C "#"
 *   insn=0x0000000000238464 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000238474 string=0x0000000000238478 ""
 *   insn=0x0000000000238484 string=0x0000000000238488 "\t@"
 *   insn=0x0000000000238494 string=0x0000000000238498 ""
 *   insn=0x00000000002384A4 string=0x00000000002384A8 "@"
 *   insn=0x00000000002384B0 string=0x00000000002384B4 "'"
 *   insn=0x00000000002384C0 string=0x00000000002384C4 "4"
 *   insn=0x00000000002384C8 string=0x00000000002384CC ""
 *   insn=0x00000000002384D8 string=0x00000000002384DC "\t@"
 *   insn=0x00000000002384E8 string=0x00000000002384EC ""
 *   insn=0x00000000002384F8 string=0x00000000002384FC "@"
 *   insn=0x0000000000238508 string=0x000000000023850C "4"
 *   insn=0x0000000000238510 string=0x0000000000238514 ""
 *   insn=0x0000000000238520 string=0x0000000000238524 "\t@"
 *   insn=0x0000000000238530 string=0x0000000000238534 ""
 *   insn=0x0000000000238540 string=0x0000000000238544 "@"
 *   insn=0x000000000023855C string=0x0000000000238560 "{W"
 *   insn=0x0000000000238568 string=0x000000000023856C "4"
 *   insn=0x0000000000238570 string=0x0000000000238574 ""
 *   insn=0x0000000000238580 string=0x0000000000238584 "\t@"
 *   insn=0x0000000000238590 string=0x0000000000238594 ""
 *   insn=0x00000000002385A0 string=0x00000000002385A4 "@"
 *   insn=0x00000000002385B0 string=0x00000000002385B4 "fW"
 *   insn=0x00000000002385B4 string=0x00000000002385B8 "eW"
 *   insn=0x00000000002385C0 string=0x00000000001F5CD0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShapeComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x23
  __int64 *i; // x20
  __int64 v6; // x1
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x8
  int v12; // [xsp+0h] [xbp-60h]
  __int64 v13; // [xsp+8h] [xbp-58h]
  _QWORD *v14; // [xsp+10h] [xbp-50h]
  __int64 v15; // [xsp+18h] [xbp-48h]
  _QWORD *v16; // [xsp+20h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 100 )
  {
    v4 = 0;
    for ( i = &qword_6E8AC8; ; ++i )
    {
      Caver::BindingValue::ValueWithString();
      v6 = *(_QWORD *)(a3 + 8);
      if ( v6 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v7 = v16;
      if ( v16 )
        goto LABEL_11;
LABEL_14:
      if ( v14 )
      {
        v10 = v14[1] - 1LL;
        v14[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)())(*v14 + 16LL))();
          v11 = v14[2] - 1LL;
          v14[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)())(*v14 + 24LL))();
        }
      }
      if ( (unsigned __int64)++v4 >= 3 )
        return;
    }
    *(_DWORD *)v6 = v12;
    *(_QWORD *)(v6 + 8) = v13;
    *(_QWORD *)(v6 + 16) = v14;
    if ( v14 )
      ++v14[1];
    *(_QWORD *)(v6 + 24) = v15;
    *(_QWORD *)(v6 + 32) = v16;
    if ( v16 )
      ++v16[1];
    *(_QWORD *)(a3 + 8) = v6 + 40;
    v7 = v16;
    if ( !v16 )
      goto LABEL_14;
LABEL_11:
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
    goto LABEL_14;
  }
  Caver::Component::GetEnumValuesForBindedProperty();
}

