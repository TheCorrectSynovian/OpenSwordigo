/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002652DC
 * Mangled: _ZN5Caver15DamageComponent30GetEnumValuesForBindedPropertyEiPSt6vectorINS_12BindingValueESaIS2_EE
 * Demangled: Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callers: 1
 *   0x00000000001F4820  Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 11
 *   0x00000000001F3CC0  Caver::StringForSpecialDamageType(Caver::SpecialDamageType)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002008D0  std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::BindingValue*,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>>>,Caver::BindingValue const&)
 *   0x0000000000202470  Caver::Component::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002659D4  `non-virtual thunk to'Caver::DamageComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 152
 *   insn=0x00000000002652F4 string=0x00000000002652F8 "X"
 *   insn=0x00000000002652F8 string=0x00000000002652FC ""
 *   insn=0x0000000000265300 string=0x0000000000265304 "?"
 *   insn=0x000000000026530C string=0x0000000000265310 "?"
 *   insn=0x0000000000265310 string=0x0000000000265314 "!"
 *   insn=0x000000000026531C string=0x0000000000265320 "Z"
 *   insn=0x0000000000265320 string=0x0000000000265324 "9?G"
 *   insn=0x0000000000265328 string=0x0000000000587E26 "friendly"
 *   insn=0x000000000026532C string=0x0000000000587E20 "enemy"
 *   insn=0x0000000000265338 string=0x000000000026533C "x"
 *   insn=0x0000000000265358 string=0x000000000026535C "Et"
 *   insn=0x0000000000265360 string=0x0000000000265678 ""
 *   insn=0x0000000000265368 string=0x000000000026536C "\t"
 *   insn=0x0000000000265368 string=0x0000000000265380 "\t"
 *   insn=0x000000000026536C string=0x0000000000265370 "*"
 *   insn=0x0000000000265370 string=0x0000000000265374 "\n"
 *   insn=0x000000000026537C string=0x000000000026538C "?"
 *   insn=0x0000000000265380 string=0x0000000000265384 "*"
 *   insn=0x0000000000265384 string=0x0000000000265388 "\n"
 *   insn=0x0000000000265398 string=0x000000000026539C "M"
 *   insn=0x00000000002653A4 string=0x00000000002653A8 "F:"
 *   insn=0x00000000002653A8 string=0x00000000001F3CC0 "P'"
 *   insn=0x00000000002653B4 string=0x00000000002653B8 "bj"
 *   insn=0x00000000002653B8 string=0x00000000002653BC "a"
 *   insn=0x00000000002653BC string=0x00000000002653C0 "?"
 *   insn=0x00000000002653C8 string=0x00000000002653CC "("
 *   insn=0x00000000002653D0 string=0x00000000002653D4 "("
 *   insn=0x00000000002653D8 string=0x00000000002653DC "("
 *   insn=0x00000000002653E0 string=0x00000000002653E4 "\t"
 *   insn=0x00000000002653E4 string=0x00000000002653E8 ")"
 *   insn=0x00000000002653E8 string=0x00000000002653EC "\t"
 *   insn=0x00000000002653F0 string=0x00000000002653F4 "("
 *   insn=0x00000000002653F8 string=0x00000000002653FC "("
 *   insn=0x0000000000265400 string=0x0000000000265404 "\t"
 *   insn=0x0000000000265400 string=0x0000000000265410 "("
 *   insn=0x0000000000265404 string=0x0000000000265408 ")"
 *   insn=0x0000000000265408 string=0x000000000026540C "\t"
 *   insn=0x0000000000265410 string=0x0000000000265414 "h"
 *   insn=0x0000000000265428 string=0x000000000026542C ")m"
 *   insn=0x0000000000265430 string=0x0000000000265434 "5"
 *   insn=0x0000000000265438 string=0x000000000026543C ""
 *   insn=0x0000000000265448 string=0x000000000026544C "\t@"
 *   insn=0x0000000000265458 string=0x000000000026545C ""
 *   insn=0x0000000000265468 string=0x000000000026546C "@"
 *   insn=0x0000000000265478 string=0x000000000026547C "5"
 *   insn=0x0000000000265480 string=0x0000000000265484 ""
 *   insn=0x0000000000265490 string=0x0000000000265494 "\t@"
 *   insn=0x00000000002654A0 string=0x00000000002654A4 ""
 *   insn=0x00000000002654B0 string=0x00000000002654B4 "@"
 *   insn=0x00000000002654CC string=0x0000000000265364 "!"
 *   insn=0x00000000002654D4 string=0x00000000002654D8 "C"
 *   insn=0x00000000002654D8 string=0x00000000002654DC "g"
 *   insn=0x00000000002654E4 string=0x00000000002654E8 "\t"
 *   insn=0x00000000002654E4 string=0x00000000002654FC "\t"
 *   insn=0x00000000002654E8 string=0x00000000002654EC "*"
 *   insn=0x00000000002654EC string=0x00000000002654F0 "\n"
 *   insn=0x00000000002654F8 string=0x0000000000265508 "?"
 *   insn=0x00000000002654FC string=0x0000000000265500 "*"
 *   insn=0x0000000000265500 string=0x0000000000265504 "\n"
 *   insn=0x0000000000265508 string=0x000000000026550C ","
 *   insn=0x0000000000265514 string=0x0000000000265518 "V"
 *   insn=0x0000000000265558 string=0x000000000026555C "a"
 *   insn=0x000000000026555C string=0x0000000000265560 "?"
 *   insn=0x0000000000265568 string=0x000000000026556C "("
 *   insn=0x0000000000265570 string=0x0000000000265574 "("
 *   insn=0x0000000000265578 string=0x000000000026557C "("
 *   insn=0x0000000000265580 string=0x0000000000265584 "\t"
 *   insn=0x0000000000265584 string=0x0000000000265588 ")"
 *   insn=0x0000000000265588 string=0x000000000026558C "\t"
 *   insn=0x0000000000265590 string=0x0000000000265594 "("
 *   insn=0x0000000000265598 string=0x000000000026559C "("
 *   insn=0x00000000002655A0 string=0x00000000002655A4 "\t"
 *   insn=0x00000000002655A0 string=0x00000000002655B0 "("
 *   insn=0x00000000002655A4 string=0x00000000002655A8 ")"
 *   insn=0x00000000002655A8 string=0x00000000002655AC "\t"
 *   insn=0x00000000002655B0 string=0x00000000002655B4 "h"
 *   insn=0x00000000002655D0 string=0x00000000002655D4 "7"
 *   insn=0x00000000002655D8 string=0x00000000002655DC ""
 *   insn=0x00000000002655E8 string=0x00000000002655EC "\t@"
 *   insn=0x00000000002655F8 string=0x00000000002655FC ""
 *   insn=0x0000000000265608 string=0x000000000026560C "@"
 *   insn=0x0000000000265618 string=0x000000000026561C "7"
 *   insn=0x0000000000265620 string=0x0000000000265624 ""
 *   insn=0x0000000000265630 string=0x0000000000265634 "\t@"
 *   insn=0x0000000000265640 string=0x0000000000265644 ""
 *   insn=0x0000000000265650 string=0x0000000000265654 "@"
 *   insn=0x000000000026566C string=0x00000000002654E0 "!"
 *   insn=0x0000000000265670 string=0x0000000000265674 "V"
 *   insn=0x0000000000265684 string=0x00000000002656A4 "C"
 *   insn=0x00000000002656A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002656B4 string=0x00000000002656B8 ""
 *   insn=0x00000000002656BC string=0x00000000002656C0 "A"
 *   insn=0x00000000002656C4 string=0x00000000002656C8 "\t@"
 *   insn=0x00000000002656D4 string=0x00000000002656D8 ""
 *   insn=0x00000000002656DC string=0x00000000002656E0 "A"
 *   insn=0x00000000002656E4 string=0x00000000002656E8 "@"
 *   insn=0x0000000000265700 string=0x0000000000265704 "4"
 *   insn=0x0000000000265708 string=0x000000000026570C ""
 *   insn=0x0000000000265718 string=0x000000000026571C "\t@"
 *   insn=0x0000000000265728 string=0x000000000026572C ""
 *   insn=0x0000000000265738 string=0x000000000026573C "@"
 *   insn=0x0000000000265750 string=0x0000000000265754 ""
 *   insn=0x0000000000265758 string=0x000000000026575C "a"
 *   insn=0x0000000000265760 string=0x0000000000265764 "\t@"
 *   insn=0x0000000000265770 string=0x0000000000265774 ""
 *   insn=0x0000000000265778 string=0x000000000026577C "a"
 *   insn=0x0000000000265780 string=0x0000000000265784 "@"
 *   insn=0x000000000026578C string=0x0000000000265790 "n"
 *   insn=0x00000000002657A0 string=0x00000000002657A4 ""
 *   insn=0x00000000002657B0 string=0x00000000002657B4 "\t@"
 *   insn=0x00000000002657C0 string=0x00000000002657C4 ""
 *   insn=0x00000000002657D0 string=0x00000000002657D4 "@"
 *   insn=0x00000000002657DC string=0x00000000002657E0 "S"
 *   insn=0x00000000002657EC string=0x00000000002657F0 "T"
 *   insn=0x00000000002657F4 string=0x00000000002657F8 ""
 *   insn=0x0000000000265804 string=0x0000000000265808 "\t@"
 *   insn=0x0000000000265814 string=0x0000000000265818 ""
 *   insn=0x0000000000265824 string=0x0000000000265828 "@"
 *   insn=0x0000000000265830 string=0x0000000000265834 "Q"
 *   insn=0x0000000000265840 string=0x0000000000265844 "4"
 *   insn=0x0000000000265848 string=0x000000000026584C ""
 *   insn=0x0000000000265858 string=0x000000000026585C "\t@"
 *   insn=0x0000000000265868 string=0x000000000026586C ""
 *   insn=0x0000000000265878 string=0x000000000026587C "@"
 *   insn=0x0000000000265888 string=0x000000000026588C "t"
 *   insn=0x0000000000265890 string=0x0000000000265894 ""
 *   insn=0x00000000002658A0 string=0x00000000002658A4 "\t@"
 *   insn=0x00000000002658B0 string=0x00000000002658B4 ""
 *   insn=0x00000000002658C0 string=0x00000000002658C4 "@"
 *   insn=0x00000000002658CC string=0x00000000002658D0 "*"
 *   insn=0x00000000002658E0 string=0x00000000002658E4 ""
 *   insn=0x00000000002658F0 string=0x00000000002658F4 "\t@"
 *   insn=0x0000000000265900 string=0x0000000000265904 ""
 *   insn=0x0000000000265910 string=0x0000000000265914 "@"
 *   insn=0x0000000000265954 string=0x0000000000265958 "!"
 *   insn=0x000000000026595C string=0x0000000000265960 "\t"
 *   insn=0x000000000026595C string=0x00000000002659B8 "\t"
 *   insn=0x0000000000265960 string=0x0000000000265964 "*"
 *   insn=0x0000000000265964 string=0x0000000000265968 "\n"
 *   insn=0x0000000000265970 string=0x00000000002659A0 "?"
 *   insn=0x0000000000265980 string=0x0000000000265984 "@"
 *   insn=0x0000000000265984 string=0x0000000000265988 "!"
 *   insn=0x0000000000265988 string=0x000000000026598C "v"
 *   insn=0x000000000026598C string=0x0000000000265990 "\t"
 *   insn=0x0000000000265990 string=0x0000000000265994 "*"
 *   insn=0x0000000000265994 string=0x0000000000265998 "\n"
 *   insn=0x00000000002659A0 string=0x00000000002659A4 "L"
 *   insn=0x00000000002659A8 string=0x00000000002659AC "~"
 *   insn=0x00000000002659B8 string=0x00000000002659BC "*"
 *   insn=0x00000000002659BC string=0x00000000002659C0 "\n"
 *   insn=0x00000000002659C0 string=0x00000000002659C4 "?"
 *   insn=0x00000000002659C4 string=0x00000000002659C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DamageComponent::GetEnumValuesForBindedProperty(__int64 a1, int a2, __int64 a3)
{
  int i; // w8
  unsigned int v5; // w20
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // x1
  _QWORD *v9; // x8
  _QWORD *v10; // x8
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x8
  void *v17; // x0
  unsigned int *v19; // x8
  int v20; // w9
  int v21; // w22
  __int64 v22; // x1
  _QWORD *v23; // x8
  _QWORD *v24; // x8
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x23
  __int64 v29; // x8
  __int64 v30; // x8
  void *v31; // x0
  __int64 v32; // [xsp+0h] [xbp-80h] BYREF
  int v33; // [xsp+8h] [xbp-78h]
  __int64 v34; // [xsp+10h] [xbp-70h]
  _QWORD *v35; // [xsp+18h] [xbp-68h]
  __int64 v36; // [xsp+20h] [xbp-60h]
  _QWORD *v37; // [xsp+28h] [xbp-58h]
  __int64 v38; // [xsp+38h] [xbp-48h]

  v38 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 3 )
  {
    v5 = 0;
    while ( 1 )
    {
      Caver::StringForSpecialDamageType();
      Caver::BindingValue::ValueWithInt();
      v8 = *(_QWORD *)(a3 + 8);
      if ( v8 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v11 = v37;
      if ( v37 )
        goto LABEL_20;
LABEL_23:
      v14 = v35;
      if ( v35 )
      {
        v15 = v35[1] - 1LL;
        v35[1] = v15;
        if ( !v15 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
          v16 = v14[2] - 1LL;
          v14[2] = v16;
          if ( !v16 )
            (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
        }
      }
      v17 = (void *)(v32 - 24);
      if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(v32 - 8);
        if ( &pthread_create )
        {
          do
            v7 = __ldaxr(v6);
          while ( __stlxr(v7 - 1, v6) );
        }
        else
        {
          v7 = (*v6)--;
        }
        if ( v7 <= 0 )
          operator delete(v17);
      }
      if ( v5++ >= 2 )
        return;
    }
    *(_DWORD *)v8 = v33;
    *(_QWORD *)(v8 + 8) = v34;
    v9 = v35;
    *(_QWORD *)(v8 + 16) = v35;
    if ( v9 )
      ++v9[1];
    *(_QWORD *)(v8 + 24) = v36;
    v10 = v37;
    *(_QWORD *)(v8 + 32) = v37;
    if ( v10 )
      ++v10[1];
    *(_QWORD *)(a3 + 8) = v8 + 40;
    v11 = v37;
    if ( !v37 )
      goto LABEL_23;
LABEL_20:
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
    goto LABEL_23;
  }
  if ( a2 == 2 )
  {
    for ( i = 0; ; i = 1 )
    {
      v21 = i;
      if ( i == 1 )
        sub_566BB8((int)&v32, "friendly");
      else
        sub_566BB8((int)&v32, "enemy");
      Caver::BindingValue::ValueWithInt();
      v22 = *(_QWORD *)(a3 + 8);
      if ( v22 != *(_QWORD *)(a3 + 16) )
        break;
      std::vector<Caver::BindingValue>::_M_insert_aux();
      v25 = v37;
      if ( v37 )
        goto LABEL_48;
LABEL_51:
      v28 = v35;
      if ( v35 )
      {
        v29 = v35[1] - 1LL;
        v35[1] = v29;
        if ( !v29 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
          v30 = v28[2] - 1LL;
          v28[2] = v30;
          if ( !v30 )
            (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
        }
      }
      v31 = (void *)(v32 - 24);
      if ( (__int64 *)(v32 - 24) != &qword_6FD2E0 )
      {
        v19 = (unsigned int *)(v32 - 8);
        if ( &pthread_create )
        {
          do
            v20 = __ldaxr(v19);
          while ( __stlxr(v20 - 1, v19) );
        }
        else
        {
          v20 = (*v19)--;
        }
        if ( v20 <= 0 )
          operator delete(v31);
      }
      if ( v21 )
        return;
    }
    *(_DWORD *)v22 = v33;
    *(_QWORD *)(v22 + 8) = v34;
    v23 = v35;
    *(_QWORD *)(v22 + 16) = v35;
    if ( v23 )
      ++v23[1];
    *(_QWORD *)(v22 + 24) = v36;
    v24 = v37;
    *(_QWORD *)(v22 + 32) = v37;
    if ( v24 )
      ++v24[1];
    *(_QWORD *)(a3 + 8) = v22 + 40;
    v25 = v37;
    if ( !v37 )
      goto LABEL_51;
LABEL_48:
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
    goto LABEL_51;
  }
  Caver::Component::GetEnumValuesForBindedProperty();
}

