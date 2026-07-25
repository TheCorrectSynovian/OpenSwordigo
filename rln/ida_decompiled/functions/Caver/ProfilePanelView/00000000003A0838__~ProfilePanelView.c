/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A0838
 * Mangled: _ZN5Caver16ProfilePanelViewD2Ev
 * Demangled: Caver::ProfilePanelView::~ProfilePanelView()
 *
 * Callers: 1
 *   0x0000000000202040  Caver::ProfilePanelView::~ProfilePanelView()
 *
 * Callees: 7
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x00000000002006B0  Caver::HeroEquipmentManager::~HeroEquipmentManager()
 *   0x0000000000202040  Caver::ProfilePanelView::~ProfilePanelView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A1088  Caver::ProfilePanelView::ScrollViewCanCancelTouchInContentView(Caver::GUIView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 185
 *   insn=0x00000000003A0844 string=0x00000000003A0848 "("
 *   insn=0x00000000003A0848 string=0x00000000003A084C ""
 *   insn=0x00000000003A0850 string=0x00000000003A0854 "`*A"
 *   insn=0x00000000003A0854 string=0x00000000003A0858 "\n"
 *   insn=0x00000000003A0858 string=0x00000000003A085C "\tA"
 *   insn=0x00000000003A085C string=0x00000000003A0860 "@"
 *   insn=0x00000000003A0860 string=0x00000000003A0864 "A"
 *   insn=0x00000000003A0868 string=0x00000000003A086C "i"
 *   insn=0x00000000003A086C string=0x00000000003A0870 "`F"
 *   insn=0x00000000003A0874 string=0x00000000003A0878 "@"
 *   insn=0x00000000003A0874 string=0x00000000003A0894 "`""
 *   insn=0x00000000003A0878 string=0x00000000003A087C ""
 *   insn=0x00000000003A087C string=0x00000000003A0880 ""
 *   insn=0x00000000003A0884 string=0x00000000003A0888 ""
 *   insn=0x00000000003A0888 string=0x00000000003A088C ""
 *   insn=0x00000000003A0898 string=0x00000000003A089C "t"
 *   insn=0x00000000003A089C string=0x00000000003A08A0 "4"
 *   insn=0x00000000003A08A0 string=0x00000000003A08E4 "t"
 *   insn=0x00000000003A08A4 string=0x00000000003A08A8 ""
 *   insn=0x00000000003A08B4 string=0x00000000003A08B8 "\t@"
 *   insn=0x00000000003A08C4 string=0x00000000003A08C8 ""
 *   insn=0x00000000003A08D4 string=0x00000000003A08D8 "@"
 *   insn=0x00000000003A08E4 string=0x00000000003A08E8 "4"
 *   insn=0x00000000003A08E8 string=0x00000000003A092C "t"
 *   insn=0x00000000003A08EC string=0x00000000003A08F0 ""
 *   insn=0x00000000003A08FC string=0x00000000003A0900 "\t@"
 *   insn=0x00000000003A090C string=0x00000000003A0910 ""
 *   insn=0x00000000003A091C string=0x00000000003A0920 "@"
 *   insn=0x00000000003A092C string=0x00000000003A0930 "4"
 *   insn=0x00000000003A0930 string=0x00000000003A0974 "t"
 *   insn=0x00000000003A0934 string=0x00000000003A0938 ""
 *   insn=0x00000000003A0944 string=0x00000000003A0948 "\t@"
 *   insn=0x00000000003A0954 string=0x00000000003A0958 ""
 *   insn=0x00000000003A0964 string=0x00000000003A0968 "@"
 *   insn=0x00000000003A0974 string=0x00000000003A0978 "4"
 *   insn=0x00000000003A0978 string=0x00000000003A09BC "t"
 *   insn=0x00000000003A097C string=0x00000000003A0980 ""
 *   insn=0x00000000003A098C string=0x00000000003A0990 "\t@"
 *   insn=0x00000000003A099C string=0x00000000003A09A0 ""
 *   insn=0x00000000003A09AC string=0x00000000003A09B0 "@"
 *   insn=0x00000000003A09BC string=0x00000000003A09C0 "4"
 *   insn=0x00000000003A09C0 string=0x00000000003A0A04 "t"
 *   insn=0x00000000003A09C4 string=0x00000000003A09C8 ""
 *   insn=0x00000000003A09D4 string=0x00000000003A09D8 "\t@"
 *   insn=0x00000000003A09E4 string=0x00000000003A09E8 ""
 *   insn=0x00000000003A09F4 string=0x00000000003A09F8 "@"
 *   insn=0x00000000003A0A04 string=0x00000000003A0A08 "4"
 *   insn=0x00000000003A0A08 string=0x00000000003A0A4C "t"
 *   insn=0x00000000003A0A0C string=0x00000000003A0A10 ""
 *   insn=0x00000000003A0A1C string=0x00000000003A0A20 "\t@"
 *   insn=0x00000000003A0A2C string=0x00000000003A0A30 ""
 *   insn=0x00000000003A0A3C string=0x00000000003A0A40 "@"
 *   insn=0x00000000003A0A4C string=0x00000000003A0A50 "4"
 *   insn=0x00000000003A0A50 string=0x00000000003A0A94 "t"
 *   insn=0x00000000003A0A54 string=0x00000000003A0A58 ""
 *   insn=0x00000000003A0A64 string=0x00000000003A0A68 "\t@"
 *   insn=0x00000000003A0A74 string=0x00000000003A0A78 ""
 *   insn=0x00000000003A0A84 string=0x00000000003A0A88 "@"
 *   insn=0x00000000003A0A94 string=0x00000000003A0A98 "4"
 *   insn=0x00000000003A0A98 string=0x00000000003A0ADC "t"
 *   insn=0x00000000003A0A9C string=0x00000000003A0AA0 ""
 *   insn=0x00000000003A0AAC string=0x00000000003A0AB0 "\t@"
 *   insn=0x00000000003A0ABC string=0x00000000003A0AC0 ""
 *   insn=0x00000000003A0ACC string=0x00000000003A0AD0 "@"
 *   insn=0x00000000003A0ADC string=0x00000000003A0AE0 "4"
 *   insn=0x00000000003A0AE0 string=0x00000000003A0B24 "t"
 *   insn=0x00000000003A0AE4 string=0x00000000003A0AE8 ""
 *   insn=0x00000000003A0AF4 string=0x00000000003A0AF8 "\t@"
 *   insn=0x00000000003A0B04 string=0x00000000003A0B08 ""
 *   insn=0x00000000003A0B14 string=0x00000000003A0B18 "@"
 *   insn=0x00000000003A0B24 string=0x00000000003A0B28 "4"
 *   insn=0x00000000003A0B28 string=0x00000000003A0B6C "t"
 *   insn=0x00000000003A0B2C string=0x00000000003A0B30 ""
 *   insn=0x00000000003A0B3C string=0x00000000003A0B40 "\t@"
 *   insn=0x00000000003A0B4C string=0x00000000003A0B50 ""
 *   insn=0x00000000003A0B5C string=0x00000000003A0B60 "@"
 *   insn=0x00000000003A0B6C string=0x00000000003A0B70 "4"
 *   insn=0x00000000003A0B70 string=0x00000000003A0BB4 "t"
 *   insn=0x00000000003A0B74 string=0x00000000003A0B78 ""
 *   insn=0x00000000003A0B84 string=0x00000000003A0B88 "\t@"
 *   insn=0x00000000003A0B94 string=0x00000000003A0B98 ""
 *   insn=0x00000000003A0BA4 string=0x00000000003A0BA8 "@"
 *   insn=0x00000000003A0BB4 string=0x00000000003A0BB8 "4"
 *   insn=0x00000000003A0BBC string=0x00000000003A0BC0 ""
 *   insn=0x00000000003A0BCC string=0x00000000003A0BD0 "\t@"
 *   insn=0x00000000003A0BDC string=0x00000000003A0BE0 ""
 *   insn=0x00000000003A0BEC string=0x00000000003A0BF0 "@"
 *   insn=0x00000000003A0C0C string=0x00000000001FC000 "0'"
 *   insn=0x00000000003A0C10 string=0x00000000003A0C14 "`""
 *   insn=0x00000000003A0C18 string=0x00000000003A0C1C "0"
 *   insn=0x00000000003A0C1C string=0x00000000003A0CDC "u"
 *   insn=0x00000000003A0C28 string=0x00000000003A0C2C "u"
 *   insn=0x00000000003A0C2C string=0x00000000003A0C30 "u"
 *   insn=0x00000000003A0C38 string=0x00000000003A0C3C "u"
 *   insn=0x00000000003A0C44 string=0x00000000003A0FF4 "u"
 *   insn=0x00000000003A0C48 string=0x00000000003A0C4C "u"
 *   insn=0x00000000003A0C54 string=0x00000000003A0FAC "u"
 *   insn=0x00000000003A0C58 string=0x00000000003A0C5C "u"
 *   insn=0x00000000003A0C5C string=0x00000000003A0C60 "5"
 *   insn=0x00000000003A0C64 string=0x00000000003A0F64 "u"
 *   insn=0x00000000003A0C68 string=0x00000000003A0C6C "u"
 *   insn=0x00000000003A0C6C string=0x00000000003A0C70 "u"
 *   insn=0x00000000003A0C74 string=0x00000000003A0F1C "u"
 *   insn=0x00000000003A0C78 string=0x00000000003A0C7C "u"
 *   insn=0x00000000003A0C84 string=0x00000000003A0ED4 "u"
 *   insn=0x00000000003A0C88 string=0x00000000003A0C8C "u"
 *   insn=0x00000000003A0C90 string=0x00000000003A0C94 "~"
 *   insn=0x00000000003A0C94 string=0x00000000003A0E8C "u"
 *   insn=0x00000000003A0C98 string=0x00000000003A0C9C "u"
 *   insn=0x00000000003A0C9C string=0x00000000003A0CA0 "5"
 *   insn=0x00000000003A0CA0 string=0x00000000003A0CA4 "h"
 *   insn=0x00000000003A0CA4 string=0x00000000003A0E44 "u"
 *   insn=0x00000000003A0CA8 string=0x00000000003A0CAC "u"
 *   insn=0x00000000003A0CAC string=0x00000000003A0CB0 "u"
 *   insn=0x00000000003A0CB0 string=0x00000000003A0CB4 "R"
 *   insn=0x00000000003A0CB4 string=0x00000000003A0DFC "u"
 *   insn=0x00000000003A0CB8 string=0x00000000003A0CBC "u"
 *   insn=0x00000000003A0CC0 string=0x00000000003A0CC4 "<"
 *   insn=0x00000000003A0CC4 string=0x00000000003A0DB4 "u"
 *   insn=0x00000000003A0CC8 string=0x00000000003A0CCC "u"
 *   insn=0x00000000003A0CD0 string=0x00000000003A0CD4 "&"
 *   insn=0x00000000003A0CD4 string=0x00000000003A0D6C "u"
 *   insn=0x00000000003A0CDC string=0x00000000003A0CE0 "5"
 *   insn=0x00000000003A0CE0 string=0x00000000003A0D24 "u"
 *   insn=0x00000000003A0CE4 string=0x00000000003A0CE8 ""
 *   insn=0x00000000003A0CF4 string=0x00000000003A0CF8 "\t@"
 *   insn=0x00000000003A0D04 string=0x00000000003A0D08 ""
 *   insn=0x00000000003A0D14 string=0x00000000003A0D18 "@"
 *   insn=0x00000000003A0D24 string=0x00000000003A0D28 "5"
 *   insn=0x00000000003A0D2C string=0x00000000003A0D30 ""
 *   insn=0x00000000003A0D3C string=0x00000000003A0D40 "\t@"
 *   insn=0x00000000003A0D4C string=0x00000000003A0D50 ""
 *   insn=0x00000000003A0D5C string=0x00000000003A0D60 "@"
 *   insn=0x00000000003A0D6C string=0x00000000003A0D70 "5"
 *   insn=0x00000000003A0D74 string=0x00000000003A0D78 ""
 *   insn=0x00000000003A0D84 string=0x00000000003A0D88 "\t@"
 *   insn=0x00000000003A0D94 string=0x00000000003A0D98 ""
 *   insn=0x00000000003A0DA4 string=0x00000000003A0DA8 "@"
 *   insn=0x00000000003A0DB4 string=0x00000000003A0DB8 "5"
 *   insn=0x00000000003A0DBC string=0x00000000003A0DC0 ""
 *   insn=0x00000000003A0DCC string=0x00000000003A0DD0 "\t@"
 *   insn=0x00000000003A0DDC string=0x00000000003A0DE0 ""
 *   insn=0x00000000003A0DEC string=0x00000000003A0DF0 "@"
 *   insn=0x00000000003A0DFC string=0x00000000003A0E00 "5"
 *   insn=0x00000000003A0E04 string=0x00000000003A0E08 ""
 *   insn=0x00000000003A0E14 string=0x00000000003A0E18 "\t@"
 *   insn=0x00000000003A0E24 string=0x00000000003A0E28 ""
 *   insn=0x00000000003A0E34 string=0x00000000003A0E38 "@"
 *   insn=0x00000000003A0E44 string=0x00000000003A0E48 "5"
 *   insn=0x00000000003A0E4C string=0x00000000003A0E50 ""
 *   insn=0x00000000003A0E5C string=0x00000000003A0E60 "\t@"
 *   insn=0x00000000003A0E6C string=0x00000000003A0E70 ""
 *   insn=0x00000000003A0E7C string=0x00000000003A0E80 "@"
 *   insn=0x00000000003A0E8C string=0x00000000003A0E90 "5"
 *   insn=0x00000000003A0E94 string=0x00000000003A0E98 ""
 *   insn=0x00000000003A0EA4 string=0x00000000003A0EA8 "\t@"
 *   insn=0x00000000003A0EB4 string=0x00000000003A0EB8 ""
 *   insn=0x00000000003A0EC4 string=0x00000000003A0EC8 "@"
 *   insn=0x00000000003A0ED4 string=0x00000000003A0ED8 "5"
 *   insn=0x00000000003A0EDC string=0x00000000003A0EE0 ""
 *   insn=0x00000000003A0EEC string=0x00000000003A0EF0 "\t@"
 *   insn=0x00000000003A0EFC string=0x00000000003A0F00 ""
 *   insn=0x00000000003A0F0C string=0x00000000003A0F10 "@"
 *   insn=0x00000000003A0F1C string=0x00000000003A0F20 "5"
 *   insn=0x00000000003A0F24 string=0x00000000003A0F28 ""
 *   insn=0x00000000003A0F34 string=0x00000000003A0F38 "\t@"
 *   insn=0x00000000003A0F44 string=0x00000000003A0F48 ""
 *   insn=0x00000000003A0F54 string=0x00000000003A0F58 "@"
 *   insn=0x00000000003A0F64 string=0x00000000003A0F68 "5"
 *   insn=0x00000000003A0F6C string=0x00000000003A0F70 ""
 *   insn=0x00000000003A0F7C string=0x00000000003A0F80 "\t@"
 *   insn=0x00000000003A0F8C string=0x00000000003A0F90 ""
 *   insn=0x00000000003A0F9C string=0x00000000003A0FA0 "@"
 *   insn=0x00000000003A0FAC string=0x00000000003A0FB0 "5"
 *   insn=0x00000000003A0FB4 string=0x00000000003A0FB8 ""
 *   insn=0x00000000003A0FC4 string=0x00000000003A0FC8 "\t@"
 *   insn=0x00000000003A0FD4 string=0x00000000003A0FD8 ""
 *   insn=0x00000000003A0FE4 string=0x00000000003A0FE8 "@"
 *   insn=0x00000000003A0FF4 string=0x00000000003A0FF8 "5"
 *   insn=0x00000000003A0FFC string=0x00000000003A1000 ""
 *   insn=0x00000000003A100C string=0x00000000003A1010 "\t@"
 *   insn=0x00000000003A101C string=0x00000000003A1020 ""
 *   insn=0x00000000003A102C string=0x00000000003A1030 "@"
 *   insn=0x00000000003A1070 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A1084 string=0x00000000003A1088 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfilePanelView::~ProfilePanelView(Caver::ProfilePanelView *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
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
  _QWORD *v38; // x20
  __int64 v39; // x8
  __int64 v40; // x8

  v2 = (_DWORD *)*((_QWORD *)this + 74);
  *(_QWORD *)&v3 = &off_6CE2E0;
  *((_QWORD *)&v3 + 1) = off_6CE300;
  *(_QWORD *)this = off_6CE180;
  *((_OWORD *)this + 17) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::HeroEquipmentManager::~HeroEquipmentManager((Caver::ProfilePanelView *)((char *)this + 520));
  v5 = (_QWORD *)*((_QWORD *)this + 64);
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
  v8 = (_QWORD *)*((_QWORD *)this + 62);
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
  v11 = (_QWORD *)*((_QWORD *)this + 60);
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
  v14 = (_QWORD *)*((_QWORD *)this + 58);
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
  v17 = (_QWORD *)*((_QWORD *)this + 56);
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
  v20 = (_QWORD *)*((_QWORD *)this + 54);
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
  v23 = (_QWORD *)*((_QWORD *)this + 52);
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
  v26 = (_QWORD *)*((_QWORD *)this + 50);
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
  v29 = (_QWORD *)*((_QWORD *)this + 48);
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
  v32 = (_QWORD *)*((_QWORD *)this + 46);
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
  v35 = (_QWORD *)*((_QWORD *)this + 43);
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
  v38 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v38 )
  {
    v39 = v38[1] - 1LL;
    v38[1] = v39;
    if ( !v39 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v38 + 16LL))(v38);
      v40 = v38[2] - 1LL;
      v38[2] = v40;
      if ( !v40 )
        (*(void (__fastcall **)(_QWORD *))(*v38 + 24LL))(v38);
    }
  }
  Caver::GUIFrameView::~GUIFrameView(this);
}

