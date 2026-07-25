/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EF938
 * Mangled: _ZN5Caver9StoreViewD2Ev
 * Demangled: Caver::StoreView::~StoreView()
 *
 * Callers: 1
 *   0x00000000001F50F0  Caver::StoreView::~StoreView()
 *
 * Callees: 6
 *   0x00000000001F50F0  Caver::StoreView::~StoreView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003EFD58  Caver::StoreView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 89
 *   insn=0x00000000003EF94C string=0x00000000003EF950 "tZT"
 *   insn=0x00000000003EF950 string=0x00000000003EF954 ""
 *   insn=0x00000000003EF958 string=0x00000000003EF95C "A"
 *   insn=0x00000000003EF95C string=0x00000000003EF960 "h"
 *   insn=0x00000000003EF964 string=0x00000000003EF9C0 "t"
 *   insn=0x00000000003EF968 string=0x00000000003EF96C "5"
 *   insn=0x00000000003EF970 string=0x00000000003EF974 ""
 *   insn=0x00000000003EF980 string=0x00000000003EF984 "\t@"
 *   insn=0x00000000003EF990 string=0x00000000003EF994 ""
 *   insn=0x00000000003EF9A0 string=0x00000000003EF9A4 "@"
 *   insn=0x00000000003EF9B8 string=0x00000000003EF9BC "t"
 *   insn=0x00000000003EF9C0 string=0x00000000003EF9CC "t"
 *   insn=0x00000000003EF9C4 string=0x00000000003EF9C8 ":"
 *   insn=0x00000000003EF9C8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003EF9CC string=0x00000000003EF9D0 "4"
 *   insn=0x00000000003EF9D0 string=0x00000000003EFA14 "t"
 *   insn=0x00000000003EF9D4 string=0x00000000003EF9D8 ""
 *   insn=0x00000000003EF9E4 string=0x00000000003EF9E8 "\t@"
 *   insn=0x00000000003EF9F4 string=0x00000000003EF9F8 ""
 *   insn=0x00000000003EFA04 string=0x00000000003EFA08 "@"
 *   insn=0x00000000003EFA14 string=0x00000000003EFA18 "4"
 *   insn=0x00000000003EFA18 string=0x00000000003EFA5C "t"
 *   insn=0x00000000003EFA1C string=0x00000000003EFA20 ""
 *   insn=0x00000000003EFA2C string=0x00000000003EFA30 "\t@"
 *   insn=0x00000000003EFA3C string=0x00000000003EFA40 ""
 *   insn=0x00000000003EFA4C string=0x00000000003EFA50 "@"
 *   insn=0x00000000003EFA5C string=0x00000000003EFA60 "4"
 *   insn=0x00000000003EFA60 string=0x00000000003EFAA4 "t"
 *   insn=0x00000000003EFA64 string=0x00000000003EFA68 ""
 *   insn=0x00000000003EFA74 string=0x00000000003EFA78 "\t@"
 *   insn=0x00000000003EFA84 string=0x00000000003EFA88 ""
 *   insn=0x00000000003EFA94 string=0x00000000003EFA98 "@"
 *   insn=0x00000000003EFAA4 string=0x00000000003EFAA8 "4"
 *   insn=0x00000000003EFAA8 string=0x00000000003EFAEC "t~@"
 *   insn=0x00000000003EFAAC string=0x00000000003EFAB0 ""
 *   insn=0x00000000003EFABC string=0x00000000003EFAC0 "\t@"
 *   insn=0x00000000003EFACC string=0x00000000003EFAD0 ""
 *   insn=0x00000000003EFADC string=0x00000000003EFAE0 "@"
 *   insn=0x00000000003EFAEC string=0x00000000003EFAF0 "4"
 *   insn=0x00000000003EFAF4 string=0x00000000003EFAF8 ""
 *   insn=0x00000000003EFB04 string=0x00000000003EFB08 "\t@"
 *   insn=0x00000000003EFB14 string=0x00000000003EFB18 ""
 *   insn=0x00000000003EFB24 string=0x00000000003EFB28 "@"
 *   insn=0x00000000003EFB48 string=0x00000000003EFB4C "p"
 *   insn=0x00000000003EFB50 string=0x00000000003EFB54 "u~@"
 *   insn=0x00000000003EFB58 string=0x00000000003EFB5C "l"
 *   insn=0x00000000003EFB60 string=0x00000000003EFB64 "u"
 *   insn=0x00000000003EFB68 string=0x00000000003EFB6C "V"
 *   insn=0x00000000003EFB6C string=0x00000000003EFCC4 "u~@"
 *   insn=0x00000000003EFB70 string=0x00000000003EFB74 "u"
 *   insn=0x00000000003EFB74 string=0x00000000003EFB78 "5"
 *   insn=0x00000000003EFB78 string=0x00000000003EFB7C "@"
 *   insn=0x00000000003EFB7C string=0x00000000003EFC7C "u"
 *   insn=0x00000000003EFB80 string=0x00000000003EFB84 "u"
 *   insn=0x00000000003EFB84 string=0x00000000003EFB88 "u"
 *   insn=0x00000000003EFB88 string=0x00000000003EFB8C "*"
 *   insn=0x00000000003EFB8C string=0x00000000003EFC34 "u"
 *   insn=0x00000000003EFB94 string=0x00000000003EFB98 "h"
 *   insn=0x00000000003EFB98 string=0x00000000003EFBA4 "u"
 *   insn=0x00000000003EFBA4 string=0x00000000003EFBA8 "5"
 *   insn=0x00000000003EFBA8 string=0x00000000003EFBEC "u"
 *   insn=0x00000000003EFBAC string=0x00000000003EFBB0 ""
 *   insn=0x00000000003EFBBC string=0x00000000003EFBC0 "\t@"
 *   insn=0x00000000003EFBCC string=0x00000000003EFBD0 ""
 *   insn=0x00000000003EFBDC string=0x00000000003EFBE0 "@"
 *   insn=0x00000000003EFBEC string=0x00000000003EFBF0 "5"
 *   insn=0x00000000003EFBF4 string=0x00000000003EFBF8 ""
 *   insn=0x00000000003EFC04 string=0x00000000003EFC08 "\t@"
 *   insn=0x00000000003EFC14 string=0x00000000003EFC18 ""
 *   insn=0x00000000003EFC24 string=0x00000000003EFC28 "@"
 *   insn=0x00000000003EFC34 string=0x00000000003EFC38 "5"
 *   insn=0x00000000003EFC3C string=0x00000000003EFC40 ""
 *   insn=0x00000000003EFC4C string=0x00000000003EFC50 "\t@"
 *   insn=0x00000000003EFC5C string=0x00000000003EFC60 ""
 *   insn=0x00000000003EFC6C string=0x00000000003EFC70 "@"
 *   insn=0x00000000003EFC7C string=0x00000000003EFC80 "5"
 *   insn=0x00000000003EFC84 string=0x00000000003EFC88 ""
 *   insn=0x00000000003EFC94 string=0x00000000003EFC98 "\t@"
 *   insn=0x00000000003EFCA4 string=0x00000000003EFCA8 ""
 *   insn=0x00000000003EFCB4 string=0x00000000003EFCB8 "@"
 *   insn=0x00000000003EFCC4 string=0x00000000003EFCC8 "5"
 *   insn=0x00000000003EFCCC string=0x00000000003EFCD0 ""
 *   insn=0x00000000003EFCDC string=0x00000000003EFCE0 "\t@"
 *   insn=0x00000000003EFCEC string=0x00000000003EFCF0 ""
 *   insn=0x00000000003EFCFC string=0x00000000003EFD00 "@"
 *   insn=0x00000000003EFD0C string=0x00000000003EFD10 "H<"
 *   insn=0x00000000003EFD30 string=0x00000000001F50F0 "P'"
 *   insn=0x00000000003EFD3C string=0x00000000003EFD40 "\"
 *   insn=0x00000000003EFD48 string=0x00000000003EFD4C "Y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreView::~StoreView(Caver::StoreView *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 40);
  v3 = (_QWORD *)*((_QWORD *)this + 41);
  *(_QWORD *)this = off_6D0CD0;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 40);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  v10 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v13 )
  {
    v14 = v13[1] - 1LL;
    v13[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  v16 = (_QWORD *)*((_QWORD *)this + 33);
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
  v19 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

