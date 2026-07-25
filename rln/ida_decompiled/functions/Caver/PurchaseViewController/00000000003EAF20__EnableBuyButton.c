/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EAF20
 * Mangled: _ZN5Caver22PurchaseViewController15EnableBuyButtonEv
 * Demangled: Caver::PurchaseViewController::EnableBuyButton(void)
 *
 * Callers: 1
 *   0x00000000002015B0  Caver::PurchaseViewController::EnableBuyButton(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F98F0  Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *   0x00000000001FD2E0  Caver::PurchaseView::SetBuyButtonEnabled(bool)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 109
 *   insn=0x00000000003EAF34 string=0x00000000003EAF38 "V"
 *   insn=0x00000000003EAF48 string=0x00000000003EAF4C "`*@"
 *   insn=0x00000000003EAF4C string=0x00000000003EAF50 ""
 *   insn=0x00000000003EAF58 string=0x00000000003EAF5C "h6@"
 *   insn=0x00000000003EAF58 string=0x00000000001FD2E0 "0'"
 *   insn=0x00000000003EAF64 string=0x00000000003EAF68 "p"
 *   insn=0x00000000003EAF68 string=0x00000000003EAF6C "A"
 *   insn=0x00000000003EAF6C string=0x0000000000592FE2 "Free"
 *   insn=0x00000000003EAF94 string=0x00000000003EAF98 "u*@"
 *   insn=0x00000000003EAF98 string=0x00000000003EAF9C "4"
 *   insn=0x00000000003EAF9C string=0x00000000003EAFA0 "h6@"
 *   insn=0x00000000003EAF9C string=0x00000000003EB080 "h6@"
 *   insn=0x00000000003EAFA8 string=0x00000000003EAFAC "_"
 *   insn=0x00000000003EAFAC string=0x00000000003EAFB0 " "
 *   insn=0x00000000003EAFB0 string=0x000000000058F698 "Buy - "
 *   insn=0x00000000003EAFC8 string=0x00000000003EAFCC "I:"
 *   insn=0x00000000003EAFCC string=0x00000000001F98F0 "0'"
 *   insn=0x00000000003EAFF0 string=0x00000000003EAFF4 ")=G"
 *   insn=0x00000000003EAFF4 string=0x00000000003EAFF8 "!"
 *   insn=0x00000000003EAFFC string=0x00000000003EB000 "\t"
 *   insn=0x00000000003EAFFC string=0x00000000003EB0F8 "\t"
 *   insn=0x00000000003EB000 string=0x00000000003EB004 "*"
 *   insn=0x00000000003EB004 string=0x00000000003EB008 "\n"
 *   insn=0x00000000003EB00C string=0x00000000003EB010 "="
 *   insn=0x00000000003EB010 string=0x00000000003EB104 "?"
 *   insn=0x00000000003EB014 string=0x00000000003EB018 ")=G"
 *   insn=0x00000000003EB018 string=0x00000000003EB01C "!"
 *   insn=0x00000000003EB020 string=0x00000000003EB024 "\t"
 *   insn=0x00000000003EB020 string=0x00000000003EB05C "\t"
 *   insn=0x00000000003EB024 string=0x00000000003EB028 "*"
 *   insn=0x00000000003EB028 string=0x00000000003EB02C "\n"
 *   insn=0x00000000003EB030 string=0x00000000003EB034 ""
 *   insn=0x00000000003EB034 string=0x00000000003EB068 "?"
 *   insn=0x00000000003EB038 string=0x00000000003EB03C ")=G"
 *   insn=0x00000000003EB03C string=0x00000000003EB040 "!"
 *   insn=0x00000000003EB044 string=0x00000000003EB048 "\t"
 *   insn=0x00000000003EB044 string=0x00000000003EB114 "\t"
 *   insn=0x00000000003EB048 string=0x00000000003EB04C "*"
 *   insn=0x00000000003EB04C string=0x00000000003EB050 "\n"
 *   insn=0x00000000003EB054 string=0x00000000003EB058 "2"
 *   insn=0x00000000003EB058 string=0x00000000003EB120 "?"
 *   insn=0x00000000003EB05C string=0x00000000003EB060 "*"
 *   insn=0x00000000003EB060 string=0x00000000003EB064 "\n"
 *   insn=0x00000000003EB068 string=0x00000000003EB06C "l"
 *   insn=0x00000000003EB074 string=0x00000000003EB078 "u*@"
 *   insn=0x00000000003EB078 string=0x00000000003EB07C "4"
 *   insn=0x00000000003EB088 string=0x00000000003EB08C "'"
 *   insn=0x00000000003EB0A4 string=0x00000000003EB0A8 "a"
 *   insn=0x00000000003EB0B8 string=0x00000000003EB154 "_,"
 *   insn=0x00000000003EB0D4 string=0x00000000003EB0D8 ")=G"
 *   insn=0x00000000003EB0D8 string=0x00000000003EB0DC "!"
 *   insn=0x00000000003EB0E0 string=0x00000000003EB0E4 "\t"
 *   insn=0x00000000003EB0E0 string=0x00000000003EB134 "\t"
 *   insn=0x00000000003EB0E4 string=0x00000000003EB0E8 "*"
 *   insn=0x00000000003EB0E8 string=0x00000000003EB0EC "\n"
 *   insn=0x00000000003EB0F4 string=0x00000000003EB140 "?"
 *   insn=0x00000000003EB0F8 string=0x00000000003EB0FC "*"
 *   insn=0x00000000003EB0FC string=0x00000000003EB100 "\n"
 *   insn=0x00000000003EB104 string=0x00000000003EB108 ","
 *   insn=0x00000000003EB114 string=0x00000000003EB118 "*"
 *   insn=0x00000000003EB118 string=0x00000000003EB11C "\n"
 *   insn=0x00000000003EB134 string=0x00000000003EB138 "*"
 *   insn=0x00000000003EB138 string=0x00000000003EB13C "\n"
 *   insn=0x00000000003EB140 string=0x00000000003EB144 "L"
 *   insn=0x00000000003EB154 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EB15C string=0x00000000003EB160 "(a"
 *   insn=0x00000000003EB16C string=0x00000000003EB170 "J=G"
 *   insn=0x00000000003EB170 string=0x00000000003EB174 ")!"
 *   insn=0x00000000003EB174 string=0x00000000003EB178 "J\t"
 *   insn=0x00000000003EB178 string=0x00000000003EB17C "*"
 *   insn=0x00000000003EB178 string=0x00000000003EB2A0 "*"
 *   insn=0x00000000003EB17C string=0x00000000003EB180 "K"
 *   insn=0x00000000003EB180 string=0x00000000003EB184 "+"
 *   insn=0x00000000003EB188 string=0x00000000003EB18C ">"
 *   insn=0x00000000003EB18C string=0x00000000003EB284 "_"
 *   insn=0x00000000003EB194 string=0x00000000003EB198 "(a"
 *   insn=0x00000000003EB1A4 string=0x00000000003EB1A8 "J=G"
 *   insn=0x00000000003EB1A8 string=0x00000000003EB1AC ")!"
 *   insn=0x00000000003EB1B0 string=0x00000000003EB1B4 "*"
 *   insn=0x00000000003EB1B0 string=0x00000000003EB1C8 "*"
 *   insn=0x00000000003EB1B4 string=0x00000000003EB1B8 "K"
 *   insn=0x00000000003EB1B8 string=0x00000000003EB1BC "+"
 *   insn=0x00000000003EB1C4 string=0x00000000003EB1D4 "_"
 *   insn=0x00000000003EB1C8 string=0x00000000003EB1CC "K"
 *   insn=0x00000000003EB1CC string=0x00000000003EB1D0 "+"
 *   insn=0x00000000003EB1E0 string=0x00000000003EB1E4 "p"
 *   insn=0x00000000003EB200 string=0x00000000003EB204 ")=G"
 *   insn=0x00000000003EB204 string=0x00000000003EB208 "!"
 *   insn=0x00000000003EB208 string=0x00000000003EB20C ")"
 *   insn=0x00000000003EB20C string=0x00000000003EB210 "\t"
 *   insn=0x00000000003EB20C string=0x00000000003EB230 "\t"
 *   insn=0x00000000003EB210 string=0x00000000003EB214 "*"
 *   insn=0x00000000003EB214 string=0x00000000003EB218 "\n"
 *   insn=0x00000000003EB21C string=0x00000000003EB220 "?"
 *   insn=0x00000000003EB22C string=0x00000000003EB294 "D"
 *   insn=0x00000000003EB230 string=0x00000000003EB234 "*"
 *   insn=0x00000000003EB234 string=0x00000000003EB238 "\n"
 *   insn=0x00000000003EB238 string=0x00000000003EB23C "?"
 *   insn=0x00000000003EB23C string=0x00000000003EB240 "M"
 *   insn=0x00000000003EB24C string=0x00000000003EB250 "J"
 *   insn=0x00000000003EB254 string=0x00000000003EB258 "(a"
 *   insn=0x00000000003EB264 string=0x00000000003EB268 "J=G"
 *   insn=0x00000000003EB268 string=0x00000000003EB26C ")!"
 *   insn=0x00000000003EB270 string=0x00000000003EB274 "*"
 *   insn=0x00000000003EB274 string=0x00000000003EB278 "K"
 *   insn=0x00000000003EB278 string=0x00000000003EB27C "+"
 *   insn=0x00000000003EB2A0 string=0x00000000003EB2A4 "K"
 *   insn=0x00000000003EB2A4 string=0x00000000003EB2A8 "+"
 *   insn=0x00000000003EB2A8 string=0x00000000003EB2AC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseViewController::EnableBuyButton(Caver::PurchaseViewController *this)
{
  Caver::PurchaseView *v2; // x0
  int v3; // w20
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v16[3]; // [xsp+8h] [xbp-48h] BYREF

  v16[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::PurchaseView *)*((_QWORD *)this + 10);
  *(_BYTE *)(*((_QWORD *)v2 + 37) + 228LL) = 0;
  Caver::PurchaseView::SetBuyButtonEnabled(v2, 1);
  sub_56A528(v16, *((_QWORD *)this + 13) + 8LL);
  v3 = sub_5689E0((int)v16, "Free");
  v4 = (void *)(v16[0] - 24LL);
  if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v16[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
    {
      operator delete(v4);
      if ( !v3 )
        goto LABEL_17;
LABEL_3:
      sub_56A528(&v15, *((_QWORD *)this + 13) + 8LL);
      ((void (__fastcall *)(_QWORD *__return_ptr, const char *, __int64 *))loc_25A030)(v16, "Buy - ", &v15);
      Caver::PurchaseView::SetBuyButtonTitle();
      v5 = (void *)(v16[0] - 24LL);
      if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
      {
        v11 = (unsigned int *)(v16[0] - 8LL);
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
          operator delete(v5);
      }
      v6 = (void *)(v15 - 24);
      if ( (__int64 *)(v15 - 24) != &qword_6FD2E0 )
      {
        v7 = (unsigned int *)(v15 - 8);
        if ( &pthread_create )
        {
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
        }
        else
        {
          v8 = (*v7)--;
        }
        if ( v8 <= 0 )
          goto LABEL_30;
      }
      return;
    }
  }
  if ( v3 )
    goto LABEL_3;
LABEL_17:
  sub_56A528(v16, *((_QWORD *)this + 13) + 8LL);
  Caver::PurchaseView::SetBuyButtonTitle();
  v6 = (void *)(v16[0] - 24LL);
  if ( (__int64 *)(v16[0] - 24LL) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v16[0] - 8LL);
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
LABEL_30:
      operator delete(v6);
  }
}

