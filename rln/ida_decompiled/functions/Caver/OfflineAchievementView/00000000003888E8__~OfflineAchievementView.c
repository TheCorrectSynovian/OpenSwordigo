/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003888E8
 * Mangled: _ZN5Caver22OfflineAchievementViewD2Ev
 * Demangled: Caver::OfflineAchievementView::~OfflineAchievementView()
 *
 * Callers: 1
 *   0x00000000001FF850  Caver::OfflineAchievementView::~OfflineAchievementView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x00000000001FF850  Caver::OfflineAchievementView::~OfflineAchievementView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000388D70  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 96
 *   insn=0x00000000003888FC string=0x0000000000388900 "t"
 *   insn=0x0000000000388900 string=0x0000000000388904 ""
 *   insn=0x0000000000388904 string=0x0000000000388908 "A"
 *   insn=0x0000000000388908 string=0x000000000038890C "h"
 *   insn=0x000000000038890C string=0x0000000000388910 "4"
 *   insn=0x0000000000388910 string=0x0000000000388954 "t"
 *   insn=0x0000000000388914 string=0x0000000000388918 ""
 *   insn=0x0000000000388924 string=0x0000000000388928 "\t@"
 *   insn=0x0000000000388934 string=0x0000000000388938 ""
 *   insn=0x0000000000388944 string=0x0000000000388948 "@"
 *   insn=0x0000000000388954 string=0x0000000000388958 "4"
 *   insn=0x0000000000388958 string=0x000000000038899C "t"
 *   insn=0x000000000038895C string=0x0000000000388960 ""
 *   insn=0x000000000038896C string=0x0000000000388970 "\t@"
 *   insn=0x000000000038897C string=0x0000000000388980 ""
 *   insn=0x000000000038898C string=0x0000000000388990 "@"
 *   insn=0x000000000038899C string=0x00000000003889A0 "4"
 *   insn=0x00000000003889A0 string=0x00000000003889E4 "t"
 *   insn=0x00000000003889A4 string=0x00000000003889A8 ""
 *   insn=0x00000000003889B4 string=0x00000000003889B8 "\t@"
 *   insn=0x00000000003889C4 string=0x00000000003889C8 ""
 *   insn=0x00000000003889D4 string=0x00000000003889D8 "@"
 *   insn=0x00000000003889E4 string=0x00000000003889E8 "4"
 *   insn=0x00000000003889E8 string=0x0000000000388A2C "t"
 *   insn=0x00000000003889EC string=0x00000000003889F0 ""
 *   insn=0x00000000003889FC string=0x0000000000388A00 "\t@"
 *   insn=0x0000000000388A0C string=0x0000000000388A10 ""
 *   insn=0x0000000000388A1C string=0x0000000000388A20 "@"
 *   insn=0x0000000000388A2C string=0x0000000000388A30 "4"
 *   insn=0x0000000000388A30 string=0x0000000000388A74 "t"
 *   insn=0x0000000000388A34 string=0x0000000000388A38 ""
 *   insn=0x0000000000388A44 string=0x0000000000388A48 "\t@"
 *   insn=0x0000000000388A54 string=0x0000000000388A58 ""
 *   insn=0x0000000000388A64 string=0x0000000000388A68 "@"
 *   insn=0x0000000000388A74 string=0x0000000000388A78 "4"
 *   insn=0x0000000000388A78 string=0x0000000000388ABC "t~@"
 *   insn=0x0000000000388A7C string=0x0000000000388A80 ""
 *   insn=0x0000000000388A8C string=0x0000000000388A90 "\t@"
 *   insn=0x0000000000388A9C string=0x0000000000388AA0 ""
 *   insn=0x0000000000388AAC string=0x0000000000388AB0 "@"
 *   insn=0x0000000000388ABC string=0x0000000000388AC0 "4"
 *   insn=0x0000000000388AC4 string=0x0000000000388AC8 ""
 *   insn=0x0000000000388AD4 string=0x0000000000388AD8 "\t@"
 *   insn=0x0000000000388AE4 string=0x0000000000388AE8 ""
 *   insn=0x0000000000388AF4 string=0x0000000000388AF8 "@"
 *   insn=0x0000000000388B20 string=0x0000000000388B24 "u~@"
 *   insn=0x0000000000388B28 string=0x0000000000388B2C "~"
 *   insn=0x0000000000388B30 string=0x0000000000388B34 "u"
 *   insn=0x0000000000388B34 string=0x0000000000388B38 "5"
 *   insn=0x0000000000388B38 string=0x0000000000388B3C "h"
 *   insn=0x0000000000388B3C string=0x0000000000388CDC "u~@"
 *   insn=0x0000000000388B40 string=0x0000000000388B44 "u"
 *   insn=0x0000000000388B44 string=0x0000000000388B48 "u"
 *   insn=0x0000000000388B48 string=0x0000000000388B4C "R"
 *   insn=0x0000000000388B4C string=0x0000000000388C94 "u"
 *   insn=0x0000000000388B50 string=0x0000000000388B54 "u"
 *   insn=0x0000000000388B58 string=0x0000000000388B5C "<"
 *   insn=0x0000000000388B5C string=0x0000000000388C4C "u"
 *   insn=0x0000000000388B60 string=0x0000000000388B64 "u"
 *   insn=0x0000000000388B68 string=0x0000000000388B6C "&"
 *   insn=0x0000000000388B6C string=0x0000000000388C04 "u"
 *   insn=0x0000000000388B74 string=0x0000000000388B78 "5"
 *   insn=0x0000000000388B78 string=0x0000000000388BBC "u"
 *   insn=0x0000000000388B7C string=0x0000000000388B80 ""
 *   insn=0x0000000000388B8C string=0x0000000000388B90 "\t@"
 *   insn=0x0000000000388B9C string=0x0000000000388BA0 ""
 *   insn=0x0000000000388BAC string=0x0000000000388BB0 "@"
 *   insn=0x0000000000388BBC string=0x0000000000388BC0 "5"
 *   insn=0x0000000000388BC4 string=0x0000000000388BC8 ""
 *   insn=0x0000000000388BD4 string=0x0000000000388BD8 "\t@"
 *   insn=0x0000000000388BE4 string=0x0000000000388BE8 ""
 *   insn=0x0000000000388BF4 string=0x0000000000388BF8 "@"
 *   insn=0x0000000000388C04 string=0x0000000000388C08 "5"
 *   insn=0x0000000000388C0C string=0x0000000000388C10 ""
 *   insn=0x0000000000388C1C string=0x0000000000388C20 "\t@"
 *   insn=0x0000000000388C2C string=0x0000000000388C30 ""
 *   insn=0x0000000000388C3C string=0x0000000000388C40 "@"
 *   insn=0x0000000000388C4C string=0x0000000000388C50 "5"
 *   insn=0x0000000000388C54 string=0x0000000000388C58 ""
 *   insn=0x0000000000388C64 string=0x0000000000388C68 "\t@"
 *   insn=0x0000000000388C74 string=0x0000000000388C78 ""
 *   insn=0x0000000000388C84 string=0x0000000000388C88 "@"
 *   insn=0x0000000000388C94 string=0x0000000000388C98 "5"
 *   insn=0x0000000000388C9C string=0x0000000000388CA0 ""
 *   insn=0x0000000000388CAC string=0x0000000000388CB0 "\t@"
 *   insn=0x0000000000388CBC string=0x0000000000388CC0 ""
 *   insn=0x0000000000388CCC string=0x0000000000388CD0 "@"
 *   insn=0x0000000000388CDC string=0x0000000000388CE0 "5"
 *   insn=0x0000000000388CE4 string=0x0000000000388CE8 ""
 *   insn=0x0000000000388CF4 string=0x0000000000388CF8 "\t@"
 *   insn=0x0000000000388D04 string=0x0000000000388D08 ""
 *   insn=0x0000000000388D14 string=0x0000000000388D18 "@"
 *   insn=0x0000000000388D24 string=0x0000000000388D28 "B"
 *   insn=0x0000000000388D54 string=0x0000000000388D58 "V"
 *   insn=0x0000000000388D58 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000388D60 string=0x0000000000388D64 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OfflineAchievementView::~OfflineAchievementView(Caver::OfflineAchievementView *this)
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

  v2 = (_QWORD *)*((_QWORD *)this + 44);
  *(_QWORD *)this = off_6CD450;
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
  v5 = (_QWORD *)*((_QWORD *)this + 42);
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
  v8 = (_QWORD *)*((_QWORD *)this + 40);
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
  v11 = (_QWORD *)*((_QWORD *)this + 38);
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
  v14 = (_QWORD *)*((_QWORD *)this + 36);
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
  v17 = (_QWORD *)*((_QWORD *)this + 34);
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
  v20 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

