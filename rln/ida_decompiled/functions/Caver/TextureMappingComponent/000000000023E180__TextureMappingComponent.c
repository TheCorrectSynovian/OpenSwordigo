/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023E180
 * Mangled: _ZN5Caver23TextureMappingComponentC2Ev
 * Demangled: Caver::TextureMappingComponent::TextureMappingComponent(void)
 *
 * Callers: 1
 *   0x00000000001FC3A0  Caver::TextureMappingComponent::TextureMappingComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000023E188 string=0x000000000023E18C "(%"
 *   insn=0x000000000023E18C string=0x000000000023E190 ""
 *   insn=0x000000000023E190 string=0x000000000023E194 "*%"
 *   insn=0x000000000023E194 string=0x000000000023E198 "J"
 *   insn=0x000000000023E19C string=0x000000000023E1A0 "\t"
 *   insn=0x000000000023E1A0 string=0x000000000023E1A4 " "
 *   insn=0x000000000023E1A4 string=0x000000000023E1A8 "\t"
 *   insn=0x000000000023E1A8 string=0x000000000023E1AC " "
 *   insn=0x000000000023E1AC string=0x000000000023E1B0 ")"
 *   insn=0x000000000023E1B0 string=0x000000000023E1B4 "Ja"
 *   insn=0x000000000023E1B4 string=0x000000000023E1B8 "\n"
 *   insn=0x000000000023E1C0 string=0x000000000023E1C4 " \tE"
 *   insn=0x000000000023E1C4 string=0x000000000023E1C8 "A"
 *   insn=0x000000000023E1D0 string=0x000000000023E1D4 ""
 *   insn=0x000000000023E1D8 string=0x000000000023E1DC "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::TextureMappingComponent::TextureMappingComponent(Caver::TextureMappingComponent *this)
{
  __int128 v1; // q0
  double result; // d0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)&v1 = &off_6BC038;
  *((_QWORD *)&v1 + 1) = &off_6BC078;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  *(_QWORD *)&result = 1132068864;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = &byte_6FD2F8;
  *(_QWORD *)this = off_6BBF20;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 16) = 1132068864;
  *((_DWORD *)this + 34) = 0;
  return result;
}

