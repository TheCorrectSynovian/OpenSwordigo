/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002681F0
 * Mangled: _ZN5Caver15EntityComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::EntityComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001FBB90  Caver::EntityComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000026889C  `non-virtual thunk to'Caver::EntityComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 159
 *   insn=0x0000000000268200 string=0x0000000000268204 "U"
 *   insn=0x0000000000268214 string=0x0000000000268224 "A"
 *   insn=0x0000000000268224 string=0x000000000059258D "right"
 *   insn=0x0000000000268230 string=0x0000000000268234 "a"
 *   insn=0x0000000000268244 string=0x0000000000268248 "a"
 *   insn=0x0000000000268248 string=0x000000000026824C "?"
 *   insn=0x0000000000268254 string=0x0000000000268258 "("
 *   insn=0x000000000026825C string=0x0000000000268260 "("
 *   insn=0x0000000000268264 string=0x0000000000268268 "("
 *   insn=0x000000000026826C string=0x0000000000268270 "\t"
 *   insn=0x0000000000268270 string=0x0000000000268274 ")"
 *   insn=0x0000000000268274 string=0x0000000000268278 "\t"
 *   insn=0x000000000026827C string=0x0000000000268280 "("
 *   insn=0x0000000000268284 string=0x0000000000268288 "("
 *   insn=0x000000000026828C string=0x0000000000268290 "\t"
 *   insn=0x000000000026828C string=0x000000000026829C "("
 *   insn=0x0000000000268290 string=0x0000000000268294 ")"
 *   insn=0x0000000000268294 string=0x0000000000268298 "\t"
 *   insn=0x000000000026829C string=0x00000000002682A0 "h"
 *   insn=0x00000000002682BC string=0x00000000002682C0 "4"
 *   insn=0x00000000002682C4 string=0x00000000002682C8 ""
 *   insn=0x00000000002682D4 string=0x00000000002682D8 "\t@"
 *   insn=0x00000000002682E4 string=0x00000000002682E8 ""
 *   insn=0x00000000002682F4 string=0x00000000002682F8 "@"
 *   insn=0x0000000000268304 string=0x0000000000268308 "4"
 *   insn=0x000000000026830C string=0x0000000000268310 ""
 *   insn=0x000000000026831C string=0x0000000000268320 "\t@"
 *   insn=0x000000000026832C string=0x0000000000268330 ""
 *   insn=0x000000000026833C string=0x0000000000268340 "@"
 *   insn=0x0000000000268360 string=0x0000000000268364 "A"
 *   insn=0x0000000000268364 string=0x000000000059257C "left"
 *   insn=0x0000000000268380 string=0x0000000000268384 "o^"
 *   insn=0x0000000000268384 string=0x0000000000268388 "a"
 *   insn=0x0000000000268388 string=0x000000000026838C "?"
 *   insn=0x0000000000268394 string=0x0000000000268398 "("
 *   insn=0x000000000026839C string=0x00000000002683A0 "("
 *   insn=0x00000000002683A4 string=0x00000000002683A8 "("
 *   insn=0x00000000002683AC string=0x00000000002683B0 "\t"
 *   insn=0x00000000002683B0 string=0x00000000002683B4 ")"
 *   insn=0x00000000002683B4 string=0x00000000002683B8 "\t"
 *   insn=0x00000000002683BC string=0x00000000002683C0 "("
 *   insn=0x00000000002683C4 string=0x00000000002683C8 "("
 *   insn=0x00000000002683CC string=0x00000000002683D0 "\t"
 *   insn=0x00000000002683CC string=0x00000000002683DC "("
 *   insn=0x00000000002683D0 string=0x00000000002683D4 ")"
 *   insn=0x00000000002683D4 string=0x00000000002683D8 "\t"
 *   insn=0x00000000002683DC string=0x00000000002683E0 "h"
 *   insn=0x00000000002683E8 string=0x0000000000268404 "h"
 *   insn=0x00000000002683F4 string=0x00000000002683F8 "6a"
 *   insn=0x00000000002683FC string=0x0000000000268400 "3"
 *   insn=0x0000000000268404 string=0x0000000000268408 ""
 *   insn=0x0000000000268408 string=0x000000000026840C "h"
 *   insn=0x0000000000268410 string=0x0000000000268414 "h"
 *   insn=0x0000000000268414 string=0x0000000000268418 "\t@"
 *   insn=0x0000000000268420 string=0x0000000000268424 "h\n@"
 *   insn=0x0000000000268424 string=0x0000000000268428 ""
 *   insn=0x0000000000268428 string=0x000000000026842C "h\n"
 *   insn=0x0000000000268430 string=0x0000000000268434 "h"
 *   insn=0x0000000000268434 string=0x0000000000268438 "@"
 *   insn=0x0000000000268444 string=0x0000000000268448 "3"
 *   insn=0x0000000000268448 string=0x000000000026844C "h"
 *   insn=0x000000000026844C string=0x0000000000268450 ""
 *   insn=0x0000000000268450 string=0x0000000000268454 "h"
 *   insn=0x0000000000268458 string=0x000000000026845C "h"
 *   insn=0x000000000026845C string=0x0000000000268460 "\t@"
 *   insn=0x0000000000268468 string=0x000000000026846C "h\n@"
 *   insn=0x000000000026846C string=0x0000000000268470 ""
 *   insn=0x0000000000268470 string=0x0000000000268474 "h\n"
 *   insn=0x0000000000268478 string=0x000000000026847C "h"
 *   insn=0x000000000026847C string=0x0000000000268480 "@"
 *   insn=0x0000000000268494 string=0x0000000000268498 "a"
 *   insn=0x00000000002684A8 string=0x0000000000268548 "b7"
 *   insn=0x00000000002684C0 string=0x00000000002684C4 ")=G"
 *   insn=0x00000000002684C4 string=0x00000000002684C8 "!"
 *   insn=0x00000000002684CC string=0x00000000002684D0 "\t"
 *   insn=0x00000000002684CC string=0x0000000000268508 "\t"
 *   insn=0x00000000002684D0 string=0x00000000002684D4 "*"
 *   insn=0x00000000002684D4 string=0x00000000002684D8 "\n"
 *   insn=0x00000000002684DC string=0x00000000002684E0 ""
 *   insn=0x00000000002684E0 string=0x0000000000268514 "?"
 *   insn=0x00000000002684E4 string=0x00000000002684E8 ")=G"
 *   insn=0x00000000002684E8 string=0x00000000002684EC "!"
 *   insn=0x00000000002684F0 string=0x00000000002684F4 "\t"
 *   insn=0x00000000002684F0 string=0x0000000000268528 "\t"
 *   insn=0x00000000002684F4 string=0x00000000002684F8 "*"
 *   insn=0x00000000002684F8 string=0x00000000002684FC "\n"
 *   insn=0x0000000000268504 string=0x0000000000268534 "?"
 *   insn=0x0000000000268508 string=0x000000000026850C "*"
 *   insn=0x000000000026850C string=0x0000000000268510 "\n"
 *   insn=0x0000000000268514 string=0x0000000000268518 "l"
 *   insn=0x0000000000268528 string=0x000000000026852C "*"
 *   insn=0x000000000026852C string=0x0000000000268530 "\n"
 *   insn=0x0000000000268534 string=0x0000000000268538 ","
 *   insn=0x0000000000268548 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026855C string=0x0000000000268560 ""
 *   insn=0x000000000026856C string=0x0000000000268570 "\t@"
 *   insn=0x000000000026857C string=0x0000000000268580 ""
 *   insn=0x000000000026858C string=0x0000000000268590 "@"
 *   insn=0x00000000002685A8 string=0x00000000002685AC "4"
 *   insn=0x00000000002685B0 string=0x00000000002685B4 ""
 *   insn=0x00000000002685C0 string=0x00000000002685C4 "\t@"
 *   insn=0x00000000002685D0 string=0x00000000002685D4 ""
 *   insn=0x00000000002685E0 string=0x00000000002685E4 "@"
 *   insn=0x0000000000268600 string=0x0000000000268604 "4"
 *   insn=0x0000000000268608 string=0x000000000026860C ""
 *   insn=0x0000000000268618 string=0x000000000026861C "\t@"
 *   insn=0x0000000000268628 string=0x000000000026862C ""
 *   insn=0x0000000000268638 string=0x000000000026863C "@"
 *   insn=0x0000000000268648 string=0x000000000026864C "t"
 *   insn=0x0000000000268650 string=0x0000000000268654 ""
 *   insn=0x0000000000268660 string=0x0000000000268664 "\t@"
 *   insn=0x0000000000268670 string=0x0000000000268674 ""
 *   insn=0x0000000000268680 string=0x0000000000268684 "@"
 *   insn=0x000000000026868C string=0x0000000000268690 "Z"
 *   insn=0x00000000002686A0 string=0x00000000002686A4 ""
 *   insn=0x00000000002686A8 string=0x00000000002686AC "a\t"
 *   insn=0x00000000002686B0 string=0x00000000002686B4 "\t@"
 *   insn=0x00000000002686C0 string=0x00000000002686C4 ""
 *   insn=0x00000000002686C8 string=0x00000000002686CC "a"
 *   insn=0x00000000002686D0 string=0x00000000002686D4 "@"
 *   insn=0x00000000002686DC string=0x00000000002686E0 ">"
 *   insn=0x00000000002686EC string=0x00000000002686F0 "4"
 *   insn=0x00000000002686F4 string=0x00000000002686F8 ""
 *   insn=0x0000000000268704 string=0x0000000000268708 "\t@"
 *   insn=0x0000000000268714 string=0x0000000000268718 ""
 *   insn=0x0000000000268724 string=0x0000000000268728 "@"
 *   insn=0x000000000026873C string=0x0000000000268740 ""
 *   insn=0x0000000000268744 string=0x0000000000268748 "A"
 *   insn=0x000000000026874C string=0x0000000000268750 "\t@"
 *   insn=0x000000000026875C string=0x0000000000268760 ""
 *   insn=0x0000000000268764 string=0x0000000000268768 "A"
 *   insn=0x000000000026876C string=0x0000000000268770 "@"
 *   insn=0x0000000000268778 string=0x000000000026877C "-"
 *   insn=0x000000000026878C string=0x0000000000268790 ""
 *   insn=0x000000000026879C string=0x00000000002687A0 "\t@"
 *   insn=0x00000000002687AC string=0x00000000002687B0 ""
 *   insn=0x00000000002687BC string=0x00000000002687C0 "@"
 *   insn=0x00000000002687E8 string=0x00000000002687EC "6d"
 *   insn=0x0000000000268808 string=0x000000000026880C ")=G"
 *   insn=0x000000000026880C string=0x0000000000268810 "!"
 *   insn=0x0000000000268810 string=0x0000000000268814 "i"
 *   insn=0x0000000000268814 string=0x0000000000268818 "\t"
 *   insn=0x0000000000268814 string=0x0000000000268880 "\t"
 *   insn=0x0000000000268818 string=0x000000000026881C "*"
 *   insn=0x000000000026881C string=0x0000000000268820 "\n"
 *   insn=0x0000000000268828 string=0x0000000000268868 "?"
 *   insn=0x0000000000268834 string=0x0000000000268838 ")"
 *   insn=0x0000000000268848 string=0x000000000026884C ")=G"
 *   insn=0x000000000026884C string=0x0000000000268850 "!"
 *   insn=0x0000000000268850 string=0x0000000000268854 "i"
 *   insn=0x0000000000268854 string=0x0000000000268858 "\t"
 *   insn=0x0000000000268858 string=0x000000000026885C "*"
 *   insn=0x000000000026885C string=0x0000000000268860 "\n"
 *   insn=0x0000000000268868 string=0x000000000026886C "L"
 *   insn=0x0000000000268880 string=0x0000000000268884 "*"
 *   insn=0x0000000000268884 string=0x0000000000268888 "\n"
 *   insn=0x0000000000268888 string=0x000000000026888C "?"
 *   insn=0x000000000026888C string=0x0000000000268890 ""
 *   insn=0x0000000000268894 string=0x0000000000268898 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
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

