/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049E2A0
 * Mangled: _ZN5Caver7GUIViewC2Ev
 * Demangled: Caver::GUIView::GUIView(void)
 *
 * Callers: 2
 *   0x00000000001F9150  Caver::GUIView::GUIView(void)
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x000000000049E2A4 string=0x000000000049E2A8 ""
 *   insn=0x000000000049E2A8 string=0x000000000049E2AC ""
 *   insn=0x000000000049E2B0 string=0x000000000049E2B4 "4"
 *   insn=0x000000000049E2B8 string=0x000000000049E2BC ""
 *   insn=0x000000000049E2BC string=0x000000000049E2C0 "("
 *   insn=0x000000000049E2C0 string=0x000000000049E2C4 ""
 *   insn=0x000000000049E2D0 string=0x000000000049E2D4 "A"
 *   insn=0x000000000049E2F4 string=0x000000000049E2F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GUIView::GUIView(Caver::GUIView *this)
{
  long double result; // q0

  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = (char *)this + 32;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_BYTE *)this + 229) = 1;
  *(_OWORD *)&result = 0u;
  *((_BYTE *)this + 80) = 0;
  *((_BYTE *)this + 228) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_WORD *)this + 115) = 0;
  *((_BYTE *)this + 232) = 0;
  *(_OWORD *)((char *)this + 8) = 0u;
  *((_OWORD *)this + 8) = 0u;
  *((_OWORD *)this + 9) = 0u;
  *((_OWORD *)this + 7) = 0u;
  *((_OWORD *)this + 3) = 0u;
  *((_OWORD *)this + 4) = 0u;
  *(_OWORD *)((char *)this + 132) = 0u;
  *(_QWORD *)this = off_6D67D0;
  *(_OWORD *)((char *)this + 116) = 0u;
  return result;
}

