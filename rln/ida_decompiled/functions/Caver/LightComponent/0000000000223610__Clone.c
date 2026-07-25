/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000223610
 * Mangled: _ZNK5Caver14LightComponent5CloneEv
 * Demangled: Caver::LightComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002235D8  Caver::LightComponent::~LightComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 22
 *   insn=0x0000000000223624 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000223634 string=0x0000000000223638 "&"
 *   insn=0x0000000000223638 string=0x000000000022363C "\n"
 *   insn=0x000000000022363C string=0x0000000000223640 ""
 *   insn=0x0000000000223640 string=0x0000000000223644 "@uG"
 *   insn=0x0000000000223644 string=0x0000000000223648 "\n&"
 *   insn=0x0000000000223648 string=0x000000000022364C "JiG"
 *   insn=0x000000000022364C string=0x0000000000223650 "a"
 *   insn=0x0000000000223658 string=0x000000000022365C ""
 *   insn=0x000000000022365C string=0x0000000000223660 "H"
 *   insn=0x0000000000223660 string=0x0000000000223664 "?"
 *   insn=0x000000000022366C string=0x0000000000223670 "H"
 *   insn=0x0000000000223674 string=0x0000000000223678 ""
 *   insn=0x0000000000223680 string=0x0000000000223684 "HA"
 *   insn=0x0000000000223690 string=0x0000000000223694 ""
 *   insn=0x00000000002236B0 string=0x00000000002236B4 "h"@"
 *   insn=0x00000000002236B4 string=0x00000000002236B8 "a"
 *   insn=0x00000000002236C0 string=0x00000000002236C4 "h:@"
 *   insn=0x00000000002236D0 string=0x00000000002236D4 "`"
 *   insn=0x00000000002236D8 string=0x00000000002236DC "`B"
 *   insn=0x00000000002236E0 string=0x00000000002236E4 "h"
 *   insn=0x00000000002236E8 string=0x00000000002236EC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::LightComponent::Clone(Caver::LightComponent *this)
{
  __int64 v2; // x20
  long double result; // q0

  v2 = operator new(0xB0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  __asm { FMOV            V1.4S, #1.0 }
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 116) = _Q1;
  *(_QWORD *)&_Q1 = &off_6BA178;
  *((_QWORD *)&_Q1 + 1) = &off_6BA1B8;
  *(_QWORD *)(v2 + 148) = 0x3951B71700000000LL;
  *(_QWORD *)v2 = off_6BA060;
  *(_DWORD *)(v2 + 132) = 1065353216;
  *(_OWORD *)(v2 + 16) = _Q1;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_BYTE *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 172) = -1;
  *(_OWORD *)(v2 + 156) = xmmword_583F00;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_QWORD *)(v2 + 112) = *((_QWORD *)this + 14);
  *(_OWORD *)(v2 + 120) = *(_OWORD *)((char *)this + 120);
  result = *(long double *)((char *)this + 148);
  *(long double *)(v2 + 148) = result;
  *(_DWORD *)(v2 + 164) = *((_DWORD *)this + 41);
  *(_DWORD *)(v2 + 168) = *((_DWORD *)this + 42);
  return result;
}

