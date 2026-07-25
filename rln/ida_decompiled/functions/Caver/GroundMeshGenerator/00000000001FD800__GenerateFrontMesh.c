/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD800
 * Mangled: ._ZN5Caver19GroundMeshGenerator17GenerateFrontMeshEv
 * Demangled: Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Callers: 1
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD808 string=0x00000000001FD80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGenerator::GenerateFrontMesh(Caver::GroundMeshGenerator *this)
{
  return _ZN5Caver19GroundMeshGenerator17GenerateFrontMeshEv(this);
}

