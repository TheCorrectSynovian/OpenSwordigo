/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441A5C
 * Mangled: _ZN5Caver14TabbedMenuView14SetContentViewERKN5boost10shared_ptrINS_12MenuViewPageEEE
 * Demangled: Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *
 * Callers: 1
 *   0x00000000002017F0  Caver::TabbedMenuView::SetContentView(boost::shared_ptr<Caver::MenuViewPage> const&)
 *
 * Callees: 11
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x0000000000200580  Caver::TabbedMenuView::UpdateContentLayout(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000441D38  Caver::TabbedMenuView::Update(float)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x0000000000441A70 string=0x0000000000441A74 "W"
 *   insn=0x0000000000441A84 string=0x0000000000441A88 "`"
 *   insn=0x0000000000441A8C string=0x0000000000441A90 ""
 *   insn=0x0000000000441A90 string=0x0000000000441A94 "=@"
 *   insn=0x0000000000441AA0 string=0x0000000000441AA4 "\n"
 *   insn=0x0000000000441AA0 string=0x0000000000441AB0 "t"
 *   insn=0x0000000000441AA4 string=0x0000000000441AA8 "J"
 *   insn=0x0000000000441AA8 string=0x0000000000441AAC "\n"
 *   insn=0x0000000000441AB0 string=0x0000000000441AB4 "i"
 *   insn=0x0000000000441AB8 string=0x0000000000441AEC "i"
 *   insn=0x0000000000441ABC string=0x0000000000441AC0 ""
 *   insn=0x0000000000441AC4 string=0x0000000000441AC8 "!"
 *   insn=0x0000000000441AD0 string=0x0000000000441AD4 "\t@"
 *   insn=0x0000000000441ADC string=0x0000000000441AE0 ""
 *   insn=0x0000000000441AF0 string=0x0000000000441AF4 "h"
 *   insn=0x0000000000441AF4 string=0x0000000000441AF8 "9@"
 *   insn=0x0000000000441AFC string=0x0000000000441B00 "i"
 *   insn=0x0000000000441B08 string=0x0000000000441B0C "*"
 *   insn=0x0000000000441B0C string=0x0000000000441B10 "J"
 *   insn=0x0000000000441B10 string=0x0000000000441B14 "*"
 *   insn=0x0000000000441B28 string=0x0000000000441B2C "4"
 *   insn=0x0000000000441B2C string=0x0000000000441B70 "h"
 *   insn=0x0000000000441B30 string=0x0000000000441B34 ""
 *   insn=0x0000000000441B44 string=0x0000000000441B48 "\t@"
 *   insn=0x0000000000441B50 string=0x0000000000441B54 ""
 *   insn=0x0000000000441B64 string=0x0000000000441B68 "@"
 *   insn=0x0000000000441B70 string=0x0000000000441B74 "u"
 *   insn=0x0000000000441B7C string=0x0000000000441B80 "j"
 *   insn=0x0000000000441B90 string=0x0000000000441B94 "("
 *   insn=0x0000000000441B94 string=0x0000000000441B98 "_"
 *   insn=0x0000000000441BA0 string=0x0000000000441BA4 "{"
 *   insn=0x0000000000441BA4 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000441BA8 string=0x0000000000441BC8 "("
 *   insn=0x0000000000441BB8 string=0x0000000000441BBC "U"
 *   insn=0x0000000000441BBC string=0x00000000001F8510 "0'"
 *   insn=0x0000000000441BC8 string=0x0000000000441BCC ""
 *   insn=0x0000000000441BD4 string=0x0000000000441C24 "\t"
 *   insn=0x0000000000441BD8 string=0x0000000000441BDC "i"
 *   insn=0x0000000000441C0C string=0x0000000000441C10 "@"
 *   insn=0x0000000000441C14 string=0x0000000000441C18 "i"
 *   insn=0x0000000000441C24 string=0x0000000000441C28 ")=G"
 *   insn=0x0000000000441C30 string=0x0000000000441C34 "\t"
 *   insn=0x0000000000441C30 string=0x0000000000441C48 "\t"
 *   insn=0x0000000000441C34 string=0x0000000000441C38 "*"
 *   insn=0x0000000000441C38 string=0x0000000000441C3C "\n"
 *   insn=0x0000000000441C44 string=0x0000000000441C54 "?"
 *   insn=0x0000000000441C48 string=0x0000000000441C4C "*"
 *   insn=0x0000000000441C4C string=0x0000000000441C50 "\n"
 *   insn=0x0000000000441C6C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000441C7C string=0x0000000000441C80 ""
 *   insn=0x0000000000441C84 string=0x0000000000441C88 "A"
 *   insn=0x0000000000441C8C string=0x0000000000441C90 "\t@"
 *   insn=0x0000000000441C9C string=0x0000000000441CA0 ""
 *   insn=0x0000000000441CA4 string=0x0000000000441CA8 "A"
 *   insn=0x0000000000441CAC string=0x0000000000441CB0 "@"
 *   insn=0x0000000000441CC4 string=0x0000000000441CC8 "*"
 *   insn=0x0000000000441CC8 string=0x0000000000441CCC "J"
 *   insn=0x0000000000441CD0 string=0x0000000000441CD4 "(a"
 *   insn=0x0000000000441CDC string=0x0000000000441CE0 "\n"
 *   insn=0x0000000000441CE0 string=0x0000000000441CE4 "J=G"
 *   insn=0x0000000000441CE4 string=0x0000000000441CE8 ")!"
 *   insn=0x0000000000441CEC string=0x0000000000441CF0 "*"
 *   insn=0x0000000000441CEC string=0x0000000000441D1C "*"
 *   insn=0x0000000000441CF0 string=0x0000000000441CF4 "K"
 *   insn=0x0000000000441CF4 string=0x0000000000441CF8 "+"
 *   insn=0x0000000000441CFC string=0x0000000000441D00 "_"
 *   insn=0x0000000000441D00 string=0x0000000000441D04 "l"
 *   insn=0x0000000000441D1C string=0x0000000000441D20 "K"
 *   insn=0x0000000000441D20 string=0x0000000000441D24 "+"
 *   insn=0x0000000000441D24 string=0x0000000000441D28 "_"
 *   insn=0x0000000000441D34 string=0x0000000000441D38 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabbedMenuView::SetContentView(Caver::TabbedMenuView *a1, __int64 *a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x9
  void (__fastcall *v11)(Caver::TabbedMenuView *, _QWORD, void **); // x8
  _QWORD *v12; // x9
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  Caver::GUILabel *v16; // x21
  char *v17; // x22
  size_t v18; // x2
  __int64 *v19; // x20
  _QWORD *v20; // x1
  unsigned int *v21; // x8
  int v22; // w9
  void *v23; // [xsp+0h] [xbp-50h] BYREF
  _QWORD *v24; // [xsp+8h] [xbp-48h]
  __int64 v25; // [xsp+18h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = *((_QWORD *)a1 + 39);
  if ( result )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 120LL))(result);
  v6 = *a2;
  v5 = a2[1];
  if ( v5 )
    ++*(_QWORD *)(v5 + 8);
  v7 = (_QWORD *)*((_QWORD *)a1 + 40);
  *((_QWORD *)a1 + 39) = v6;
  *((_QWORD *)a1 + 40) = v5;
  if ( !v7
    || (v8 = v7[1] - 1LL, (v7[1] = v8) != 0)
    || (result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7), v9 = v7[2] - 1LL, (v7[2] = v9) != 0) )
  {
    v10 = (void *)*((_QWORD *)a1 + 39);
    if ( !v10 )
      return result;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    v10 = (void *)*((_QWORD *)a1 + 39);
    if ( !v10 )
      return result;
  }
  v11 = *(void (__fastcall **)(Caver::TabbedMenuView *, _QWORD, void **))(*(_QWORD *)a1 + 112LL);
  v23 = v10;
  v12 = (_QWORD *)*((_QWORD *)a1 + 40);
  v24 = v12;
  if ( v12 )
    ++v12[1];
  v11(a1, 0, &v23);
  v13 = v24;
  if ( v24 )
  {
    v14 = v24[1] - 1LL;
    v24[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  v16 = (Caver::GUILabel *)*((_QWORD *)a1 + 45);
  sub_56A528(&v23, *((_QWORD *)a1 + 39) + 240LL);
  v17 = (char *)v23;
  v19 = (__int64 *)((char *)v23 - 24);
  v18 = *((_QWORD *)v23 - 3);
  v20 = (_QWORD *)*((_QWORD *)v16 + 32);
  if ( v18 != *(v20 - 3) || memcmp(v23, v20, v18) )
  {
    sub_56A6A8((char *)v16 + 256);
    Caver::GUILabel::UpdateText(v16);
    v17 = (char *)v23;
    v19 = (__int64 *)((char *)v23 - 24);
  }
  if ( v19 != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(v17 - 8);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v19);
  }
  return Caver::TabbedMenuView::UpdateContentLayout(a1);
}

