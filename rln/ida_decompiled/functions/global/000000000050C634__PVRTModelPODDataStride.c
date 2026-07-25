/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050C634
 * Mangled: _Z22PVRTModelPODDataStrideRK8CPODData
 * Demangled: PVRTModelPODDataStride(CPODData const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000050C634 string=0x000000000050C638 ""
 *   insn=0x000000000050C640 string=0x000000000050C644 "i"
 *   insn=0x000000000050C644 string=0x000000000050C64C "("
 *   insn=0x000000000050C650 string=0x000000000050C658 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODDataStride(const CPODData *a1)
{
  unsigned int v1; // w8
  __int64 v2; // x8

  v1 = *(_DWORD *)a1 - 1;
  if ( v1 > 0xD )
    v2 = 0;
  else
    v2 = qword_59B8A0[v1];
  return v2 * *((unsigned int *)a1 + 1);
}

