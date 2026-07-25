/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049CB2C
 * Mangled: _ZN5Caver9GUISliderC2Ev
 * Demangled: Caver::GUISlider::GUISlider(void)
 *
 * Callers: 1
 *   0x00000000001FEA80  Caver::GUISlider::GUISlider(void)
 *
 * Callees: 1
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 16
 *   insn=0x000000000049CB40 string=0x000000000049CB44 "J"
 *   insn=0x000000000049CB44 string=0x000000000049CB48 "J"
 *   insn=0x000000000049CB50 string=0x000000000049CB54 "h""
 *   insn=0x000000000049CB54 string=0x000000000049CB58 " "
 *   insn=0x000000000049CB58 string=0x000000000049CB5C "JA"
 *   insn=0x000000000049CB60 string=0x000000000049CB64 "i"
 *   insn=0x000000000049CB64 string=0x000000000049CB68 "i"
 *   insn=0x000000000049CB68 string=0x000000000049CB6C "j"
 *   insn=0x000000000049CB6C string=0x000000000049CB70 "\nY"
 *   insn=0x000000000049CB70 string=0x000000000049CB74 "h"
 *   insn=0x000000000049CB78 string=0x000000000049CB7C "*"
 *   insn=0x000000000049CB7C string=0x000000000049CB80 "i"
 *   insn=0x000000000049CB80 string=0x000000000049CB84 "j"
 *   insn=0x000000000049CB88 string=0x000000000049CB8C "?"
 *   insn=0x000000000049CB8C string=0x000000000049CB90 "`"
 *   insn=0x000000000049CB94 string=0x000000000049CB98 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GUISlider::GUISlider(Caver::GUISlider *this)
{
  long double result; // q0

  Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 35) = 0;
  *(_OWORD *)&result = 0u;
  *(_OWORD *)((char *)this + 248) = 0u;
  *(_OWORD *)((char *)this + 264) = 0u;
  *((_QWORD *)this + 33) = (char *)this + 248;
  *((_QWORD *)this + 34) = (char *)this + 248;
  *(_QWORD *)this = off_6D64F0;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 308) = 0x42C8000000000000LL;
  *(_QWORD *)((char *)this + 292) = 0;
  *(_QWORD *)((char *)this + 297) = 0;
  *((_OWORD *)this + 20) = 0u;
  *((_OWORD *)this + 21) = 0u;
  *((_WORD *)this + 176) = 0;
  *(_QWORD *)((char *)this + 356) = 0;
  *((_WORD *)this + 182) = 0;
  return result;
}

