/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE894
 * Mangled: _ZN5Caver22GroundPolygonComponentC2Ev
 * Demangled: Caver::GroundPolygonComponent::GroundPolygonComponent(void)
 *
 * Callers: 1
 *   0x00000000001F8400  Caver::GroundPolygonComponent::GroundPolygonComponent(void)
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x00000000002BE898 string=0x00000000002BE89C "H!"
 *   insn=0x00000000002BE89C string=0x00000000002BE8A0 "AC"
 *   insn=0x00000000002BE8A0 string=0x00000000002BE8A4 "*!"
 *   insn=0x00000000002BE8A4 string=0x00000000002BE8A8 "J"
 *   insn=0x00000000002BE8AC string=0x00000000002BE8B0 "\t"
 *   insn=0x00000000002BE8B0 string=0x00000000002BE8B4 "!"
 *   insn=0x00000000002BE8B4 string=0x00000000002BE8B8 "\t"
 *   insn=0x00000000002BE8B8 string=0x00000000002BE8BC "!"
 *   insn=0x00000000002BE8BC string=0x00000000002BE8C0 "I"
 *   insn=0x00000000002BE8C4 string=0x00000000002BE8C8 "!"
 *   insn=0x00000000002BE8CC string=0x00000000002BE8D0 "Ja"
 *   insn=0x00000000002BE8D0 string=0x00000000002BE8D4 "A"
 *   insn=0x00000000002BE8D4 string=0x00000000002BE8D8 "\n"
 *   insn=0x00000000002BE8D8 string=0x00000000002BE8DC "`"
 *   insn=0x00000000002BE8DC string=0x00000000002BE8E0 ""
 *   insn=0x00000000002BE8E4 string=0x00000000002BE8E8 "D"
 *   insn=0x00000000002BE8E8 string=0x00000000002BE8EC ""
 *   insn=0x00000000002BE8F0 string=0x00000000002BE8F4 "|"
 *   insn=0x00000000002BE908 string=0x00000000002BE90C ""
 *   insn=0x00000000002BE910 string=0x00000000002BE914 "\n`"
 *   insn=0x00000000002BE918 string=0x00000000002BE91C ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::GroundPolygonComponent::GroundPolygonComponent(Caver::GroundPolygonComponent *this)
{
  long double result; // q0
  __int128 v2; // q1

  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 48) = 0;
  *(_OWORD *)&result = 0u;
  *(_QWORD *)&v2 = &off_6C4E98;
  *((_QWORD *)&v2 + 1) = &off_6C4ED8;
  *((_OWORD *)this + 1) = v2;
  *((_OWORD *)this + 2) = 0u;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 72) = 0u;
  *(_QWORD *)this = off_6C4D80;
  *((_BYTE *)this + 145) = 1;
  *((_BYTE *)this + 176) = 1;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_OWORD *)this + 8) = 0u;
  *((_BYTE *)this + 144) = 0;
  *((_QWORD *)this + 15) = 0;
  *(_OWORD *)((char *)this + 152) = 0u;
  *((_DWORD *)this + 45) = 1065353216;
  *((_BYTE *)this + 184) = 0;
  *((_QWORD *)this + 24) = &byte_6FD2F8;
  *(_OWORD *)((char *)this + 216) = 0u;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 21) = 0x42480000C2480000LL;
  *(_OWORD *)((char *)this + 200) = 0u;
  return result;
}

