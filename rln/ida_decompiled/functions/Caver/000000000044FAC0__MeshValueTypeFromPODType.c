/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044FAC0
 * Mangled: _ZN5Caver24MeshValueTypeFromPODTypeE13EPVRTDataType
 * Demangled: Caver::MeshValueTypeFromPODType(EPVRTDataType)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000044FAC8 string=0x000000000044FACC ")\n"
 *   insn=0x000000000044FACC string=0x000000000044FAD4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshValueTypeFromPODType(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0xC )
    return 0;
  else
    return (unsigned int)dword_595430[a1 - 1];
}

