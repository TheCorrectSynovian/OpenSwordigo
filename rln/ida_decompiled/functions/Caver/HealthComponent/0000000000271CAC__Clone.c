/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271CAC
 * Mangled: _ZNK5Caver15HealthComponent5CloneEv
 * Demangled: Caver::HealthComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000271B6C  Caver::HealthComponent::~HealthComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 18
 *   insn=0x0000000000271CBC string=0x0000000000271CC0 "H"
 *   insn=0x0000000000271CC0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000271CD8 string=0x0000000000271CDC ""
 *   insn=0x0000000000271CDC string=0x0000000000271CE0 ")5E"
 *   insn=0x0000000000271CE0 string=0x0000000000271CE4 "a"
 *   insn=0x0000000000271CE4 string=0x0000000000271CE8 "a"
 *   insn=0x0000000000271CE8 string=0x0000000000271CEC "*"
 *   insn=0x0000000000271CEC string=0x0000000000271CF0 "@"
 *   insn=0x0000000000271CF0 string=0x0000000000271CF4 "*"
 *   insn=0x0000000000271CF4 string=0x0000000000271CF8 ""
 *   insn=0x0000000000271CFC string=0x0000000000271D00 "@"
 *   insn=0x0000000000271D0C string=0x0000000000271D10 "@9A"
 *   insn=0x0000000000271D10 string=0x0000000000271D14 ")A"
 *   insn=0x0000000000271D54 string=0x0000000000271D58 "h"@"
 *   insn=0x0000000000271D5C string=0x0000000000271D60 "R"
 *   insn=0x0000000000271D60 string=0x0000000000271D64 "h~@"
 *   insn=0x0000000000271D70 string=0x0000000000271D74 "`""
 *   insn=0x0000000000271D78 string=0x0000000000271D7C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::HealthComponent::Clone(Caver::HealthComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  long double result; // q0

  v2 = operator new(0xC8u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BF158;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *((_QWORD *)&v3 + 1) = &off_6BF198;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_6BF040;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_BYTE *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  *(_QWORD *)(v2 + 124) = 0;
  *(_QWORD *)(v2 + 132) = 0;
  *(_DWORD *)(v2 + 152) = 1065353216;
  *(_QWORD *)(v2 + 184) = 0;
  *(_BYTE *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 172) = 0;
  *(_QWORD *)(v2 + 156) = 0;
  *(_QWORD *)(v2 + 164) = 0;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 144) = 1112014848;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 124) = *((_DWORD *)this + 31);
  result = *((long double *)this + 8);
  *(long double *)(v2 + 128) = result;
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  return result;
}

