/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EB8C4
 * Mangled: _ZN5Caver22PurchaseViewControllerD2Ev
 * Demangled: Caver::PurchaseViewController::~PurchaseViewController()
 *
 * Callers: 1
 *   0x00000000001F8170  Caver::PurchaseViewController::~PurchaseViewController()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8170  Caver::PurchaseViewController::~PurchaseViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003EBB20  boost::shared_ptr<Caver::PurchaseView>::shared_ptr<Caver::PurchaseView>(Caver::PurchaseView *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x00000000003EB8D4 string=0x00000000003EB8D8 "U"
 *   insn=0x00000000003EB8E8 string=0x00000000003EB8EC "t:@"
 *   insn=0x00000000003EB8EC string=0x00000000003EB8F0 ")A"
 *   insn=0x00000000003EB8F0 string=0x00000000003EB8F4 "A"
 *   insn=0x00000000003EB8F4 string=0x00000000003EB8F8 "h"
 *   insn=0x00000000003EB8F8 string=0x00000000003EB8FC "4"
 *   insn=0x00000000003EB8FC string=0x00000000003EB940 "h2@"
 *   insn=0x00000000003EB900 string=0x00000000003EB904 ""
 *   insn=0x00000000003EB910 string=0x00000000003EB914 "\t@"
 *   insn=0x00000000003EB920 string=0x00000000003EB924 ""
 *   insn=0x00000000003EB930 string=0x00000000003EB934 "@"
 *   insn=0x00000000003EB944 string=0x00000000003EB948 ")"
 *   insn=0x00000000003EB954 string=0x00000000003EB958 "t.@"
 *   insn=0x00000000003EB958 string=0x00000000003EB95C "4"
 *   insn=0x00000000003EB960 string=0x00000000003EB964 ""
 *   insn=0x00000000003EB970 string=0x00000000003EB974 "\t@"
 *   insn=0x00000000003EB980 string=0x00000000003EB984 ""
 *   insn=0x00000000003EB990 string=0x00000000003EB994 "@"
 *   insn=0x00000000003EB9A4 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003EB9B0 string=0x00000000003EB9B4 "!"
 *   insn=0x00000000003EB9B4 string=0x00000000003EBA18 ".*"
 *   insn=0x00000000003EB9CC string=0x00000000003EB9D0 ")=G"
 *   insn=0x00000000003EB9D0 string=0x00000000003EB9D4 "!"
 *   insn=0x00000000003EB9D8 string=0x00000000003EB9DC "\t"
 *   insn=0x00000000003EB9D8 string=0x00000000003EB9F0 "\t"
 *   insn=0x00000000003EB9DC string=0x00000000003EB9E0 "*"
 *   insn=0x00000000003EB9E0 string=0x00000000003EB9E4 "\n"
 *   insn=0x00000000003EB9EC string=0x00000000003EB9FC "?"
 *   insn=0x00000000003EB9F0 string=0x00000000003EB9F4 "*"
 *   insn=0x00000000003EB9F4 string=0x00000000003EB9F8 "\n"
 *   insn=0x00000000003EBA04 string=0x00000000003EBA08 "g"
 *   insn=0x00000000003EBA08 string=0x00000000003EBA0C "t.@"
 *   insn=0x00000000003EBA18 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EBA1C string=0x00000000003EBA20 "'"
 *   insn=0x00000000003EBA28 string=0x00000000003EBA2C "J"
 *   insn=0x00000000003EBA30 string=0x00000000003EBA34 "(a"
 *   insn=0x00000000003EBA3C string=0x00000000003EBA74 "u.@"
 *   insn=0x00000000003EBA40 string=0x00000000003EBA44 "J=G"
 *   insn=0x00000000003EBA44 string=0x00000000003EBA48 ")!"
 *   insn=0x00000000003EBA48 string=0x00000000003EBA4C "\n"
 *   insn=0x00000000003EBA4C string=0x00000000003EBA50 "*"
 *   insn=0x00000000003EBA4C string=0x00000000003EBACC "*"
 *   insn=0x00000000003EBA50 string=0x00000000003EBA54 "K"
 *   insn=0x00000000003EBA54 string=0x00000000003EBA58 "+"
 *   insn=0x00000000003EBA5C string=0x00000000003EBA60 "_"
 *   insn=0x00000000003EBA6C string=0x00000000003EBA70 "M"
 *   insn=0x00000000003EBA74 string=0x00000000003EBA78 "5"
 *   insn=0x00000000003EBA7C string=0x00000000003EBA80 ""
 *   insn=0x00000000003EBA8C string=0x00000000003EBA90 "\t@"
 *   insn=0x00000000003EBA9C string=0x00000000003EBAA0 ""
 *   insn=0x00000000003EBAAC string=0x00000000003EBAB0 "@"
 *   insn=0x00000000003EBACC string=0x00000000003EBAD0 "K"
 *   insn=0x00000000003EBAD0 string=0x00000000003EBAD4 "+"
 *   insn=0x00000000003EBAD4 string=0x00000000003EBAD8 "_"
 *   insn=0x00000000003EBAD8 string=0x00000000003EBADC "m"
 *   insn=0x00000000003EBAF8 string=0x00000000001F8170 "0'"
 *   insn=0x00000000003EBB08 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003EBB18 string=0x00000000003EBB1C "jW"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseViewController::~PurchaseViewController(Caver::PurchaseViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  void *v6; // x0
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 14);
  *(_QWORD *)this = off_6D0A60;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = *((_QWORD *)this + 12);
  v6 = (void *)(v5 - 24);
  if ( (__int64 *)(v5 - 24) == &qword_6FD2E0 )
    goto LABEL_6;
  v10 = (unsigned int *)(v5 - 8);
  if ( &pthread_create )
  {
    do
      v11 = __ldaxr(v10);
    while ( __stlxr(v11 - 1, v10) );
  }
  else
  {
    v11 = (*v10)--;
  }
  if ( v11 > 0 )
  {
LABEL_6:
    v7 = (_QWORD *)*((_QWORD *)this + 11);
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    operator delete(v6);
    v7 = (_QWORD *)*((_QWORD *)this + 11);
    if ( !v7 )
      goto LABEL_10;
  }
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
LABEL_10:
  Caver::GUIViewController::~GUIViewController(this);
}

