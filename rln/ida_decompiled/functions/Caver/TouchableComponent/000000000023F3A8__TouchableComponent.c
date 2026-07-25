/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F3A8
 * Mangled: _ZN5Caver18TouchableComponentC2Ev
 * Demangled: Caver::TouchableComponent::TouchableComponent(void)
 *
 * Callers: 1
 *   0x00000000001F8AA0  Caver::TouchableComponent::TouchableComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x000000000023F3AC string=0x000000000023F3B0 "(%"
 *   insn=0x000000000023F3B0 string=0x000000000023F3B4 "J%"
 *   insn=0x000000000023F3B4 string=0x000000000023F3B8 ""
 *   insn=0x000000000023F3B8 string=0x000000000023F3BC "J\t@"
 *   insn=0x000000000023F3C4 string=0x000000000023F3C8 "a"
 *   insn=0x000000000023F3C8 string=0x000000000023F3CC "L"
 *   insn=0x000000000023F3CC string=0x000000000023F3D0 "KA"
 *   insn=0x000000000023F3D4 string=0x000000000023F3D8 "J"
 *   insn=0x000000000023F3D8 string=0x000000000023F3DC ""
 *   insn=0x000000000023F3DC string=0x000000000023F3E0 " "
 *   insn=0x000000000023F3E0 string=0x000000000023F3E4 ""
 *   insn=0x000000000023F3E8 string=0x000000000023F3EC "A"
 *   insn=0x000000000023F3EC string=0x000000000023F3F0 "p"
 *   insn=0x000000000023F3F0 string=0x000000000023F3F4 "\t|"
 *   insn=0x000000000023F3FC string=0x000000000023F400 "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::TouchableComponent::TouchableComponent(Caver::TouchableComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v2 = &off_6BC1D8;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6BC0C0;
  *((_QWORD *)&v2 + 1) = &off_6BC218;
  *((_DWORD *)this + 28) = 1119092736;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 152) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)((char *)this + 136) = 0u;
  return result;
}

