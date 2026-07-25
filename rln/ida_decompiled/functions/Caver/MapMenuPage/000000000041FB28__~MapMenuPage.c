/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041FB28
 * Mangled: _ZN5Caver11MapMenuPageD2Ev
 * Demangled: Caver::MapMenuPage::~MapMenuPage()
 *
 * Callers: 1
 *   0x00000000001F7000  Caver::MapMenuPage::~MapMenuPage()
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000420088  Caver::MapMenuPage::~MapMenuPage()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 159
 *   insn=0x000000000041FB38 string=0x000000000041FB3C "U"
 *   insn=0x000000000041FB48 string=0x000000000041FB4C "H"
 *   insn=0x000000000041FB4C string=0x000000000041FB50 ""
 *   insn=0x000000000041FB50 string=0x000000000041FB54 "t"
 *   insn=0x000000000041FB54 string=0x000000000041FB58 "\tA"
 *   insn=0x000000000041FB58 string=0x000000000041FB5C ""
 *   insn=0x000000000041FB5C string=0x000000000041FB60 "i"
 *   insn=0x000000000041FB60 string=0x000000000041FB64 "h~"
 *   insn=0x000000000041FB64 string=0x000000000041FB68 "4"
 *   insn=0x000000000041FB68 string=0x000000000041FBAC "t"
 *   insn=0x000000000041FB6C string=0x000000000041FB70 ""
 *   insn=0x000000000041FB7C string=0x000000000041FB80 "\t@"
 *   insn=0x000000000041FB8C string=0x000000000041FB90 ""
 *   insn=0x000000000041FB9C string=0x000000000041FBA0 "@"
 *   insn=0x000000000041FBAC string=0x000000000041FBB0 "4"
 *   insn=0x000000000041FBB0 string=0x000000000041FBF4 "t"
 *   insn=0x000000000041FBB4 string=0x000000000041FBB8 ""
 *   insn=0x000000000041FBC4 string=0x000000000041FBC8 "\t@"
 *   insn=0x000000000041FBD4 string=0x000000000041FBD8 ""
 *   insn=0x000000000041FBE4 string=0x000000000041FBE8 "@"
 *   insn=0x000000000041FBF4 string=0x000000000041FBF8 "4"
 *   insn=0x000000000041FBF8 string=0x000000000041FC3C "t"
 *   insn=0x000000000041FBFC string=0x000000000041FC00 ""
 *   insn=0x000000000041FC0C string=0x000000000041FC10 "\t@"
 *   insn=0x000000000041FC1C string=0x000000000041FC20 ""
 *   insn=0x000000000041FC2C string=0x000000000041FC30 "@"
 *   insn=0x000000000041FC3C string=0x000000000041FC40 "4"
 *   insn=0x000000000041FC40 string=0x000000000041FC84 "`"
 *   insn=0x000000000041FC44 string=0x000000000041FC48 ""
 *   insn=0x000000000041FC54 string=0x000000000041FC58 "\t@"
 *   insn=0x000000000041FC64 string=0x000000000041FC68 ""
 *   insn=0x000000000041FC74 string=0x000000000041FC78 "@"
 *   insn=0x000000000041FC84 string=0x000000000041FC88 "@"
 *   insn=0x000000000041FC88 string=0x000000000041FC90 "`"
 *   insn=0x000000000041FC8C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000041FC90 string=0x000000000041FC94 "@"
 *   insn=0x000000000041FC94 string=0x000000000041FC9C "`"
 *   insn=0x000000000041FCA0 string=0x000000000041FCA4 "@"
 *   insn=0x000000000041FCA0 string=0x000000000041FCC0 "`"
 *   insn=0x000000000041FCA4 string=0x000000000041FCA8 ""
 *   insn=0x000000000041FCA8 string=0x000000000041FCAC ""
 *   insn=0x000000000041FCB0 string=0x000000000041FCB4 ""
 *   insn=0x000000000041FCB4 string=0x000000000041FCB8 ""
 *   insn=0x000000000041FCC4 string=0x000000000041FCC8 "@"
 *   insn=0x000000000041FCC4 string=0x000000000041FCE4 "t"
 *   insn=0x000000000041FCC8 string=0x000000000041FCCC ""
 *   insn=0x000000000041FCCC string=0x000000000041FCD0 ""
 *   insn=0x000000000041FCD4 string=0x000000000041FCD8 ""
 *   insn=0x000000000041FCD8 string=0x000000000041FCDC ""
 *   insn=0x000000000041FCE4 string=0x000000000041FCE8 "4"
 *   insn=0x000000000041FCE8 string=0x000000000041FD2C "hz@"
 *   insn=0x000000000041FCEC string=0x000000000041FCF0 ""
 *   insn=0x000000000041FCFC string=0x000000000041FD00 "\t@"
 *   insn=0x000000000041FD0C string=0x000000000041FD10 ""
 *   insn=0x000000000041FD1C string=0x000000000041FD20 "@"
 *   insn=0x000000000041FD2C string=0x000000000041FD30 ")"
 *   insn=0x000000000041FD30 string=0x000000000041FD34 "*"
 *   insn=0x000000000041FD34 string=0x000000000041FD38 ")"
 *   insn=0x000000000041FD38 string=0x000000000041FD3C "J"
 *   insn=0x000000000041FD40 string=0x000000000041FD44 ")A"
 *   insn=0x000000000041FD48 string=0x000000000041FD4C "i"
 *   insn=0x000000000041FD50 string=0x000000000041FD80 ")"
 *   insn=0x000000000041FD54 string=0x000000000041FD58 "6|"
 *   insn=0x000000000041FD68 string=0x000000000041FDC4 "CY"
 *   insn=0x000000000041FD80 string=0x000000000041FD84 ")=G"
 *   insn=0x000000000041FD84 string=0x000000000041FD88 "!"
 *   insn=0x000000000041FD8C string=0x000000000041FD90 "\t"
 *   insn=0x000000000041FD8C string=0x000000000041FDA4 "\t"
 *   insn=0x000000000041FD90 string=0x000000000041FD94 "*"
 *   insn=0x000000000041FD94 string=0x000000000041FD98 "\n"
 *   insn=0x000000000041FDA0 string=0x000000000041FDB0 "?"
 *   insn=0x000000000041FDA4 string=0x000000000041FDA8 "*"
 *   insn=0x000000000041FDA8 string=0x000000000041FDAC "\n"
 *   insn=0x000000000041FDB8 string=0x000000000041FDBC "z)"
 *   insn=0x000000000041FDC4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041FDC8 string=0x000000000041FDCC "u"
 *   insn=0x000000000041FDD0 string=0x000000000041FDD4 "}"
 *   insn=0x000000000041FDD4 string=0x000000000041FFC8 "hz@"
 *   insn=0x000000000041FDDC string=0x000000000041FDE0 ""
 *   insn=0x000000000041FDE0 string=0x000000000041FDE4 "\t\t@"
 *   insn=0x000000000041FDE0 string=0x000000000041FF80 "u"
 *   insn=0x000000000041FDE4 string=0x000000000041FDE8 ")"
 *   insn=0x000000000041FDE8 string=0x000000000041FDEC "\t\t"
 *   insn=0x000000000041FDF0 string=0x000000000041FDF4 "\t"
 *   insn=0x000000000041FDF4 string=0x000000000041FDF8 ")"
 *   insn=0x000000000041FDFC string=0x000000000041FE00 " "
 *   insn=0x000000000041FE00 string=0x000000000041FE04 "_"
 *   insn=0x000000000041FE0C string=0x000000000041FE10 "n"
 *   insn=0x000000000041FE14 string=0x000000000041FE18 "`"
 *   insn=0x000000000041FE18 string=0x000000000041FE1C "`"
 *   insn=0x000000000041FE1C string=0x000000000041FE20 "C"
 *   insn=0x000000000041FE20 string=0x000000000041FF2C "`"
 *   insn=0x000000000041FE24 string=0x000000000041FE28 "u"
 *   insn=0x000000000041FE2C string=0x000000000041FE30 "<"
 *   insn=0x000000000041FE30 string=0x000000000041FF20 "`"
 *   insn=0x000000000041FE34 string=0x000000000041FE38 "u"
 *   insn=0x000000000041FE3C string=0x000000000041FE40 "&"
 *   insn=0x000000000041FE40 string=0x000000000041FED8 "u"
 *   insn=0x000000000041FE48 string=0x000000000041FE4C "5"
 *   insn=0x000000000041FE4C string=0x000000000041FE90 "u"
 *   insn=0x000000000041FE50 string=0x000000000041FE54 ""
 *   insn=0x000000000041FE60 string=0x000000000041FE64 "\t@"
 *   insn=0x000000000041FE70 string=0x000000000041FE74 ""
 *   insn=0x000000000041FE80 string=0x000000000041FE84 "@"
 *   insn=0x000000000041FE90 string=0x000000000041FE94 "5"
 *   insn=0x000000000041FE98 string=0x000000000041FE9C ""
 *   insn=0x000000000041FEA8 string=0x000000000041FEAC "\t@"
 *   insn=0x000000000041FEB8 string=0x000000000041FEBC ""
 *   insn=0x000000000041FEC8 string=0x000000000041FECC "@"
 *   insn=0x000000000041FED8 string=0x000000000041FEDC "5"
 *   insn=0x000000000041FEE0 string=0x000000000041FEE4 ""
 *   insn=0x000000000041FEF0 string=0x000000000041FEF4 "\t@"
 *   insn=0x000000000041FF00 string=0x000000000041FF04 ""
 *   insn=0x000000000041FF10 string=0x000000000041FF14 "@"
 *   insn=0x000000000041FF20 string=0x000000000041FF24 "@"
 *   insn=0x000000000041FF2C string=0x000000000041FF30 "@"
 *   insn=0x000000000041FF30 string=0x000000000041FF34 "T"
 *   insn=0x000000000041FF30 string=0x000000000041FF38 "`"
 *   insn=0x000000000041FF3C string=0x000000000041FF40 "@"
 *   insn=0x000000000041FF3C string=0x000000000041FF5C "`"
 *   insn=0x000000000041FF40 string=0x000000000041FF44 ""
 *   insn=0x000000000041FF44 string=0x000000000041FF48 ""
 *   insn=0x000000000041FF4C string=0x000000000041FF50 ""
 *   insn=0x000000000041FF50 string=0x000000000041FF54 ""
 *   insn=0x000000000041FF60 string=0x000000000041FF64 "@"
 *   insn=0x000000000041FF64 string=0x000000000041FF68 ""
 *   insn=0x000000000041FF68 string=0x000000000041FF6C ""
 *   insn=0x000000000041FF70 string=0x000000000041FF74 ""
 *   insn=0x000000000041FF74 string=0x000000000041FF78 ""
 *   insn=0x000000000041FF80 string=0x000000000041FF84 "5"
 *   insn=0x000000000041FF88 string=0x000000000041FF8C ""
 *   insn=0x000000000041FF98 string=0x000000000041FF9C "\t@"
 *   insn=0x000000000041FFA8 string=0x000000000041FFAC ""
 *   insn=0x000000000041FFB8 string=0x000000000041FFBC "@"
 *   insn=0x000000000041FFC8 string=0x000000000041FFCC ")"
 *   insn=0x000000000041FFCC string=0x000000000041FFD0 "*"
 *   insn=0x000000000041FFD0 string=0x000000000041FFD4 ")"
 *   insn=0x000000000041FFD4 string=0x000000000041FFD8 "J"
 *   insn=0x000000000041FFDC string=0x000000000041FFE0 ")A"
 *   insn=0x000000000041FFE4 string=0x000000000041FFE8 "i"
 *   insn=0x000000000041FFEC string=0x000000000041FFF0 ")"
 *   insn=0x000000000041FFF0 string=0x000000000041FFF4 ")=G"
 *   insn=0x000000000041FFF4 string=0x000000000041FFF8 "!"
 *   insn=0x000000000041FFFC string=0x0000000000420000 "\t"
 *   insn=0x000000000041FFFC string=0x0000000000420030 "\t"
 *   insn=0x0000000000420000 string=0x0000000000420004 "*"
 *   insn=0x0000000000420004 string=0x0000000000420008 "\n"
 *   insn=0x000000000042000C string=0x0000000000420010 "?"
 *   insn=0x0000000000420010 string=0x0000000000420014 "l"
 *   insn=0x0000000000420028 string=0x000000000042002C "&"
 *   insn=0x0000000000420030 string=0x0000000000420034 "*"
 *   insn=0x0000000000420034 string=0x0000000000420038 "\n"
 *   insn=0x0000000000420038 string=0x000000000042003C "?"
 *   insn=0x0000000000420050 string=0x0000000000420054 "\t\t@"
 *   insn=0x0000000000420054 string=0x0000000000420058 ")"
 *   insn=0x0000000000420058 string=0x000000000042005C "\t\t"
 *   insn=0x0000000000420060 string=0x0000000000420064 "\t"
 *   insn=0x0000000000420064 string=0x0000000000420068 ")"
 *   insn=0x000000000042006C string=0x0000000000420070 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapMenuPage::~MapMenuPage(Caver::MapMenuPage *this)
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
  void *v14; // x0
  void *v15; // x0
  _DWORD *v16; // x0
  int v17; // w8
  _DWORD *v18; // x0
  int v19; // w8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  void *v24; // x0
  unsigned int *v25; // x8
  int v26; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 62);
  *(_QWORD *)this = off_6D29E0;
  *((_QWORD *)this + 31) = off_6D2B40;
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
  v5 = (_QWORD *)*((_QWORD *)this + 60);
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
  v8 = (_QWORD *)*((_QWORD *)this + 58);
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
  v11 = (_QWORD *)*((_QWORD *)this + 56);
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
  v14 = (void *)*((_QWORD *)this + 51);
  if ( v14 )
    operator delete[](v14);
  v15 = (void *)*((_QWORD *)this + 48);
  if ( v15 )
    operator delete[](v15);
  v16 = (_DWORD *)*((_QWORD *)this + 44);
  if ( v16 )
  {
    v17 = v16[2] - 1;
    v16[2] = v17;
    if ( !v17 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v18 = (_DWORD *)*((_QWORD *)this + 34);
  if ( v18 )
  {
    v19 = v18[2] - 1;
    v18[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  v20 = (_QWORD *)*((_QWORD *)this + 33);
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
  v23 = *((_QWORD *)this + 30);
  v24 = (void *)(v23 - 24);
  *(_QWORD *)this = off_6D13B8;
  if ( (__int64 *)(v23 - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(v23 - 8);
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
      operator delete(v24);
  }
  Caver::GUIView::~GUIView(this);
}

