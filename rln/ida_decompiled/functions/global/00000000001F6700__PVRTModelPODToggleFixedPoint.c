/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6700
 * Mangled: ._Z28PVRTModelPODToggleFixedPointR9SPODScene
 * Demangled: PVRTModelPODToggleFixedPoint(SPODScene &)
 *
 * Callers: 1
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *
 * Callees: 1
 *   0x000000000050E6A4  PVRTModelPODToggleFixedPoint(SPODScene &)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6704 string=0x000000000050E6A4 "\t"
 *   insn=0x00000000001F6708 string=0x00000000001F670C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTModelPODToggleFixedPoint()
{
  return _Z28PVRTModelPODToggleFixedPointR9SPODScene();
}

