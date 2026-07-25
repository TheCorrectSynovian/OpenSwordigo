/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000517318
 * Mangled: _Z14PVRTVertexReadPjPKv13EPVRTDataType
 * Demangled: PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *
 * Callers: 1
 *   0x00000000001FA910  PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000517318 string=0x000000000051731C "a"
 *   insn=0x000000000051731C string=0x0000000000517320 "("
 *   insn=0x0000000000517320 string=0x0000000000517324 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall PVRTVertexRead(_DWORD *result, unsigned __int16 *a2, int a3)
{
  if ( a3 == 3 )
    *result = *a2;
  return result;
}

