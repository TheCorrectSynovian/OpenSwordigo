/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050C610
 * Mangled: _Z34PVRTModelPODDataTypeComponentCount13EPVRTDataType
 * Demangled: PVRTModelPODDataTypeComponentCount(EPVRTDataType)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000050C618 string=0x000000000050C61C "i"
 *   insn=0x000000000050C61C string=0x000000000050C624 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODDataTypeComponentCount(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0xD )
    return 0;
  else
    return qword_59B6C0[a1 - 1];
}

