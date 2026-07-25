/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003019F8
 * Mangled: _ZNK5Caver5Proto5Scene3NewEv
 * Demangled: Caver::Proto::Scene::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 11
 *   insn=0x0000000000301A04 string=0x0000000000301A08 "("
 *   insn=0x0000000000301A04 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000301A08 string=0x0000000000301A0C "AC"
 *   insn=0x0000000000301A0C string=0x0000000000301A10 "\t"
 *   insn=0x0000000000301A10 string=0x0000000000301A14 "\t"
 *   insn=0x0000000000301A14 string=0x0000000000301A18 "\t"
 *   insn=0x0000000000301A1C string=0x0000000000301A20 "\t$"
 *   insn=0x0000000000301A24 string=0x0000000000301A28 "A"
 *   insn=0x0000000000301A38 string=0x0000000000301A3C "\t "
 *   insn=0x0000000000301A40 string=0x0000000000301A44 "\tX"
 *   insn=0x0000000000301A44 string=0x0000000000301A48 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::Scene::New(Caver::Proto::Scene *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0xA0u);
  *(_QWORD *)(v1 + 16) = v1 + 40;
  result = 0.0;
  *(_QWORD *)(v1 + 72) = v1 + 96;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 144) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 32) = 4;
  *(_QWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 88) = 4;
  *(_QWORD *)v1 = off_6C74E8;
  *(_DWORD *)(v1 + 152) = 0;
  return result;
}

