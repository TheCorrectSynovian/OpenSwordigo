/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372488
 * Mangled: _ZN5Caver25SkillPickerViewControllerC2Ev
 * Demangled: Caver::SkillPickerViewController::SkillPickerViewController(void)
 *
 * Callers: 2
 *   0x00000000001F8290  Caver::SkillPickerViewController::SkillPickerViewController(void)
 *   0x0000000000372360  Caver::SceneView::~SceneView()
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000372498 string=0x00000000001F40B0 "P'"
 *   insn=0x000000000037249C string=0x00000000003724A0 ""
 *   insn=0x00000000003724A4 string=0x00000000003724A8 "\tA"
 *   insn=0x00000000003724A8 string=0x00000000003724AC "!"
 *   insn=0x00000000003724AC string=0x00000000003724B0 "i"
 *   insn=0x00000000003724B0 string=0x00000000003724B4 "h&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerViewController::SkillPickerViewController(Caver::SkillPickerViewController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *(_QWORD *)this = off_6CCDB0;
  *((_QWORD *)this + 9) = &off_6CCE28;
  return result;
}

