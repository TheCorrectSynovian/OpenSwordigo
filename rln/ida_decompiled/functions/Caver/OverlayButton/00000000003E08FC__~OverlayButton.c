/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E08FC
 * Mangled: _ZN5Caver13OverlayButtonD2Ev
 * Demangled: Caver::OverlayButton::~OverlayButton()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F80D0  Caver::GUIButton::~GUIButton()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E0A34  Caver::OverlayMenuButton::OverlayMenuButton(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000003E0908 string=0x00000000003E090C "("
 *   insn=0x00000000003E090C string=0x00000000003E0910 "t"
 *   insn=0x00000000003E0910 string=0x00000000003E0914 ""
 *   insn=0x00000000003E0914 string=0x00000000003E0918 "A"
 *   insn=0x00000000003E0918 string=0x00000000003E091C "h"
 *   insn=0x00000000003E091C string=0x00000000003E0920 "4"
 *   insn=0x00000000003E0924 string=0x00000000003E0928 ""
 *   insn=0x00000000003E0934 string=0x00000000003E0938 "\t@"
 *   insn=0x00000000003E0944 string=0x00000000003E0948 ""
 *   insn=0x00000000003E0954 string=0x00000000003E0958 "@"
 *   insn=0x00000000003E0970 string=0x00000000001F80D0 "0'"
 *   insn=0x00000000003E0984 string=0x00000000003E0988 "q"
 *   insn=0x00000000003E0998 string=0x00000000003E099C "("
 *   insn=0x00000000003E099C string=0x00000000003E09A0 "t"
 *   insn=0x00000000003E09A0 string=0x00000000003E09A4 ""
 *   insn=0x00000000003E09A4 string=0x00000000003E09A8 "A"
 *   insn=0x00000000003E09A8 string=0x00000000003E09AC "h"
 *   insn=0x00000000003E09AC string=0x00000000003E09B0 "4"
 *   insn=0x00000000003E09B4 string=0x00000000003E09B8 ""
 *   insn=0x00000000003E09C4 string=0x00000000003E09C8 "\t@"
 *   insn=0x00000000003E09D4 string=0x00000000003E09D8 ""
 *   insn=0x00000000003E09E4 string=0x00000000003E09E8 "@"
 *   insn=0x00000000003E0A04 string=0x00000000003E0A08 "*Z"
 *   insn=0x00000000003E0A08 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E0A24 string=0x00000000003E0A28 ""Z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayButton::~OverlayButton(Caver::OverlayButton *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 61);
  *(_QWORD *)this = off_6D0450;
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
  Caver::GUIButton::~GUIButton(this);
}

