/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201DE0
 * Mangled: ._ZN5Caver12MeshInstance12InitWithMeshERKN5boost10shared_ptrINS_4MeshEEEb
 * Demangled: Caver::MeshInstance::InitWithMesh(boost::shared_ptr<Caver::Mesh> const&,bool)
 *
 * Callers: 1
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *
 * Callees: 1
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201DE8 string=0x0000000000201DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MeshInstance::InitWithMesh()
{
  JUMPOUT(0x448868);
}

