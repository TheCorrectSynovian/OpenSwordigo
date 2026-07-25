/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000346870
 * Mangled: _ZN5Caver22GameMenuViewController40PurchaseViewControllerDidPurchaseProductEPNS_22PurchaseViewControllerE
 * Demangled: Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callers: 1
 *   0x00000000001F9440  Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callees: 10
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *   0x00000000001F9440  Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 80
 *   insn=0x0000000000346888 string=0x000000000034688C "W"
 *   insn=0x0000000000346898 string=0x000000000034689C "!"
 *   insn=0x00000000003468A0 string=0x00000000003468A4 "h"
 *   insn=0x00000000003468A4 string=0x00000000003468A8 ""
 *   insn=0x00000000003468A8 string=0x00000000003468AC "h"
 *   insn=0x00000000003468B4 string=0x00000000003468B8 "A"
 *   insn=0x00000000003468B8 string=0x000000000058E508 "compass"
 *   insn=0x00000000003468D8 string=0x00000000003468DC "_"
 *   insn=0x00000000003468E4 string=0x00000000003468E8 "*"
 *   insn=0x00000000003468E8 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003468FC string=0x0000000000346900 "9"
 *   insn=0x0000000000346914 string=0x0000000000346918 "a"
 *   insn=0x0000000000346918 string=0x000000000034691C "3"
 *   insn=0x000000000034691C string=0x0000000000346920 "h"
 *   insn=0x0000000000346920 string=0x0000000000346924 ""
 *   insn=0x0000000000346924 string=0x0000000000346928 "h"
 *   insn=0x000000000034692C string=0x0000000000346930 "h"
 *   insn=0x0000000000346934 string=0x0000000000346938 "\t@"
 *   insn=0x000000000034693C string=0x0000000000346940 "h\n@"
 *   insn=0x0000000000346940 string=0x0000000000346944 ""
 *   insn=0x0000000000346944 string=0x0000000000346948 "h\n"
 *   insn=0x000000000034694C string=0x0000000000346950 "h"
 *   insn=0x0000000000346954 string=0x0000000000346958 "@"
 *   insn=0x0000000000346968 string=0x000000000034696C " E9("
 *   insn=0x000000000034696C string=0x0000000000346970 "("
 *   insn=0x0000000000346974 string=0x0000000000346978 " "
 *   insn=0x0000000000346978 string=0x000000000034697C "="
 *   insn=0x000000000034697C string=0x00000000001F6E70 "0'"
 *   insn=0x0000000000346988 string=0x000000000034698C "Q@"
 *   insn=0x00000000003469A0 string=0x0000000000346A50 " "
 *   insn=0x00000000003469C0 string=0x00000000003469C4 ")=G"
 *   insn=0x00000000003469CC string=0x00000000003469D0 "\t"
 *   insn=0x00000000003469CC string=0x0000000000346A08 "\t"
 *   insn=0x00000000003469D0 string=0x00000000003469D4 "*"
 *   insn=0x00000000003469D4 string=0x00000000003469D8 "\n"
 *   insn=0x00000000003469DC string=0x00000000003469E0 ""
 *   insn=0x00000000003469E0 string=0x0000000000346A14 "?"
 *   insn=0x00000000003469E4 string=0x00000000003469E8 ")=G"
 *   insn=0x00000000003469E8 string=0x00000000003469EC "!"
 *   insn=0x00000000003469F0 string=0x00000000003469F4 "\t"
 *   insn=0x00000000003469F0 string=0x0000000000346A2C "\t"
 *   insn=0x00000000003469F4 string=0x00000000003469F8 "*"
 *   insn=0x00000000003469F8 string=0x00000000003469FC "\n"
 *   insn=0x0000000000346A00 string=0x0000000000346A04 ""
 *   insn=0x0000000000346A04 string=0x0000000000346A38 "?"
 *   insn=0x0000000000346A08 string=0x0000000000346A0C "*"
 *   insn=0x0000000000346A0C string=0x0000000000346A10 "\n"
 *   insn=0x0000000000346A20 string=0x0000000000346A24 "`"
 *   insn=0x0000000000346A2C string=0x0000000000346A30 "*"
 *   insn=0x0000000000346A30 string=0x0000000000346A34 "\n"
 *   insn=0x0000000000346A40 string=0x0000000000346A44 "X"
 *   insn=0x0000000000346A50 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000346A58 string=0x0000000000346A5C "J"
 *   insn=0x0000000000346A60 string=0x0000000000346A64 "(a"
 *   insn=0x0000000000346A6C string=0x0000000000346AC8 "3"
 *   insn=0x0000000000346A70 string=0x0000000000346A74 "J=G"
 *   insn=0x0000000000346A74 string=0x0000000000346A78 ")!"
 *   insn=0x0000000000346A7C string=0x0000000000346A80 "*"
 *   insn=0x0000000000346A7C string=0x0000000000346AAC "*"
 *   insn=0x0000000000346A80 string=0x0000000000346A84 "K"
 *   insn=0x0000000000346A84 string=0x0000000000346A88 "+"
 *   insn=0x0000000000346A8C string=0x0000000000346A90 "_"
 *   insn=0x0000000000346A9C string=0x0000000000346AA0 "A"
 *   insn=0x0000000000346AA0 string=0x0000000000346AA4 "S"
 *   insn=0x0000000000346AA4 string=0x0000000000346ACC "h"
 *   insn=0x0000000000346AAC string=0x0000000000346AB0 "K"
 *   insn=0x0000000000346AB0 string=0x0000000000346AB4 "+"
 *   insn=0x0000000000346AB4 string=0x0000000000346AB8 "_"
 *   insn=0x0000000000346ACC string=0x0000000000346AD0 ""
 *   insn=0x0000000000346AD0 string=0x0000000000346AD4 "h"
 *   insn=0x0000000000346AD8 string=0x0000000000346ADC "h"
 *   insn=0x0000000000346ADC string=0x0000000000346AE0 "\t@"
 *   insn=0x0000000000346AE8 string=0x0000000000346AEC "h\n@"
 *   insn=0x0000000000346AEC string=0x0000000000346AF0 ""
 *   insn=0x0000000000346AF0 string=0x0000000000346AF4 "h\n"
 *   insn=0x0000000000346AF8 string=0x0000000000346AFC "h"
 *   insn=0x0000000000346AFC string=0x0000000000346B00 "@"
 *   insn=0x0000000000346B0C string=0x0000000000346B10 "m"
 *   insn=0x0000000000346B18 string=0x0000000000346B1C "I"
 *   insn=0x0000000000346B1C string=0x00000000001F9440 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(
        Caver::GameMenuViewController *this,
        Caver::PurchaseViewController *a2)
{
  __int64 v3; // x1
  _QWORD *v4; // x19
  char *v5; // t2
  _QWORD *v6; // x22
  size_t v7; // x2
  __int64 *v8; // x21
  _BOOL4 v9; // w24
  char *v10; // x0
  __int64 v11; // x8
  __int64 v12; // x8
  Caver::GUISwitch *v13; // x0
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  _QWORD *v18; // [xsp+0h] [xbp-60h] BYREF
  const void *v19[3]; // [xsp+8h] [xbp-58h] BYREF

  v19[2] = *(const void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (char *)a2 + 104;
  v3 = *((_QWORD *)a2 + 13);
  v4 = (_QWORD *)*((_QWORD *)v5 + 1);
  if ( v4 )
    ++v4[1];
  sub_56A528(v19, v3);
  sub_566BB8((int)&v18, "compass");
  v6 = v18;
  v7 = *((_QWORD *)v19[0] - 3);
  v8 = v18 - 3;
  v9 = v7 == *(v18 - 3) && memcmp(v19[0], v18, v7) == 0;
  if ( v8 != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v6 - 1);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v8);
  }
  v10 = (char *)v19[0] - 24;
  if ( (char *)v19[0] - 24 == (char *)&qword_6FD2E0 )
    goto LABEL_8;
  v16 = (unsigned int *)((char *)v19[0] - 8);
  if ( &pthread_create )
  {
    do
      v17 = __ldaxr(v16);
    while ( __stlxr(v17 - 1, v16) );
  }
  else
  {
    v17 = (*v16)--;
  }
  if ( v17 > 0 )
  {
LABEL_8:
    if ( !v4 )
      goto LABEL_12;
  }
  else
  {
    operator delete(v10);
    if ( !v4 )
      goto LABEL_12;
  }
  v11 = v4[1] - 1LL;
  v4[1] = v11;
  if ( !v11 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    v12 = v4[2] - 1LL;
    v4[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  }
LABEL_12:
  if ( v9 )
  {
    v13 = *(Caver::GUISwitch **)(*((_QWORD *)this + 21) + 264LL);
    if ( !*((_BYTE *)v13 + 328) )
    {
      *((_BYTE *)v13 + 328) = 1;
      Caver::GUISwitch::UpdateFrameTexture(v13);
      (*(void (__fastcall **)(Caver::GameMenuViewController *, _QWORD))(*(_QWORD *)this + 160LL))(
        this,
        *((_QWORD *)this + 21));
    }
  }
}

