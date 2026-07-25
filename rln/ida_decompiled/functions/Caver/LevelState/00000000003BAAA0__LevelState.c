/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BAAA0
 * Mangled: _ZN5Caver10LevelStateC2Ev
 * Demangled: Caver::LevelState::LevelState(void)
 *
 * Callers: 1
 *   0x00000000001F5060  Caver::LevelState::LevelState(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFFD0  Caver::StateProperties::StateProperties(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 20
 *   insn=0x00000000003BAAB0 string=0x00000000003BAAB4 "T"
 *   insn=0x00000000003BAAB4 string=0x00000000003BAAB8 "U"
 *   insn=0x00000000003BAAC4 string=0x00000000003BAAC8 "`B"
 *   insn=0x00000000003BAAD0 string=0x00000000003BAAD4 "i"
 *   insn=0x00000000003BAAD8 string=0x00000000003BAADC "="
 *   insn=0x00000000003BAAE0 string=0x00000000003BAAE4 "`""
 *   insn=0x00000000003BAB0C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BAB14 string=0x00000000003BAB18 "(a"
 *   insn=0x00000000003BAB20 string=0x00000000003BAB24 "J"
 *   insn=0x00000000003BAB24 string=0x00000000003BAB28 "J=G"
 *   insn=0x00000000003BAB28 string=0x00000000003BAB2C ")!"
 *   insn=0x00000000003BAB30 string=0x00000000003BAB34 "*"
 *   insn=0x00000000003BAB30 string=0x00000000003BAB60 "*"
 *   insn=0x00000000003BAB34 string=0x00000000003BAB38 "K"
 *   insn=0x00000000003BAB38 string=0x00000000003BAB3C "+"
 *   insn=0x00000000003BAB40 string=0x00000000003BAB44 "_"
 *   insn=0x00000000003BAB58 string=0x00000000003BAB5C "Z"
 *   insn=0x00000000003BAB60 string=0x00000000003BAB64 "K"
 *   insn=0x00000000003BAB64 string=0x00000000003BAB68 "+"
 *   insn=0x00000000003BAB68 string=0x00000000003BAB6C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::LevelState::LevelState(Caver::LevelState *this)
{
  double result; // d0

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = &byte_6FD2F8;
  *((_BYTE *)this + 8) = 0;
  Caver::StateProperties::StateProperties((Caver::LevelState *)((char *)this + 16));
  *(_QWORD *)&result = 0xFFFFFFFFLL;
  *((_QWORD *)this + 8) = 0xFFFFFFFFLL;
  return result;
}

