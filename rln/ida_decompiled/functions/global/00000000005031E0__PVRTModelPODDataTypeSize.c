/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005031E0
 * Mangled: _Z24PVRTModelPODDataTypeSize13EPVRTDataType
 * Demangled: PVRTModelPODDataTypeSize(EPVRTDataType)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000005031EC string=0x00000000005031F4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODDataTypeSize(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0xD )
    return 0;
  else
    return qword_59B8A0[a1 - 1];
}

