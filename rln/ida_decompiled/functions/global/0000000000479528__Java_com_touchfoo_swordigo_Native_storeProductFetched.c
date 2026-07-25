/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000479528
 * Mangled: Java_com_touchfoo_swordigo_Native_storeProductFetched
 * Demangled: Java_com_touchfoo_swordigo_Native_storeProductFetched
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7E40  boost::detail::shared_count::shared_count<Caver::StoreProduct>(Caver::StoreProduct *)
 *   0x00000000001F8930  Caver::StoreController_Android::HandleProductFetch(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 150
 *   insn=0x000000000047953C string=0x0000000000479540 "V"
 *   insn=0x000000000047955C string=0x0000000000479560 ""
 *   insn=0x0000000000479570 string=0x0000000000479574 ""
 *   insn=0x000000000047958C string=0x0000000000479590 ""
 *   insn=0x00000000004795B4 string=0x00000000004795B8 ""
 *   insn=0x00000000004795D4 string=0x00000000004795D8 "x"
 *   insn=0x00000000004795E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004795F0 string=0x00000000004795F4 "`""
 *   insn=0x0000000000479610 string=0x00000000001F7E40 "0'"
 *   insn=0x0000000000479634 string=0x0000000000479638 "`"
 *   insn=0x000000000047964C string=0x00000000001F8930 "0'"
 *   insn=0x0000000000479650 string=0x0000000000479654 "t"
 *   insn=0x0000000000479660 string=0x0000000000479664 "!"
 *   insn=0x0000000000479664 string=0x0000000000479708 "I"
 *   insn=0x0000000000479668 string=0x000000000047966C "3"
 *   insn=0x000000000047966C string=0x0000000000479670 "h"
 *   insn=0x0000000000479670 string=0x0000000000479674 ""
 *   insn=0x0000000000479674 string=0x0000000000479678 "h"
 *   insn=0x000000000047967C string=0x0000000000479680 "h"
 *   insn=0x0000000000479680 string=0x0000000000479684 "\t@"
 *   insn=0x000000000047968C string=0x0000000000479690 "h\n@"
 *   insn=0x0000000000479690 string=0x0000000000479694 ""
 *   insn=0x0000000000479694 string=0x0000000000479698 "h\n"
 *   insn=0x000000000047969C string=0x00000000004796A0 "h"
 *   insn=0x00000000004796A0 string=0x00000000004796A4 "@"
 *   insn=0x00000000004796BC string=0x000000000047972C "I"
 *   insn=0x00000000004796C8 string=0x00000000004796CC "!"
 *   insn=0x00000000004796CC string=0x0000000000479750 "I"
 *   insn=0x00000000004796DC string=0x0000000000479774 "I"
 *   insn=0x0000000000479708 string=0x000000000047970C ")=G"
 *   insn=0x000000000047970C string=0x0000000000479710 "!"
 *   insn=0x0000000000479710 string=0x0000000000479714 ")"
 *   insn=0x0000000000479714 string=0x0000000000479718 "\t"
 *   insn=0x0000000000479714 string=0x0000000000479798 "\t"
 *   insn=0x0000000000479718 string=0x000000000047971C "*"
 *   insn=0x000000000047971C string=0x0000000000479720 "\n"
 *   insn=0x0000000000479728 string=0x00000000004797A4 "?"
 *   insn=0x000000000047972C string=0x0000000000479730 ")=G"
 *   insn=0x0000000000479730 string=0x0000000000479734 "!"
 *   insn=0x0000000000479734 string=0x0000000000479738 "I"
 *   insn=0x0000000000479738 string=0x000000000047973C "\t"
 *   insn=0x0000000000479738 string=0x00000000004797C0 "\t"
 *   insn=0x000000000047973C string=0x0000000000479740 "*"
 *   insn=0x0000000000479740 string=0x0000000000479744 "\n"
 *   insn=0x0000000000479748 string=0x000000000047974C " "
 *   insn=0x000000000047974C string=0x00000000004797CC "?"
 *   insn=0x0000000000479750 string=0x0000000000479754 ")=G"
 *   insn=0x0000000000479754 string=0x0000000000479758 "!"
 *   insn=0x0000000000479758 string=0x000000000047975C ")"
 *   insn=0x000000000047975C string=0x0000000000479760 "\t"
 *   insn=0x000000000047975C string=0x00000000004797E0 "\t"
 *   insn=0x0000000000479760 string=0x0000000000479764 "*"
 *   insn=0x0000000000479764 string=0x0000000000479768 "\n"
 *   insn=0x0000000000479770 string=0x00000000004797EC "?"
 *   insn=0x0000000000479774 string=0x0000000000479778 ")=G"
 *   insn=0x0000000000479778 string=0x000000000047977C "!"
 *   insn=0x000000000047977C string=0x0000000000479780 "\t"
 *   insn=0x0000000000479780 string=0x0000000000479784 "\t"
 *   insn=0x0000000000479780 string=0x0000000000479800 "\t"
 *   insn=0x0000000000479784 string=0x0000000000479788 "*"
 *   insn=0x0000000000479788 string=0x000000000047978C "\n"
 *   insn=0x0000000000479794 string=0x000000000047980C "?"
 *   insn=0x0000000000479798 string=0x000000000047979C "*"
 *   insn=0x000000000047979C string=0x00000000004797A0 "\n"
 *   insn=0x00000000004797C0 string=0x00000000004797C4 "*"
 *   insn=0x00000000004797C4 string=0x00000000004797C8 "\n"
 *   insn=0x00000000004797E0 string=0x00000000004797E4 "*"
 *   insn=0x00000000004797E4 string=0x00000000004797E8 "\n"
 *   insn=0x0000000000479800 string=0x0000000000479804 "*"
 *   insn=0x0000000000479804 string=0x0000000000479808 "\n"
 *   insn=0x0000000000479820 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000479824 string=0x0000000000479828 "j"
 *   insn=0x0000000000479828 string=0x000000000047982C "J"
 *   insn=0x0000000000479830 string=0x0000000000479834 "(a"
 *   insn=0x000000000047983C string=0x0000000000479840 "J"
 *   insn=0x0000000000479840 string=0x0000000000479844 "J=G"
 *   insn=0x0000000000479844 string=0x0000000000479848 ")!"
 *   insn=0x000000000047984C string=0x0000000000479850 "*"
 *   insn=0x000000000047984C string=0x0000000000479864 "*"
 *   insn=0x0000000000479850 string=0x0000000000479854 "K"
 *   insn=0x0000000000479854 string=0x0000000000479858 "+"
 *   insn=0x0000000000479860 string=0x0000000000479870 "_"
 *   insn=0x0000000000479864 string=0x0000000000479868 "K"
 *   insn=0x0000000000479868 string=0x000000000047986C "+"
 *   insn=0x0000000000479888 string=0x000000000047988C "?"
 *   insn=0x000000000047989C string=0x00000000004798A0 ""
 *   insn=0x00000000004798AC string=0x00000000004798B0 "\t@"
 *   insn=0x00000000004798BC string=0x00000000004798C0 ""
 *   insn=0x00000000004798CC string=0x00000000004798D0 "@"
 *   insn=0x00000000004798D8 string=0x00000000004798DC "+"
 *   insn=0x00000000004798E0 string=0x00000000004798E4 "i"
 *   insn=0x00000000004798E4 string=0x00000000004798E8 "j"
 *   insn=0x00000000004798E8 string=0x00000000004798EC "J"
 *   insn=0x00000000004798F0 string=0x00000000004798F4 "(a"
 *   insn=0x0000000000479900 string=0x0000000000479904 "J"
 *   insn=0x0000000000479904 string=0x0000000000479908 "J=G"
 *   insn=0x0000000000479908 string=0x000000000047990C ")!"
 *   insn=0x0000000000479910 string=0x0000000000479914 "*"
 *   insn=0x0000000000479910 string=0x0000000000479928 "*"
 *   insn=0x0000000000479914 string=0x0000000000479918 "K"
 *   insn=0x0000000000479918 string=0x000000000047991C "+"
 *   insn=0x0000000000479924 string=0x0000000000479934 "_"
 *   insn=0x0000000000479928 string=0x000000000047992C "K"
 *   insn=0x000000000047992C string=0x0000000000479930 "+"
 *   insn=0x0000000000479954 string=0x0000000000479958 "V"
 *   insn=0x0000000000479958 string=0x000000000047995C ""
 *   insn=0x0000000000479958 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000479968 string=0x000000000047996C ""
 *   insn=0x0000000000479988 string=0x000000000047998C "i"
 *   insn=0x000000000047998C string=0x0000000000479990 ")"
 *   insn=0x000000000047999C string=0x0000000000479A2C "I"
 *   insn=0x00000000004799A0 string=0x00000000004799A4 "i"
 *   insn=0x00000000004799A4 string=0x00000000004799A8 ")"
 *   insn=0x00000000004799B4 string=0x0000000000479A08 "I"
 *   insn=0x00000000004799B8 string=0x00000000004799BC "i"
 *   insn=0x00000000004799BC string=0x00000000004799C0 ")"
 *   insn=0x00000000004799CC string=0x00000000004799D0 "I"
 *   insn=0x00000000004799D0 string=0x00000000004799D4 ")=G"
 *   insn=0x00000000004799D4 string=0x00000000004799D8 "!"
 *   insn=0x00000000004799DC string=0x00000000004799E0 "\t"
 *   insn=0x00000000004799DC string=0x0000000000479A90 "\t"
 *   insn=0x00000000004799E0 string=0x00000000004799E4 "*"
 *   insn=0x00000000004799E4 string=0x00000000004799E8 "\n"
 *   insn=0x00000000004799EC string=0x00000000004799F0 "?"
 *   insn=0x00000000004799F0 string=0x00000000004799F4 "l"
 *   insn=0x00000000004799F8 string=0x00000000004799FC "j"
 *   insn=0x0000000000479A08 string=0x0000000000479A0C ")=G"
 *   insn=0x0000000000479A0C string=0x0000000000479A10 "!"
 *   insn=0x0000000000479A14 string=0x0000000000479A18 "\t"
 *   insn=0x0000000000479A14 string=0x0000000000479A50 "\t"
 *   insn=0x0000000000479A18 string=0x0000000000479A1C "*"
 *   insn=0x0000000000479A1C string=0x0000000000479A20 "\n"
 *   insn=0x0000000000479A24 string=0x0000000000479A28 ""
 *   insn=0x0000000000479A28 string=0x0000000000479A5C "?"
 *   insn=0x0000000000479A2C string=0x0000000000479A30 ")=G"
 *   insn=0x0000000000479A30 string=0x0000000000479A34 "!"
 *   insn=0x0000000000479A38 string=0x0000000000479A3C "\t"
 *   insn=0x0000000000479A38 string=0x0000000000479A70 "\t"
 *   insn=0x0000000000479A3C string=0x0000000000479A40 "*"
 *   insn=0x0000000000479A40 string=0x0000000000479A44 "\n"
 *   insn=0x0000000000479A4C string=0x0000000000479A7C "?"
 *   insn=0x0000000000479A50 string=0x0000000000479A54 "*"
 *   insn=0x0000000000479A54 string=0x0000000000479A58 "\n"
 *   insn=0x0000000000479A64 string=0x0000000000479A68 "O"
 *   insn=0x0000000000479A70 string=0x0000000000479A74 "*"
 *   insn=0x0000000000479A74 string=0x0000000000479A78 "\n"
 *   insn=0x0000000000479A84 string=0x0000000000479A88 "G"
 *   insn=0x0000000000479A90 string=0x0000000000479A94 "*"
 *   insn=0x0000000000479A94 string=0x0000000000479A98 "\n"
 *   insn=0x0000000000479A98 string=0x0000000000479A9C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Java_com_touchfoo_swordigo_Native_storeProductFetched(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char *v8; // x0
  char *v9; // x0
  char *v10; // x0
  __int64 v11; // x19
  void *v12; // x0
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x8
  void *v16; // x0
  void *v17; // x0
  void *v18; // x0
  unsigned int *v19; // x8
  int v20; // w9
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  _QWORD v27[2]; // [xsp+10h] [xbp-70h] BYREF
  _QWORD *v28; // [xsp+20h] [xbp-60h]
  __int64 v29; // [xsp+28h] [xbp-58h] BYREF
  __int64 v30; // [xsp+30h] [xbp-50h] BYREF
  _QWORD v31[3]; // [xsp+38h] [xbp-48h] BYREF

  v31[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !qword_6E9C50 )
    return;
  v8 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1352LL))(a1, a3, 0);
  sub_566BB8((int)v31, v8);
  v9 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1352LL))(a1, a4, 0);
  sub_566BB8((int)&v30, v9);
  v10 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1352LL))(a1, a5, 0);
  sub_566BB8((int)&v29, v10);
  v11 = operator new(0x10u);
  sub_56A528(v11, v31);
  sub_56A528(v11 + 8, &v29);
  v27[1] = v11;
  boost::detail::shared_count::shared_count<Caver::StoreProduct>();
  boost::detail::sp_enable_shared_from_this();
  sub_566BB8((int)v27, "");
  Caver::StoreController_Android::HandleProductFetch();
  v12 = (void *)(v27[0] - 24LL);
  if ( (__int64 *)(v27[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_3;
  v19 = (unsigned int *)(v27[0] - 8LL);
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
  if ( v20 > 0 )
  {
LABEL_3:
    v13 = v28;
    if ( !v28 )
      goto LABEL_7;
LABEL_4:
    v14 = v13[1] - 1LL;
    v13[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
    goto LABEL_7;
  }
  operator delete(v12);
  v13 = v28;
  if ( v28 )
    goto LABEL_4;
LABEL_7:
  v16 = (void *)(v29 - 24);
  if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v29 - 8);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v16);
  }
  v17 = (void *)(v30 - 24);
  if ( (__int64 *)(v30 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(v30 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v17);
  }
  v18 = (void *)(v31[0] - 24LL);
  if ( (__int64 *)(v31[0] - 24LL) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v31[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v18);
  }
}

