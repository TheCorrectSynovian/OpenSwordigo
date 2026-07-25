/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002330A8
 * Mangled: _ZN5Caver19PropertiesComponentC2Ev
 * Demangled: Caver::PropertiesComponent::PropertiesComponent(void)
 *
 * Callers: 1
 *   0x00000000001F4F40  Caver::PropertiesComponent::PropertiesComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002330B4 string=0x00000000002330B8 ""
 *   insn=0x00000000002330B8 string=0x00000000002330BC "J"
 *   insn=0x00000000002330C4 string=0x00000000002330C8 "a"
 *   insn=0x00000000002330C8 string=0x00000000002330CC "L"
 *   insn=0x00000000002330CC string=0x00000000002330D0 "KA"
 *   insn=0x00000000002330D4 string=0x00000000002330D8 "J"
 *   insn=0x00000000002330D8 string=0x00000000002330DC ""
 *   insn=0x00000000002330DC string=0x00000000002330E0 " "
 *   insn=0x00000000002330E0 string=0x00000000002330E4 "<"
 *   insn=0x00000000002330E8 string=0x00000000002330EC "A"
 *   insn=0x00000000002330EC string=0x00000000002330F0 ""
 *   insn=0x00000000002330F0 string=0x00000000002330F4 "\t|"
 *   insn=0x00000000002330FC string=0x0000000000233100 "\t,"
 *   insn=0x000000000023310C string=0x0000000000233110 "\"
 *   insn=0x0000000000233110 string=0x0000000000233114 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::PropertiesComponent::PropertiesComponent(Caver::PropertiesComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v2 = &off_6BB1B8;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *((_QWORD *)this + 15) = &byte_6FD2F8;
  *((_QWORD *)&v2 + 1) = &off_6BB1F8;
  *(_QWORD *)this = off_6BB0A0;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_BYTE *)this + 112) = 0;
  *((_OWORD *)this + 8) = 0u;
  *((_OWORD *)this + 9) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *(_OWORD *)((char *)this + 168) = 0u;
  *(_OWORD *)((char *)this + 184) = 0u;
  *((_QWORD *)this + 23) = (char *)this + 168;
  *((_QWORD *)this + 24) = (char *)this + 168;
  *((_QWORD *)this + 25) = 0;
  return result;
}

