/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000504E28
 * Mangled: _Z21PVRTModelPODCopyLightRK9SPODLightRS_
 * Demangled: PVRTModelPODCopyLight(SPODLight const&,SPODLight&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000504E28 string=0x0000000000504E2C "("
 *   insn=0x0000000000504E30 string=0x0000000000504E34 " "
 *   insn=0x0000000000504E38 string=0x0000000000504E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTModelPODCopyLight(__int64 a1, __int64 a2)
{
  long double result; // q0

  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  result = *(long double *)a1;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  return result;
}

