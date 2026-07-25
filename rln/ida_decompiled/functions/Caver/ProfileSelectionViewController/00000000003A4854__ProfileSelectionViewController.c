/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A4854
 * Mangled: _ZN5Caver30ProfileSelectionViewControllerC2Ev
 * Demangled: Caver::ProfileSelectionViewController::ProfileSelectionViewController(void)
 *
 * Callers: 1
 *   0x00000000001F7A70  Caver::ProfileSelectionViewController::ProfileSelectionViewController(void)
 *
 * Callees: 1
 *   0x00000000001F40B0  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 7
 *   insn=0x00000000003A4864 string=0x00000000003A4868 ""
 *   insn=0x00000000003A4864 string=0x00000000001F40B0 "P'"
 *   insn=0x00000000003A4868 string=0x00000000003A486C "y@"
 *   insn=0x00000000003A4870 string=0x00000000003A4874 "\tA"
 *   insn=0x00000000003A4874 string=0x00000000003A4878 "!"
 *   insn=0x00000000003A4878 string=0x00000000003A487C "i"
 *   insn=0x00000000003A487C string=0x00000000003A4880 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProfileSelectionViewController::ProfileSelectionViewController(
        Caver::ProfileSelectionViewController *this)
{
  __int64 result; // x0

  result = Caver::GUIViewController::GUIViewController(this);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *(_QWORD *)this = off_6CE6A0;
  *((_QWORD *)this + 9) = &off_6CE718;
  *((_QWORD *)this + 10) = 0;
  return result;
}

