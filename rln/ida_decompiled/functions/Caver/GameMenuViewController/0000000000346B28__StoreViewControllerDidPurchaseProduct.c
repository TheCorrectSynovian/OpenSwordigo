/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346B28
 * Mangled: _ZN5Caver22GameMenuViewController37StoreViewControllerDidPurchaseProductEPNS_19StoreViewControllerERKSs
 * Demangled: Caver::GameMenuViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9690  Caver::GameMenuViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *
 * Callees: 8
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *   0x00000000001F9690  Caver::GameMenuViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x0000000000346B3C string=0x0000000000346B40 "V"
 *   insn=0x0000000000346B50 string=0x0000000000346B54 "A"
 *   insn=0x0000000000346B54 string=0x000000000058E508 "compass"
 *   insn=0x0000000000346B78 string=0x0000000000346B7C "_"
 *   insn=0x0000000000346B88 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000346B9C string=0x0000000000346BA0 ""
 *   insn=0x0000000000346BAC string=0x0000000000346BB0 "hV@"
 *   insn=0x0000000000346BB4 string=0x0000000000346BB8 " E9("
 *   insn=0x0000000000346BB8 string=0x0000000000346BBC "("
 *   insn=0x0000000000346BC0 string=0x0000000000346BC4 " "
 *   insn=0x0000000000346BC8 string=0x0000000000346BCC "h"
 *   insn=0x0000000000346BC8 string=0x00000000001F6E70 "0'"
 *   insn=0x0000000000346BCC string=0x0000000000346BD0 "aV@"
 *   insn=0x0000000000346BD4 string=0x0000000000346BD8 "Q@"
 *   insn=0x0000000000346BE8 string=0x0000000000346BEC "A"
 *   insn=0x0000000000346C08 string=0x0000000000346C0C ")=G"
 *   insn=0x0000000000346C14 string=0x0000000000346C18 "\t"
 *   insn=0x0000000000346C14 string=0x0000000000346C2C "\t"
 *   insn=0x0000000000346C18 string=0x0000000000346C1C "*"
 *   insn=0x0000000000346C1C string=0x0000000000346C20 "\n"
 *   insn=0x0000000000346C28 string=0x0000000000346C38 "?"
 *   insn=0x0000000000346C2C string=0x0000000000346C30 "*"
 *   insn=0x0000000000346C30 string=0x0000000000346C34 "\n"
 *   insn=0x0000000000346C48 string=0x0000000000346C4C "7"
 *   insn=0x0000000000346C54 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000346C60 string=0x00000000001F9690 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameMenuViewController::StoreViewControllerDidPurchaseProduct(
        _QWORD *a1,
        __int64 a2,
        const void **a3)
{
  char *v5; // x21
  const void *v6; // x0
  size_t v7; // x2
  __int64 *v8; // x20
  _BOOL4 v9; // w23
  Caver::GUISwitch *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9
  void *v13[3]; // [xsp+8h] [xbp-48h] BYREF

  v13[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v13, "compass");
  v5 = (char *)v13[0];
  v6 = *a3;
  v7 = *((_QWORD *)*a3 - 3);
  v8 = (__int64 *)((char *)v13[0] - 24);
  v9 = v7 == *((_QWORD *)v13[0] - 3) && memcmp(v6, v13[0], v7) == 0;
  if ( v8 == &qword_6FD2E0 )
    goto LABEL_5;
  v11 = (unsigned int *)(v5 - 8);
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
  if ( v12 > 0 )
  {
LABEL_5:
    if ( !v9 )
      return;
  }
  else
  {
    operator delete(v8);
    if ( !v9 )
      return;
  }
  v10 = *(Caver::GUISwitch **)(a1[21] + 264LL);
  if ( !*((_BYTE *)v10 + 328) )
  {
    *((_BYTE *)v10 + 328) = 1;
    Caver::GUISwitch::UpdateFrameTexture(v10);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 160LL))(a1, a1[21]);
  }
}

