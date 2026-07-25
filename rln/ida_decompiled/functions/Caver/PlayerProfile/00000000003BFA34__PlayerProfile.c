/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BFA34
 * Mangled: _ZN5Caver13PlayerProfileC2Ev
 * Demangled: Caver::PlayerProfile::PlayerProfile(void)
 *
 * Callers: 1
 *   0x00000000001F9DB0  Caver::PlayerProfile::PlayerProfile(void)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000003BFA34 string=0x00000000003BFA38 "("
 *   insn=0x00000000003BFA38 string=0x00000000003BFA3C ""
 *   insn=0x00000000003BFA48 string=0x00000000003BFA4C "a"
 *   insn=0x00000000003BFA5C string=0x00000000003BFA60 "\t"
 *   insn=0x00000000003BFA78 string=0x00000000003BFA7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall Caver::PlayerProfile::PlayerProfile(Caver::PlayerProfile *this)
{
  int64x2_t result; // q0

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  result = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = &byte_6FD2F8;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 7) = 1;
  *((_QWORD *)this + 8) = 0;
  *(int64x2_t *)((char *)this + 24) = result;
  *(int64x2_t *)((char *)this + 72) = result;
  *(int64x2_t *)((char *)this + 88) = result;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 21) = (char *)this + 152;
  *((_QWORD *)this + 22) = (char *)this + 152;
  *((_BYTE *)this + 192) = 0;
  return result;
}

