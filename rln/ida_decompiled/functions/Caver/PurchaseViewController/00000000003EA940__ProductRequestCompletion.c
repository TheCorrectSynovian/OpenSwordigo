/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EA940
 * Mangled: _ZN5Caver22PurchaseViewController24ProductRequestCompletionERKSsRKN5boost10shared_ptrINS_12StoreProductEEES2_
 * Demangled: Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *
 * Callees: 12
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x00000000001FEA00  Caver::PurchaseViewController::UpdateView(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 143
 *   insn=0x00000000003EA954 string=0x00000000003EA958 "V"
 *   insn=0x00000000003EA96C string=0x00000000003EA970 " "
 *   insn=0x00000000003EA970 string=0x00000000003EA974 "a2@"
 *   insn=0x00000000003EA974 string=0x00000000003EA978 ""
 *   insn=0x00000000003EA978 string=0x00000000003EA97C ")"
 *   insn=0x00000000003EA980 string=0x00000000003EA984 "!"
 *   insn=0x00000000003EA98C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003EA994 string=0x00000000003EA998 "("
 *   insn=0x00000000003EA998 string=0x00000000003EA9FC "h6@"
 *   insn=0x00000000003EA9A0 string=0x00000000003EA9A4 "*"
 *   insn=0x00000000003EA9A0 string=0x00000000003EA9B0 "u:@"
 *   insn=0x00000000003EA9A4 string=0x00000000003EA9A8 "J"
 *   insn=0x00000000003EA9A8 string=0x00000000003EA9AC "*"
 *   insn=0x00000000003EA9B0 string=0x00000000003EA9B4 "h"
 *   insn=0x00000000003EA9B4 string=0x00000000003EA9B8 "5"
 *   insn=0x00000000003EA9BC string=0x00000000003EA9C0 ""
 *   insn=0x00000000003EA9D0 string=0x00000000003EA9D4 "\t@"
 *   insn=0x00000000003EA9DC string=0x00000000003EA9E0 ""
 *   insn=0x00000000003EA9F0 string=0x00000000003EA9F4 "@"
 *   insn=0x00000000003EA9FC string=0x00000000003EAA00 "\n"
 *   insn=0x00000000003EAA00 string=0x00000000003EAA04 "!"
 *   insn=0x00000000003EAA04 string=0x000000000058F6BA "Ok"
 *   insn=0x00000000003EAA10 string=0x00000000003EAA14 "i"
 *   insn=0x00000000003EAA14 string=0x00000000003EAA18 "A"
 *   insn=0x00000000003EAA18 string=0x0000000000592FE7 "OOPS!"
 *   insn=0x00000000003EAA24 string=0x00000000003EAA28 "d"
 *   insn=0x00000000003EAA44 string=0x00000000001F4080 "P'"
 *   insn=0x00000000003EAA5C string=0x00000000003EAA60 "a"
 *   insn=0x00000000003EAA68 string=0x00000000003EAA6C "h"
 *   insn=0x00000000003EAA68 string=0x00000000003EAA80 "t"
 *   insn=0x00000000003EAA6C string=0x00000000003EAA70 "@"
 *   insn=0x00000000003EAA78 string=0x00000000003EAA7C "a"
 *   insn=0x00000000003EAA88 string=0x00000000003EAA8C ""
 *   insn=0x00000000003EAA98 string=0x00000000003EAA9C "4"
 *   insn=0x00000000003EAA98 string=0x00000000001FDDF0 "0'"
 *   insn=0x00000000003EAAA0 string=0x00000000003EAAA4 ""
 *   insn=0x00000000003EAAB0 string=0x00000000003EAAB4 "\t@"
 *   insn=0x00000000003EAAC0 string=0x00000000003EAAC4 ""
 *   insn=0x00000000003EAAD0 string=0x00000000003EAAD4 "@"
 *   insn=0x00000000003EAAE0 string=0x00000000003EAAE4 "h"
 *   insn=0x00000000003EAAE8 string=0x00000000003EAAEC "4"
 *   insn=0x00000000003EAAF0 string=0x00000000003EAAF4 ""
 *   insn=0x00000000003EAB00 string=0x00000000003EAB04 "\t@"
 *   insn=0x00000000003EAB10 string=0x00000000003EAB14 ""
 *   insn=0x00000000003EAB20 string=0x00000000003EAB24 "@"
 *   insn=0x00000000003EAB50 string=0x00000000003EAB54 "!"
 *   insn=0x00000000003EAB70 string=0x00000000003EAB74 ")=G"
 *   insn=0x00000000003EAB74 string=0x00000000003EAB78 "!"
 *   insn=0x00000000003EAB7C string=0x00000000003EAB80 "\t"
 *   insn=0x00000000003EAB7C string=0x00000000003EABB8 "\t"
 *   insn=0x00000000003EAB80 string=0x00000000003EAB84 "*"
 *   insn=0x00000000003EAB84 string=0x00000000003EAB88 "\n"
 *   insn=0x00000000003EAB8C string=0x00000000003EAB90 ""
 *   insn=0x00000000003EAB90 string=0x00000000003EABC4 "?"
 *   insn=0x00000000003EAB94 string=0x00000000003EAB98 ")=G"
 *   insn=0x00000000003EAB98 string=0x00000000003EAB9C "!"
 *   insn=0x00000000003EABA0 string=0x00000000003EABA4 "\t"
 *   insn=0x00000000003EABA0 string=0x00000000003EABD8 "\t"
 *   insn=0x00000000003EABA4 string=0x00000000003EABA8 "*"
 *   insn=0x00000000003EABA8 string=0x00000000003EABAC "\n"
 *   insn=0x00000000003EABB4 string=0x00000000003EABE4 "?"
 *   insn=0x00000000003EABB8 string=0x00000000003EABBC "*"
 *   insn=0x00000000003EABBC string=0x00000000003EABC0 "\n"
 *   insn=0x00000000003EABD8 string=0x00000000003EABDC "*"
 *   insn=0x00000000003EABDC string=0x00000000003EABE0 "\n"
 *   insn=0x00000000003EABF8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EAC08 string=0x00000000003EAC0C "A"
 *   insn=0x00000000003EAC10 string=0x00000000003EAC14 "4"
 *   insn=0x00000000003EAC18 string=0x00000000003EAC1C ""
 *   insn=0x00000000003EAC28 string=0x00000000003EAC2C "\t@"
 *   insn=0x00000000003EAC38 string=0x00000000003EAC3C ""
 *   insn=0x00000000003EAC48 string=0x00000000003EAC4C "@"
 *   insn=0x00000000003EAC60 string=0x00000000003EAC64 ""
 *   insn=0x00000000003EAC68 string=0x00000000003EAC6C "!"
 *   insn=0x00000000003EAC70 string=0x00000000003EAC74 "\t@"
 *   insn=0x00000000003EAC80 string=0x00000000003EAC84 ""
 *   insn=0x00000000003EAC88 string=0x00000000003EAC8C "!"
 *   insn=0x00000000003EAC90 string=0x00000000003EAC94 "@"
 *   insn=0x00000000003EACAC string=0x00000000003EACB0 "J"
 *   insn=0x00000000003EACB4 string=0x00000000003EACB8 "(a"
 *   insn=0x00000000003EACC4 string=0x00000000003EACC8 "J=G"
 *   insn=0x00000000003EACC8 string=0x00000000003EACCC ")!"
 *   insn=0x00000000003EACD0 string=0x00000000003EACD4 "*"
 *   insn=0x00000000003EACD0 string=0x00000000003EACE8 "*"
 *   insn=0x00000000003EACD4 string=0x00000000003EACD8 "K"
 *   insn=0x00000000003EACD8 string=0x00000000003EACDC "+"
 *   insn=0x00000000003EACE4 string=0x00000000003EACF4 "_"
 *   insn=0x00000000003EACE8 string=0x00000000003EACEC "K"
 *   insn=0x00000000003EACEC string=0x00000000003EACF0 "+"
 *   insn=0x00000000003EAD14 string=0x00000000003EAD18 ")"
 *   insn=0x00000000003EAD28 string=0x00000000003EAD2C ")=G"
 *   insn=0x00000000003EAD2C string=0x00000000003EAD30 "!"
 *   insn=0x00000000003EAD30 string=0x00000000003EAD34 "i"
 *   insn=0x00000000003EAD34 string=0x00000000003EAD38 "\t"
 *   insn=0x00000000003EAD34 string=0x00000000003EAD60 "\t"
 *   insn=0x00000000003EAD38 string=0x00000000003EAD3C "*"
 *   insn=0x00000000003EAD3C string=0x00000000003EAD40 "\n"
 *   insn=0x00000000003EAD44 string=0x00000000003EAD48 "?"
 *   insn=0x00000000003EAD48 string=0x00000000003EAD4C "l"
 *   insn=0x00000000003EAD60 string=0x00000000003EAD64 "*"
 *   insn=0x00000000003EAD64 string=0x00000000003EAD68 "\n"
 *   insn=0x00000000003EAD68 string=0x00000000003EAD6C "?"
 *   insn=0x00000000003EAD6C string=0x00000000003EAD70 ""
 *   insn=0x00000000003EAD8C string=0x00000000003EAD90 "U"
 *   insn=0x00000000003EADAC string=0x00000000003EADB0 "`"
 *   insn=0x00000000003EADB4 string=0x00000000003EADB8 "<"
 *   insn=0x00000000003EADC0 string=0x00000000003EADC4 ")"
 *   insn=0x00000000003EADD8 string=0x00000000003EADDC "\n"
 *   insn=0x00000000003EADD8 string=0x00000000003EADE8 "t:@"
 *   insn=0x00000000003EADDC string=0x00000000003EADE0 "J"
 *   insn=0x00000000003EADE0 string=0x00000000003EADE4 "\n"
 *   insn=0x00000000003EADE8 string=0x00000000003EADEC "i"
 *   insn=0x00000000003EADEC string=0x00000000003EADF0 "4"
 *   insn=0x00000000003EADF4 string=0x00000000003EADF8 ""
 *   insn=0x00000000003EAE08 string=0x00000000003EAE0C "\t@"
 *   insn=0x00000000003EAE14 string=0x00000000003EAE18 ""
 *   insn=0x00000000003EAE28 string=0x00000000003EAE2C "@"
 *   insn=0x00000000003EAE44 string=0x00000000003EAE48 "!"
 *   insn=0x00000000003EAE48 string=0x00000000003EAEAC "\t-"
 *   insn=0x00000000003EAE60 string=0x00000000003EAE64 ")=G"
 *   insn=0x00000000003EAE64 string=0x00000000003EAE68 "!"
 *   insn=0x00000000003EAE6C string=0x00000000003EAE70 "\t"
 *   insn=0x00000000003EAE6C string=0x00000000003EAE84 "\t"
 *   insn=0x00000000003EAE70 string=0x00000000003EAE74 "*"
 *   insn=0x00000000003EAE74 string=0x00000000003EAE78 "\n"
 *   insn=0x00000000003EAE80 string=0x00000000003EAE90 "?"
 *   insn=0x00000000003EAE84 string=0x00000000003EAE88 "*"
 *   insn=0x00000000003EAE88 string=0x00000000003EAE8C "\n"
 *   insn=0x00000000003EAE98 string=0x00000000003EAE9C "B"
 *   insn=0x00000000003EAEB4 string=0x00000000003EAEB8 "J"
 *   insn=0x00000000003EAEBC string=0x00000000003EAEC0 "(a"
 *   insn=0x00000000003EAECC string=0x00000000003EAED0 "J=G"
 *   insn=0x00000000003EAED0 string=0x00000000003EAED4 ")!"
 *   insn=0x00000000003EAED8 string=0x00000000003EAEDC "*"
 *   insn=0x00000000003EAED8 string=0x00000000003EAF08 "*"
 *   insn=0x00000000003EAEDC string=0x00000000003EAEE0 "K"
 *   insn=0x00000000003EAEE0 string=0x00000000003EAEE4 "+"
 *   insn=0x00000000003EAEE8 string=0x00000000003EAEEC "_"
 *   insn=0x00000000003EAEF8 string=0x00000000003EAEFC "*"
 *   insn=0x00000000003EAF00 string=0x00000000003EAF04 "pZ"
 *   insn=0x00000000003EAF08 string=0x00000000003EAF0C "K"
 *   insn=0x00000000003EAF0C string=0x00000000003EAF10 "+"
 *   insn=0x00000000003EAF10 string=0x00000000003EAF14 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseViewController::ProductRequestCompletion(
        Caver::PurchaseViewController *a1,
        const void **a2,
        __int64 *a3)
{
  _QWORD *v5; // x0
  _QWORD *v6; // x1
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  void *v12; // x0
  Caver::GUIView *v13; // x1
  Caver::GUIAlertView *v14; // x21
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  void *v21; // x0
  unsigned int *v22; // x8
  int v23; // w9
  unsigned int *v24; // x8
  int v25; // w9
  _QWORD v26[2]; // [xsp+58h] [xbp-60h] BYREF
  _QWORD *v27; // [xsp+68h] [xbp-50h]
  _QWORD v28[2]; // [xsp+78h] [xbp-40h] BYREF

  v28[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v6 = (_QWORD *)*((_QWORD *)a1 + 12);
  if ( *(v5 - 3) == *(v6 - 3) && !memcmp(v5, v6, *(v5 - 3)) )
  {
    v7 = *a3;
    if ( *a3 )
    {
      v8 = a3[1];
      if ( v8 )
        ++*(_QWORD *)(v8 + 8);
      v9 = (_QWORD *)*((_QWORD *)a1 + 14);
      *((_QWORD *)a1 + 13) = v7;
      *((_QWORD *)a1 + 14) = v8;
      if ( v9 )
      {
        v10 = v9[1] - 1LL;
        v9[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
    }
    if ( !*((_QWORD *)a1 + 13) )
    {
      sub_566BB8((int)v28, "Ok");
      sub_566BB8((int)v26, "OOPS!");
      Caver::GameInterfaceBuilder::AlertView();
      v12 = (void *)(v26[0] - 24LL);
      if ( (__int64 *)(v26[0] - 24LL) != &qword_6FD2E0 )
      {
        v22 = (unsigned int *)(v26[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v23 = __ldaxr(v22);
          while ( __stlxr(v23 - 1, v22) );
        }
        else
        {
          v23 = (*v22)--;
        }
        if ( v23 <= 0 )
          operator delete(v12);
      }
      v13 = (Caver::GUIView *)*((_QWORD *)a1 + 3);
      v14 = (Caver::GUIAlertView *)v26[1];
      if ( !v13 )
      {
        (*(void (__fastcall **)(Caver::PurchaseViewController *))(*(_QWORD *)a1 + 24LL))(a1);
        v13 = (Caver::GUIView *)*((_QWORD *)a1 + 3);
      }
      v15 = (_QWORD *)*((_QWORD *)a1 + 4);
      if ( v15 )
        ++v15[1];
      Caver::GUIAlertView::PresentFromView(v14, v13);
      if ( v15 )
      {
        v16 = v15[1] - 1LL;
        v15[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          v17 = v15[2] - 1LL;
          v15[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        }
      }
      *((_BYTE *)a1 + 120) = 1;
      v18 = v27;
      if ( v27 )
      {
        v19 = v27[1] - 1LL;
        v27[1] = v19;
        if ( !v19 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          v20 = v18[2] - 1LL;
          v18[2] = v20;
          if ( !v20 )
            (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
        }
      }
      v21 = (void *)(v28[0] - 24LL);
      if ( (__int64 *)(v28[0] - 24LL) != &qword_6FD2E0 )
      {
        v24 = (unsigned int *)(v28[0] - 8LL);
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
          operator delete(v21);
      }
    }
    Caver::PurchaseViewController::UpdateView(a1);
  }
}

