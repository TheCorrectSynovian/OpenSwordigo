/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EB75C
 * Mangled: _ZN5Caver22PurchaseViewController21HandlePurchaseSuccessEv
 * Demangled: Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callers: 2
 *   0x00000000001F9C20  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *   0x00000000003EB2F4  Caver::PurchaseViewController::PurchaseCompletion(std::string const&,bool,std::string const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x0000000000201AF0  Caver::StoreController::UnlockProduct(std::string const&)
 *   0x0000000000203BD0  Caver::PurchaseView::AnimateOut(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x00000000003EB76C string=0x00000000003EB770 "U"
 *   insn=0x00000000003EB780 string=0x00000000003EB784 "a6@"
 *   insn=0x00000000003EB78C string=0x00000000003EB790 "f"
 *   insn=0x00000000003EB7A4 string=0x00000000003EB7A8 ")"
 *   insn=0x00000000003EB7B4 string=0x00000000003EB7B8 "`&@"
 *   insn=0x00000000003EB7BC string=0x00000000003EB7C0 ""
 *   insn=0x00000000003EB7BC string=0x00000000003EB7D0 "`*@"
 *   insn=0x00000000003EB7C4 string=0x00000000003EB7C8 ""
 *   insn=0x00000000003EB7D4 string=0x00000000003EB7D8 "`"
 *   insn=0x00000000003EB7D8 string=0x00000000003EB7DC "."
 *   insn=0x00000000003EB7DC string=0x00000000001F7010 "0'"
 *   insn=0x00000000003EB7E8 string=0x00000000003EB7EC "!"
 *   insn=0x00000000003EB804 string=0x00000000003EB808 ")=G"
 *   insn=0x00000000003EB808 string=0x00000000003EB80C "!"
 *   insn=0x00000000003EB810 string=0x00000000003EB814 "\t"
 *   insn=0x00000000003EB810 string=0x00000000003EB828 "\t"
 *   insn=0x00000000003EB814 string=0x00000000003EB818 "*"
 *   insn=0x00000000003EB818 string=0x00000000003EB81C "\n"
 *   insn=0x00000000003EB824 string=0x00000000003EB834 "?"
 *   insn=0x00000000003EB828 string=0x00000000003EB82C "*"
 *   insn=0x00000000003EB82C string=0x00000000003EB830 "\n"
 *   insn=0x00000000003EB840 string=0x00000000003EB844 "`&@"
 *   insn=0x00000000003EB850 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EB858 string=0x00000000003EB85C "J"
 *   insn=0x00000000003EB860 string=0x00000000003EB864 "(a"
 *   insn=0x00000000003EB870 string=0x00000000003EB874 "J=G"
 *   insn=0x00000000003EB874 string=0x00000000003EB878 ")!"
 *   insn=0x00000000003EB87C string=0x00000000003EB880 "*"
 *   insn=0x00000000003EB87C string=0x00000000003EB8AC "*"
 *   insn=0x00000000003EB880 string=0x00000000003EB884 "K"
 *   insn=0x00000000003EB884 string=0x00000000003EB888 "+"
 *   insn=0x00000000003EB88C string=0x00000000003EB890 "_"
 *   insn=0x00000000003EB8A4 string=0x00000000003EB8A8 "X"
 *   insn=0x00000000003EB8AC string=0x00000000003EB8B0 "K"
 *   insn=0x00000000003EB8B0 string=0x00000000003EB8B4 "+"
 *   insn=0x00000000003EB8B4 string=0x00000000003EB8B8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseViewController::HandlePurchaseSuccess(Caver::GUIViewController **this)
{
  void *v2; // x0
  Caver::GUIViewController *v3; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-38h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::StoreController::SharedController((Caver::StoreController *)this);
  sub_56A528(v7, this[13]);
  Caver::StoreController::UnlockProduct();
  v2 = (void *)(v7[0] - 24LL);
  if ( (__int64 *)(v7[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v7[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
    {
      operator delete(v2);
      v3 = this[9];
      if ( !v3 )
        goto LABEL_4;
      goto LABEL_3;
    }
  }
  v3 = this[9];
  if ( v3 )
LABEL_3:
    (**(void (__fastcall ***)(Caver::GUIViewController *, Caver::GUIViewController **))v3)(v3, this);
LABEL_4:
  Caver::PurchaseView::AnimateOut(this[10]);
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

