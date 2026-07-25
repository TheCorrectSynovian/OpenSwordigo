/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203220
 * Mangled: ._Z24PVRTModelPODCountIndicesRK8SPODMesh
 * Demangled: PVRTModelPODCountIndices(SPODMesh const&)
 *
 * Callers: 1
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *
 * Callees: 1
 *   0x000000000050E188  PVRTModelPODCountIndices(SPODMesh const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203224 string=0x000000000050E188 "0@"
 *   insn=0x0000000000203228 string=0x000000000020322C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTModelPODCountIndices()
{
  return _Z24PVRTModelPODCountIndicesRK8SPODMesh();
}

