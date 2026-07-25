/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9E3C
 * Mangled: _ZN5Caver13GUITextBubbleC2Ev
 * Demangled: Caver::GUITextBubble::GUITextBubble(void)
 *
 * Callers: 1
 *   0x00000000001FD480  Caver::GUITextBubble::GUITextBubble(void)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004A9E40 string=0x00000000004A9E44 "i"
 *   insn=0x00000000004A9E50 string=0x00000000004A9E54 " "
 *   insn=0x00000000004A9E58 string=0x00000000004A9E5C ")"
 *   insn=0x00000000004A9E5C string=0x00000000004A9E60 ""
 *   insn=0x00000000004A9E60 string=0x00000000004A9E64 "h"
 *   insn=0x00000000004A9E6C string=0x00000000004A9E70 ""
 *   insn=0x00000000004A9E70 string=0x00000000004A9E74 ")a"
 *   insn=0x00000000004A9E8C string=0x00000000004A9E90 "\t"
 *   insn=0x00000000004A9E94 string=0x00000000004A9E98 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::GUITextBubble::GUITextBubble(Caver::GUITextBubble *this)
{
  double result; // d0

  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_OWORD *)this = xmmword_597250;
  *((_BYTE *)this + 32) = 1;
  *((_OWORD *)this + 7) = xmmword_597260;
  result = 2.0463633e-13;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 5) = &byte_6FD2F8;
  *((_QWORD *)this + 17) = 0x3D4CCCCD00000000LL;
  *((_DWORD *)this + 37) = 2139095039;
  return result;
}

