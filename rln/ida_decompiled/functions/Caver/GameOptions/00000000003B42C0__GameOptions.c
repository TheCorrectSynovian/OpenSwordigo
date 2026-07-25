/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B42C0
 * Mangled: _ZN5Caver11GameOptionsC2Ev
 * Demangled: Caver::GameOptions::GameOptions(void)
 *
 * Callers: 1
 *   0x00000000001F85A0  Caver::GameOptions::GameOptions(void)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003B42C0 string=0x00000000003B42C4 "@"
 *   insn=0x00000000003B42C8 string=0x00000000003B42CC ""
 *   insn=0x00000000003B42D8 string=0x00000000003B42DC "a"
 *   insn=0x00000000003B42E8 string=0x00000000003B42EC "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::GameOptions::GameOptions(Caver::GameOptions *this)
{
  double result; // d0

  *((_WORD *)this + 16) = 257;
  __asm { FMOV            V0.2S, #1.0 }
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_BYTE *)this + 82) = 0;
  *(double *)((char *)this + 36) = result;
  *(_QWORD *)this = &byte_6FD2F8;
  *((_QWORD *)this + 1) = 0;
  *((_WORD *)this + 40) = 0;
  return result;
}

