/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000406418
 * Mangled: _ZN5Caver17GuidePurchaseViewD2Ev
 * Demangled: Caver::GuidePurchaseView::~GuidePurchaseView()
 *
 * Callers: 1
 *   0x00000000001FDC40  Caver::GuidePurchaseView::~GuidePurchaseView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000406900  Caver::GuidePurchaseView::~GuidePurchaseView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 101
 *   insn=0x0000000000406430 string=0x0000000000406434 "t"
 *   insn=0x0000000000406434 string=0x0000000000406438 "AB"
 *   insn=0x0000000000406438 string=0x000000000040643C "A"
 *   insn=0x000000000040643C string=0x0000000000406440 "h"
 *   insn=0x0000000000406440 string=0x0000000000406444 "4"
 *   insn=0x0000000000406444 string=0x0000000000406488 "t"
 *   insn=0x0000000000406448 string=0x000000000040644C ""
 *   insn=0x0000000000406458 string=0x000000000040645C "\t@"
 *   insn=0x0000000000406468 string=0x000000000040646C ""
 *   insn=0x0000000000406478 string=0x000000000040647C "@"
 *   insn=0x0000000000406488 string=0x000000000040648C "4"
 *   insn=0x000000000040648C string=0x00000000004064D0 "t"
 *   insn=0x0000000000406490 string=0x0000000000406494 ""
 *   insn=0x00000000004064A0 string=0x00000000004064A4 "\t@"
 *   insn=0x00000000004064B0 string=0x00000000004064B4 ""
 *   insn=0x00000000004064C0 string=0x00000000004064C4 "@"
 *   insn=0x00000000004064D0 string=0x00000000004064D4 "4"
 *   insn=0x00000000004064D4 string=0x0000000000406518 "t"
 *   insn=0x00000000004064D8 string=0x00000000004064DC ""
 *   insn=0x00000000004064E8 string=0x00000000004064EC "\t@"
 *   insn=0x00000000004064F8 string=0x00000000004064FC ""
 *   insn=0x0000000000406508 string=0x000000000040650C "@"
 *   insn=0x0000000000406518 string=0x000000000040651C "4"
 *   insn=0x000000000040651C string=0x0000000000406560 "t"
 *   insn=0x0000000000406520 string=0x0000000000406524 ""
 *   insn=0x0000000000406530 string=0x0000000000406534 "\t@"
 *   insn=0x0000000000406540 string=0x0000000000406544 ""
 *   insn=0x0000000000406550 string=0x0000000000406554 "@"
 *   insn=0x0000000000406560 string=0x0000000000406564 "4"
 *   insn=0x0000000000406564 string=0x00000000004065A8 "t"
 *   insn=0x0000000000406568 string=0x000000000040656C ""
 *   insn=0x0000000000406578 string=0x000000000040657C "\t@"
 *   insn=0x0000000000406588 string=0x000000000040658C ""
 *   insn=0x0000000000406598 string=0x000000000040659C "@"
 *   insn=0x00000000004065B0 string=0x000000000040660C "t"
 *   insn=0x00000000004065B4 string=0x00000000004065B8 "5"
 *   insn=0x00000000004065BC string=0x00000000004065C0 ""
 *   insn=0x00000000004065CC string=0x00000000004065D0 "\t@"
 *   insn=0x00000000004065DC string=0x00000000004065E0 ""
 *   insn=0x00000000004065EC string=0x00000000004065F0 "@"
 *   insn=0x0000000000406604 string=0x0000000000406608 "t"
 *   insn=0x000000000040660C string=0x0000000000406618 "t"
 *   insn=0x0000000000406610 string=0x0000000000406614 "'"
 *   insn=0x0000000000406614 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000406618 string=0x000000000040661C "4"
 *   insn=0x0000000000406620 string=0x0000000000406624 ""
 *   insn=0x0000000000406630 string=0x0000000000406634 "\t@"
 *   insn=0x0000000000406640 string=0x0000000000406644 ""
 *   insn=0x0000000000406650 string=0x0000000000406654 "@"
 *   insn=0x0000000000406680 string=0x0000000000406684 "V"
 *   insn=0x0000000000406684 string=0x00000000004067DC "h"
 *   insn=0x0000000000406688 string=0x000000000040668C "u"
 *   insn=0x000000000040668C string=0x0000000000406690 "u"
 *   insn=0x0000000000406690 string=0x0000000000406694 "R"
 *   insn=0x0000000000406698 string=0x000000000040669C "u"
 *   insn=0x00000000004066A0 string=0x00000000004066A4 "<"
 *   insn=0x00000000004066A4 string=0x0000000000406794 "u"
 *   insn=0x00000000004066A8 string=0x00000000004066AC "u"
 *   insn=0x00000000004066B0 string=0x00000000004066B4 "&"
 *   insn=0x00000000004066B4 string=0x000000000040674C "u"
 *   insn=0x00000000004066BC string=0x00000000004066C0 "5"
 *   insn=0x00000000004066C0 string=0x0000000000406704 "u"
 *   insn=0x00000000004066C4 string=0x00000000004066C8 ""
 *   insn=0x00000000004066D4 string=0x00000000004066D8 "\t@"
 *   insn=0x00000000004066E4 string=0x00000000004066E8 ""
 *   insn=0x00000000004066F4 string=0x00000000004066F8 "@"
 *   insn=0x0000000000406704 string=0x0000000000406708 "5"
 *   insn=0x000000000040670C string=0x0000000000406710 ""
 *   insn=0x000000000040671C string=0x0000000000406720 "\t@"
 *   insn=0x000000000040672C string=0x0000000000406730 ""
 *   insn=0x000000000040673C string=0x0000000000406740 "@"
 *   insn=0x000000000040674C string=0x0000000000406750 "5"
 *   insn=0x0000000000406754 string=0x0000000000406758 ""
 *   insn=0x0000000000406764 string=0x0000000000406768 "\t@"
 *   insn=0x0000000000406774 string=0x0000000000406778 ""
 *   insn=0x0000000000406784 string=0x0000000000406788 "@"
 *   insn=0x0000000000406794 string=0x0000000000406798 "5"
 *   insn=0x000000000040679C string=0x00000000004067A0 ""
 *   insn=0x00000000004067AC string=0x00000000004067B0 "\t@"
 *   insn=0x00000000004067BC string=0x00000000004067C0 ""
 *   insn=0x00000000004067CC string=0x00000000004067D0 "@"
 *   insn=0x00000000004067FC string=0x0000000000406854 "A"
 *   insn=0x0000000000406800 string=0x0000000000406804 "J"
 *   insn=0x0000000000406808 string=0x000000000040680C "A"
 *   insn=0x0000000000406810 string=0x0000000000406814 ")\t@"
 *   insn=0x000000000040681C string=0x0000000000406820 " "
 *   insn=0x000000000040682C string=0x0000000000406830 "J"
 *   insn=0x000000000040683C string=0x0000000000406840 "@"
 *   insn=0x0000000000406854 string=0x0000000000406858 "?"
 *   insn=0x000000000040685C string=0x0000000000406860 "`"
 *   insn=0x0000000000406864 string=0x0000000000406868 ""
 *   insn=0x0000000000406868 string=0x000000000040689C "u"
 *   insn=0x0000000000406870 string=0x0000000000406874 "("
 *   insn=0x0000000000406884 string=0x0000000000406888 "h"
 *   insn=0x000000000040688C string=0x0000000000406890 "h"
 *   insn=0x000000000040689C string=0x00000000004068A0 "5"
 *   insn=0x00000000004068A4 string=0x00000000004068A8 ""
 *   insn=0x00000000004068B4 string=0x00000000004068B8 "\t@"
 *   insn=0x00000000004068C4 string=0x00000000004068C8 ""
 *   insn=0x00000000004068D4 string=0x00000000004068D8 "@"
 *   insn=0x00000000004068E4 string=0x00000000004068E8 "R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuidePurchaseView::~GuidePurchaseView(Caver::GuidePurchaseView *this)
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
  _QWORD *v18; // x22
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 45);
  *(_QWORD *)this = off_6D1880;
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
  v5 = (_QWORD *)*((_QWORD *)this + 43);
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
  v8 = (_QWORD *)*((_QWORD *)this + 41);
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
  v11 = (_QWORD *)*((_QWORD *)this + 39);
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
  v14 = (_QWORD *)*((_QWORD *)this + 37);
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
  v17 = (_QWORD *)*((_QWORD *)this + 33);
  v18 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v17 != v18 )
  {
    do
    {
      v19 = (_QWORD *)v17[1];
      if ( v19 )
      {
        v20 = v19[1] - 1LL;
        v19[1] = v20;
        if ( !v20 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
          v21 = v19[2] - 1LL;
          v19[2] = v21;
          if ( !v21 )
            (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
        }
      }
      v17 += 2;
    }
    while ( v18 != v17 );
    v17 = (_QWORD *)*((_QWORD *)this + 33);
  }
  if ( v17 )
    operator delete(v17);
  v22 = (_QWORD *)*((_QWORD *)this + 32);
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  Caver::GUIView::~GUIView(this);
}

