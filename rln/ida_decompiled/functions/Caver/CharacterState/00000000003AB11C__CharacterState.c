/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AB11C
 * Mangled: _ZN5Caver14CharacterStateC2Ev
 * Demangled: Caver::CharacterState::CharacterState(void)
 *
 * Callers: 1
 *   0x00000000001F8C00  Caver::CharacterState::CharacterState(void)
 *
 * Callees: 1
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 8
 *   insn=0x00000000003AB134 string=0x00000000003AB138 "`"
 *   insn=0x00000000003AB144 string=0x00000000003AB148 "h~"
 *   insn=0x00000000003AB14C string=0x00000000003AB150 "("
 *   insn=0x00000000003AB14C string=0x00000000001FBC40 "0'"
 *   insn=0x00000000003AB150 string=0x00000000003AB154 ")"
 *   insn=0x00000000003AB158 string=0x00000000003AB15C "!"
 *   insn=0x00000000003AB15C string=0x00000000003AB160 "`"
 *   insn=0x00000000003AB160 string=0x00000000003AB164 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CharacterState::CharacterState(Caver::CharacterState *this)
{
  long double result; // q0

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = (char *)this + 24;
  *((_QWORD *)this + 6) = (char *)this + 24;
  *((_QWORD *)this + 7) = 0;
  memset((char *)this + 64, 0, 0x58u);
  result = *(long double *)&xmmword_591B40;
  *(_OWORD *)((char *)this + 168) = xmmword_591B40;
  *(_OWORD *)((char *)this + 152) = xmmword_591B50;
  return result;
}

