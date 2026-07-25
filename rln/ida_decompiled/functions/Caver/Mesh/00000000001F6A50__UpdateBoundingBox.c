/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A50
 * Mangled: ._ZN5Caver4Mesh17UpdateBoundingBoxEv
 * Demangled: Caver::Mesh::UpdateBoundingBox(void)
 *
 * Callers: 1
 *   0x0000000000447094  Caver::MeshBuilder::GenerateMesh(void)
 *
 * Callees: 1
 *   0x0000000000445D60  Caver::Mesh::UpdateBoundingBox(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A58 string=0x00000000001F6A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::UpdateBoundingBox(Caver::Mesh *this)
{
  return _ZN5Caver4Mesh17UpdateBoundingBoxEv(this);
}

