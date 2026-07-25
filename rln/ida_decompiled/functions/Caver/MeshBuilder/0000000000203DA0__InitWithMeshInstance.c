/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203DA0
 * Mangled: ._ZN5Caver11MeshBuilder20InitWithMeshInstanceEPNS_12MeshInstanceEb
 * Demangled: Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *
 * Callers: 1
 *   0x0000000000447FD8  Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x0000000000446A58  Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance *,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203DA8 string=0x0000000000203DAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshBuilder *this, Caver::MeshInstance *a2, bool a3)
{
  return _ZN5Caver11MeshBuilder20InitWithMeshInstanceEPNS_12MeshInstanceEb(this, a2, a3);
}

