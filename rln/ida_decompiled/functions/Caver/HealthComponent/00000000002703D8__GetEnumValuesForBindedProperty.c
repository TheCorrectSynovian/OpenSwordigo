/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002703D8
 * Mangled: _ZN5Caver15HealthComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::HealthComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FD7F0  Caver::HealthComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD7F0  Caver::HealthComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x00000000002703EC string=0x00000000002703F0 "V"
 *   insn=0x00000000002703F8 string=0x00000000002703FC "?"
 *   insn=0x0000000000270420 string=0x0000000000270424 "G>"
 *   insn=0x0000000000270424 string=0x0000000000270428 "a"
 *   insn=0x0000000000270428 string=0x000000000027042C "?"
 *   insn=0x0000000000270434 string=0x0000000000270438 "("
 *   insn=0x000000000027043C string=0x0000000000270440 "("
 *   insn=0x0000000000270444 string=0x0000000000270448 "("
 *   insn=0x000000000027044C string=0x0000000000270450 "\t"
 *   insn=0x0000000000270450 string=0x0000000000270454 ")"
 *   insn=0x0000000000270454 string=0x0000000000270458 "\t"
 *   insn=0x000000000027045C string=0x0000000000270460 "("
 *   insn=0x0000000000270464 string=0x0000000000270468 "("
 *   insn=0x000000000027046C string=0x0000000000270470 "\t"
 *   insn=0x000000000027046C string=0x000000000027047C "("
 *   insn=0x0000000000270470 string=0x0000000000270474 ")"
 *   insn=0x0000000000270474 string=0x0000000000270478 "\t"
 *   insn=0x000000000027047C string=0x0000000000270480 "h"
 *   insn=0x000000000027049C string=0x00000000002704A0 "5"
 *   insn=0x00000000002704A4 string=0x00000000002704A8 ""
 *   insn=0x00000000002704B4 string=0x00000000002704B8 "\t@"
 *   insn=0x00000000002704C4 string=0x00000000002704C8 ""
 *   insn=0x00000000002704D4 string=0x00000000002704D8 "@"
 *   insn=0x00000000002704EC string=0x00000000002704F0 ""
 *   insn=0x00000000002704F4 string=0x00000000002704F8 "!"
 *   insn=0x0000000000270500 string=0x0000000000270504 "\t@"
 *   insn=0x000000000027050C string=0x0000000000270510 ""
 *   insn=0x0000000000270520 string=0x0000000000270524 "\n"
 *   insn=0x000000000027052C string=0x0000000000270530 "@"
 *   insn=0x0000000000270558 string=0x0000000000270574 "W"
 *   insn=0x0000000000270574 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000270584 string=0x0000000000270588 ""
 *   insn=0x0000000000270594 string=0x0000000000270598 "\t@"
 *   insn=0x00000000002705A4 string=0x00000000002705A8 ""
 *   insn=0x00000000002705B4 string=0x00000000002705B8 "@"
 *   insn=0x00000000002705C0 string=0x00000000002705C4 "'"
 *   insn=0x00000000002705D0 string=0x00000000002705D4 "4"
 *   insn=0x00000000002705D8 string=0x00000000002705DC ""
 *   insn=0x00000000002705E8 string=0x00000000002705EC "\t@"
 *   insn=0x00000000002705F8 string=0x00000000002705FC ""
 *   insn=0x0000000000270608 string=0x000000000027060C "@"
 *   insn=0x0000000000270618 string=0x000000000027061C "4"
 *   insn=0x0000000000270620 string=0x0000000000270624 ""
 *   insn=0x0000000000270630 string=0x0000000000270634 "\t@"
 *   insn=0x0000000000270640 string=0x0000000000270644 ""
 *   insn=0x0000000000270650 string=0x0000000000270654 "@"
 *   insn=0x000000000027066C string=0x0000000000270670 "7w"
 *   insn=0x0000000000270678 string=0x000000000027067C "4"
 *   insn=0x0000000000270680 string=0x0000000000270684 ""
 *   insn=0x0000000000270690 string=0x0000000000270694 "\t@"
 *   insn=0x00000000002706A0 string=0x00000000002706A4 ""
 *   insn=0x00000000002706B0 string=0x00000000002706B4 "@"
 *   insn=0x00000000002706C0 string=0x00000000002706C4 ""w"
 *   insn=0x00000000002706C4 string=0x00000000002706C8 "!w"
 *   insn=0x00000000002706CC string=0x00000000002706D0 "H4"
 *   insn=0x00000000002706D0 string=0x00000000001FD7F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x8
  __int64 v5; // x20
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
  if ( a2 == 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v4;
      Caver::BindingValue::ValueWithInt();
      v6 = *(_QWORD *)(a3 + 8);
      if ( v6 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v7 = v16;
      if ( v16 )
        goto LABEL_11;
LABEL_14:
      if ( !v14
        || (v10 = v14[1] - 1LL, (v14[1] = v10) != 0)
        || ((*(void (__fastcall **)())(*v14 + 16LL))(), v11 = v14[2] - 1LL, (v14[2] = v11) != 0) )
      {
        v4 = 1;
        if ( v5 )
          return;
      }
      else
      {
        (*(void (__fastcall **)())(*v14 + 24LL))();
        v4 = 1;
        if ( v5 )
          return;
      }
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

