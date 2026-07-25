/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000446FEC
 * Mangled: _ZN5Caver11MeshBuilder17TransformVerticesERKNS_7Matrix4E
 * Demangled: Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001F6610  Caver::MeshBuilder::TransformVertices(Caver::Matrix4 const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C10  C_Matrix4Vector3ArrayMul(int,float const*,float,int,float const*,int,float *)
 *   0x00000000001F9A10  C_Matrix4Vector3ArrayMul(int,float const*,int,float const*,int,float *)
 *   0x00000000001F9D80  Caver::Matrix4::InverseTranspose3x3(void)
 *
 * Referenced strings: 13
 *   insn=0x0000000000446FFC string=0x0000000000447000 "U"
 *   insn=0x0000000000447014 string=0x0000000000447018 "c"
 *   insn=0x0000000000447018 string=0x000000000044701C "`"
 *   insn=0x0000000000447024 string=0x0000000000447028 "z"
 *   insn=0x0000000000447028 string=0x000000000044702C "h"
 *   insn=0x0000000000447028 string=0x00000000001F9A10 "0'"
 *   insn=0x000000000044702C string=0x0000000000447030 "=@"
 *   insn=0x0000000000447040 string=0x0000000000447044 "O"
 *   insn=0x0000000000447044 string=0x0000000000447048 "h"
 *   insn=0x0000000000447044 string=0x00000000001F9D80 "0'"
 *   insn=0x0000000000447048 string=0x000000000044704C "`"
 *   insn=0x0000000000447068 string=0x00000000001F7C10 "0'"
 *   insn=0x0000000000447090 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MeshBuilder::TransformVertices(Caver::MeshBuilder *this, const Caver::Matrix4 *a2)
{
  __int64 result; // x0
  __int64 v5[9]; // [xsp+8h] [xbp-68h] BYREF

  v5[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = C_Matrix4Vector3ArrayMul(
             *((_DWORD *)this + 4),
             (const float *)a2,
             68,
             *((const float **)this + 3),
             68,
             *((float **)this + 3));
  if ( *(int *)(*(_QWORD *)this + 60LL) >= 1 )
  {
    Caver::Matrix4::InverseTranspose3x3(v5, a2);
    return C_Matrix4Vector3ArrayMul(
             *((_DWORD *)this + 4),
             (const float *)v5,
             0.0,
             68,
             (const float *)(*((_QWORD *)this + 3) + 16LL),
             68,
             (float *)(*((_QWORD *)this + 3) + 16LL));
  }
  return result;
}

