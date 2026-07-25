/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050543C
 * Mangled: _ZNK13CPVRTModelPOD14GetTranslationER12PVRTVECTOR3fRK8SPODNode
 * Demangled: CPVRTModelPOD::GetTranslation(PVRTVECTOR3f &,SPODNode const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201470  PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Referenced strings: 18
 *   insn=0x0000000000505440 string=0x0000000000505444 "H`@9"
 *   insn=0x0000000000505448 string=0x000000000050544C "(\t@"
 *   insn=0x0000000000505448 string=0x0000000000505460 "@@"
 *   insn=0x000000000050544C string=0x0000000000505450 "("
 *   insn=0x0000000000505450 string=0x0000000000505454 "("
 *   insn=0x0000000000505454 string=0x0000000000505458 "("
 *   insn=0x0000000000505460 string=0x0000000000505464 "J"
 *   insn=0x0000000000505464 string=0x0000000000505468 "\t"
 *   insn=0x0000000000505468 string=0x000000000050546C "\n"
 *   insn=0x000000000050546C string=0x0000000000505470 "Lyk"
 *   insn=0x0000000000505470 string=0x0000000000505474 "k"
 *   insn=0x0000000000505474 string=0x0000000000505478 "J"
 *   insn=0x000000000050547C string=0x0000000000505480 "(\t"
 *   insn=0x0000000000505480 string=0x0000000000505484 ""\t\n"
 *   insn=0x000000000050548C string=0x0000000000505490 "j"
 *   insn=0x0000000000505490 string=0x0000000000505494 "("
 *   insn=0x0000000000505494 string=0x0000000000505498 "J"
 *   insn=0x0000000000505498 string=0x000000000050549C """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::GetTranslation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x9
  __int64 result; // x0

  v3 = *(_QWORD *)(a3 + 40);
  if ( v3 )
  {
    if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    {
      return PVRTMatrixVec3LerpF();
    }
    else
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 8);
      *(_QWORD *)a2 = *(_QWORD *)v3;
    }
  }
  return result;
}

