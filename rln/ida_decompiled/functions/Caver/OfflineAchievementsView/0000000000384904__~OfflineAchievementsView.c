/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000384904
 * Mangled: _ZN5Caver23OfflineAchievementsViewD2Ev
 * Demangled: Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *
 * Callers: 1
 *   0x00000000001F66C0  Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000384DD8  Caver::OfflineAchievementsView::~OfflineAchievementsView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 99
 *   insn=0x0000000000384918 string=0x000000000038491C ""
 *   insn=0x000000000038491C string=0x0000000000384920 "t"
 *   insn=0x0000000000384920 string=0x0000000000384924 "eA"
 *   insn=0x0000000000384924 string=0x0000000000384928 "A"
 *   insn=0x0000000000384928 string=0x000000000038492C "h"
 *   insn=0x000000000038492C string=0x0000000000384930 "4"
 *   insn=0x0000000000384930 string=0x0000000000384974 "t"
 *   insn=0x0000000000384934 string=0x0000000000384938 ""
 *   insn=0x0000000000384944 string=0x0000000000384948 "\t@"
 *   insn=0x0000000000384954 string=0x0000000000384958 ""
 *   insn=0x0000000000384964 string=0x0000000000384968 "@"
 *   insn=0x0000000000384974 string=0x0000000000384978 "4"
 *   insn=0x0000000000384978 string=0x00000000003849BC "tZS"
 *   insn=0x000000000038497C string=0x0000000000384980 ""
 *   insn=0x000000000038498C string=0x0000000000384990 "\t@"
 *   insn=0x000000000038499C string=0x00000000003849A0 ""
 *   insn=0x00000000003849AC string=0x00000000003849B0 "@"
 *   insn=0x00000000003849C4 string=0x0000000000384A20 "t"
 *   insn=0x00000000003849C8 string=0x00000000003849CC "5"
 *   insn=0x00000000003849D0 string=0x00000000003849D4 ""
 *   insn=0x00000000003849E0 string=0x00000000003849E4 "\t@"
 *   insn=0x00000000003849F0 string=0x00000000003849F4 ""
 *   insn=0x0000000000384A00 string=0x0000000000384A04 "@"
 *   insn=0x0000000000384A18 string=0x0000000000384A1C "t"
 *   insn=0x0000000000384A20 string=0x0000000000384A2C "t"
 *   insn=0x0000000000384A24 string=0x0000000000384A28 """
 *   insn=0x0000000000384A28 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000384A2C string=0x0000000000384A30 "4"
 *   insn=0x0000000000384A30 string=0x0000000000384A74 "t"
 *   insn=0x0000000000384A34 string=0x0000000000384A38 ""
 *   insn=0x0000000000384A44 string=0x0000000000384A48 "\t@"
 *   insn=0x0000000000384A54 string=0x0000000000384A58 ""
 *   insn=0x0000000000384A64 string=0x0000000000384A68 "@"
 *   insn=0x0000000000384A74 string=0x0000000000384A78 "4"
 *   insn=0x0000000000384A78 string=0x0000000000384ABC "t"
 *   insn=0x0000000000384A7C string=0x0000000000384A80 ""
 *   insn=0x0000000000384A8C string=0x0000000000384A90 "\t@"
 *   insn=0x0000000000384A9C string=0x0000000000384AA0 ""
 *   insn=0x0000000000384AAC string=0x0000000000384AB0 "@"
 *   insn=0x0000000000384ABC string=0x0000000000384AC0 "4"
 *   insn=0x0000000000384AC0 string=0x0000000000384B04 "t~@"
 *   insn=0x0000000000384AC4 string=0x0000000000384AC8 ""
 *   insn=0x0000000000384AD4 string=0x0000000000384AD8 "\t@"
 *   insn=0x0000000000384AE4 string=0x0000000000384AE8 ""
 *   insn=0x0000000000384AF4 string=0x0000000000384AF8 "@"
 *   insn=0x0000000000384B04 string=0x0000000000384B08 "4"
 *   insn=0x0000000000384B0C string=0x0000000000384B10 ""
 *   insn=0x0000000000384B1C string=0x0000000000384B20 "\t@"
 *   insn=0x0000000000384B2C string=0x0000000000384B30 ""
 *   insn=0x0000000000384B3C string=0x0000000000384B40 "@"
 *   insn=0x0000000000384B6C string=0x0000000000384B70 "u~@"
 *   insn=0x0000000000384B70 string=0x0000000000384B74 "U"
 *   insn=0x0000000000384B7C string=0x0000000000384B80 "u"
 *   insn=0x0000000000384B84 string=0x0000000000384B88 "{"
 *   insn=0x0000000000384B88 string=0x0000000000384D74 "u~@"
 *   insn=0x0000000000384B8C string=0x0000000000384B90 "u"
 *   insn=0x0000000000384B94 string=0x0000000000384B98 "e"
 *   insn=0x0000000000384B98 string=0x0000000000384D2C "u"
 *   insn=0x0000000000384BA0 string=0x0000000000384BF0 "h^S"
 *   insn=0x0000000000384BA8 string=0x0000000000384BAC "5"
 *   insn=0x0000000000384BB0 string=0x0000000000384BB4 ""
 *   insn=0x0000000000384BC0 string=0x0000000000384BC4 "\t@"
 *   insn=0x0000000000384BD0 string=0x0000000000384BD4 ""
 *   insn=0x0000000000384BE0 string=0x0000000000384BE4 "@"
 *   insn=0x0000000000384BF8 string=0x0000000000384BFC "@"
 *   insn=0x0000000000384C08 string=0x0000000000384C0C "5"
 *   insn=0x0000000000384C10 string=0x0000000000384C14 ""
 *   insn=0x0000000000384C20 string=0x0000000000384C24 "\t@"
 *   insn=0x0000000000384C30 string=0x0000000000384C34 ""
 *   insn=0x0000000000384C40 string=0x0000000000384C44 "@"
 *   insn=0x0000000000384C50 string=0x0000000000384C54 "A"
 *   insn=0x0000000000384C58 string=0x0000000000384C5C "A"
 *   insn=0x0000000000384C5C string=0x0000000000384C60 "`"
 *   insn=0x0000000000384C64 string=0x0000000000384C68 ""
 *   insn=0x0000000000384C68 string=0x0000000000384C9C "u"
 *   insn=0x0000000000384C84 string=0x0000000000384C88 "h"
 *   insn=0x0000000000384C8C string=0x0000000000384C90 "h"
 *   insn=0x0000000000384C9C string=0x0000000000384CA0 "5"
 *   insn=0x0000000000384CA0 string=0x0000000000384CE4 "u"
 *   insn=0x0000000000384CA4 string=0x0000000000384CA8 ""
 *   insn=0x0000000000384CB4 string=0x0000000000384CB8 "\t@"
 *   insn=0x0000000000384CC4 string=0x0000000000384CC8 ""
 *   insn=0x0000000000384CD4 string=0x0000000000384CD8 "@"
 *   insn=0x0000000000384CE4 string=0x0000000000384CE8 "5"
 *   insn=0x0000000000384CEC string=0x0000000000384CF0 ""
 *   insn=0x0000000000384CFC string=0x0000000000384D00 "\t@"
 *   insn=0x0000000000384D0C string=0x0000000000384D10 ""
 *   insn=0x0000000000384D1C string=0x0000000000384D20 "@"
 *   insn=0x0000000000384D2C string=0x0000000000384D30 "5"
 *   insn=0x0000000000384D34 string=0x0000000000384D38 ""
 *   insn=0x0000000000384D44 string=0x0000000000384D48 "\t@"
 *   insn=0x0000000000384D54 string=0x0000000000384D58 ""
 *   insn=0x0000000000384D64 string=0x0000000000384D68 "@"
 *   insn=0x0000000000384D74 string=0x0000000000384D78 "5"
 *   insn=0x0000000000384D7C string=0x0000000000384D80 ""
 *   insn=0x0000000000384D8C string=0x0000000000384D90 "\t@"
 *   insn=0x0000000000384D9C string=0x0000000000384DA0 ""
 *   insn=0x0000000000384DAC string=0x0000000000384DB0 "@"
 *   insn=0x0000000000384DD0 string=0x0000000000384DD4 "^%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OfflineAchievementsView::~OfflineAchievementsView(Caver::OfflineAchievementsView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  _QWORD *v9; // x22
  _QWORD *v10; // x21
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
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 44);
  *(_QWORD *)this = off_6CD150;
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
  v8 = (_QWORD *)*((_QWORD *)this + 38);
  v9 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v8 != v9 )
  {
    do
    {
      v10 = (_QWORD *)v8[1];
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
      v8 += 2;
    }
    while ( v9 != v8 );
    v8 = (_QWORD *)*((_QWORD *)this + 38);
  }
  if ( v8 )
    operator delete(v8);
  v13 = (_QWORD *)*((_QWORD *)this + 37);
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
  v16 = (_QWORD *)*((_QWORD *)this + 35);
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
  v19 = (_QWORD *)*((_QWORD *)this + 33);
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
  v22 = (_QWORD *)*((_QWORD *)this + 31);
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

