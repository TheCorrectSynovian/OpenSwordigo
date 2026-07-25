/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9130
 * Mangled: ._Z25C_Matrix4Vector3ArraySkiniPKffiPKiiS0_iPf
 * Demangled: C_Matrix4Vector3ArraySkin(int,float const*,float,int,int const*,int,float const*,int,float *)
 *
 * Callers: 1
 *   0x000000000044909C  Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*)
 *
 * Callees: 1
 *   0x00000000004AFB60  C_Matrix4Vector3ArraySkin(int,float const*,float,int,int const*,int,float const*,int,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9138 string=0x00000000001F913C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall C_Matrix4Vector3ArraySkin(
        int a1,
        const float *a2,
        float a3,
        int a4,
        const int *a5,
        int a6,
        const float *a7,
        int a8,
        float *a9)
{
  return _Z25C_Matrix4Vector3ArraySkiniPKffiPKiiS0_iPf(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

