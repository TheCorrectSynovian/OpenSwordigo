/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7C10
 * Mangled: ._Z24C_Matrix4Vector3ArrayMuliPKffiS0_iPf
 * Demangled: C_Matrix4Vector3ArrayMul(int,float const*,float,int,float const*,int,float *)
 *
 * Callers: 2
 *   0x0000000000445C10  Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *   0x0000000000446FEC  Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004AFA40  C_Matrix4Vector3ArrayMul(int,float const*,float,int,float const*,int,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7C18 string=0x00000000001F7C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall C_Matrix4Vector3ArrayMul(
        int a1,
        const float *a2,
        float a3,
        int a4,
        const float *a5,
        int a6,
        float *a7)
{
  return _Z24C_Matrix4Vector3ArrayMuliPKffiS0_iPf(a1, a2, a3, a4, a5, a6, a7);
}

