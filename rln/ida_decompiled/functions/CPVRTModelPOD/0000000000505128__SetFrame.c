/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505128
 * Mangled: _ZN13CPVRTModelPOD8SetFrameEf
 * Demangled: CPVRTModelPOD::SetFrame(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000505128 string=0x000000000050512C ""
 *   insn=0x000000000050512C string=0x0000000000505130 "@@"
 *   insn=0x000000000050512C string=0x000000000050514C "@@"
 *   insn=0x0000000000505130 string=0x0000000000505134 "\t"
 *   insn=0x0000000000505134 string=0x0000000000505138 "!"
 *   insn=0x000000000050513C string=0x0000000000505140 "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::SetFrame(__int64 this, float a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(this + 128);
  if ( *(_DWORD *)(this + 120) )
  {
    *(_DWORD *)(v2 + 8) = (int)a2;
    *(float *)v2 = a2;
    *(float *)(v2 + 4) = a2 - (float)(int)a2;
  }
  else
  {
    *(_QWORD *)(v2 + 4) = 0;
    *(float *)v2 = a2;
  }
  return this;
}

