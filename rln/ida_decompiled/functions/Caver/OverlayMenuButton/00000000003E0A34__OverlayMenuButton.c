/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E0A34
 * Mangled: _ZN5Caver17OverlayMenuButtonC2Ev
 * Demangled: Caver::OverlayMenuButton::OverlayMenuButton(void)
 *
 * Callers: 2
 *   0x00000000001F7780  Caver::OverlayMenuButton::OverlayMenuButton(void)
 *   0x00000000003E08FC  Caver::OverlayButton::~OverlayButton()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F80D0  Caver::GUIButton::~GUIButton()
 *   0x00000000001F93E0  Caver::OverlayButton::OverlayButton(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E0C4C  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000003E0A44 string=0x00000000003E0A48 "T"
 *   insn=0x00000000003E0A54 string=0x00000000003E0A58 "bb"
 *   insn=0x00000000003E0A58 string=0x00000000003E0A5C ")"
 *   insn=0x00000000003E0A58 string=0x00000000001F93E0 "0'"
 *   insn=0x00000000003E0A5C string=0x00000000003E0A60 "("
 *   insn=0x00000000003E0A60 string=0x00000000003E0A64 ")"
 *   insn=0x00000000003E0A64 string=0x00000000003E0A68 ""
 *   insn=0x00000000003E0A6C string=0x00000000003E0A70 "@"
 *   insn=0x00000000003E0A70 string=0x00000000003E0A74 ")A"
 *   insn=0x00000000003E0A74 string=0x00000000003E0A78 "a"
 *   insn=0x00000000003E0A84 string=0x00000000003E0A88 "i"
 *   insn=0x00000000003E0A88 string=0x00000000003E0A8C "h"
 *   insn=0x00000000003E0A90 string=0x00000000003E0A94 "a"
 *   insn=0x00000000003E0AA4 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003E0ACC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E0AD4 string=0x00000000003E0AD8 "5"
 *   insn=0x00000000003E0AD8 string=0x00000000003E0B1C "u"
 *   insn=0x00000000003E0ADC string=0x00000000003E0AE0 ""
 *   insn=0x00000000003E0AEC string=0x00000000003E0AF0 "\t@"
 *   insn=0x00000000003E0AFC string=0x00000000003E0B00 ""
 *   insn=0x00000000003E0B0C string=0x00000000003E0B10 "@"
 *   insn=0x00000000003E0B1C string=0x00000000003E0B20 "5"
 *   insn=0x00000000003E0B20 string=0x00000000003E0B64 "h"
 *   insn=0x00000000003E0B24 string=0x00000000003E0B28 ""
 *   insn=0x00000000003E0B34 string=0x00000000003E0B38 "\t@"
 *   insn=0x00000000003E0B44 string=0x00000000003E0B48 ""
 *   insn=0x00000000003E0B54 string=0x00000000003E0B58 "@"
 *   insn=0x00000000003E0B64 string=0x00000000003E0B68 ")"
 *   insn=0x00000000003E0B68 string=0x00000000003E0B6C ")"
 *   insn=0x00000000003E0B78 string=0x00000000003E0B7C ")"
 *   insn=0x00000000003E0B78 string=0x00000000003E0BAC "("
 *   insn=0x00000000003E0B7C string=0x00000000003E0B80 ")=G"
 *   insn=0x00000000003E0B80 string=0x00000000003E0B84 "!"
 *   insn=0x00000000003E0B84 string=0x00000000003E0B88 "i"
 *   insn=0x00000000003E0B88 string=0x00000000003E0B8C "\t"
 *   insn=0x00000000003E0B88 string=0x00000000003E0C14 "\t"
 *   insn=0x00000000003E0B8C string=0x00000000003E0B90 "*"
 *   insn=0x00000000003E0B90 string=0x00000000003E0B94 "\n"
 *   insn=0x00000000003E0B98 string=0x00000000003E0B9C "?"
 *   insn=0x00000000003E0B9C string=0x00000000003E0BA0 "l"
 *   insn=0x00000000003E0BAC string=0x00000000003E0BB0 "u"
 *   insn=0x00000000003E0BB0 string=0x00000000003E0BB4 ""
 *   insn=0x00000000003E0BB4 string=0x00000000003E0BB8 "A"
 *   insn=0x00000000003E0BB8 string=0x00000000003E0BBC "h"
 *   insn=0x00000000003E0BBC string=0x00000000003E0BC0 "5"
 *   insn=0x00000000003E0BC4 string=0x00000000003E0BC8 ""
 *   insn=0x00000000003E0BD4 string=0x00000000003E0BD8 "\t@"
 *   insn=0x00000000003E0BE4 string=0x00000000003E0BE8 ""
 *   insn=0x00000000003E0BF4 string=0x00000000003E0BF8 "@"
 *   insn=0x00000000003E0C04 string=0x00000000003E0C08 "2]"
 *   insn=0x00000000003E0C08 string=0x00000000001F80D0 "0'"
 *   insn=0x00000000003E0C0C string=0x00000000003E0C10 "-"
 *   insn=0x00000000003E0C14 string=0x00000000003E0C18 "*"
 *   insn=0x00000000003E0C18 string=0x00000000003E0C1C "\n"
 *   insn=0x00000000003E0C1C string=0x00000000003E0C20 "?"
 *   insn=0x00000000003E0C20 string=0x00000000003E0C24 ""
 *   insn=0x00000000003E0C30 string=0x00000000003E0C34 "']"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayMenuButton::OverlayMenuButton(Caver::OverlayMenuButton *this)
{
  __int128 v3; // [xsp+0h] [xbp-40h] BYREF
  __int64 v4; // [xsp+18h] [xbp-28h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::OverlayButton::OverlayButton(this);
  *((_BYTE *)this + 504) = 0;
  *((_QWORD *)this + 67) = 0;
  *(_QWORD *)this = off_6D05C0;
  *((_QWORD *)this + 62) = &byte_6FD2F8;
  *((_QWORD *)this + 66) = 0;
  *((_OWORD *)this + 32) = 0u;
  v3 = xmmword_592AD0;
  return Caver::GUIView::SetFrame(this, (const Caver::Rectangle *)&v3);
}

