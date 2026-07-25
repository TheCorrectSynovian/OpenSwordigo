/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDEB0
 * Mangled: ._ZN5Caver19GroundMeshGenerator22InsertRoundHatVerticesERKNS_7Vector2EffRKNS_7Vector3ES6_f
 * Demangled: Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callers: 2
 *   0x00000000002BA724  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Callees: 1
 *   0x00000000002BA45C  Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDEB8 string=0x00000000001FDEBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGenerator::InsertRoundHatVertices(
        Caver::GroundMeshGenerator *this,
        const Caver::Vector2 *a2,
        float a3,
        float a4,
        const Caver::Vector3 *a5,
        const Caver::Vector3 *a6,
        float a7)
{
  return _ZN5Caver19GroundMeshGenerator22InsertRoundHatVerticesERKNS_7Vector2EffRKNS_7Vector3ES6_f(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}

