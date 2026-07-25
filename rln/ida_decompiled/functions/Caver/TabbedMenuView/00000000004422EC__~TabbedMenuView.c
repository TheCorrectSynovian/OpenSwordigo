/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004422EC
 * Mangled: _ZN5Caver14TabbedMenuViewD2Ev
 * Demangled: Caver::TabbedMenuView::~TabbedMenuView()
 *
 * Callers: 1
 *   0x00000000001FBE00  Caver::TabbedMenuView::~TabbedMenuView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBE00  Caver::TabbedMenuView::~TabbedMenuView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000044281C  Caver::TabbedMenuView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 113
 *   insn=0x00000000004422F8 string=0x00000000004422FC "("
 *   insn=0x0000000000442300 string=0x0000000000442304 "MF"
 *   insn=0x0000000000442304 string=0x0000000000442308 "t"
 *   insn=0x0000000000442308 string=0x000000000044230C "\tA"
 *   insn=0x000000000044230C string=0x0000000000442310 "a"
 *   insn=0x0000000000442310 string=0x0000000000442314 "i"
 *   insn=0x0000000000442314 string=0x0000000000442318 "hz"
 *   insn=0x0000000000442318 string=0x000000000044231C "4"
 *   insn=0x000000000044231C string=0x0000000000442360 "t"
 *   insn=0x0000000000442320 string=0x0000000000442324 ""
 *   insn=0x0000000000442330 string=0x0000000000442334 "\t@"
 *   insn=0x0000000000442340 string=0x0000000000442344 ""
 *   insn=0x0000000000442350 string=0x0000000000442354 "@"
 *   insn=0x0000000000442360 string=0x0000000000442364 "4"
 *   insn=0x0000000000442364 string=0x00000000004423A8 "t"
 *   insn=0x0000000000442368 string=0x000000000044236C ""
 *   insn=0x0000000000442378 string=0x000000000044237C "\t@"
 *   insn=0x0000000000442388 string=0x000000000044238C ""
 *   insn=0x0000000000442398 string=0x000000000044239C "@"
 *   insn=0x00000000004423A8 string=0x00000000004423AC "4"
 *   insn=0x00000000004423AC string=0x00000000004423F0 "t"
 *   insn=0x00000000004423B0 string=0x00000000004423B4 ""
 *   insn=0x00000000004423C0 string=0x00000000004423C4 "\t@"
 *   insn=0x00000000004423D0 string=0x00000000004423D4 ""
 *   insn=0x00000000004423E0 string=0x00000000004423E4 "@"
 *   insn=0x00000000004423F0 string=0x00000000004423F4 "4"
 *   insn=0x00000000004423F4 string=0x0000000000442438 "t"
 *   insn=0x00000000004423F8 string=0x00000000004423FC ""
 *   insn=0x0000000000442408 string=0x000000000044240C "\t@"
 *   insn=0x0000000000442418 string=0x000000000044241C ""
 *   insn=0x0000000000442428 string=0x000000000044242C "@"
 *   insn=0x0000000000442438 string=0x000000000044243C "4"
 *   insn=0x000000000044243C string=0x0000000000442480 "t"
 *   insn=0x0000000000442440 string=0x0000000000442444 ""
 *   insn=0x0000000000442450 string=0x0000000000442454 "\t@"
 *   insn=0x0000000000442460 string=0x0000000000442464 ""
 *   insn=0x0000000000442470 string=0x0000000000442474 "@"
 *   insn=0x0000000000442480 string=0x0000000000442484 "4"
 *   insn=0x0000000000442484 string=0x00000000004424C8 "t"
 *   insn=0x0000000000442488 string=0x000000000044248C ""
 *   insn=0x0000000000442498 string=0x000000000044249C "\t@"
 *   insn=0x00000000004424A8 string=0x00000000004424AC ""
 *   insn=0x00000000004424B8 string=0x00000000004424BC "@"
 *   insn=0x00000000004424C8 string=0x00000000004424CC "4"
 *   insn=0x00000000004424CC string=0x0000000000442510 "t"
 *   insn=0x00000000004424D0 string=0x00000000004424D4 ""
 *   insn=0x00000000004424E0 string=0x00000000004424E4 "\t@"
 *   insn=0x00000000004424F0 string=0x00000000004424F4 ""
 *   insn=0x0000000000442500 string=0x0000000000442504 "@"
 *   insn=0x0000000000442510 string=0x0000000000442514 "4"
 *   insn=0x0000000000442518 string=0x000000000044251C ""
 *   insn=0x0000000000442528 string=0x000000000044252C "\t@"
 *   insn=0x0000000000442538 string=0x000000000044253C ""
 *   insn=0x0000000000442548 string=0x000000000044254C "@"
 *   insn=0x0000000000442564 string=0x0000000000442568 "2"
 *   insn=0x0000000000442574 string=0x0000000000442578 "u"
 *   insn=0x0000000000442584 string=0x0000000000442588 "u"
 *   insn=0x000000000044258C string=0x0000000000442590 "~"
 *   insn=0x0000000000442590 string=0x0000000000442788 "u"
 *   insn=0x0000000000442594 string=0x0000000000442598 "u"
 *   insn=0x0000000000442598 string=0x000000000044259C "5"
 *   insn=0x000000000044259C string=0x00000000004425A0 "h"
 *   insn=0x00000000004425A0 string=0x0000000000442740 "u"
 *   insn=0x00000000004425A4 string=0x00000000004425A8 "u"
 *   insn=0x00000000004425A8 string=0x00000000004425AC "u"
 *   insn=0x00000000004425AC string=0x00000000004425B0 "R"
 *   insn=0x00000000004425B0 string=0x00000000004426F8 "u"
 *   insn=0x00000000004425B4 string=0x00000000004425B8 "u"
 *   insn=0x00000000004425BC string=0x00000000004425C0 "<"
 *   insn=0x00000000004425C0 string=0x00000000004426B0 "u"
 *   insn=0x00000000004425C4 string=0x00000000004425C8 "u"
 *   insn=0x00000000004425CC string=0x00000000004425D0 "&"
 *   insn=0x00000000004425D0 string=0x0000000000442668 "u"
 *   insn=0x00000000004425D8 string=0x00000000004425DC "5"
 *   insn=0x00000000004425DC string=0x0000000000442620 "u"
 *   insn=0x00000000004425E0 string=0x00000000004425E4 ""
 *   insn=0x00000000004425F0 string=0x00000000004425F4 "\t@"
 *   insn=0x0000000000442600 string=0x0000000000442604 ""
 *   insn=0x0000000000442610 string=0x0000000000442614 "@"
 *   insn=0x0000000000442620 string=0x0000000000442624 "5"
 *   insn=0x0000000000442628 string=0x000000000044262C ""
 *   insn=0x0000000000442638 string=0x000000000044263C "\t@"
 *   insn=0x0000000000442648 string=0x000000000044264C ""
 *   insn=0x0000000000442658 string=0x000000000044265C "@"
 *   insn=0x0000000000442668 string=0x000000000044266C "5"
 *   insn=0x0000000000442670 string=0x0000000000442674 ""
 *   insn=0x0000000000442680 string=0x0000000000442684 "\t@"
 *   insn=0x0000000000442690 string=0x0000000000442694 ""
 *   insn=0x00000000004426A0 string=0x00000000004426A4 "@"
 *   insn=0x00000000004426B0 string=0x00000000004426B4 "5"
 *   insn=0x00000000004426B8 string=0x00000000004426BC ""
 *   insn=0x00000000004426C8 string=0x00000000004426CC "\t@"
 *   insn=0x00000000004426D8 string=0x00000000004426DC ""
 *   insn=0x00000000004426E8 string=0x00000000004426EC "@"
 *   insn=0x00000000004426F8 string=0x00000000004426FC "5"
 *   insn=0x0000000000442700 string=0x0000000000442704 ""
 *   insn=0x0000000000442710 string=0x0000000000442714 "\t@"
 *   insn=0x0000000000442720 string=0x0000000000442724 ""
 *   insn=0x0000000000442730 string=0x0000000000442734 "@"
 *   insn=0x0000000000442740 string=0x0000000000442744 "5"
 *   insn=0x0000000000442748 string=0x000000000044274C ""
 *   insn=0x0000000000442758 string=0x000000000044275C "\t@"
 *   insn=0x0000000000442768 string=0x000000000044276C ""
 *   insn=0x0000000000442778 string=0x000000000044277C "@"
 *   insn=0x0000000000442788 string=0x000000000044278C "5"
 *   insn=0x0000000000442790 string=0x0000000000442794 ""
 *   insn=0x00000000004427A0 string=0x00000000004427A4 "\t@"
 *   insn=0x00000000004427B0 string=0x00000000004427B4 ""
 *   insn=0x00000000004427C0 string=0x00000000004427C4 "@"
 *   insn=0x00000000004427D8 string=0x00000000004427DC ":"
 *   insn=0x00000000004427F4 string=0x00000000001FBE00 "0'"
 *   insn=0x0000000000442804 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000442814 string=0x0000000000442818 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabbedMenuView::~TabbedMenuView(Caver::TabbedMenuView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 48);
  *(_QWORD *)this = off_6D3D70;
  *((_QWORD *)this + 30) = &off_6D3EB8;
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
  v5 = (_QWORD *)*((_QWORD *)this + 46);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = (_QWORD *)*((_QWORD *)this + 44);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 42);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (_QWORD *)*((_QWORD *)this + 40);
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  v23 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v23 )
  {
    v24 = v23[1] - 1LL;
    v23[1] = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  Caver::GUIView::~GUIView(this);
}

