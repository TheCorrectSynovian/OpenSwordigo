/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C8E60
 * Mangled: _ZN5Caver20ConfigureOverlayViewD2Ev
 * Demangled: Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *
 * Callers: 1
 *   0x00000000001F7620  Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003C92A4  Caver::ConfigureOverlayView::~ConfigureOverlayView()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 90
 *   insn=0x00000000003C8E74 string=0x00000000003C8E78 ""
 *   insn=0x00000000003C8E7C string=0x00000000003C8E80 "t"
 *   insn=0x00000000003C8E80 string=0x00000000003C8E84 "\n"
 *   insn=0x00000000003C8E84 string=0x00000000003C8E88 "\tA"
 *   insn=0x00000000003C8E88 string=0x00000000003C8E8C "@"
 *   insn=0x00000000003C8E8C string=0x00000000003C8E90 ""
 *   insn=0x00000000003C8E94 string=0x00000000003C8E98 "i"
 *   insn=0x00000000003C8E98 string=0x00000000003C8E9C "`>"
 *   insn=0x00000000003C8E9C string=0x00000000003C8EA0 "4"
 *   insn=0x00000000003C8EA0 string=0x00000000003C8EE4 "t"
 *   insn=0x00000000003C8EA4 string=0x00000000003C8EA8 ""
 *   insn=0x00000000003C8EB4 string=0x00000000003C8EB8 "\t@"
 *   insn=0x00000000003C8EC4 string=0x00000000003C8EC8 ""
 *   insn=0x00000000003C8ED4 string=0x00000000003C8ED8 "@"
 *   insn=0x00000000003C8EEC string=0x00000000003C8F48 "t"
 *   insn=0x00000000003C8EF0 string=0x00000000003C8EF4 "5"
 *   insn=0x00000000003C8EF8 string=0x00000000003C8EFC ""
 *   insn=0x00000000003C8F08 string=0x00000000003C8F0C "\t@"
 *   insn=0x00000000003C8F18 string=0x00000000003C8F1C ""
 *   insn=0x00000000003C8F28 string=0x00000000003C8F2C "@"
 *   insn=0x00000000003C8F40 string=0x00000000003C8F44 "t"
 *   insn=0x00000000003C8F48 string=0x00000000003C8F54 "t"
 *   insn=0x00000000003C8F50 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C8F54 string=0x00000000003C8F58 "4"
 *   insn=0x00000000003C8F58 string=0x00000000003C8F9C "t"
 *   insn=0x00000000003C8F5C string=0x00000000003C8F60 ""
 *   insn=0x00000000003C8F6C string=0x00000000003C8F70 "\t@"
 *   insn=0x00000000003C8F7C string=0x00000000003C8F80 ""
 *   insn=0x00000000003C8F8C string=0x00000000003C8F90 "@"
 *   insn=0x00000000003C8F9C string=0x00000000003C8FA0 "4"
 *   insn=0x00000000003C8FA0 string=0x00000000003C8FE4 "t"
 *   insn=0x00000000003C8FA4 string=0x00000000003C8FA8 ""
 *   insn=0x00000000003C8FB4 string=0x00000000003C8FB8 "\t@"
 *   insn=0x00000000003C8FC4 string=0x00000000003C8FC8 ""
 *   insn=0x00000000003C8FD4 string=0x00000000003C8FD8 "@"
 *   insn=0x00000000003C8FE4 string=0x00000000003C8FE8 "4"
 *   insn=0x00000000003C8FE8 string=0x00000000003C902C "t"
 *   insn=0x00000000003C8FEC string=0x00000000003C8FF0 ""
 *   insn=0x00000000003C8FFC string=0x00000000003C9000 "\t@"
 *   insn=0x00000000003C900C string=0x00000000003C9010 ""
 *   insn=0x00000000003C901C string=0x00000000003C9020 "@"
 *   insn=0x00000000003C902C string=0x00000000003C9030 "4"
 *   insn=0x00000000003C9034 string=0x00000000003C9038 ""
 *   insn=0x00000000003C9044 string=0x00000000003C9048 "\t@"
 *   insn=0x00000000003C9054 string=0x00000000003C9058 ""
 *   insn=0x00000000003C9064 string=0x00000000003C9068 "@"
 *   insn=0x00000000003C9084 string=0x00000000003C9088 "j"
 *   insn=0x00000000003C908C string=0x00000000003C9090 "~"
 *   insn=0x00000000003C9094 string=0x00000000003C9098 "u"
 *   insn=0x00000000003C9098 string=0x00000000003C909C "u"
 *   insn=0x00000000003C909C string=0x00000000003C90A0 "z"
 *   insn=0x00000000003C90A4 string=0x00000000003C90A8 "u"
 *   insn=0x00000000003C90AC string=0x00000000003C90B0 "d"
 *   insn=0x00000000003C90B0 string=0x00000000003C9240 "u"
 *   insn=0x00000000003C90B4 string=0x00000000003C90B8 "u"
 *   insn=0x00000000003C90BC string=0x00000000003C90C0 "N"
 *   insn=0x00000000003C90C0 string=0x00000000003C91F8 "u"
 *   insn=0x00000000003C90D4 string=0x00000000003C90D8 "6"
 *   insn=0x00000000003C90DC string=0x00000000003C90E0 ""
 *   insn=0x00000000003C90EC string=0x00000000003C90F0 "\t@"
 *   insn=0x00000000003C90FC string=0x00000000003C9100 ""
 *   insn=0x00000000003C910C string=0x00000000003C9110 "@"
 *   insn=0x00000000003C9124 string=0x00000000003C9128 "u"
 *   insn=0x00000000003C912C string=0x00000000003C9168 "u"
 *   insn=0x00000000003C9134 string=0x00000000003C9164 "S"
 *   insn=0x00000000003C9144 string=0x00000000003C9148 "Z"
 *   insn=0x00000000003C9150 string=0x00000000003C9154 "h"
 *   insn=0x00000000003C9158 string=0x00000000003C915C "h"
 *   insn=0x00000000003C9168 string=0x00000000003C916C "5"
 *   insn=0x00000000003C916C string=0x00000000003C91B0 "u"
 *   insn=0x00000000003C9170 string=0x00000000003C9174 ""
 *   insn=0x00000000003C9180 string=0x00000000003C9184 "\t@"
 *   insn=0x00000000003C9190 string=0x00000000003C9194 ""
 *   insn=0x00000000003C91A0 string=0x00000000003C91A4 "@"
 *   insn=0x00000000003C91B0 string=0x00000000003C91B4 "5"
 *   insn=0x00000000003C91B8 string=0x00000000003C91BC ""
 *   insn=0x00000000003C91C8 string=0x00000000003C91CC "\t@"
 *   insn=0x00000000003C91D8 string=0x00000000003C91DC ""
 *   insn=0x00000000003C91E8 string=0x00000000003C91EC "@"
 *   insn=0x00000000003C91F8 string=0x00000000003C91FC "5"
 *   insn=0x00000000003C9200 string=0x00000000003C9204 ""
 *   insn=0x00000000003C9210 string=0x00000000003C9214 "\t@"
 *   insn=0x00000000003C9220 string=0x00000000003C9224 ""
 *   insn=0x00000000003C9230 string=0x00000000003C9234 "@"
 *   insn=0x00000000003C9240 string=0x00000000003C9244 "5"
 *   insn=0x00000000003C9248 string=0x00000000003C924C ""
 *   insn=0x00000000003C9258 string=0x00000000003C925C "\t@"
 *   insn=0x00000000003C9268 string=0x00000000003C926C ""
 *   insn=0x00000000003C9278 string=0x00000000003C927C "@"
 *   insn=0x00000000003C929C string=0x00000000003C92A0 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ConfigureOverlayView::~ConfigureOverlayView(Caver::ConfigureOverlayView *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  _QWORD *v7; // x22
  _QWORD *v8; // x21
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

  v2 = (_QWORD *)*((_QWORD *)this + 45);
  *(_QWORD *)&v3 = &off_6CF4D8;
  *((_QWORD *)&v3 + 1) = &off_6CF4F0;
  *(_QWORD *)this = off_6CF380;
  *((_OWORD *)this + 15) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v6 = (_QWORD *)*((_QWORD *)this + 41);
  v7 = (_QWORD *)*((_QWORD *)this + 42);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)v6[1];
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
      v6 += 2;
    }
    while ( v7 != v6 );
    v6 = (_QWORD *)*((_QWORD *)this + 41);
  }
  if ( v6 )
    operator delete(v6);
  v11 = (_QWORD *)*((_QWORD *)this + 40);
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
  v14 = (_QWORD *)*((_QWORD *)this + 38);
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
  v17 = (_QWORD *)*((_QWORD *)this + 36);
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
  v20 = (_QWORD *)*((_QWORD *)this + 34);
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

