/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000416844
 * Mangled: _ZN5Caver17ItemInfoPopupViewD2Ev
 * Demangled: Caver::ItemInfoPopupView::~ItemInfoPopupView()
 *
 * Callers: 1
 *   0x00000000001FBE50  Caver::ItemInfoPopupView::~ItemInfoPopupView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBE50  Caver::ItemInfoPopupView::~ItemInfoPopupView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000416B8C  Caver::ItemInfoView::ItemInfoView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x0000000000416858 string=0x000000000041685C "t"
 *   insn=0x000000000041685C string=0x0000000000416860 "%@"
 *   insn=0x0000000000416860 string=0x0000000000416864 "A"
 *   insn=0x0000000000416864 string=0x0000000000416868 "h"
 *   insn=0x0000000000416868 string=0x000000000041686C "4"
 *   insn=0x000000000041686C string=0x00000000004168B0 "t"
 *   insn=0x0000000000416870 string=0x0000000000416874 ""
 *   insn=0x0000000000416880 string=0x0000000000416884 "\t@"
 *   insn=0x0000000000416890 string=0x0000000000416894 ""
 *   insn=0x00000000004168A0 string=0x00000000004168A4 "@"
 *   insn=0x00000000004168B0 string=0x00000000004168B4 "4"
 *   insn=0x00000000004168B4 string=0x00000000004168F8 "t"
 *   insn=0x00000000004168B8 string=0x00000000004168BC ""
 *   insn=0x00000000004168C8 string=0x00000000004168CC "\t@"
 *   insn=0x00000000004168D8 string=0x00000000004168DC ""
 *   insn=0x00000000004168E8 string=0x00000000004168EC "@"
 *   insn=0x00000000004168F8 string=0x00000000004168FC "4"
 *   insn=0x00000000004168FC string=0x0000000000416940 "t"
 *   insn=0x0000000000416900 string=0x0000000000416904 ""
 *   insn=0x0000000000416910 string=0x0000000000416914 "\t@"
 *   insn=0x0000000000416920 string=0x0000000000416924 ""
 *   insn=0x0000000000416930 string=0x0000000000416934 "@"
 *   insn=0x0000000000416940 string=0x0000000000416944 "4"
 *   insn=0x0000000000416944 string=0x0000000000416988 "t~@"
 *   insn=0x0000000000416948 string=0x000000000041694C ""
 *   insn=0x0000000000416958 string=0x000000000041695C "\t@"
 *   insn=0x0000000000416968 string=0x000000000041696C ""
 *   insn=0x0000000000416978 string=0x000000000041697C "@"
 *   insn=0x0000000000416988 string=0x000000000041698C "4"
 *   insn=0x0000000000416990 string=0x0000000000416994 ""
 *   insn=0x00000000004169A0 string=0x00000000004169A4 "\t@"
 *   insn=0x00000000004169B0 string=0x00000000004169B4 ""
 *   insn=0x00000000004169C0 string=0x00000000004169C4 "@"
 *   insn=0x00000000004169E4 string=0x00000000004169E8 "V"
 *   insn=0x00000000004169EC string=0x00000000004169F0 "u~@"
 *   insn=0x00000000004169F0 string=0x00000000004169F4 "u"
 *   insn=0x00000000004169F4 string=0x00000000004169F8 "R"
 *   insn=0x00000000004169FC string=0x0000000000416A00 "u"
 *   insn=0x0000000000416A04 string=0x0000000000416A08 "<"
 *   insn=0x0000000000416A08 string=0x0000000000416AF8 "u~@"
 *   insn=0x0000000000416A0C string=0x0000000000416A10 "u"
 *   insn=0x0000000000416A14 string=0x0000000000416A18 "&"
 *   insn=0x0000000000416A18 string=0x0000000000416AB0 "u"
 *   insn=0x0000000000416A20 string=0x0000000000416A24 "5"
 *   insn=0x0000000000416A24 string=0x0000000000416A68 "u"
 *   insn=0x0000000000416A28 string=0x0000000000416A2C ""
 *   insn=0x0000000000416A38 string=0x0000000000416A3C "\t@"
 *   insn=0x0000000000416A48 string=0x0000000000416A4C ""
 *   insn=0x0000000000416A58 string=0x0000000000416A5C "@"
 *   insn=0x0000000000416A68 string=0x0000000000416A6C "5"
 *   insn=0x0000000000416A70 string=0x0000000000416A74 ""
 *   insn=0x0000000000416A80 string=0x0000000000416A84 "\t@"
 *   insn=0x0000000000416A90 string=0x0000000000416A94 ""
 *   insn=0x0000000000416AA0 string=0x0000000000416AA4 "@"
 *   insn=0x0000000000416AB0 string=0x0000000000416AB4 "5"
 *   insn=0x0000000000416AB8 string=0x0000000000416ABC ""
 *   insn=0x0000000000416AC8 string=0x0000000000416ACC "\t@"
 *   insn=0x0000000000416AD8 string=0x0000000000416ADC ""
 *   insn=0x0000000000416AE8 string=0x0000000000416AEC "@"
 *   insn=0x0000000000416AF8 string=0x0000000000416AFC "5"
 *   insn=0x0000000000416B00 string=0x0000000000416B04 ""
 *   insn=0x0000000000416B10 string=0x0000000000416B14 "\t@"
 *   insn=0x0000000000416B20 string=0x0000000000416B24 ""
 *   insn=0x0000000000416B30 string=0x0000000000416B34 "@"
 *   insn=0x0000000000416B48 string=0x0000000000416B4C "^"
 *   insn=0x0000000000416B64 string=0x00000000001FBE50 "0'"
 *   insn=0x0000000000416B74 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000416B84 string=0x0000000000416B88 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemInfoPopupView::~ItemInfoPopupView(Caver::ItemInfoPopupView *this)
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

  v2 = (_QWORD *)*((_QWORD *)this + 39);
  *(_QWORD *)this = off_6D2430;
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
  v5 = (_QWORD *)*((_QWORD *)this + 37);
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
  v8 = (_QWORD *)*((_QWORD *)this + 35);
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
  v11 = (_QWORD *)*((_QWORD *)this + 33);
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
  v14 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

