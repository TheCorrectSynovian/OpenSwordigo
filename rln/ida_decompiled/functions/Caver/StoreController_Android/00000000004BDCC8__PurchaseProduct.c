/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BDCC8
 * Mangled: _ZN5Caver23StoreController_Android15PurchaseProductERKN5boost10shared_ptrINS_12StoreProductEEENS_12TargetActionIFvRKSsbS9_EEE
 * Demangled: Caver::StoreController_Android::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>)
 *
 * Callers: 1
 *   0x00000000004BD890  std::map<std::string,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)>>>>::operator[](std::string const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72E0  Caver::AndroidPurchaseStoreProduct(std::string const&)
 *   0x00000000001F96D0  boost::function<void ()(std::string const&,bool,std::string const&)>::operator=(boost::function<void ()(std::string const&,bool,std::string const&)> const&)
 *   0x0000000000201B70  std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>>>::operator[](std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x00000000004BDCDC string=0x00000000004BDCE0 "V"
 *   insn=0x00000000004BDCF4 string=0x00000000004BDCF8 "a"
 *   insn=0x00000000004BDCFC string=0x00000000004BDD00 "\n"
 *   insn=0x00000000004BDD30 string=0x00000000004BDD34 ""
 *   insn=0x00000000004BDD3C string=0x00000000004BDD40 "@"
 *   insn=0x00000000004BDD40 string=0x00000000004BDD44 ""
 *   insn=0x00000000004BDD44 string=0x00000000004BDD48 ""
 *   insn=0x00000000004BDD4C string=0x00000000004BDD50 ""
 *   insn=0x00000000004BDD50 string=0x00000000004BDD54 "@"
 *   insn=0x00000000004BDD64 string=0x00000000004BDD68 "Z"
 *   insn=0x00000000004BDD68 string=0x00000000001F96D0 "0'"
 *   insn=0x00000000004BDD6C string=0x00000000004BDD70 "T"
 *   insn=0x00000000004BDD80 string=0x00000000004BDD84 "a"
 *   insn=0x00000000004BDD80 string=0x00000000004BDDD0 ")"
 *   insn=0x00000000004BDD90 string=0x00000000004BDD94 "S"
 *   insn=0x00000000004BDD94 string=0x00000000001F72E0 "0'"
 *   insn=0x00000000004BDDA4 string=0x00000000004BDDF4 ")"
 *   insn=0x00000000004BDDB0 string=0x00000000004BDDB4 "!"
 *   insn=0x00000000004BDDD0 string=0x00000000004BDDD4 ")=G"
 *   insn=0x00000000004BDDD4 string=0x00000000004BDDD8 "!"
 *   insn=0x00000000004BDDDC string=0x00000000004BDDE0 "\t"
 *   insn=0x00000000004BDDDC string=0x00000000004BDE18 "\t"
 *   insn=0x00000000004BDDE0 string=0x00000000004BDDE4 "*"
 *   insn=0x00000000004BDDE4 string=0x00000000004BDDE8 "\n"
 *   insn=0x00000000004BDDEC string=0x00000000004BDDF0 ""
 *   insn=0x00000000004BDDF0 string=0x00000000004BDE24 "?"
 *   insn=0x00000000004BDDF4 string=0x00000000004BDDF8 ")=G"
 *   insn=0x00000000004BDDF8 string=0x00000000004BDDFC "!"
 *   insn=0x00000000004BDE00 string=0x00000000004BDE04 "\t"
 *   insn=0x00000000004BDE00 string=0x00000000004BDE38 "\t"
 *   insn=0x00000000004BDE04 string=0x00000000004BDE08 "*"
 *   insn=0x00000000004BDE08 string=0x00000000004BDE0C "\n"
 *   insn=0x00000000004BDE14 string=0x00000000004BDE44 "?"
 *   insn=0x00000000004BDE18 string=0x00000000004BDE1C "*"
 *   insn=0x00000000004BDE1C string=0x00000000004BDE20 "\n"
 *   insn=0x00000000004BDE2C string=0x00000000004BDE30 "]"
 *   insn=0x00000000004BDE38 string=0x00000000004BDE3C "*"
 *   insn=0x00000000004BDE3C string=0x00000000004BDE40 "\n"
 *   insn=0x00000000004BDE4C string=0x00000000004BDE50 "U"
 *   insn=0x00000000004BDE58 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004BDE60 string=0x00000000004BDE64 "(a"
 *   insn=0x00000000004BDE6C string=0x00000000004BDE70 "*"
 *   insn=0x00000000004BDE70 string=0x00000000004BDE74 "J=G"
 *   insn=0x00000000004BDE74 string=0x00000000004BDE78 ")!"
 *   insn=0x00000000004BDE7C string=0x00000000004BDE80 "*"
 *   insn=0x00000000004BDE7C string=0x00000000004BDEEC "*"
 *   insn=0x00000000004BDE80 string=0x00000000004BDE84 "K"
 *   insn=0x00000000004BDE84 string=0x00000000004BDE88 "+"
 *   insn=0x00000000004BDE90 string=0x00000000004BDED0 "_"
 *   insn=0x00000000004BDE94 string=0x00000000004BDE98 "J"
 *   insn=0x00000000004BDE98 string=0x00000000004BDE9C "J"
 *   insn=0x00000000004BDEA0 string=0x00000000004BDEA4 "(a"
 *   insn=0x00000000004BDEAC string=0x00000000004BDEB0 "*"
 *   insn=0x00000000004BDEB0 string=0x00000000004BDEB4 "J=G"
 *   insn=0x00000000004BDEB4 string=0x00000000004BDEB8 ")!"
 *   insn=0x00000000004BDEBC string=0x00000000004BDEC0 "*"
 *   insn=0x00000000004BDEC0 string=0x00000000004BDEC4 "K"
 *   insn=0x00000000004BDEC4 string=0x00000000004BDEC8 "+"
 *   insn=0x00000000004BDEDC string=0x00000000004BDEE0 "1"
 *   insn=0x00000000004BDEE4 string=0x00000000004BDEE8 "w"
 *   insn=0x00000000004BDEEC string=0x00000000004BDEF0 "K"
 *   insn=0x00000000004BDEF0 string=0x00000000004BDEF4 "+"
 *   insn=0x00000000004BDEF4 string=0x00000000004BDEF8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController_Android::PurchaseProduct(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // x21
  _QWORD *v6; // x0
  _QWORD *v7; // x23
  __int64 v8; // x8
  void *v9; // x0
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  _QWORD v15[3]; // [xsp+8h] [xbp-48h] BYREF

  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v15, *a2);
  v5 = (_QWORD *)std::map<std::string,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>>::operator[]();
  v6 = (_QWORD *)v5[1];
  *v5 = *a3;
  v7 = (_QWORD *)a3[1];
  if ( v7 != v6 )
  {
    if ( v7 )
      ++v7[2];
    if ( v6 )
    {
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
    v5[1] = v7;
  }
  boost::function<void ()(std::string const&,bool,std::string const&)>::operator=();
  v9 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v15[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v9);
  }
  sub_56A528(v15, *a2);
  Caver::AndroidPurchaseStoreProduct();
  v10 = (void *)(v15[0] - 24LL);
  if ( (__int64 *)(v15[0] - 24LL) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v15[0] - 8LL);
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
      operator delete(v10);
  }
}

