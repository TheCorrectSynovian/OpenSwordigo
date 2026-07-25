/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BD468
 * Mangled: _ZN5Caver23StoreController_Android26FetchProductWithIdentifierERKSsNS_12TargetActionIFvS2_RKN5boost10shared_ptrINS_12StoreProductEEES2_EEE
 * Demangled: Caver::StoreController_Android::FetchProductWithIdentifier(std::string const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F83A0  std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BD7CC  Caver::StoreController_Android::FetchProductsWithIdentifiers(std::vector<std::string,std::allocator<std::string>> const&,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 88
 *   insn=0x00000000004BD47C string=0x00000000004BD480 "U"
 *   insn=0x00000000004BD4AC string=0x00000000004BD4B0 "i"
 *   insn=0x00000000004BD4AC string=0x00000000001F83A0 "0'"
 *   insn=0x00000000004BD4B4 string=0x00000000004BD4B8 "6"
 *   insn=0x00000000004BD4C0 string=0x00000000004BD4C4 "\t\t@"
 *   insn=0x00000000004BD4C4 string=0x00000000004BD4C8 ")"
 *   insn=0x00000000004BD4C8 string=0x00000000004BD4CC "\t\t"
 *   insn=0x00000000004BD4DC string=0x00000000004BD4E0 "("
 *   insn=0x00000000004BD4E0 string=0x00000000004BD4E4 ""
 *   insn=0x00000000004BD4E4 string=0x00000000004BD4E8 ""
 *   insn=0x00000000004BD4F0 string=0x00000000004BD4F4 "!a"
 *   insn=0x00000000004BD524 string=0x00000000004BD528 "h"
 *   insn=0x00000000004BD528 string=0x00000000004BD52C "("
 *   insn=0x00000000004BD52C string=0x00000000004BD530 ""
 *   insn=0x00000000004BD530 string=0x00000000004BD534 ""
 *   insn=0x00000000004BD53C string=0x00000000004BD540 " a"
 *   insn=0x00000000004BD558 string=0x00000000004BD55C "@"
 *   insn=0x00000000004BD55C string=0x00000000004BD560 ""
 *   insn=0x00000000004BD560 string=0x00000000004BD564 ""
 *   insn=0x00000000004BD568 string=0x00000000004BD56C ""
 *   insn=0x00000000004BD56C string=0x00000000004BD570 "@"
 *   insn=0x00000000004BD580 string=0x00000000004BD584 "V"
 *   insn=0x00000000004BD580 string=0x00000000004BD5F4 "s"
 *   insn=0x00000000004BD584 string=0x00000000004BD588 "7"
 *   insn=0x00000000004BD594 string=0x00000000004BD5D4 "h"
 *   insn=0x00000000004BD59C string=0x00000000004BD5A0 "\t"
 *   insn=0x00000000004BD59C string=0x00000000004BD5B4 "\t"
 *   insn=0x00000000004BD5A0 string=0x00000000004BD5A4 "*"
 *   insn=0x00000000004BD5A4 string=0x00000000004BD5A8 "\n"
 *   insn=0x00000000004BD5B0 string=0x00000000004BD5C0 "?"
 *   insn=0x00000000004BD5B4 string=0x00000000004BD5B8 "*"
 *   insn=0x00000000004BD5B8 string=0x00000000004BD5BC "\n"
 *   insn=0x00000000004BD5C4 string=0x00000000004BD5E4 "s""
 *   insn=0x00000000004BD5C8 string=0x00000000004BD5CC "v"
 *   insn=0x00000000004BD5E0 string=0x00000000004BD598 "!"
 *   insn=0x00000000004BD5E8 string=0x00000000004BD5EC "A"
 *   insn=0x00000000004BD5F8 string=0x00000000004BD5FC "-"
 *   insn=0x00000000004BD5FC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004BD60C string=0x00000000004BD628 "*"
 *   insn=0x00000000004BD628 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BD630 string=0x00000000004BD634 ""
 *   insn=0x00000000004BD634 string=0x00000000004BD638 "\t\t@"
 *   insn=0x00000000004BD638 string=0x00000000004BD63C ")"
 *   insn=0x00000000004BD63C string=0x00000000004BD640 "\t\t"
 *   insn=0x00000000004BD644 string=0x00000000004BD648 "\t"
 *   insn=0x00000000004BD648 string=0x00000000004BD64C ")@"
 *   insn=0x00000000004BD650 string=0x00000000004BD654 " "
 *   insn=0x00000000004BD654 string=0x00000000004BD658 "7"
 *   insn=0x00000000004BD664 string=0x00000000004BD668 "h"
 *   insn=0x00000000004BD668 string=0x00000000004BD66C "\t\t@"
 *   insn=0x00000000004BD66C string=0x00000000004BD670 ")"
 *   insn=0x00000000004BD670 string=0x00000000004BD674 "\t\t"
 *   insn=0x00000000004BD678 string=0x00000000004BD67C "\t"
 *   insn=0x00000000004BD67C string=0x00000000004BD680 ")@"
 *   insn=0x00000000004BD684 string=0x00000000004BD688 " "
 *   insn=0x00000000004BD688 string=0x00000000004BD68C "*"
 *   insn=0x00000000004BD698 string=0x00000000004BD69C "h"
 *   insn=0x00000000004BD69C string=0x00000000004BD6A0 "("
 *   insn=0x00000000004BD6A0 string=0x00000000004BD6A4 ""
 *   insn=0x00000000004BD6A4 string=0x00000000004BD6A8 ""
 *   insn=0x00000000004BD6B0 string=0x00000000004BD6B4 " a"
 *   insn=0x00000000004BD6C8 string=0x00000000004BD6CC "@"
 *   insn=0x00000000004BD6CC string=0x00000000004BD6D0 "@"
 *   insn=0x00000000004BD6D0 string=0x00000000004BD6D4 ""
 *   insn=0x00000000004BD6D4 string=0x00000000004BD6D8 ""
 *   insn=0x00000000004BD6DC string=0x00000000004BD6E0 ""
 *   insn=0x00000000004BD6E0 string=0x00000000004BD6E4 "@"
 *   insn=0x00000000004BD6F8 string=0x00000000004BD6FC "\t\t@"
 *   insn=0x00000000004BD6FC string=0x00000000004BD700 ")"
 *   insn=0x00000000004BD700 string=0x00000000004BD704 "\t\t"
 *   insn=0x00000000004BD708 string=0x00000000004BD70C "\t"
 *   insn=0x00000000004BD70C string=0x00000000004BD710 ")@"
 *   insn=0x00000000004BD714 string=0x00000000004BD718 " "
 *   insn=0x00000000004BD728 string=0x00000000004BD72C "C"
 *   insn=0x00000000004BD73C string=0x00000000004BD740 "V"
 *   insn=0x00000000004BD73C string=0x00000000004BD7B8 "t"
 *   insn=0x00000000004BD740 string=0x00000000004BD744 "7"
 *   insn=0x00000000004BD758 string=0x00000000004BD75C "\t"
 *   insn=0x00000000004BD758 string=0x00000000004BD778 "\t"
 *   insn=0x00000000004BD75C string=0x00000000004BD760 "*"
 *   insn=0x00000000004BD760 string=0x00000000004BD764 "\n"
 *   insn=0x00000000004BD768 string=0x00000000004BD76C "?"
 *   insn=0x00000000004BD778 string=0x00000000004BD77C "*"
 *   insn=0x00000000004BD77C string=0x00000000004BD780 "\n"
 *   insn=0x00000000004BD780 string=0x00000000004BD784 "?"
 *   insn=0x00000000004BD7A4 string=0x00000000004BD754 "!"
 *   insn=0x00000000004BD7AC string=0x00000000004BD7B0 "A"
 *   insn=0x00000000004BD7C4 string=0x00000000004BD7C8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController_Android::FetchProductWithIdentifier(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x8
  void (__fastcall *v6)(__int64, _QWORD **, __int64 *); // x22
  __int64 v7; // x8
  void (__fastcall *v8)(__int128 *, __int128 *, __int64); // x8
  __int64 v9; // x0
  __int64 v10; // x8
  _QWORD *v11; // x19
  _QWORD *v12; // x20
  unsigned int *v13; // x8
  int v14; // w9
  __int64 *v15; // x0
  __int64 v16; // [xsp+8h] [xbp-88h] BYREF
  __int64 v17; // [xsp+10h] [xbp-80h]
  __int64 v18; // [xsp+18h] [xbp-78h]
  __int128 v19; // [xsp+20h] [xbp-70h] BYREF
  __int64 v20; // [xsp+30h] [xbp-60h]
  _QWORD *v21; // [xsp+38h] [xbp-58h] BYREF
  _QWORD *v22; // [xsp+40h] [xbp-50h]
  __int64 v23; // [xsp+48h] [xbp-48h]
  __int64 v24; // [xsp+58h] [xbp-38h]

  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  std::vector<std::string>::_M_insert_aux();
  v5 = a3[1];
  v6 = *(void (__fastcall **)(__int64, _QWORD **, __int64 *))(*(_QWORD *)a1 + 40LL);
  v16 = *a3;
  v17 = v5;
  if ( v5 )
    ++*(_QWORD *)(v5 + 16);
  v18 = 0;
  v7 = a3[2];
  if ( v7 )
  {
    v18 = a3[2];
    if ( (v7 & 1) != 0 )
    {
      v20 = a3[5];
      v19 = *(_OWORD *)(a3 + 3);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD))(v7 & 0xFFFFFFFFFFFFFFFELL))(a3 + 3, &v19, 0);
    }
  }
  v6(a1, &v21, &v16);
  if ( v18 )
  {
    if ( (v18 & 1) == 0 )
    {
      v8 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(v18 & 0xFFFFFFFFFFFFFFFELL);
      if ( v8 )
        v8(&v19, &v19, 2);
    }
    v18 = 0;
  }
  v9 = v17;
  if ( v17 )
  {
    v10 = *(_QWORD *)(v17 + 16) - 1LL;
    *(_QWORD *)(v17 + 16) = v10;
    if ( !v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  }
  v11 = v21;
  v12 = v22;
  if ( v21 != v22 )
  {
    do
    {
      v15 = (__int64 *)(*v11 - 24LL);
      if ( v15 != &qword_6FD2E0 )
      {
        v13 = (unsigned int *)(*v11 - 8LL);
        if ( &pthread_create )
        {
          do
            v14 = __ldaxr(v13);
          while ( __stlxr(v14 - 1, v13) );
        }
        else
        {
          v14 = (*v13)--;
        }
        if ( v14 <= 0 )
          operator delete(v15);
      }
      ++v11;
    }
    while ( v11 != v12 );
    v11 = v21;
  }
  if ( v11 )
    operator delete(v11);
}

