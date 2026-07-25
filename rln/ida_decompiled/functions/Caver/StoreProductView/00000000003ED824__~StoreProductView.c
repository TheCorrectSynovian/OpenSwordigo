/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ED824
 * Mangled: _ZN5Caver16StoreProductViewD2Ev
 * Demangled: Caver::StoreProductView::~StoreProductView()
 *
 * Callers: 1
 *   0x00000000001FA320  Caver::StoreProductView::~StoreProductView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA320  Caver::StoreProductView::~StoreProductView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 84
 *   insn=0x00000000003ED838 string=0x00000000003ED83C "t"
 *   insn=0x00000000003ED83C string=0x00000000003ED840 ""
 *   insn=0x00000000003ED840 string=0x00000000003ED844 "A"
 *   insn=0x00000000003ED844 string=0x00000000003ED848 "h"
 *   insn=0x00000000003ED848 string=0x00000000003ED84C "4"
 *   insn=0x00000000003ED84C string=0x00000000003ED890 "t"
 *   insn=0x00000000003ED850 string=0x00000000003ED854 ""
 *   insn=0x00000000003ED860 string=0x00000000003ED864 "\t@"
 *   insn=0x00000000003ED870 string=0x00000000003ED874 ""
 *   insn=0x00000000003ED880 string=0x00000000003ED884 "@"
 *   insn=0x00000000003ED890 string=0x00000000003ED894 "4"
 *   insn=0x00000000003ED894 string=0x00000000003ED8D8 "t"
 *   insn=0x00000000003ED898 string=0x00000000003ED89C ""
 *   insn=0x00000000003ED8A8 string=0x00000000003ED8AC "\t@"
 *   insn=0x00000000003ED8B8 string=0x00000000003ED8BC ""
 *   insn=0x00000000003ED8C8 string=0x00000000003ED8CC "@"
 *   insn=0x00000000003ED8D8 string=0x00000000003ED8DC "4"
 *   insn=0x00000000003ED8DC string=0x00000000003ED920 "t"
 *   insn=0x00000000003ED8E0 string=0x00000000003ED8E4 ""
 *   insn=0x00000000003ED8F0 string=0x00000000003ED8F4 "\t@"
 *   insn=0x00000000003ED900 string=0x00000000003ED904 ""
 *   insn=0x00000000003ED910 string=0x00000000003ED914 "@"
 *   insn=0x00000000003ED920 string=0x00000000003ED924 "4"
 *   insn=0x00000000003ED924 string=0x00000000003ED968 "t"
 *   insn=0x00000000003ED928 string=0x00000000003ED92C ""
 *   insn=0x00000000003ED938 string=0x00000000003ED93C "\t@"
 *   insn=0x00000000003ED948 string=0x00000000003ED94C ""
 *   insn=0x00000000003ED958 string=0x00000000003ED95C "@"
 *   insn=0x00000000003ED968 string=0x00000000003ED96C "4"
 *   insn=0x00000000003ED96C string=0x00000000003ED9B0 "t~@"
 *   insn=0x00000000003ED970 string=0x00000000003ED974 ""
 *   insn=0x00000000003ED980 string=0x00000000003ED984 "\t@"
 *   insn=0x00000000003ED990 string=0x00000000003ED994 ""
 *   insn=0x00000000003ED9A0 string=0x00000000003ED9A4 "@"
 *   insn=0x00000000003ED9B0 string=0x00000000003ED9B4 "4"
 *   insn=0x00000000003ED9B8 string=0x00000000003ED9BC ""
 *   insn=0x00000000003ED9C8 string=0x00000000003ED9CC "\t@"
 *   insn=0x00000000003ED9D8 string=0x00000000003ED9DC ""
 *   insn=0x00000000003ED9E8 string=0x00000000003ED9EC "@"
 *   insn=0x00000000003EDA04 string=0x00000000003EDA08 "\nE"
 *   insn=0x00000000003EDA0C string=0x00000000003EDA10 "l"
 *   insn=0x00000000003EDA14 string=0x00000000003EDA18 "u~@"
 *   insn=0x00000000003EDA18 string=0x00000000003EDA1C "5"
 *   insn=0x00000000003EDA1C string=0x00000000003EDA20 "h"
 *   insn=0x00000000003EDA24 string=0x00000000003EDA28 "u"
 *   insn=0x00000000003EDA28 string=0x00000000003EDA2C "u"
 *   insn=0x00000000003EDA2C string=0x00000000003EDA30 "R"
 *   insn=0x00000000003EDA30 string=0x00000000003EDB78 "u~@"
 *   insn=0x00000000003EDA34 string=0x00000000003EDA38 "u"
 *   insn=0x00000000003EDA3C string=0x00000000003EDA40 "<"
 *   insn=0x00000000003EDA40 string=0x00000000003EDB30 "u"
 *   insn=0x00000000003EDA44 string=0x00000000003EDA48 "u"
 *   insn=0x00000000003EDA4C string=0x00000000003EDA50 "&"
 *   insn=0x00000000003EDA50 string=0x00000000003EDAE8 "u"
 *   insn=0x00000000003EDA58 string=0x00000000003EDA5C "5"
 *   insn=0x00000000003EDA5C string=0x00000000003EDAA0 "u"
 *   insn=0x00000000003EDA60 string=0x00000000003EDA64 ""
 *   insn=0x00000000003EDA70 string=0x00000000003EDA74 "\t@"
 *   insn=0x00000000003EDA80 string=0x00000000003EDA84 ""
 *   insn=0x00000000003EDA90 string=0x00000000003EDA94 "@"
 *   insn=0x00000000003EDAA0 string=0x00000000003EDAA4 "5"
 *   insn=0x00000000003EDAA8 string=0x00000000003EDAAC ""
 *   insn=0x00000000003EDAB8 string=0x00000000003EDABC "\t@"
 *   insn=0x00000000003EDAC8 string=0x00000000003EDACC ""
 *   insn=0x00000000003EDAD8 string=0x00000000003EDADC "@"
 *   insn=0x00000000003EDAE8 string=0x00000000003EDAEC "5"
 *   insn=0x00000000003EDAF0 string=0x00000000003EDAF4 ""
 *   insn=0x00000000003EDB00 string=0x00000000003EDB04 "\t@"
 *   insn=0x00000000003EDB10 string=0x00000000003EDB14 ""
 *   insn=0x00000000003EDB20 string=0x00000000003EDB24 "@"
 *   insn=0x00000000003EDB30 string=0x00000000003EDB34 "5"
 *   insn=0x00000000003EDB38 string=0x00000000003EDB3C ""
 *   insn=0x00000000003EDB48 string=0x00000000003EDB4C "\t@"
 *   insn=0x00000000003EDB58 string=0x00000000003EDB5C ""
 *   insn=0x00000000003EDB68 string=0x00000000003EDB6C "@"
 *   insn=0x00000000003EDB78 string=0x00000000003EDB7C "5"
 *   insn=0x00000000003EDB80 string=0x00000000003EDB84 ""
 *   insn=0x00000000003EDB90 string=0x00000000003EDB94 "\t@"
 *   insn=0x00000000003EDBA0 string=0x00000000003EDBA4 ""
 *   insn=0x00000000003EDBB0 string=0x00000000003EDBB4 "@"
 *   insn=0x00000000003EDBC8 string=0x00000000003EDBCC ">O"
 *   insn=0x00000000003EDBE4 string=0x00000000001FA320 "0'"
 *   insn=0x00000000003EDBF4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003EDC04 string=0x00000000003EDC08 "/O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreProductView::~StoreProductView(Caver::StoreProductView *this)
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

  v2 = (_QWORD *)*((_QWORD *)this + 41);
  *(_QWORD *)this = off_6D0B70;
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
  v5 = (_QWORD *)*((_QWORD *)this + 39);
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
  v8 = (_QWORD *)*((_QWORD *)this + 37);
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
  v11 = (_QWORD *)*((_QWORD *)this + 35);
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
  v14 = (_QWORD *)*((_QWORD *)this + 33);
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
  v17 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

