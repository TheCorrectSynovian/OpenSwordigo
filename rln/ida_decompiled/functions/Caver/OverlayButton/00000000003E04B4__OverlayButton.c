/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E04B4
 * Mangled: _ZN5Caver13OverlayButtonC2Ev
 * Demangled: Caver::OverlayButton::OverlayButton(void)
 *
 * Callers: 3
 *   0x00000000001F93E0  Caver::OverlayButton::OverlayButton(void)
 *   0x00000000001FF390  Caver::OverlayButton::OverlayButton(void)
 *   0x00000000003E037C  Caver::ManaBar::~ManaBar()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F80D0  Caver::GUIButton::~GUIButton()
 *   0x00000000001FB010  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000003E04C4 string=0x00000000003E04C8 "T"
 *   insn=0x00000000003E04DC string=0x00000000003E04E0 "("
 *   insn=0x00000000003E04DC string=0x00000000001FB010 "0'"
 *   insn=0x00000000003E04E0 string=0x00000000003E04E4 ""
 *   insn=0x00000000003E04E4 string=0x00000000003E04E8 "ir"
 *   insn=0x00000000003E04E8 string=0x00000000003E04EC "j"
 *   insn=0x00000000003E04F0 string=0x00000000003E04F4 "A"
 *   insn=0x00000000003E04F8 string=0x00000000003E04FC "h"
 *   insn=0x00000000003E04FC string=0x00000000003E0500 "_"
 *   insn=0x00000000003E0500 string=0x00000000003E0504 "?"
 *   insn=0x00000000003E0508 string=0x00000000003E050C "!"
 *   insn=0x00000000003E050C string=0x0000000000584965 "click"
 *   insn=0x00000000003E051C string=0x00000000003E0520 "`"
 *   insn=0x00000000003E0524 string=0x00000000003E0528 "`("
 *   insn=0x00000000003E052C string=0x00000000003E0530 ")"
 *   insn=0x00000000003E0530 string=0x00000000003E0534 ")"
 *   insn=0x00000000003E053C string=0x00000000003E0540 "A"
 *   insn=0x00000000003E0540 string=0x00000000003E0568 ")"
 *   insn=0x00000000003E0550 string=0x00000000003E05AC "IW"
 *   insn=0x00000000003E0568 string=0x00000000003E056C ")=G"
 *   insn=0x00000000003E056C string=0x00000000003E0570 "!"
 *   insn=0x00000000003E0574 string=0x00000000003E0578 "\t"
 *   insn=0x00000000003E0574 string=0x00000000003E058C "\t"
 *   insn=0x00000000003E0578 string=0x00000000003E057C "*"
 *   insn=0x00000000003E057C string=0x00000000003E0580 "\n"
 *   insn=0x00000000003E0588 string=0x00000000003E0598 "?"
 *   insn=0x00000000003E058C string=0x00000000003E0590 "*"
 *   insn=0x00000000003E0590 string=0x00000000003E0594 "\n"
 *   insn=0x00000000003E0598 string=0x00000000003E059C "L"
 *   insn=0x00000000003E05AC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E05B0 string=0x00000000003E05B4 "*"
 *   insn=0x00000000003E05B4 string=0x00000000003E05B8 "J"
 *   insn=0x00000000003E05BC string=0x00000000003E05C0 "(a"
 *   insn=0x00000000003E05C8 string=0x00000000003E05CC "*"
 *   insn=0x00000000003E05C8 string=0x00000000003E0628 "u"
 *   insn=0x00000000003E05CC string=0x00000000003E05D0 "J=G"
 *   insn=0x00000000003E05D0 string=0x00000000003E05D4 ")!"
 *   insn=0x00000000003E05D8 string=0x00000000003E05DC "*"
 *   insn=0x00000000003E05D8 string=0x00000000003E060C "*"
 *   insn=0x00000000003E05DC string=0x00000000003E05E0 "K"
 *   insn=0x00000000003E05E0 string=0x00000000003E05E4 "+"
 *   insn=0x00000000003E05E8 string=0x00000000003E05EC "_"
 *   insn=0x00000000003E05F8 string=0x00000000003E05FC "j'"
 *   insn=0x00000000003E05FC string=0x00000000003E0600 "u"
 *   insn=0x00000000003E0600 string=0x00000000003E0604 "u"
 *   insn=0x00000000003E060C string=0x00000000003E0610 "K"
 *   insn=0x00000000003E0610 string=0x00000000003E0614 "+"
 *   insn=0x00000000003E0614 string=0x00000000003E0618 "_"
 *   insn=0x00000000003E0628 string=0x00000000003E062C "5"
 *   insn=0x00000000003E0630 string=0x00000000003E0634 ""
 *   insn=0x00000000003E0640 string=0x00000000003E0644 "\t@"
 *   insn=0x00000000003E0650 string=0x00000000003E0654 ""
 *   insn=0x00000000003E0660 string=0x00000000003E0664 "@"
 *   insn=0x00000000003E0674 string=0x00000000001F80D0 "0'"
 *   insn=0x00000000003E067C string=0x00000000003E0680 "3"
 *   insn=0x00000000003E0690 string=0x00000000003E0694 ""
 *   insn=0x00000000003E0694 string=0x00000000003E0698 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayButton::OverlayButton(Caver::OverlayButton *this)
{
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+8h] [xbp-38h] BYREF

  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIButton::GUIButton();
  *((_BYTE *)this + 472) = 0;
  *((_QWORD *)this + 58) = 0;
  *(_QWORD *)this = off_6D0450;
  *(_QWORD *)((char *)this + 484) = 0;
  *(_QWORD *)((char *)this + 476) = 0;
  *((_DWORD *)this + 123) = 0;
  sub_566BB8((int)v5, "click");
  sub_56A6A8((char *)this + 448);
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

