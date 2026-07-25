/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D029C
 * Mangled: _ZN5Caver13ExperienceBarD2Ev
 * Demangled: Caver::ExperienceBar::~ExperienceBar()
 *
 * Callers: 1
 *   0x00000000001F62E0  Caver::ExperienceBar::~ExperienceBar()
 *
 * Callees: 7
 *   0x00000000001F62E0  Caver::ExperienceBar::~ExperienceBar()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 54
 *   insn=0x00000000003D02B0 string=0x00000000003D02B4 "t"
 *   insn=0x00000000003D02B4 string=0x00000000003D02B8 "B"
 *   insn=0x00000000003D02B8 string=0x00000000003D02BC "A"
 *   insn=0x00000000003D02BC string=0x00000000003D02C0 "h"
 *   insn=0x00000000003D02C0 string=0x00000000003D02C4 "4"
 *   insn=0x00000000003D02C4 string=0x00000000003D0308 "`""
 *   insn=0x00000000003D02C8 string=0x00000000003D02CC ""
 *   insn=0x00000000003D02D8 string=0x00000000003D02DC "\t@"
 *   insn=0x00000000003D02E8 string=0x00000000003D02EC ""
 *   insn=0x00000000003D02F8 string=0x00000000003D02FC "@"
 *   insn=0x00000000003D030C string=0x00000000003D0310 "`b"
 *   insn=0x00000000003D030C string=0x00000000001F8990 "0'"
 *   insn=0x00000000003D0314 string=0x00000000003D0318 "`"
 *   insn=0x00000000003D031C string=0x00000000003D0320 "t"
 *   insn=0x00000000003D0320 string=0x00000000003D0324 "4"
 *   insn=0x00000000003D0324 string=0x00000000003D0368 "t~@"
 *   insn=0x00000000003D0328 string=0x00000000003D032C ""
 *   insn=0x00000000003D0338 string=0x00000000003D033C "\t@"
 *   insn=0x00000000003D0348 string=0x00000000003D034C ""
 *   insn=0x00000000003D0358 string=0x00000000003D035C "@"
 *   insn=0x00000000003D0368 string=0x00000000003D036C "4"
 *   insn=0x00000000003D0370 string=0x00000000003D0374 ""
 *   insn=0x00000000003D0380 string=0x00000000003D0384 "\t@"
 *   insn=0x00000000003D0390 string=0x00000000003D0394 ""
 *   insn=0x00000000003D03A0 string=0x00000000003D03A4 "@"
 *   insn=0x00000000003D03C4 string=0x00000000003D03C8 "8"
 *   insn=0x00000000003D03CC string=0x00000000003D03D0 "u~@"
 *   insn=0x00000000003D03D4 string=0x00000000003D03D8 "4"
 *   insn=0x00000000003D03DC string=0x00000000003D03E0 "`""
 *   insn=0x00000000003D03E0 string=0x00000000003D03E4 "k"
 *   insn=0x00000000003D03E4 string=0x00000000003D03E8 ""
 *   insn=0x00000000003D03E8 string=0x00000000003D0408 "`b"
 *   insn=0x00000000003D03EC string=0x00000000003D03F0 "u"
 *   insn=0x00000000003D03F0 string=0x00000000003D03F4 "u"
 *   insn=0x00000000003D03F8 string=0x00000000003D0460 "u~@"
 *   insn=0x00000000003D0400 string=0x00000000003D0410 "`"
 *   insn=0x00000000003D0408 string=0x00000000003D040C "a"
 *   insn=0x00000000003D0410 string=0x00000000003D0414 "_"
 *   insn=0x00000000003D0414 string=0x00000000003D0418 "u"
 *   insn=0x00000000003D0418 string=0x00000000003D041C "5"
 *   insn=0x00000000003D0420 string=0x00000000003D0424 ""
 *   insn=0x00000000003D0430 string=0x00000000003D0434 "\t@"
 *   insn=0x00000000003D0440 string=0x00000000003D0444 ""
 *   insn=0x00000000003D0450 string=0x00000000003D0454 "@"
 *   insn=0x00000000003D0460 string=0x00000000003D0464 "5"
 *   insn=0x00000000003D0468 string=0x00000000003D046C ""
 *   insn=0x00000000003D0478 string=0x00000000003D047C "\t@"
 *   insn=0x00000000003D0488 string=0x00000000003D048C ""
 *   insn=0x00000000003D0498 string=0x00000000003D049C "@"
 *   insn=0x00000000003D04A8 string=0x00000000003D04AC "a"
 *   insn=0x00000000003D04CC string=0x00000000001F62E0 "0'"
 *   insn=0x00000000003D04D8 string=0x00000000003D04DC "u"
 *   insn=0x00000000003D04DC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003D04E4 string=0x00000000003D04E8 "r"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ExperienceBar::~ExperienceBar(Caver::ExperienceBar *this)
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

  v2 = (_QWORD *)*((_QWORD *)this + 129);
  *(_QWORD *)this = off_6CF9F0;
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
  Caver::FontText::~FontText((Caver::ExperienceBar *)((char *)this + 776));
  Caver::FontText::~FontText((Caver::ExperienceBar *)((char *)this + 536));
  Caver::FontText::~FontText((Caver::ExperienceBar *)((char *)this + 296));
  v5 = (_QWORD *)*((_QWORD *)this + 33);
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
  v8 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

