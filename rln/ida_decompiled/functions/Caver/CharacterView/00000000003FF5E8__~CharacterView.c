/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003FF5E8
 * Mangled: _ZN5Caver13CharacterViewD2Ev
 * Demangled: Caver::CharacterView::~CharacterView()
 *
 * Callers: 1
 *   0x00000000001F73C0  Caver::CharacterView::~CharacterView()
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73C0  Caver::CharacterView::~CharacterView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203190  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(boost::shared_ptr<Caver::GUIView> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003FFEB0  Caver::MenuViewPage::~MenuViewPage()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 207
 *   insn=0x00000000003FF5F8 string=0x00000000003FF5FC "U"
 *   insn=0x00000000003FF608 string=0x00000000003FF60C "("
 *   insn=0x00000000003FF60C string=0x00000000003FF610 ""
 *   insn=0x00000000003FF610 string=0x00000000003FF614 "t"
 *   insn=0x00000000003FF614 string=0x00000000003FF618 "\tA"
 *   insn=0x00000000003FF618 string=0x00000000003FF61C ""
 *   insn=0x00000000003FF61C string=0x00000000003FF620 "i"
 *   insn=0x00000000003FF620 string=0x00000000003FF624 "h~"
 *   insn=0x00000000003FF624 string=0x00000000003FF628 "4"
 *   insn=0x00000000003FF628 string=0x00000000003FF66C "t"
 *   insn=0x00000000003FF62C string=0x00000000003FF630 ""
 *   insn=0x00000000003FF63C string=0x00000000003FF640 "\t@"
 *   insn=0x00000000003FF64C string=0x00000000003FF650 ""
 *   insn=0x00000000003FF65C string=0x00000000003FF660 "@"
 *   insn=0x00000000003FF66C string=0x00000000003FF670 "4"
 *   insn=0x00000000003FF670 string=0x00000000003FF6B4 "t"
 *   insn=0x00000000003FF674 string=0x00000000003FF678 ""
 *   insn=0x00000000003FF684 string=0x00000000003FF688 "\t@"
 *   insn=0x00000000003FF694 string=0x00000000003FF698 ""
 *   insn=0x00000000003FF6A4 string=0x00000000003FF6A8 "@"
 *   insn=0x00000000003FF6B4 string=0x00000000003FF6B8 "4"
 *   insn=0x00000000003FF6B8 string=0x00000000003FF6FC "t"
 *   insn=0x00000000003FF6BC string=0x00000000003FF6C0 ""
 *   insn=0x00000000003FF6CC string=0x00000000003FF6D0 "\t@"
 *   insn=0x00000000003FF6DC string=0x00000000003FF6E0 ""
 *   insn=0x00000000003FF6EC string=0x00000000003FF6F0 "@"
 *   insn=0x00000000003FF6FC string=0x00000000003FF700 "4"
 *   insn=0x00000000003FF700 string=0x00000000003FF744 "`"
 *   insn=0x00000000003FF704 string=0x00000000003FF708 ""
 *   insn=0x00000000003FF714 string=0x00000000003FF718 "\t@"
 *   insn=0x00000000003FF724 string=0x00000000003FF728 ""
 *   insn=0x00000000003FF734 string=0x00000000003FF738 "@"
 *   insn=0x00000000003FF748 string=0x00000000003FF74C "t"
 *   insn=0x00000000003FF74C string=0x00000000003FF750 "4"
 *   insn=0x00000000003FF750 string=0x00000000003FF794 "t"
 *   insn=0x00000000003FF754 string=0x00000000003FF758 ""
 *   insn=0x00000000003FF764 string=0x00000000003FF768 "\t@"
 *   insn=0x00000000003FF774 string=0x00000000003FF778 ""
 *   insn=0x00000000003FF784 string=0x00000000003FF788 "@"
 *   insn=0x00000000003FF794 string=0x00000000003FF798 "4"
 *   insn=0x00000000003FF798 string=0x00000000003FF7DC "t"
 *   insn=0x00000000003FF79C string=0x00000000003FF7A0 ""
 *   insn=0x00000000003FF7AC string=0x00000000003FF7B0 "\t@"
 *   insn=0x00000000003FF7BC string=0x00000000003FF7C0 ""
 *   insn=0x00000000003FF7CC string=0x00000000003FF7D0 "@"
 *   insn=0x00000000003FF7DC string=0x00000000003FF7E0 "4"
 *   insn=0x00000000003FF7E0 string=0x00000000003FF824 "t"
 *   insn=0x00000000003FF7E4 string=0x00000000003FF7E8 ""
 *   insn=0x00000000003FF7F4 string=0x00000000003FF7F8 "\t@"
 *   insn=0x00000000003FF804 string=0x00000000003FF808 ""
 *   insn=0x00000000003FF814 string=0x00000000003FF818 "@"
 *   insn=0x00000000003FF824 string=0x00000000003FF828 "4"
 *   insn=0x00000000003FF828 string=0x00000000003FF86C "t"
 *   insn=0x00000000003FF82C string=0x00000000003FF830 ""
 *   insn=0x00000000003FF83C string=0x00000000003FF840 "\t@"
 *   insn=0x00000000003FF84C string=0x00000000003FF850 ""
 *   insn=0x00000000003FF85C string=0x00000000003FF860 "@"
 *   insn=0x00000000003FF86C string=0x00000000003FF870 "4"
 *   insn=0x00000000003FF870 string=0x00000000003FF8B4 "t"
 *   insn=0x00000000003FF874 string=0x00000000003FF878 ""
 *   insn=0x00000000003FF884 string=0x00000000003FF888 "\t@"
 *   insn=0x00000000003FF894 string=0x00000000003FF898 ""
 *   insn=0x00000000003FF8A4 string=0x00000000003FF8A8 "@"
 *   insn=0x00000000003FF8B4 string=0x00000000003FF8B8 "4"
 *   insn=0x00000000003FF8B8 string=0x00000000003FF8FC "t"
 *   insn=0x00000000003FF8BC string=0x00000000003FF8C0 ""
 *   insn=0x00000000003FF8CC string=0x00000000003FF8D0 "\t@"
 *   insn=0x00000000003FF8DC string=0x00000000003FF8E0 ""
 *   insn=0x00000000003FF8EC string=0x00000000003FF8F0 "@"
 *   insn=0x00000000003FF8FC string=0x00000000003FF900 "4"
 *   insn=0x00000000003FF900 string=0x00000000003FF944 "t"
 *   insn=0x00000000003FF904 string=0x00000000003FF908 ""
 *   insn=0x00000000003FF914 string=0x00000000003FF918 "\t@"
 *   insn=0x00000000003FF924 string=0x00000000003FF928 ""
 *   insn=0x00000000003FF934 string=0x00000000003FF938 "@"
 *   insn=0x00000000003FF944 string=0x00000000003FF948 "4"
 *   insn=0x00000000003FF948 string=0x00000000003FF98C "hz@"
 *   insn=0x00000000003FF94C string=0x00000000003FF950 ""
 *   insn=0x00000000003FF95C string=0x00000000003FF960 "\t@"
 *   insn=0x00000000003FF96C string=0x00000000003FF970 ""
 *   insn=0x00000000003FF97C string=0x00000000003FF980 "@"
 *   insn=0x00000000003FF98C string=0x00000000003FF990 ")"
 *   insn=0x00000000003FF990 string=0x00000000003FF994 "*"
 *   insn=0x00000000003FF994 string=0x00000000003FF998 ")"
 *   insn=0x00000000003FF998 string=0x00000000003FF99C "J"
 *   insn=0x00000000003FF9A0 string=0x00000000003FF9A4 ")A"
 *   insn=0x00000000003FF9A8 string=0x00000000003FF9AC "i"
 *   insn=0x00000000003FF9B0 string=0x00000000003FF9E0 ")"
 *   insn=0x00000000003FF9C8 string=0x00000000003FFA24 "+"
 *   insn=0x00000000003FF9E0 string=0x00000000003FF9E4 ")=G"
 *   insn=0x00000000003FF9E4 string=0x00000000003FF9E8 "!"
 *   insn=0x00000000003FF9EC string=0x00000000003FF9F0 "\t"
 *   insn=0x00000000003FF9EC string=0x00000000003FFA04 "\t"
 *   insn=0x00000000003FF9F0 string=0x00000000003FF9F4 "*"
 *   insn=0x00000000003FF9F4 string=0x00000000003FF9F8 "\n"
 *   insn=0x00000000003FFA00 string=0x00000000003FFA10 "?"
 *   insn=0x00000000003FFA04 string=0x00000000003FFA08 "*"
 *   insn=0x00000000003FFA08 string=0x00000000003FFA0C "\n"
 *   insn=0x00000000003FFA18 string=0x00000000003FFA1C "b"
 *   insn=0x00000000003FFA24 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003FFA2C string=0x00000000003FFDF4 "hz@"
 *   insn=0x00000000003FFA30 string=0x00000000003FFA34 "u"
 *   insn=0x00000000003FFA40 string=0x00000000003FFA44 "u"
 *   insn=0x00000000003FFA44 string=0x00000000003FFA48 "5"
 *   insn=0x00000000003FFA4C string=0x00000000003FFDAC "u"
 *   insn=0x00000000003FFA50 string=0x00000000003FFA54 "u"
 *   insn=0x00000000003FFA54 string=0x00000000003FFA58 "u"
 *   insn=0x00000000003FFA5C string=0x00000000003FFD64 "u"
 *   insn=0x00000000003FFA60 string=0x00000000003FFA64 "u"
 *   insn=0x00000000003FFA6C string=0x00000000003FFD1C "u"
 *   insn=0x00000000003FFA70 string=0x00000000003FFA74 "u"
 *   insn=0x00000000003FFA7C string=0x00000000003FFCD4 "u"
 *   insn=0x00000000003FFA80 string=0x00000000003FFA84 "u"
 *   insn=0x00000000003FFA84 string=0x00000000003FFA88 "5"
 *   insn=0x00000000003FFA8C string=0x00000000003FFC8C "u"
 *   insn=0x00000000003FFA90 string=0x00000000003FFA94 "u"
 *   insn=0x00000000003FFA94 string=0x00000000003FFA98 "u"
 *   insn=0x00000000003FFA98 string=0x00000000003FFA9C "j"
 *   insn=0x00000000003FFA9C string=0x00000000003FFC44 "u"
 *   insn=0x00000000003FFAA0 string=0x00000000003FFAA4 "@"
 *   insn=0x00000000003FFAA4 string=0x00000000003FFBA4 "`"
 *   insn=0x00000000003FFAA8 string=0x00000000003FFAAC "u"
 *   insn=0x00000000003FFAB0 string=0x00000000003FFAB4 "<"
 *   insn=0x00000000003FFAB8 string=0x00000000003FFABC "u"
 *   insn=0x00000000003FFAC0 string=0x00000000003FFAC4 "&"
 *   insn=0x00000000003FFAC4 string=0x00000000003FFB5C "u"
 *   insn=0x00000000003FFACC string=0x00000000003FFAD0 "5"
 *   insn=0x00000000003FFAD0 string=0x00000000003FFB14 "u"
 *   insn=0x00000000003FFAD4 string=0x00000000003FFAD8 ""
 *   insn=0x00000000003FFAE4 string=0x00000000003FFAE8 "\t@"
 *   insn=0x00000000003FFAF4 string=0x00000000003FFAF8 ""
 *   insn=0x00000000003FFB04 string=0x00000000003FFB08 "@"
 *   insn=0x00000000003FFB14 string=0x00000000003FFB18 "5"
 *   insn=0x00000000003FFB1C string=0x00000000003FFB20 ""
 *   insn=0x00000000003FFB2C string=0x00000000003FFB30 "\t@"
 *   insn=0x00000000003FFB3C string=0x00000000003FFB40 ""
 *   insn=0x00000000003FFB4C string=0x00000000003FFB50 "@"
 *   insn=0x00000000003FFB5C string=0x00000000003FFB60 "5"
 *   insn=0x00000000003FFB64 string=0x00000000003FFB68 ""
 *   insn=0x00000000003FFB74 string=0x00000000003FFB78 "\t@"
 *   insn=0x00000000003FFB84 string=0x00000000003FFB88 ""
 *   insn=0x00000000003FFB94 string=0x00000000003FFB98 "@"
 *   insn=0x00000000003FFBA4 string=0x00000000003FFBA8 "z"
 *   insn=0x00000000003FFBAC string=0x00000000003FFBB4 "u"
 *   insn=0x00000000003FFBB4 string=0x00000000003FFBB8 "5"
 *   insn=0x00000000003FFBB8 string=0x00000000003FFBFC "u"
 *   insn=0x00000000003FFBBC string=0x00000000003FFBC0 ""
 *   insn=0x00000000003FFBCC string=0x00000000003FFBD0 "\t@"
 *   insn=0x00000000003FFBDC string=0x00000000003FFBE0 ""
 *   insn=0x00000000003FFBEC string=0x00000000003FFBF0 "@"
 *   insn=0x00000000003FFBFC string=0x00000000003FFC00 "5"
 *   insn=0x00000000003FFC04 string=0x00000000003FFC08 ""
 *   insn=0x00000000003FFC14 string=0x00000000003FFC18 "\t@"
 *   insn=0x00000000003FFC24 string=0x00000000003FFC28 ""
 *   insn=0x00000000003FFC34 string=0x00000000003FFC38 "@"
 *   insn=0x00000000003FFC44 string=0x00000000003FFC48 "5"
 *   insn=0x00000000003FFC4C string=0x00000000003FFC50 ""
 *   insn=0x00000000003FFC5C string=0x00000000003FFC60 "\t@"
 *   insn=0x00000000003FFC6C string=0x00000000003FFC70 ""
 *   insn=0x00000000003FFC7C string=0x00000000003FFC80 "@"
 *   insn=0x00000000003FFC8C string=0x00000000003FFC90 "5"
 *   insn=0x00000000003FFC94 string=0x00000000003FFC98 ""
 *   insn=0x00000000003FFCA4 string=0x00000000003FFCA8 "\t@"
 *   insn=0x00000000003FFCB4 string=0x00000000003FFCB8 ""
 *   insn=0x00000000003FFCC4 string=0x00000000003FFCC8 "@"
 *   insn=0x00000000003FFCD4 string=0x00000000003FFCD8 "5"
 *   insn=0x00000000003FFCDC string=0x00000000003FFCE0 ""
 *   insn=0x00000000003FFCEC string=0x00000000003FFCF0 "\t@"
 *   insn=0x00000000003FFCFC string=0x00000000003FFD00 ""
 *   insn=0x00000000003FFD0C string=0x00000000003FFD10 "@"
 *   insn=0x00000000003FFD1C string=0x00000000003FFD20 "5"
 *   insn=0x00000000003FFD24 string=0x00000000003FFD28 ""
 *   insn=0x00000000003FFD34 string=0x00000000003FFD38 "\t@"
 *   insn=0x00000000003FFD44 string=0x00000000003FFD48 ""
 *   insn=0x00000000003FFD54 string=0x00000000003FFD58 "@"
 *   insn=0x00000000003FFD64 string=0x00000000003FFD68 "5"
 *   insn=0x00000000003FFD6C string=0x00000000003FFD70 ""
 *   insn=0x00000000003FFD7C string=0x00000000003FFD80 "\t@"
 *   insn=0x00000000003FFD8C string=0x00000000003FFD90 ""
 *   insn=0x00000000003FFD9C string=0x00000000003FFDA0 "@"
 *   insn=0x00000000003FFDAC string=0x00000000003FFDB0 "5"
 *   insn=0x00000000003FFDB4 string=0x00000000003FFDB8 ""
 *   insn=0x00000000003FFDC4 string=0x00000000003FFDC8 "\t@"
 *   insn=0x00000000003FFDD4 string=0x00000000003FFDD8 ""
 *   insn=0x00000000003FFDE4 string=0x00000000003FFDE8 "@"
 *   insn=0x00000000003FFDF4 string=0x00000000003FFDF8 ")"
 *   insn=0x00000000003FFDF8 string=0x00000000003FFDFC "*"
 *   insn=0x00000000003FFDFC string=0x00000000003FFE00 ")"
 *   insn=0x00000000003FFE00 string=0x00000000003FFE04 "J"
 *   insn=0x00000000003FFE08 string=0x00000000003FFE0C ")A"
 *   insn=0x00000000003FFE10 string=0x00000000003FFE14 "i"
 *   insn=0x00000000003FFE18 string=0x00000000003FFE1C ")"
 *   insn=0x00000000003FFE1C string=0x00000000003FFE20 ")=G"
 *   insn=0x00000000003FFE20 string=0x00000000003FFE24 "!"
 *   insn=0x00000000003FFE28 string=0x00000000003FFE2C "\t"
 *   insn=0x00000000003FFE28 string=0x00000000003FFE5C "\t"
 *   insn=0x00000000003FFE2C string=0x00000000003FFE30 "*"
 *   insn=0x00000000003FFE30 string=0x00000000003FFE34 "\n"
 *   insn=0x00000000003FFE38 string=0x00000000003FFE3C "?"
 *   insn=0x00000000003FFE3C string=0x00000000003FFE40 "l"
 *   insn=0x00000000003FFE44 string=0x00000000003FFE48 "W"
 *   insn=0x00000000003FFE5C string=0x00000000003FFE60 "*"
 *   insn=0x00000000003FFE60 string=0x00000000003FFE64 "\n"
 *   insn=0x00000000003FFE64 string=0x00000000003FFE68 "?"
 *   insn=0x00000000003FFE84 string=0x00000000003FFE88 "N"
 *   insn=0x00000000003FFE88 string=0x00000000001F73C0 "0'"
 *   insn=0x00000000003FFE98 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharacterView::~CharacterView(Caver::CharacterView *this)
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
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8
  _QWORD *v29; // x20
  __int64 v30; // x8
  __int64 v31; // x8
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  void *v39; // x0
  unsigned int *v40; // x8
  int v41; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 60);
  *(_QWORD *)this = off_6D11E0;
  *((_QWORD *)this + 31) = &off_6D1330;
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
  v5 = (_QWORD *)*((_QWORD *)this + 58);
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
  v8 = (_QWORD *)*((_QWORD *)this + 56);
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
  v11 = (_QWORD *)*((_QWORD *)this + 54);
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
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(*((void **)this + 50));
  v14 = (_QWORD *)*((_QWORD *)this + 48);
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
  v17 = (_QWORD *)*((_QWORD *)this + 46);
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
  v20 = (_QWORD *)*((_QWORD *)this + 44);
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
  v23 = (_QWORD *)*((_QWORD *)this + 42);
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
  v26 = (_QWORD *)*((_QWORD *)this + 40);
  if ( v26 )
  {
    v27 = v26[1] - 1LL;
    v26[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  v29 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v29 )
  {
    v30 = v29[1] - 1LL;
    v29[1] = v30;
    if ( !v30 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      v31 = v29[2] - 1LL;
      v29[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
    }
  }
  v32 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v32 )
  {
    v33 = v32[1] - 1LL;
    v32[1] = v33;
    if ( !v33 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
      v34 = v32[2] - 1LL;
      v32[2] = v34;
      if ( !v34 )
        (*(void (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
    }
  }
  v35 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v35 )
  {
    v36 = v35[1] - 1LL;
    v35[1] = v36;
    if ( !v36 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
      v37 = v35[2] - 1LL;
      v35[2] = v37;
      if ( !v37 )
        (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
    }
  }
  v38 = *((_QWORD *)this + 30);
  v39 = (void *)(v38 - 24);
  *(_QWORD *)this = off_6D13B8;
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
  {
    v40 = (unsigned int *)(v38 - 8);
    if ( &pthread_create )
    {
      do
        v41 = __ldaxr(v40);
      while ( __stlxr(v41 - 1, v40) );
    }
    else
    {
      v41 = (*v40)--;
    }
    if ( v41 <= 0 )
      operator delete(v39);
  }
  Caver::GUIView::~GUIView(this);
}

