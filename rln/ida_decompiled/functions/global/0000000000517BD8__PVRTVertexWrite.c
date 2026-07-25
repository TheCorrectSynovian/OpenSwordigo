/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000517BD8
 * Mangled: _Z15PVRTVertexWritePv13EPVRTDataTypej
 * Demangled: PVRTVertexWrite(void *,EPVRTDataType,uint)
 *
 * Callers: 1
 *   0x00000000001F5370  PVRTVertexWrite(void *,EPVRTDataType,uint)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000517BD8 string=0x0000000000517BDC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_WORD *__fastcall PVRTVertexWrite(_WORD *result, int a2, __int16 a3)
{
  if ( a2 == 3 )
    *result = a3;
  return result;
}

