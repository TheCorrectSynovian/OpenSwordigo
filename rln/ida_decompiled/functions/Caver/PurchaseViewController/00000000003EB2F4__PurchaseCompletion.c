/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EB2F4
 * Mangled: _ZN5Caver22PurchaseViewController18PurchaseCompletionERKSsbS2_
 * Demangled: Caver::PurchaseViewController::PurchaseCompletion(std::string const&,bool,std::string const&)
 *
 * Callers: 1
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 13
 *   0x00000000001F4080  Caver::GameInterfaceBuilder::AlertView(std::string const&,std::string const&,int,std::string const*,int)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9C20  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *   0x00000000001FDDF0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x00000000002015B0  Caver::PurchaseViewController::EnableBuyButton(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003EB75C  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x00000000003EB30C string=0x00000000003EB310 "Y"
 *   insn=0x00000000003EB310 string=0x00000000003EB314 "("
 *   insn=0x00000000003EB324 string=0x00000000003EB328 "h6@"
 *   insn=0x00000000003EB334 string=0x00000000003EB338 "|"
 *   insn=0x00000000003EB34C string=0x00000000003EB350 "_"
 *   insn=0x00000000003EB35C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003EB380 string=0x00000000003EB4E0 "("
 *   insn=0x00000000003EB388 string=0x00000000003EB38C "%:"
 *   insn=0x00000000003EB38C string=0x00000000003EB390 "T"
 *   insn=0x00000000003EB38C string=0x00000000001F9C20 "0'"
 *   insn=0x00000000003EB394 string=0x00000000003EB398 ""
 *   insn=0x00000000003EB39C string=0x00000000003EB3A0 "!"
 *   insn=0x00000000003EB39C string=0x00000000003EB4CC "h*@"
 *   insn=0x00000000003EB3A0 string=0x000000000058F6BA "Ok"
 *   insn=0x00000000003EB3B0 string=0x00000000003EB3B4 "!"
 *   insn=0x00000000003EB3B4 string=0x0000000000592FED "PURCHASE FAILED"
 *   insn=0x00000000003EB3DC string=0x00000000003EB3E0 "(#"
 *   insn=0x00000000003EB3E0 string=0x00000000001F4080 "P'"
 *   insn=0x00000000003EB3EC string=0x00000000003EB3F0 "A"
 *   insn=0x00000000003EB3F0 string=0x00000000003EB3F4 "a"
 *   insn=0x00000000003EB3FC string=0x00000000003EB400 "h"
 *   insn=0x00000000003EB3FC string=0x00000000003EB414 "t"
 *   insn=0x00000000003EB400 string=0x00000000003EB404 "@"
 *   insn=0x00000000003EB40C string=0x00000000003EB410 "a"
 *   insn=0x00000000003EB41C string=0x00000000003EB420 ""
 *   insn=0x00000000003EB428 string=0x00000000003EB42C "qJ"
 *   insn=0x00000000003EB42C string=0x00000000003EB430 "4"
 *   insn=0x00000000003EB42C string=0x00000000001FDDF0 "0'"
 *   insn=0x00000000003EB434 string=0x00000000003EB438 ""
 *   insn=0x00000000003EB444 string=0x00000000003EB448 "\t@"
 *   insn=0x00000000003EB454 string=0x00000000003EB458 ""
 *   insn=0x00000000003EB464 string=0x00000000003EB468 "@"
 *   insn=0x00000000003EB474 string=0x00000000003EB478 "4"
 *   insn=0x00000000003EB47C string=0x00000000003EB480 ""
 *   insn=0x00000000003EB48C string=0x00000000003EB490 "\t@"
 *   insn=0x00000000003EB49C string=0x00000000003EB4A0 ""
 *   insn=0x00000000003EB4AC string=0x00000000003EB4B0 "@"
 *   insn=0x00000000003EB4D0 string=0x00000000003EB4D4 ""
 *   insn=0x00000000003EB4D8 string=0x00000000003EB4DC "5X"
 *   insn=0x00000000003EB4EC string=0x00000000003EB5E0 "<+"
 *   insn=0x00000000003EB50C string=0x00000000003EB510 ")=G"
 *   insn=0x00000000003EB518 string=0x00000000003EB51C "\t"
 *   insn=0x00000000003EB518 string=0x00000000003EB530 "\t"
 *   insn=0x00000000003EB51C string=0x00000000003EB520 "*"
 *   insn=0x00000000003EB520 string=0x00000000003EB524 "\n"
 *   insn=0x00000000003EB52C string=0x00000000003EB53C "?"
 *   insn=0x00000000003EB530 string=0x00000000003EB534 "*"
 *   insn=0x00000000003EB534 string=0x00000000003EB538 "\n"
 *   insn=0x00000000003EB558 string=0x00000000003EB55C ")=G"
 *   insn=0x00000000003EB55C string=0x00000000003EB560 "!"
 *   insn=0x00000000003EB564 string=0x00000000003EB568 "\t"
 *   insn=0x00000000003EB564 string=0x00000000003EB5A0 "\t"
 *   insn=0x00000000003EB568 string=0x00000000003EB56C "*"
 *   insn=0x00000000003EB56C string=0x00000000003EB570 "\n"
 *   insn=0x00000000003EB574 string=0x00000000003EB578 ""
 *   insn=0x00000000003EB578 string=0x00000000003EB5AC "?"
 *   insn=0x00000000003EB57C string=0x00000000003EB580 ")=G"
 *   insn=0x00000000003EB580 string=0x00000000003EB584 "!"
 *   insn=0x00000000003EB588 string=0x00000000003EB58C "\t"
 *   insn=0x00000000003EB588 string=0x00000000003EB5C0 "\t"
 *   insn=0x00000000003EB58C string=0x00000000003EB590 "*"
 *   insn=0x00000000003EB590 string=0x00000000003EB594 "\n"
 *   insn=0x00000000003EB59C string=0x00000000003EB5CC "?"
 *   insn=0x00000000003EB5A0 string=0x00000000003EB5A4 "*"
 *   insn=0x00000000003EB5A4 string=0x00000000003EB5A8 "\n"
 *   insn=0x00000000003EB5AC string=0x00000000003EB5B0 ","
 *   insn=0x00000000003EB5B4 string=0x00000000003EB5B8 "{"
 *   insn=0x00000000003EB5C0 string=0x00000000003EB5C4 "*"
 *   insn=0x00000000003EB5C4 string=0x00000000003EB5C8 "\n"
 *   insn=0x00000000003EB5D4 string=0x00000000003EB5D8 "s"
 *   insn=0x00000000003EB5E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EB5F0 string=0x00000000003EB5F4 "?"
 *   insn=0x00000000003EB5F8 string=0x00000000003EB5FC "4"
 *   insn=0x00000000003EB600 string=0x00000000003EB604 ""
 *   insn=0x00000000003EB610 string=0x00000000003EB614 "\t@"
 *   insn=0x00000000003EB620 string=0x00000000003EB624 ""
 *   insn=0x00000000003EB630 string=0x00000000003EB634 "@"
 *   insn=0x00000000003EB640 string=0x00000000003EB644 "t"
 *   insn=0x00000000003EB648 string=0x00000000003EB64C ""
 *   insn=0x00000000003EB658 string=0x00000000003EB65C "\t@"
 *   insn=0x00000000003EB668 string=0x00000000003EB66C ""
 *   insn=0x00000000003EB678 string=0x00000000003EB67C "@"
 *   insn=0x00000000003EB694 string=0x00000000003EB698 "(a"
 *   insn=0x00000000003EB6A4 string=0x00000000003EB6A8 "J=G"
 *   insn=0x00000000003EB6A8 string=0x00000000003EB6AC ")!"
 *   insn=0x00000000003EB6B0 string=0x00000000003EB6B4 "*"
 *   insn=0x00000000003EB6B0 string=0x00000000003EB6C8 "*"
 *   insn=0x00000000003EB6B4 string=0x00000000003EB6B8 "K"
 *   insn=0x00000000003EB6B8 string=0x00000000003EB6BC "+"
 *   insn=0x00000000003EB6C4 string=0x00000000003EB6D4 "_"
 *   insn=0x00000000003EB6C8 string=0x00000000003EB6CC "K"
 *   insn=0x00000000003EB6CC string=0x00000000003EB6D0 "+"
 *   insn=0x00000000003EB6E0 string=0x00000000003EB6E4 "0"
 *   insn=0x00000000003EB700 string=0x00000000003EB704 ")=G"
 *   insn=0x00000000003EB704 string=0x00000000003EB708 "!"
 *   insn=0x00000000003EB708 string=0x00000000003EB70C "i"
 *   insn=0x00000000003EB70C string=0x00000000003EB710 "\t"
 *   insn=0x00000000003EB70C string=0x00000000003EB738 "\t"
 *   insn=0x00000000003EB710 string=0x00000000003EB714 "*"
 *   insn=0x00000000003EB714 string=0x00000000003EB718 "\n"
 *   insn=0x00000000003EB71C string=0x00000000003EB720 "?"
 *   insn=0x00000000003EB730 string=0x00000000003EB734 "dX"
 *   insn=0x00000000003EB738 string=0x00000000003EB73C "*"
 *   insn=0x00000000003EB73C string=0x00000000003EB740 "\n"
 *   insn=0x00000000003EB740 string=0x00000000003EB744 "?"
 *   insn=0x00000000003EB744 string=0x00000000003EB748 ""
 *   insn=0x00000000003EB754 string=0x00000000003EB758 "[X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseViewController::PurchaseCompletion(
        Caver::PurchaseViewController *a1,
        const void **a2,
        char a3,
        _QWORD *a4)
{
  Caver::GUIAlertView *v8; // x23
  const void *v9; // x0
  size_t v10; // x2
  __int64 *v11; // x22
  bool v12; // w26
  void *v13; // x0
  Caver::GUIView *v14; // x1
  Caver::GUIAlertView *v15; // x21
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  void *v22; // x0
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  unsigned int *v27; // x8
  int v28; // w9
  __int64 v29; // [xsp+10h] [xbp-70h] BYREF
  Caver::GUIAlertView *v30; // [xsp+18h] [xbp-68h] BYREF
  _QWORD *v31; // [xsp+20h] [xbp-60h]
  _QWORD v32[2]; // [xsp+30h] [xbp-50h] BYREF

  v32[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(&v30, *((_QWORD *)a1 + 13));
  v8 = v30;
  v9 = *a2;
  v10 = *((_QWORD *)*a2 - 3);
  v11 = (__int64 *)((char *)v30 - 24);
  v12 = v10 != *((_QWORD *)v30 - 3) || memcmp(v9, v30, v10) != 0;
  if ( v11 == &qword_6FD2E0 )
    goto LABEL_5;
  v23 = (unsigned int *)((char *)v8 - 8);
  if ( &pthread_create )
  {
    do
      v24 = __ldaxr(v23);
    while ( __stlxr(v24 - 1, v23) );
  }
  else
  {
    v24 = (*v23)--;
  }
  if ( v24 > 0 )
  {
LABEL_5:
    if ( v12 )
      return;
  }
  else
  {
    operator delete(v11);
    if ( v12 )
      return;
  }
  if ( (a3 & 1) != 0 )
  {
    Caver::PurchaseViewController::HandlePurchaseSuccess(a1);
  }
  else
  {
    if ( *(_QWORD *)(*a4 - 24LL) )
    {
      sub_566BB8((int)v32, "Ok");
      sub_566BB8((int)&v29, "PURCHASE FAILED");
      Caver::GameInterfaceBuilder::AlertView();
      v13 = (void *)(v29 - 24);
      if ( (__int64 *)(v29 - 24) != &qword_6FD2E0 )
      {
        v25 = (unsigned int *)(v29 - 8);
        if ( &pthread_create )
        {
          do
            v26 = __ldaxr(v25);
          while ( __stlxr(v26 - 1, v25) );
        }
        else
        {
          v26 = (*v25)--;
        }
        if ( v26 <= 0 )
          operator delete(v13);
      }
      v14 = (Caver::GUIView *)*((_QWORD *)a1 + 3);
      v15 = v30;
      if ( !v14 )
      {
        (*(void (__fastcall **)(Caver::PurchaseViewController *))(*(_QWORD *)a1 + 24LL))(a1);
        v14 = (Caver::GUIView *)*((_QWORD *)a1 + 3);
      }
      v16 = (_QWORD *)*((_QWORD *)a1 + 4);
      if ( v16 )
        ++v16[1];
      Caver::GUIAlertView::PresentFromView(v15, v14);
      if ( v16 )
      {
        v17 = v16[1] - 1LL;
        v16[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
      v19 = v31;
      if ( v31 )
      {
        v20 = v31[1] - 1LL;
        v31[1] = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
          v21 = v19[2] - 1LL;
          v19[2] = v21;
          if ( !v21 )
            (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
        }
      }
      v22 = (void *)(v32[0] - 24LL);
      if ( (__int64 *)(v32[0] - 24LL) != &qword_6FD2E0 )
      {
        v27 = (unsigned int *)(v32[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v28 = __ldaxr(v27);
          while ( __stlxr(v28 - 1, v27) );
        }
        else
        {
          v28 = (*v27)--;
        }
        if ( v28 <= 0 )
          operator delete(v22);
      }
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 312LL) + 228LL) = 0;
    Caver::PurchaseViewController::EnableBuyButton(a1);
  }
}

