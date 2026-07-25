/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000037181C
 * Mangled: _ZN5Caver20PortalViewController37StoreViewControllerDidPurchaseProductEPNS_19StoreViewControllerERKSs
 * Demangled: Caver::PortalViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9700  Caver::PortalViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *
 * Callees: 8
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *   0x00000000001F9700  Caver::PortalViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 32
 *   insn=0x0000000000371830 string=0x0000000000371834 "V"
 *   insn=0x0000000000371848 string=0x000000000058E508 "compass"
 *   insn=0x000000000037186C string=0x0000000000371870 "_"
 *   insn=0x0000000000371878 string=0x000000000037187C "E"
 *   insn=0x000000000037187C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000371890 string=0x0000000000371894 ""
 *   insn=0x0000000000371898 string=0x000000000037189C "A"
 *   insn=0x00000000003718A0 string=0x00000000003718A4 "hB@"
 *   insn=0x00000000003718A4 string=0x00000000003718A8 ""
 *   insn=0x00000000003718AC string=0x00000000003718B0 " E9H"
 *   insn=0x00000000003718B0 string=0x00000000003718B4 "H"
 *   insn=0x00000000003718B8 string=0x00000000003718BC " "
 *   insn=0x00000000003718BC string=0x00000000003718C0 "l"
 *   insn=0x00000000003718C0 string=0x00000000003718C4 "h"
 *   insn=0x00000000003718C0 string=0x00000000001F6E70 "0'"
 *   insn=0x00000000003718C4 string=0x00000000003718C8 "iB@"
 *   insn=0x00000000003718CC string=0x00000000003718D0 "9@"
 *   insn=0x00000000003718D0 string=0x00000000003718D4 "!"
 *   insn=0x00000000003718E4 string=0x00000000003718E8 "A"
 *   insn=0x00000000003718E8 string=0x0000000000371950 "`"
 *   insn=0x0000000000371904 string=0x0000000000371908 ")=G"
 *   insn=0x0000000000371910 string=0x0000000000371914 "\t"
 *   insn=0x0000000000371910 string=0x0000000000371928 "\t"
 *   insn=0x0000000000371914 string=0x0000000000371918 "*"
 *   insn=0x0000000000371918 string=0x000000000037191C "\n"
 *   insn=0x0000000000371924 string=0x0000000000371934 "?"
 *   insn=0x0000000000371928 string=0x000000000037192C "*"
 *   insn=0x000000000037192C string=0x0000000000371930 "\n"
 *   insn=0x0000000000371934 string=0x0000000000371938 "L"
 *   insn=0x0000000000371950 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000371958 string=0x000000000037195C "i"
 *   insn=0x000000000037195C string=0x00000000001F9700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalViewController::StoreViewControllerDidPurchaseProduct(
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
  v10 = *(Caver::GUISwitch **)(*(_QWORD *)(a1[16] + 368LL) + 264LL);
  if ( !*((_BYTE *)v10 + 328) )
  {
    *((_BYTE *)v10 + 328) = 1;
    Caver::GUISwitch::UpdateFrameTexture(v10);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 112LL))(a1, *(_QWORD *)(a1[16] + 368LL));
  }
}

