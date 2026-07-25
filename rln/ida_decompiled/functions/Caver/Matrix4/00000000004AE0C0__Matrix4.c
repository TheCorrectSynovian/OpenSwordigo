/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE0C0
 * Mangled: _ZN5Caver7Matrix4C2ERKNS_7Matrix3E
 * Demangled: Caver::Matrix4::Matrix4(Caver::Matrix3 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004AE0C0 string=0x00000000004AE0C4 ""
 *   insn=0x00000000004AE0C4 string=0x00000000004AE0C8 "("
 *   insn=0x00000000004AE0C8 string=0x00000000004AE0CC ""
 *   insn=0x00000000004AE0CC string=0x00000000004AE0D0 "("
 *   insn=0x00000000004AE0D4 string=0x00000000004AE0D8 " "
 *   insn=0x00000000004AE0D8 string=0x00000000004AE0DC "("
 *   insn=0x00000000004AE0DC string=0x00000000004AE0E0 ""
 *   insn=0x00000000004AE0E0 string=0x00000000004AE0E4 "("
 *   insn=0x00000000004AE0E4 string=0x00000000004AE0E8 ""
 *   insn=0x00000000004AE0E8 string=0x00000000004AE0EC "("
 *   insn=0x00000000004AE0F0 string=0x00000000004AE0F4 "$"
 *   insn=0x00000000004AE0F4 string=0x00000000004AE0F8 "(@"
 *   insn=0x00000000004AE0F8 string=0x00000000004AE0FC ""
 *   insn=0x00000000004AE0FC string=0x00000000004AE100 "("
 *   insn=0x00000000004AE100 string=0x00000000004AE104 ""
 *   insn=0x00000000004AE108 string=0x00000000004AE10C ") @"
 *   insn=0x00000000004AE118 string=0x00000000004AE11C "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Matrix4::Matrix4(__int64 a1, _DWORD *a2)
{
  int v2; // w8
  int v3; // w8
  unsigned int v4; // w9
  double result; // d0

  *(_DWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 16) = a2[3];
  v2 = a2[6];
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)(a1 + 20) = a2[4];
  v3 = a2[7];
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 36) = v3;
  *(_DWORD *)(a1 + 8) = a2[2];
  *(_DWORD *)(a1 + 24) = a2[5];
  v4 = a2[8];
  result = 0.0078125;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)(a1 + 56) = 0x3F80000000000000LL;
  return result;
}

