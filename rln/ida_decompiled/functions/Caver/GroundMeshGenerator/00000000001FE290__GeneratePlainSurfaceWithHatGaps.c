/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE290
 * Mangled: ._ZN5Caver19GroundMeshGenerator31GeneratePlainSurfaceWithHatGapsEf
 * Demangled: Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *
 * Callers: 1
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Callees: 1
 *   0x00000000002BAC60  Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE298 string=0x00000000001FE29C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(
        Caver::GroundMeshGenerator *this,
        float a2)
{
  return _ZN5Caver19GroundMeshGenerator31GeneratePlainSurfaceWithHatGapsEf(this, a2);
}

