/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023B080
 * Mangled: _ZN5Caver19SpawnPointComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::SpawnPointComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FA230  Caver::SpawnPointComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023B72C  `non-virtual thunk to'Caver::SpawnPointComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 163
 *   insn=0x000000000023B090 string=0x000000000023B094 "U"
 *   insn=0x000000000023B0B4 string=0x000000000059258D "right"
 *   insn=0x000000000023B0D0 string=0x000000000023B0D4 ""
 *   insn=0x000000000023B0D4 string=0x000000000023B0D8 "a"
 *   insn=0x000000000023B0D8 string=0x000000000023B0DC "?"
 *   insn=0x000000000023B0E4 string=0x000000000023B0E8 "("
 *   insn=0x000000000023B0EC string=0x000000000023B0F0 "("
 *   insn=0x000000000023B0F4 string=0x000000000023B0F8 "("
 *   insn=0x000000000023B0FC string=0x000000000023B100 "\t"
 *   insn=0x000000000023B100 string=0x000000000023B104 ")"
 *   insn=0x000000000023B104 string=0x000000000023B108 "\t"
 *   insn=0x000000000023B10C string=0x000000000023B110 "("
 *   insn=0x000000000023B114 string=0x000000000023B118 "("
 *   insn=0x000000000023B11C string=0x000000000023B120 "\t"
 *   insn=0x000000000023B11C string=0x000000000023B12C "("
 *   insn=0x000000000023B120 string=0x000000000023B124 ")"
 *   insn=0x000000000023B124 string=0x000000000023B128 "\t"
 *   insn=0x000000000023B12C string=0x000000000023B130 "h"
 *   insn=0x000000000023B14C string=0x000000000023B150 "4"
 *   insn=0x000000000023B154 string=0x000000000023B158 ""
 *   insn=0x000000000023B164 string=0x000000000023B168 "\t@"
 *   insn=0x000000000023B174 string=0x000000000023B178 ""
 *   insn=0x000000000023B184 string=0x000000000023B188 "@"
 *   insn=0x000000000023B194 string=0x000000000023B198 "4"
 *   insn=0x000000000023B19C string=0x000000000023B1A0 ""
 *   insn=0x000000000023B1AC string=0x000000000023B1B0 "\t@"
 *   insn=0x000000000023B1BC string=0x000000000023B1C0 ""
 *   insn=0x000000000023B1CC string=0x000000000023B1D0 "@"
 *   insn=0x000000000023B1DC string=0x000000000023B1E0 "T%"
 *   insn=0x000000000023B1F0 string=0x000000000023B350 "I%"
 *   insn=0x000000000023B1F4 string=0x000000000059257C "left"
 *   insn=0x000000000023B200 string=0x000000000023B204 "m"
 *   insn=0x000000000023B214 string=0x000000000023B218 "a"
 *   insn=0x000000000023B218 string=0x000000000023B21C "?"
 *   insn=0x000000000023B224 string=0x000000000023B228 "("
 *   insn=0x000000000023B22C string=0x000000000023B230 "("
 *   insn=0x000000000023B234 string=0x000000000023B238 "("
 *   insn=0x000000000023B23C string=0x000000000023B240 "\t"
 *   insn=0x000000000023B240 string=0x000000000023B244 ")"
 *   insn=0x000000000023B244 string=0x000000000023B248 "\t"
 *   insn=0x000000000023B24C string=0x000000000023B250 "("
 *   insn=0x000000000023B254 string=0x000000000023B258 "("
 *   insn=0x000000000023B25C string=0x000000000023B260 "\t"
 *   insn=0x000000000023B25C string=0x000000000023B26C "("
 *   insn=0x000000000023B260 string=0x000000000023B264 ")"
 *   insn=0x000000000023B264 string=0x000000000023B268 "\t"
 *   insn=0x000000000023B26C string=0x000000000023B270 "h"
 *   insn=0x000000000023B278 string=0x000000000023B294 "h"
 *   insn=0x000000000023B28C string=0x000000000023B290 "3"
 *   insn=0x000000000023B294 string=0x000000000023B298 ""
 *   insn=0x000000000023B298 string=0x000000000023B29C "h"
 *   insn=0x000000000023B2A0 string=0x000000000023B2A4 "h"
 *   insn=0x000000000023B2A4 string=0x000000000023B2A8 "\t@"
 *   insn=0x000000000023B2B0 string=0x000000000023B2B4 "h\n@"
 *   insn=0x000000000023B2B4 string=0x000000000023B2B8 ""
 *   insn=0x000000000023B2B8 string=0x000000000023B2BC "h\n"
 *   insn=0x000000000023B2C0 string=0x000000000023B2C4 "h"
 *   insn=0x000000000023B2C4 string=0x000000000023B2C8 "@"
 *   insn=0x000000000023B2D4 string=0x000000000023B2D8 "3"
 *   insn=0x000000000023B2D8 string=0x000000000023B2DC "h"
 *   insn=0x000000000023B2DC string=0x000000000023B2E0 ""
 *   insn=0x000000000023B2E0 string=0x000000000023B2E4 "h"
 *   insn=0x000000000023B2E8 string=0x000000000023B2EC "h"
 *   insn=0x000000000023B2EC string=0x000000000023B2F0 "\t@"
 *   insn=0x000000000023B2F8 string=0x000000000023B2FC "h\n@"
 *   insn=0x000000000023B2FC string=0x000000000023B300 ""
 *   insn=0x000000000023B300 string=0x000000000023B304 "h\n"
 *   insn=0x000000000023B308 string=0x000000000023B30C "h"
 *   insn=0x000000000023B30C string=0x000000000023B310 "@"
 *   insn=0x000000000023B324 string=0x000000000023B328 "a"
 *   insn=0x000000000023B328 string=0x000000000023B374 "I%"
 *   insn=0x000000000023B350 string=0x000000000023B354 ")=G"
 *   insn=0x000000000023B354 string=0x000000000023B358 "!"
 *   insn=0x000000000023B35C string=0x000000000023B360 "\t"
 *   insn=0x000000000023B35C string=0x000000000023B398 "\t"
 *   insn=0x000000000023B360 string=0x000000000023B364 "*"
 *   insn=0x000000000023B364 string=0x000000000023B368 "\n"
 *   insn=0x000000000023B36C string=0x000000000023B370 ""
 *   insn=0x000000000023B370 string=0x000000000023B3A4 "?"
 *   insn=0x000000000023B374 string=0x000000000023B378 ")=G"
 *   insn=0x000000000023B378 string=0x000000000023B37C "!"
 *   insn=0x000000000023B380 string=0x000000000023B384 "\t"
 *   insn=0x000000000023B380 string=0x000000000023B3B8 "\t"
 *   insn=0x000000000023B384 string=0x000000000023B388 "*"
 *   insn=0x000000000023B388 string=0x000000000023B38C "\n"
 *   insn=0x000000000023B394 string=0x000000000023B3C4 "?"
 *   insn=0x000000000023B398 string=0x000000000023B39C "*"
 *   insn=0x000000000023B39C string=0x000000000023B3A0 "\n"
 *   insn=0x000000000023B3A4 string=0x000000000023B3A8 "l"
 *   insn=0x000000000023B3B8 string=0x000000000023B3BC "*"
 *   insn=0x000000000023B3BC string=0x000000000023B3C0 "\n"
 *   insn=0x000000000023B3C4 string=0x000000000023B3C8 ","
 *   insn=0x000000000023B3D8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023B3EC string=0x000000000023B3F0 ""
 *   insn=0x000000000023B3FC string=0x000000000023B400 "\t@"
 *   insn=0x000000000023B40C string=0x000000000023B410 ""
 *   insn=0x000000000023B41C string=0x000000000023B420 "@"
 *   insn=0x000000000023B438 string=0x000000000023B43C "4"
 *   insn=0x000000000023B440 string=0x000000000023B444 ""
 *   insn=0x000000000023B450 string=0x000000000023B454 "\t@"
 *   insn=0x000000000023B460 string=0x000000000023B464 ""
 *   insn=0x000000000023B470 string=0x000000000023B474 "@"
 *   insn=0x000000000023B490 string=0x000000000023B494 "4"
 *   insn=0x000000000023B498 string=0x000000000023B49C ""
 *   insn=0x000000000023B4A8 string=0x000000000023B4AC "\t@"
 *   insn=0x000000000023B4B8 string=0x000000000023B4BC ""
 *   insn=0x000000000023B4C8 string=0x000000000023B4CC "@"
 *   insn=0x000000000023B4D8 string=0x000000000023B4DC "t"
 *   insn=0x000000000023B4E0 string=0x000000000023B4E4 ""
 *   insn=0x000000000023B4F0 string=0x000000000023B4F4 "\t@"
 *   insn=0x000000000023B500 string=0x000000000023B504 ""
 *   insn=0x000000000023B510 string=0x000000000023B514 "@"
 *   insn=0x000000000023B51C string=0x000000000023B520 "Z"
 *   insn=0x000000000023B530 string=0x000000000023B534 ""
 *   insn=0x000000000023B538 string=0x000000000023B53C "a\t"
 *   insn=0x000000000023B540 string=0x000000000023B544 "\t@"
 *   insn=0x000000000023B550 string=0x000000000023B554 ""
 *   insn=0x000000000023B558 string=0x000000000023B55C "a"
 *   insn=0x000000000023B560 string=0x000000000023B564 "@"
 *   insn=0x000000000023B56C string=0x000000000023B570 ">"
 *   insn=0x000000000023B57C string=0x000000000023B580 "4"
 *   insn=0x000000000023B584 string=0x000000000023B588 ""
 *   insn=0x000000000023B594 string=0x000000000023B598 "\t@"
 *   insn=0x000000000023B5A4 string=0x000000000023B5A8 ""
 *   insn=0x000000000023B5B4 string=0x000000000023B5B8 "@"
 *   insn=0x000000000023B5CC string=0x000000000023B5D0 ""
 *   insn=0x000000000023B5D4 string=0x000000000023B5D8 "A"
 *   insn=0x000000000023B5DC string=0x000000000023B5E0 "\t@"
 *   insn=0x000000000023B5EC string=0x000000000023B5F0 ""
 *   insn=0x000000000023B5F4 string=0x000000000023B5F8 "A"
 *   insn=0x000000000023B5FC string=0x000000000023B600 "@"
 *   insn=0x000000000023B608 string=0x000000000023B60C "-"
 *   insn=0x000000000023B61C string=0x000000000023B620 ""
 *   insn=0x000000000023B62C string=0x000000000023B630 "\t@"
 *   insn=0x000000000023B63C string=0x000000000023B640 ""
 *   insn=0x000000000023B64C string=0x000000000023B650 "@"
 *   insn=0x000000000023B668 string=0x000000000023B66C "8K"
 *   insn=0x000000000023B694 string=0x000000000023B698 "I%"
 *   insn=0x000000000023B698 string=0x000000000023B69C ")=G"
 *   insn=0x000000000023B69C string=0x000000000023B6A0 "!"
 *   insn=0x000000000023B6A0 string=0x000000000023B6A4 "i"
 *   insn=0x000000000023B6A4 string=0x000000000023B6A8 "\t"
 *   insn=0x000000000023B6A4 string=0x000000000023B710 "\t"
 *   insn=0x000000000023B6A8 string=0x000000000023B6AC "*"
 *   insn=0x000000000023B6AC string=0x000000000023B6B0 "\n"
 *   insn=0x000000000023B6B8 string=0x000000000023B6F8 "?"
 *   insn=0x000000000023B6C0 string=0x000000000023B6C4 "I%"
 *   insn=0x000000000023B6C4 string=0x000000000023B6C8 ")"
 *   insn=0x000000000023B6D4 string=0x000000000023B6D8 "I%"
 *   insn=0x000000000023B6D8 string=0x000000000023B6DC ")=G"
 *   insn=0x000000000023B6DC string=0x000000000023B6E0 "!"
 *   insn=0x000000000023B6E0 string=0x000000000023B6E4 "i"
 *   insn=0x000000000023B6E4 string=0x000000000023B6E8 "\t"
 *   insn=0x000000000023B6E8 string=0x000000000023B6EC "*"
 *   insn=0x000000000023B6EC string=0x000000000023B6F0 "\n"
 *   insn=0x000000000023B6F8 string=0x000000000023B6FC "L"
 *   insn=0x000000000023B700 string=0x000000000023B704 "("
 *   insn=0x000000000023B708 string=0x000000000023B70C "n"
 *   insn=0x000000000023B710 string=0x000000000023B714 "*"
 *   insn=0x000000000023B714 string=0x000000000023B718 "\n"
 *   insn=0x000000000023B718 string=0x000000000023B71C "?"
 *   insn=0x000000000023B71C string=0x000000000023B720 ""
 *   insn=0x000000000023B724 string=0x000000000023B728 "g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpawnPointComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x1
  _QWORD *v5; // x8
  _QWORD *v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  void *v13; // x0
  __int64 v14; // x1
  _QWORD *v15; // x8
  _QWORD *v16; // x8
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x19
  __int64 v21; // x8
  __int64 v22; // x8
  void *v23; // x0
  unsigned int *v24; // x8
  int v25; // w9
  unsigned int *v26; // x8
  int v27; // w9
  __int64 v28; // [xsp+10h] [xbp-60h] BYREF
  int v29; // [xsp+18h] [xbp-58h]
  __int64 v30; // [xsp+20h] [xbp-50h]
  _QWORD *v31; // [xsp+28h] [xbp-48h]
  __int64 v32; // [xsp+30h] [xbp-40h]
  _QWORD *v33; // [xsp+38h] [xbp-38h]
  __int64 v34; // [xsp+48h] [xbp-28h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    Caver::Component::GetEnumValuesForBindedProperty();
    return;
  }
  sub_566BB8((int)&v28, "right");
  Caver::BindingValue::ValueWithInt();
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 == *(_QWORD *)(a3 + 16) )
  {
    std::vector<Caver::BindingValue>::_M_insert_aux();
    v7 = v33;
    if ( !v33 )
      goto LABEL_14;
    goto LABEL_11;
  }
  *(_DWORD *)v4 = v29;
  *(_QWORD *)(v4 + 8) = v30;
  v5 = v31;
  *(_QWORD *)(v4 + 16) = v31;
  if ( v5 )
    ++v5[1];
  *(_QWORD *)(v4 + 24) = v32;
  v6 = v33;
  *(_QWORD *)(v4 + 32) = v33;
  if ( v6 )
    ++v6[1];
  *(_QWORD *)(a3 + 8) = v4 + 40;
  v7 = v33;
  if ( v33 )
  {
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
  }
LABEL_14:
  v10 = v31;
  if ( v31 )
  {
    v11 = v31[1] - 1LL;
    v31[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (void *)(v28 - 24);
  if ( (__int64 *)(v28 - 24) != &qword_6FD2E0 )
  {
    v24 = (unsigned int *)(v28 - 8);
    if ( &pthread_create )
    {
      do
        v25 = __ldaxr(v24);
      while ( __stlxr(v25 - 1, v24) );
    }
    else
    {
      v25 = (*v24)--;
    }
    if ( v25 <= 0 )
      operator delete(v13);
  }
  sub_566BB8((int)&v28, "left");
  Caver::BindingValue::ValueWithInt();
  v14 = *(_QWORD *)(a3 + 8);
  if ( v14 != *(_QWORD *)(a3 + 16) )
  {
    *(_DWORD *)v14 = v29;
    *(_QWORD *)(v14 + 8) = v30;
    v15 = v31;
    *(_QWORD *)(v14 + 16) = v31;
    if ( v15 )
      ++v15[1];
    *(_QWORD *)(v14 + 24) = v32;
    v16 = v33;
    *(_QWORD *)(v14 + 32) = v33;
    if ( v16 )
      ++v16[1];
    *(_QWORD *)(a3 + 8) = v14 + 40;
    v17 = v33;
    if ( !v33 )
      goto LABEL_30;
    goto LABEL_27;
  }
  std::vector<Caver::BindingValue>::_M_insert_aux();
  v17 = v33;
  if ( v33 )
  {
LABEL_27:
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
LABEL_30:
  v20 = v31;
  if ( v31 )
  {
    v21 = v31[1] - 1LL;
    v31[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (void *)(v28 - 24);
  if ( (__int64 *)(v28 - 24) != &qword_6FD2E0 )
  {
    v26 = (unsigned int *)(v28 - 8);
    if ( &pthread_create )
    {
      do
        v27 = __ldaxr(v26);
      while ( __stlxr(v27 - 1, v26) );
    }
    else
    {
      v27 = (*v26)--;
    }
    if ( v27 <= 0 )
      operator delete(v23);
  }
}

