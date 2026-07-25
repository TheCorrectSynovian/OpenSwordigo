/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF330
 * Mangled: ._ZN5Caver19GroundMeshGenerator20InsertCapForRoundHatEbRKNS_7Vector2EffRKNS_7Vector3ES6_f
 * Demangled: Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000002BB010  Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float,float,float,float)
 *
 * Callees: 1
 *   0x00000000002BA724  Caver::GroundMeshGenerator::InsertCapForRoundHat(bool,Caver::Vector2 const&,float,float,Caver::Vector3 const&,Caver::Vector3 const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF338 string=0x00000000001FF33C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGenerator::InsertCapForRoundHat(
        Caver::GroundMeshGenerator *this,
        bool a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Vector3 *a6,
        const Caver::Vector3 *a7,
        float a8)
{
  return _ZN5Caver19GroundMeshGenerator20InsertCapForRoundHatEbRKNS_7Vector2EffRKNS_7Vector3ES6_f(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}

