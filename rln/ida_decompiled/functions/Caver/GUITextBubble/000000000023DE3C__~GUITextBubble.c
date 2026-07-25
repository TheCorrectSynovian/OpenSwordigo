/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DE3C
 * Mangled: _ZN5Caver13GUITextBubbleD2Ev
 * Demangled: Caver::GUITextBubble::~GUITextBubble()
 *
 * Callers: 1
 *   0x00000000001FA260  Caver::GUITextBubble::~GUITextBubble()
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x000000000023DE4C string=0x000000000023DE50 "U"
 *   insn=0x000000000023DE5C string=0x000000000023DE60 "t6@"
 *   insn=0x000000000023DE60 string=0x000000000023DE64 "4"
 *   insn=0x000000000023DE64 string=0x000000000023DEA8 "t.@"
 *   insn=0x000000000023DE68 string=0x000000000023DE6C ""
 *   insn=0x000000000023DE78 string=0x000000000023DE7C "\t@"
 *   insn=0x000000000023DE88 string=0x000000000023DE8C ""
 *   insn=0x000000000023DE98 string=0x000000000023DE9C "@"
 *   insn=0x000000000023DEA8 string=0x000000000023DEAC "4"
 *   insn=0x000000000023DEAC string=0x000000000023DEF0 "t&@"
 *   insn=0x000000000023DEB0 string=0x000000000023DEB4 ""
 *   insn=0x000000000023DEC0 string=0x000000000023DEC4 "\t@"
 *   insn=0x000000000023DED0 string=0x000000000023DED4 ""
 *   insn=0x000000000023DEE0 string=0x000000000023DEE4 "@"
 *   insn=0x000000000023DEF0 string=0x000000000023DEF4 "4"
 *   insn=0x000000000023DEF4 string=0x000000000023DF38 "t"
 *   insn=0x000000000023DEF8 string=0x000000000023DEFC ""
 *   insn=0x000000000023DF08 string=0x000000000023DF0C "\t@"
 *   insn=0x000000000023DF18 string=0x000000000023DF1C ""
 *   insn=0x000000000023DF28 string=0x000000000023DF2C "@"
 *   insn=0x000000000023DF38 string=0x000000000023DF3C "4"
 *   insn=0x000000000023DF3C string=0x000000000023DF80 "h"
 *   insn=0x000000000023DF40 string=0x000000000023DF44 ""
 *   insn=0x000000000023DF50 string=0x000000000023DF54 "\t@"
 *   insn=0x000000000023DF60 string=0x000000000023DF64 ""
 *   insn=0x000000000023DF70 string=0x000000000023DF74 "@"
 *   insn=0x000000000023DF80 string=0x000000000023DF84 "I%"
 *   insn=0x000000000023DF84 string=0x000000000023DF88 ")"
 *   insn=0x000000000023DF90 string=0x000000000023DF94 "A"
 *   insn=0x000000000023DF94 string=0x000000000023DFBC ")%"
 *   insn=0x000000000023DFBC string=0x000000000023DFC0 ")=G"
 *   insn=0x000000000023DFC0 string=0x000000000023DFC4 "!"
 *   insn=0x000000000023DFC8 string=0x000000000023DFCC "\t"
 *   insn=0x000000000023DFC8 string=0x000000000023DFE0 "\t"
 *   insn=0x000000000023DFCC string=0x000000000023DFD0 "*"
 *   insn=0x000000000023DFD0 string=0x000000000023DFD4 "\n"
 *   insn=0x000000000023DFDC string=0x000000000023DFEC "?"
 *   insn=0x000000000023DFE0 string=0x000000000023DFE4 "*"
 *   insn=0x000000000023DFE4 string=0x000000000023DFE8 "\n"
 *   insn=0x000000000023DFEC string=0x000000000023DFF0 "L"
 *   insn=0x000000000023E000 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023E004 string=0x000000000023E008 "@"
 *   insn=0x000000000023E008 string=0x000000000023E108 "h"
 *   insn=0x000000000023E00C string=0x000000000023E010 "u"
 *   insn=0x000000000023E014 string=0x000000000023E018 "<"
 *   insn=0x000000000023E01C string=0x000000000023E020 "u&@"
 *   insn=0x000000000023E024 string=0x000000000023E028 "&"
 *   insn=0x000000000023E028 string=0x000000000023E0C0 "u"
 *   insn=0x000000000023E030 string=0x000000000023E034 "5"
 *   insn=0x000000000023E034 string=0x000000000023E078 "u&@"
 *   insn=0x000000000023E038 string=0x000000000023E03C ""
 *   insn=0x000000000023E048 string=0x000000000023E04C "\t@"
 *   insn=0x000000000023E058 string=0x000000000023E05C ""
 *   insn=0x000000000023E068 string=0x000000000023E06C "@"
 *   insn=0x000000000023E078 string=0x000000000023E07C "5"
 *   insn=0x000000000023E080 string=0x000000000023E084 ""
 *   insn=0x000000000023E090 string=0x000000000023E094 "\t@"
 *   insn=0x000000000023E0A0 string=0x000000000023E0A4 ""
 *   insn=0x000000000023E0B0 string=0x000000000023E0B4 "@"
 *   insn=0x000000000023E0C0 string=0x000000000023E0C4 "5"
 *   insn=0x000000000023E0C8 string=0x000000000023E0CC ""
 *   insn=0x000000000023E0D8 string=0x000000000023E0DC "\t@"
 *   insn=0x000000000023E0E8 string=0x000000000023E0EC ""
 *   insn=0x000000000023E0F8 string=0x000000000023E0FC "@"
 *   insn=0x000000000023E108 string=0x000000000023E10C ")%"
 *   insn=0x000000000023E10C string=0x000000000023E110 ")"
 *   insn=0x000000000023E11C string=0x000000000023E120 ")%"
 *   insn=0x000000000023E120 string=0x000000000023E124 ")=G"
 *   insn=0x000000000023E124 string=0x000000000023E128 "!"
 *   insn=0x000000000023E128 string=0x000000000023E12C "i"
 *   insn=0x000000000023E12C string=0x000000000023E130 "\t"
 *   insn=0x000000000023E12C string=0x000000000023E158 "\t"
 *   insn=0x000000000023E130 string=0x000000000023E134 "*"
 *   insn=0x000000000023E134 string=0x000000000023E138 "\n"
 *   insn=0x000000000023E13C string=0x000000000023E140 "?"
 *   insn=0x000000000023E140 string=0x000000000023E144 "l"
 *   insn=0x000000000023E158 string=0x000000000023E15C "*"
 *   insn=0x000000000023E15C string=0x000000000023E160 "\n"
 *   insn=0x000000000023E160 string=0x000000000023E164 "?"
 *   insn=0x000000000023E164 string=0x000000000023E168 ""
 *   insn=0x000000000023E170 string=0x000000000023E174 "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextBubble::~GUITextBubble(Caver::GUITextBubble *this)
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
  __int64 v14; // x8
  void *v15; // x0
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 13);
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
  v5 = (_QWORD *)*((_QWORD *)this + 11);
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
  v8 = (_QWORD *)*((_QWORD *)this + 9);
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
  v11 = (_QWORD *)*((_QWORD *)this + 7);
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
  v14 = *((_QWORD *)this + 5);
  v15 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v15);
  }
}

