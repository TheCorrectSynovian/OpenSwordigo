/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043BA78
 * Mangled: _ZN5Caver15SkillPickerViewC2Ev
 * Demangled: Caver::SkillPickerView::SkillPickerView(void)
 *
 * Callers: 1
 *   0x00000000001F4740  Caver::SkillPickerView::SkillPickerView(void)
 *
 * Callees: 1
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000043BA84 string=0x000000000043BA88 ". "
 *   insn=0x000000000043BA88 string=0x000000000043BA8C "H"
 *   insn=0x000000000043BA8C string=0x000000000043BA90 ""
 *   insn=0x000000000043BA9C string=0x000000000043BAA0 "\tA"
 *   insn=0x000000000043BAA0 string=0x000000000043BAA4 "i"
 *   insn=0x000000000043BAA4 string=0x000000000043BAA8 "\t"
 *   insn=0x000000000043BAA8 string=0x000000000043BAAC ""
 *   insn=0x000000000043BAB4 string=0x000000000043BAB8 "h~"
 *   insn=0x000000000043BAB8 string=0x000000000043BABC "iB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::SkillPickerView(Caver::SkillPickerView *this)
{
  __int64 result; // x0

  result = Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)this = off_6D3A60;
  *((_QWORD *)this + 38) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 30) = off_6D3BB0;
  *((_QWORD *)this + 31) = 0;
  *((_DWORD *)this + 80) = -1;
  return result;
}

