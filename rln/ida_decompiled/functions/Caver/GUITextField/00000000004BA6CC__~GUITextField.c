/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA6CC
 * Mangled: _ZN5Caver12GUITextFieldD2Ev
 * Demangled: Caver::GUITextField::~GUITextField()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004BA760  Caver::OnlineController_Android::OnlineController_Android(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000004BA6D8 string=0x00000000004BA6DC "h"
 *   insn=0x00000000004BA6DC string=0x00000000004BA6E0 "t"
 *   insn=0x00000000004BA6E0 string=0x00000000004BA6E4 ""
 *   insn=0x00000000004BA6E4 string=0x00000000004BA6E8 "A"
 *   insn=0x00000000004BA6E8 string=0x00000000004BA6EC "h"
 *   insn=0x00000000004BA6EC string=0x00000000004BA6F0 "4"
 *   insn=0x00000000004BA6F4 string=0x00000000004BA6F8 ""
 *   insn=0x00000000004BA704 string=0x00000000004BA708 "\t@"
 *   insn=0x00000000004BA714 string=0x00000000004BA718 ""
 *   insn=0x00000000004BA724 string=0x00000000004BA728 "@"
 *   insn=0x00000000004BA740 string=0x00000000001F4DB0 "P'"
 *   insn=0x00000000004BA750 string=0x00000000004BA754 "\"
 *   insn=0x00000000004BA758 string=0x00000000004BA75C " "
 *   insn=0x00000000004BA75C string=0x00000000004BA760 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextField::~GUITextField(Caver::GUITextField *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 38);
  *(_QWORD *)this = off_6D7708;
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
  Caver::GUIControl::~GUIControl(this);
}

