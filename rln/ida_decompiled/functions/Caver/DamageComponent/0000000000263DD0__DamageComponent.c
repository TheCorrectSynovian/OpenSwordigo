/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000263DD0
 * Mangled: _ZN5Caver15DamageComponentC2Ev
 * Demangled: Caver::DamageComponent::DamageComponent(void)
 *
 * Callers: 1
 *   0x0000000000203B50  Caver::DamageComponent::DamageComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000263DD8 string=0x0000000000263DDC "$"
 *   insn=0x0000000000263DDC string=0x0000000000263DE0 "\t$"
 *   insn=0x0000000000263DE0 string=0x0000000000263DE4 ""
 *   insn=0x0000000000263DE4 string=0x0000000000263DE8 ")"
 *   insn=0x0000000000263DE8 string=0x0000000000263DEC "a"
 *   insn=0x0000000000263DEC string=0x0000000000263DF0 "*"
 *   insn=0x0000000000263DF0 string=0x0000000000263DF4 "@"
 *   insn=0x0000000000263DF4 string=0x0000000000263DF8 "*"
 *   insn=0x0000000000263DF8 string=0x0000000000263DFC ""
 *   insn=0x0000000000263E00 string=0x0000000000263E04 "@"
 *   insn=0x0000000000263E04 string=0x0000000000263E08 "\n"
 *   insn=0x0000000000263E10 string=0x0000000000263E14 "@"
 *   insn=0x0000000000263E14 string=0x0000000000263E18 ")A"
 *   insn=0x0000000000263E18 string=0x0000000000263E1C "\t"
 *   insn=0x0000000000263E44 string=0x0000000000263E48 "\t"
 *   insn=0x0000000000263E50 string=0x0000000000263E54 "0"
 *   insn=0x0000000000263E58 string=0x0000000000263E5C "\tD"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::DamageComponent::DamageComponent(Caver::DamageComponent *this)
{
  __int128 v1; // q0
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)&v1 = &off_6BE668;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)&v1 + 1) = &off_6BE6A8;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  *(_QWORD *)&result = 1065353216;
  *(_QWORD *)this = off_6BE550;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_BYTE *)this + 160) = 0;
  *(_QWORD *)((char *)this + 172) = 0;
  *(_QWORD *)((char *)this + 164) = 0;
  *(_QWORD *)((char *)this + 180) = 0;
  *((_BYTE *)this + 188) = 1;
  *((_QWORD *)this + 24) = 0;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 25) = 1065353216;
  *((_BYTE *)this + 209) = 1;
  return result;
}

