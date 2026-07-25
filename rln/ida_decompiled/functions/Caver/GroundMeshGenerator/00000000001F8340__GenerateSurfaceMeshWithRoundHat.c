/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8340
 * Mangled: ._ZN5Caver19GroundMeshGenerator31GenerateSurfaceMeshWithRoundHatEffff
 * Demangled: Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Callers: 1
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8348 string=0x00000000001F834C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(
        Caver::GroundMeshGenerator *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  return _ZN5Caver19GroundMeshGenerator31GenerateSurfaceMeshWithRoundHatEffff(this, a2, a3, a4, a5);
}

