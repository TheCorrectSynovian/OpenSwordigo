/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAFF0
 * Mangled: ._Z41PVRTFixInterleavedEndiannessUsingCPODDataPhR8CPODDataj
 * Demangled: PVRTFixInterleavedEndiannessUsingCPODData(uchar *,CPODData &,uint)
 *
 * Callers: 1
 *   0x0000000000503204  PVRTFixInterleavedEndianness(SPODMesh &)
 *
 * Callees: 1
 *   0x0000000000503110  PVRTFixInterleavedEndiannessUsingCPODData(uchar *,CPODData &,uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FAFF4 string=0x0000000000503110 "("
 *   insn=0x00000000001FAFF8 string=0x00000000001FAFFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTFixInterleavedEndiannessUsingCPODData(unsigned __int8 *a1, CPODData *a2, unsigned int a3)
{
  return _Z41PVRTFixInterleavedEndiannessUsingCPODDataPhR8CPODDataj(a1, a2, a3);
}

