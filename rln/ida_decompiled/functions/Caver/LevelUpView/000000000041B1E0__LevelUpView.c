/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041B1E0
 * Mangled: _ZN5Caver11LevelUpViewC2Ev
 * Demangled: Caver::LevelUpView::LevelUpView(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000041B1EC string=0x000000000041B1F0 "T"
 *   insn=0x000000000041B1F0 string=0x000000000041B1F4 "H"
 *   insn=0x000000000041B1F4 string=0x000000000041B1F8 ""
 *   insn=0x000000000041B204 string=0x000000000041B208 "A"
 *   insn=0x000000000041B208 string=0x000000000041B20C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LevelUpView::LevelUpView(Caver::LevelUpView *this)
{
  __int64 result; // x0

  result = Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *(_QWORD *)this = off_6D2700;
  *((_QWORD *)this + 30) = 0;
  return result;
}

