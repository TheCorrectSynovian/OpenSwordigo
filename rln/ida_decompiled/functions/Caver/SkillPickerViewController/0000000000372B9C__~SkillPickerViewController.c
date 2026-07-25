/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372B9C
 * Mangled: _ZN5Caver25SkillPickerViewControllerD2Ev
 * Demangled: Caver::SkillPickerViewController::~SkillPickerViewController()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000372CE4  boost::detail::sp_counted_impl_p<Caver::SkillPickerView>::~sp_counted_impl_p()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x0000000000372BAC string=0x0000000000372BB0 ""
 *   insn=0x0000000000372BB0 string=0x0000000000372BB4 "t.@"
 *   insn=0x0000000000372BB4 string=0x0000000000372BB8 "\tA"
 *   insn=0x0000000000372BB8 string=0x0000000000372BBC "!"
 *   insn=0x0000000000372BBC string=0x0000000000372BC0 "i"
 *   insn=0x0000000000372BC0 string=0x0000000000372BC4 "h&"
 *   insn=0x0000000000372BC4 string=0x0000000000372BC8 "4"
 *   insn=0x0000000000372BCC string=0x0000000000372BD0 ""
 *   insn=0x0000000000372BDC string=0x0000000000372BE0 "\t@"
 *   insn=0x0000000000372BEC string=0x0000000000372BF0 ""
 *   insn=0x0000000000372BFC string=0x0000000000372C00 "@"
 *   insn=0x0000000000372C14 string=0x0000000000372C18 "^"
 *   insn=0x0000000000372C18 string=0x00000000001F6590 "0'"
 *   insn=0x0000000000372C20 string=0x0000000000372C24 "["
 *   insn=0x0000000000372C28 string=0x0000000000372C2C "&;"
 *   insn=0x0000000000372C44 string=0x0000000000372C48 ""
 *   insn=0x0000000000372C48 string=0x0000000000372C4C "t.@"
 *   insn=0x0000000000372C4C string=0x0000000000372C50 "\tA"
 *   insn=0x0000000000372C50 string=0x0000000000372C54 "!"
 *   insn=0x0000000000372C54 string=0x0000000000372C58 "i"
 *   insn=0x0000000000372C58 string=0x0000000000372C5C "h&"
 *   insn=0x0000000000372C5C string=0x0000000000372C60 "4"
 *   insn=0x0000000000372C64 string=0x0000000000372C68 ""
 *   insn=0x0000000000372C74 string=0x0000000000372C78 "\t@"
 *   insn=0x0000000000372C84 string=0x0000000000372C88 ""
 *   insn=0x0000000000372C94 string=0x0000000000372C98 "@"
 *   insn=0x0000000000372CA4 string=0x0000000000372CA8 ":"
 *   insn=0x0000000000372CB4 string=0x0000000000372CB8 "~"
 *   insn=0x0000000000372CB8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000372CC0 string=0x0000000000372CC4 "3"
 *   insn=0x0000000000372CD4 string=0x0000000000372CD8 "v"
 *   insn=0x0000000000372CE0 string=0x0000000000372CE4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillPickerViewController::~SkillPickerViewController(Caver::SkillPickerViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 11);
  *(_QWORD *)this = off_6CCDB0;
  *((_QWORD *)this + 9) = &off_6CCE28;
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
  Caver::GUIViewController::~GUIViewController(this);
}

