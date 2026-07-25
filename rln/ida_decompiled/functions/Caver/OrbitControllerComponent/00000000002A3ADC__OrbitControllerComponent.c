/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3ADC
 * Mangled: _ZN5Caver24OrbitControllerComponentC2Ev
 * Demangled: Caver::OrbitControllerComponent::OrbitControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002004B0  Caver::OrbitControllerComponent::OrbitControllerComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002A3AE4 string=0x00000000002A3AE8 """
 *   insn=0x00000000002A3AE8 string=0x00000000002A3AEC "\t""
 *   insn=0x00000000002A3AEC string=0x00000000002A3AF0 ""
 *   insn=0x00000000002A3AF0 string=0x00000000002A3AF4 ")"
 *   insn=0x00000000002A3AF4 string=0x00000000002A3AF8 "a"
 *   insn=0x00000000002A3AF8 string=0x00000000002A3AFC "*"
 *   insn=0x00000000002A3AFC string=0x00000000002A3B00 "@"
 *   insn=0x00000000002A3B00 string=0x00000000002A3B04 "*"
 *   insn=0x00000000002A3B04 string=0x00000000002A3B08 ""
 *   insn=0x00000000002A3B0C string=0x00000000002A3B10 "@"
 *   insn=0x00000000002A3B10 string=0x00000000002A3B14 "*"
 *   insn=0x00000000002A3B1C string=0x00000000002A3B20 "@"
 *   insn=0x00000000002A3B20 string=0x00000000002A3B24 ")A"
 *   insn=0x00000000002A3B2C string=0x00000000002A3B30 "\t"
 *   insn=0x00000000002A3B34 string=0x00000000002A3B38 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::OrbitControllerComponent::OrbitControllerComponent(Caver::OrbitControllerComponent *this)
{
  __int128 v1; // q0
  long double result; // q0

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)&v1 = &off_6C3328;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)&v1 + 1) = &off_6C3368;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  result = *(long double *)&xmmword_589650;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *(_QWORD *)this = off_6C3210;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_OWORD *)this + 8) = xmmword_589650;
  *((_DWORD *)this + 39) = 0;
  return result;
}

