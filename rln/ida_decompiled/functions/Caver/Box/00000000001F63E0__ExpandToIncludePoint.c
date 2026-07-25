/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F63E0
 * Mangled: ._ZN5Caver3Box20ExpandToIncludePointERKNS_7Vector3E
 * Demangled: Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&)
 *
 * Callers: 3
 *   0x0000000000445D60  Caver::Mesh::UpdateBoundingBox(void)
 *   0x00000000004493B4  Caver::MeshInstance::~MeshInstance()
 *   0x00000000004497A8  Caver::MeshOptimizer::UpdateBounds(void)
 *
 * Callees: 1
 *   0x00000000004AC094  Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F63E4 string=0x00000000004AC094 " "
 *   insn=0x00000000001F63E8 string=0x00000000001F63EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Box::ExpandToIncludePoint(Caver::Box *this, const Caver::Vector3 *a2)
{
  return _ZN5Caver3Box20ExpandToIncludePointERKNS_7Vector3E(this, a2);
}

