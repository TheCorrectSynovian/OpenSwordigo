/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003662D0
 * Mangled: _ZN5Caver27GuidePurchaseViewController19SetBuyButtonEnabledEb
 * Demangled: Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001FF560  Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *
 * Callees: 9
 *   0x00000000001F4210  Caver::GuidePurchaseView::UpdateBuyButtonSize(void)
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 75
 *   insn=0x00000000003662E0 string=0x00000000003662E4 "T"
 *   insn=0x00000000003662F4 string=0x00000000003662F8 "hB@"
 *   insn=0x00000000003662F4 string=0x00000000003663C8 "h"
 *   insn=0x00000000003662F8 string=0x00000000003662FC "h"
 *   insn=0x000000000036630C string=0x0000000000366310 "(x"
 *   insn=0x0000000000366314 string=0x0000000000366318 " "
 *   insn=0x000000000036631C string=0x0000000000366320 ""
 *   insn=0x000000000036631C string=0x0000000000366334 ""
 *   insn=0x0000000000366320 string=0x0000000000366324 ""
 *   insn=0x0000000000366340 string=0x0000000000366344 "h2@"
 *   insn=0x0000000000366340 string=0x00000000001F5960 "P'"
 *   insn=0x0000000000366344 string=0x0000000000366348 "iB@"
 *   insn=0x0000000000366350 string=0x0000000000366354 "!!"
 *   insn=0x0000000000366354 string=0x0000000000366358 "t"
 *   insn=0x0000000000366358 string=0x000000000036635C "@"
 *   insn=0x000000000036635C string=0x000000000058F698 "Buy - "
 *   insn=0x0000000000366368 string=0x000000000036636C "1"
 *   insn=0x0000000000366378 string=0x00000000001FC220 "0'"
 *   insn=0x0000000000366380 string=0x0000000000366384 "s"
 *   insn=0x000000000036638C string=0x0000000000366390 "A"
 *   insn=0x000000000036639C string=0x00000000003663A0 "`"
 *   insn=0x00000000003663A4 string=0x00000000003663A8 ")=G"
 *   insn=0x00000000003663A8 string=0x00000000003663AC "!"
 *   insn=0x00000000003663AC string=0x00000000003663B0 "i"
 *   insn=0x00000000003663B0 string=0x00000000003663B4 "\t"
 *   insn=0x00000000003663B0 string=0x000000000036645C "\t"
 *   insn=0x00000000003663B4 string=0x00000000003663B8 "*"
 *   insn=0x00000000003663B8 string=0x00000000003663BC "\n"
 *   insn=0x00000000003663C0 string=0x00000000003663C4 ")"
 *   insn=0x00000000003663C4 string=0x0000000000366468 "?"
 *   insn=0x00000000003663D0 string=0x00000000003663D4 "("
 *   insn=0x00000000003663D8 string=0x00000000003663DC " "
 *   insn=0x00000000003663E0 string=0x00000000003663E4 ""
 *   insn=0x00000000003663E4 string=0x00000000003663E8 ""
 *   insn=0x00000000003663EC string=0x00000000003663F0 "h"
 *   insn=0x0000000000366400 string=0x0000000000366404 "W="
 *   insn=0x0000000000366410 string=0x00000000001F4210 "P'"
 *   insn=0x0000000000366438 string=0x000000000036643C ")=G"
 *   insn=0x000000000036643C string=0x0000000000366440 "!"
 *   insn=0x0000000000366444 string=0x0000000000366448 "\t"
 *   insn=0x0000000000366444 string=0x000000000036647C "\t"
 *   insn=0x0000000000366448 string=0x000000000036644C "*"
 *   insn=0x000000000036644C string=0x0000000000366450 "\n"
 *   insn=0x0000000000366458 string=0x0000000000366488 "?"
 *   insn=0x000000000036645C string=0x0000000000366460 "*"
 *   insn=0x0000000000366460 string=0x0000000000366464 "\n"
 *   insn=0x000000000036647C string=0x0000000000366480 "*"
 *   insn=0x0000000000366480 string=0x0000000000366484 "\n"
 *   insn=0x0000000000366488 string=0x000000000036648C "L"
 *   insn=0x000000000036649C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003664A4 string=0x00000000003664A8 "J"
 *   insn=0x00000000003664AC string=0x00000000003664B0 "(a"
 *   insn=0x00000000003664BC string=0x00000000003664C0 "J=G"
 *   insn=0x00000000003664C0 string=0x00000000003664C4 ")!"
 *   insn=0x00000000003664C8 string=0x00000000003664CC "*"
 *   insn=0x00000000003664C8 string=0x00000000003664E0 "*"
 *   insn=0x00000000003664CC string=0x00000000003664D0 "K"
 *   insn=0x00000000003664D0 string=0x00000000003664D4 "+"
 *   insn=0x00000000003664DC string=0x00000000003664EC "_"
 *   insn=0x00000000003664E0 string=0x00000000003664E4 "K"
 *   insn=0x00000000003664E4 string=0x00000000003664E8 "+"
 *   insn=0x000000000036650C string=0x0000000000366510 ")"
 *   insn=0x0000000000366520 string=0x0000000000366524 ")=G"
 *   insn=0x0000000000366524 string=0x0000000000366528 "!"
 *   insn=0x0000000000366528 string=0x000000000036652C "i"
 *   insn=0x000000000036652C string=0x0000000000366530 "\t"
 *   insn=0x000000000036652C string=0x0000000000366558 "\t"
 *   insn=0x0000000000366530 string=0x0000000000366534 "*"
 *   insn=0x0000000000366534 string=0x0000000000366538 "\n"
 *   insn=0x000000000036653C string=0x0000000000366540 "?"
 *   insn=0x0000000000366540 string=0x0000000000366544 "l"
 *   insn=0x0000000000366558 string=0x000000000036655C "*"
 *   insn=0x000000000036655C string=0x0000000000366560 "\n"
 *   insn=0x0000000000366560 string=0x0000000000366564 "?"
 *   insn=0x0000000000366564 string=0x0000000000366568 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuidePurchaseViewController::SetBuyButtonEnabled(
        Caver::GuidePurchaseViewController *this,
        char a2)
{
  Caver::GuidePurchaseView **v3; // x21
  _DWORD *v4; // x0
  int v5; // w1
  __int64 v6; // x9
  Caver::GUIButton *v7; // x19
  void *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  Caver::GuidePurchaseView **v12; // x19
  _DWORD *v13; // x0
  int v14; // w1
  unsigned int *v15; // x8
  int v16; // w9
  __int64 v17; // [xsp+8h] [xbp-48h] BYREF
  __int64 v18; // [xsp+10h] [xbp-40h] BYREF
  int v19; // [xsp+1Ch] [xbp-34h]
  __int64 v20; // [xsp+28h] [xbp-28h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a2 & 1) != 0 && *((_QWORD *)this + 16) )
  {
    v3 = (Caver::GuidePurchaseView **)((char *)this + 96);
    v4 = *(_DWORD **)(*((_QWORD *)this + 12) + 304LL);
    v5 = v4[72];
    v4[72] = v5 & 0xFFFFFFFD;
    if ( (v5 & 0xFFFFFFFD) != v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 304LL))(v4);
    v19 = -1;
    Caver::GUIButton::SetTintColor();
    v6 = *((_QWORD *)this + 16);
    v7 = *(Caver::GUIButton **)(*((_QWORD *)this + 12) + 304LL);
    sub_56A528(&v17, v6 + 8);
    ((void (__fastcall *)(__int64 *__return_ptr, const char *, __int64 *))loc_25A030)(&v18, "Buy - ", &v17);
    Caver::GUIButton::SetTitle(v7);
    v8 = (void *)(v18 - 24);
    if ( (__int64 *)(v18 - 24) != &qword_6FD2E0 )
    {
      v15 = (unsigned int *)(v18 - 8);
      if ( &pthread_create )
      {
        do
          v16 = __ldaxr(v15);
        while ( __stlxr(v16 - 1, v15) );
      }
      else
      {
        v16 = (*v15)--;
      }
      if ( v16 <= 0 )
        operator delete(v8);
    }
    v9 = (void *)(v17 - 24);
    if ( (__int64 *)(v17 - 24) != &qword_6FD2E0 )
    {
      v10 = (unsigned int *)(v17 - 8);
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
      if ( v11 <= 0 )
        operator delete(v9);
    }
  }
  else
  {
    v12 = (Caver::GuidePurchaseView **)((char *)this + 96);
    v13 = *(_DWORD **)(*((_QWORD *)this + 12) + 304LL);
    v14 = v13[72];
    v13[72] = v14 | 2;
    if ( (v14 | 2) != v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 304LL))(v13);
    Caver::GUIButton::SetTintColor();
    v3 = v12;
  }
  Caver::GuidePurchaseView::UpdateBuyButtonSize(*v3);
}

