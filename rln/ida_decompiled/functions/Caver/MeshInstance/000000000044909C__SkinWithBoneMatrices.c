/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044909C
 * Mangled: _ZN5Caver12MeshInstance20SkinWithBoneMatricesEPKNS_7Matrix4E
 * Demangled: Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*)
 *
 * Callers: 1
 *   0x00000000001FE450  Caver::MeshInstance::SkinWithBoneMatrices(Caver::Matrix4 const*)
 *
 * Callees: 1
 *   0x00000000001F9130  C_Matrix4Vector3ArraySkin(int,float const*,float,int,int const*,int,float const*,int,float *)
 *
 * Referenced strings: 10
 *   insn=0x00000000004490AC string=0x00000000004490B0 "h"
 *   insn=0x00000000004490B4 string=0x00000000004490B8 "u"
 *   insn=0x00000000004490B8 string=0x00000000004490BC "f"@"
 *   insn=0x00000000004490D0 string=0x00000000004490D4 "g"
 *   insn=0x00000000004490E0 string=0x00000000004490E4 "h6@"
 *   insn=0x00000000004490E0 string=0x00000000001F9130 "0'"
 *   insn=0x00000000004490EC string=0x00000000004490F0 "h"
 *   insn=0x00000000004490EC string=0x000000000044911C "u"
 *   insn=0x00000000004490F0 string=0x00000000004490F4 "f:@"
 *   insn=0x00000000004490F4 string=0x00000000004490F8 "g"@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshInstance::SkinWithBoneMatrices(Caver::MeshInstance *this, const Caver::Matrix4 *a2)
{
  __int64 v3; // x8
  __int64 result; // x0

  v3 = *(_QWORD *)this;
  *((_BYTE *)this + 178) = 1;
  result = C_Matrix4Vector3ArraySkin(
             *(_DWORD *)v3,
             (const float *)a2,
             1.0,
             *(_DWORD *)(v3 + 120),
             *(const int **)(v3 + 128),
             *(_DWORD *)(v3 + 40),
             *(const float **)(v3 + 48),
             *((_DWORD *)this + 8),
             *((float **)this + 5));
  if ( *((int *)this + 13) >= 1 )
    result = C_Matrix4Vector3ArraySkin(
               **(_DWORD **)this,
               (const float *)a2,
               0.0,
               *(_DWORD *)(*(_QWORD *)this + 120LL),
               *(const int **)(*(_QWORD *)this + 128LL),
               *(_DWORD *)(*(_QWORD *)this + 64LL),
               *(const float **)(*(_QWORD *)this + 72LL),
               *((_DWORD *)this + 14),
               *((float **)this + 8));
  *((_BYTE *)this + 177) = 1;
  return result;
}

