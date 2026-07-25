/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000445C10
 * Mangled: _ZN5Caver4Mesh17TransformVerticesERKNS_7Matrix4E
 * Demangled: Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001F5470  Caver::Mesh::TransformVertices(Caver::Matrix4 const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C10  C_Matrix4Vector3ArrayMul(int,float const*,float,int,float const*,int,float *)
 *   0x00000000001F9A10  C_Matrix4Vector3ArrayMul(int,float const*,int,float const*,int,float *)
 *   0x00000000001F9D80  Caver::Matrix4::InverseTranspose3x3(void)
 *
 * Referenced strings: 14
 *   insn=0x0000000000445C20 string=0x0000000000445C24 "U"
 *   insn=0x0000000000445C34 string=0x0000000000445C38 "`"
 *   insn=0x0000000000445C3C string=0x0000000000445C40 "b*@"
 *   insn=0x0000000000445C40 string=0x0000000000445C44 "c"
 *   insn=0x0000000000445C50 string=0x0000000000445C54 "o"
 *   insn=0x0000000000445C54 string=0x0000000000445C58 "h>@"
 *   insn=0x0000000000445C54 string=0x00000000001F9A10 "0'"
 *   insn=0x0000000000445C68 string=0x0000000000445C6C "E"
 *   insn=0x0000000000445C6C string=0x0000000000445C70 "bB@"
 *   insn=0x0000000000445C6C string=0x00000000001F9D80 "0'"
 *   insn=0x0000000000445C70 string=0x0000000000445C74 "c&@"
 *   insn=0x0000000000445C74 string=0x0000000000445C78 "`"
 *   insn=0x0000000000445C8C string=0x00000000001F7C10 "0'"
 *   insn=0x0000000000445CB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Mesh::TransformVertices(Caver::Mesh *this, const Caver::Matrix4 *a2)
{
  __int64 result; // x0
  __int64 v5[9]; // [xsp+8h] [xbp-68h] BYREF

  v5[8] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = *(unsigned int *)this;
  if ( (_DWORD)result )
  {
    result = C_Matrix4Vector3ArrayMul(
               result,
               (const float *)a2,
               *((_DWORD *)this + 10),
               *((const float **)this + 6),
               *((_DWORD *)this + 10),
               *((float **)this + 6));
    if ( *((int *)this + 15) >= 1 )
    {
      Caver::Matrix4::InverseTranspose3x3(v5, a2);
      return C_Matrix4Vector3ArrayMul(
               *(_DWORD *)this,
               (const float *)v5,
               0.0,
               *((_DWORD *)this + 16),
               *((const float **)this + 9),
               *((_DWORD *)this + 16),
               *((float **)this + 9));
    }
  }
  return result;
}

