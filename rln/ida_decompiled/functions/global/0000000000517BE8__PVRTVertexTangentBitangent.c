/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000517BE8
 * Mangled: _Z26PVRTVertexTangentBitangentP12PVRTVECTOR3fS0_PKS_PKfS4_S4_S4_S4_S4_
 * Demangled: PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *
 * Callers: 1
 *   0x00000000001F7A80  PVRTVertexTangentBitangent(PVRTVECTOR3f *,PVRTVECTOR3f *,PVRTVECTOR3f const*,float const*,float const*,float const*,float const*,float const*,float const*)
 *
 * Callees: 4
 *   0x00000000001F3540  PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDBE0  PVRTMatrixVec3CrossProductF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *   0x00000000001FEF90  PVRTMatrixVec3DotProductF(PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Referenced strings: 34
 *   insn=0x0000000000517C04 string=0x0000000000517C08 "["
 *   insn=0x0000000000517C08 string=0x0000000000517C0C "h"
 *   insn=0x0000000000517C3C string=0x0000000000517C40 "  "
 *   insn=0x0000000000517C50 string=0x0000000000517C54 "`"
 *   insn=0x0000000000517C58 string=0x0000000000517C5C "b"
 *   insn=0x0000000000517C5C string=0x0000000000517DE4 "h"
 *   insn=0x0000000000517C60 string=0x0000000000517C64 "@"
 *   insn=0x0000000000517C64 string=0x0000000000517C68 """
 *   insn=0x0000000000517C68 string=0x0000000000517C6C "C@"
 *   insn=0x0000000000517C74 string=0x0000000000517C78 "'@"
 *   insn=0x0000000000517C84 string=0x0000000000517C88 "`8'"
 *   insn=0x0000000000517C88 string=0x0000000000517C8C "a"
 *   insn=0x0000000000517CA4 string=0x0000000000517CA8 "B8#"
 *   insn=0x0000000000517CA8 string=0x0000000000517CAC "H  "
 *   insn=0x0000000000517CB0 string=0x0000000000517CB4 "*"
 *   insn=0x0000000000517CB0 string=0x0000000000517D4C "!"
 *   insn=0x0000000000517CC0 string=0x0000000000517CC4 "c"
 *   insn=0x0000000000517CE0 string=0x0000000000517CE4 "  "
 *   insn=0x0000000000517CE8 string=0x0000000000517CEC "`"
 *   insn=0x0000000000517CEC string=0x0000000000517CF0 "A@!"
 *   insn=0x0000000000517D0C string=0x0000000000517D10 "c"
 *   insn=0x0000000000517D10 string=0x0000000000517D14 "B$"
 *   insn=0x0000000000517D14 string=0x0000000000517D18 "!"
 *   insn=0x0000000000517D30 string=0x0000000000517D34 "B8#"
 *   insn=0x0000000000517D3C string=0x0000000000517D40 "B(#"
 *   insn=0x0000000000517D40 string=0x0000000000517D44 "H  "
 *   insn=0x0000000000517D64 string=0x00000000001F3540 "P'"
 *   insn=0x0000000000517D74 string=0x00000000001FDBE0 "0'"
 *   insn=0x0000000000517D94 string=0x0000000000517D98 "!8#"
 *   insn=0x0000000000517DA4 string=0x0000000000517DA8 "a""
 *   insn=0x0000000000517DBC string=0x0000000000517DC0 "!@!"
 *   insn=0x0000000000517DEC string=0x0000000000517DF0 "!"
 *   insn=0x0000000000517DF0 string=0x0000000000517E14 "/y"
 *   insn=0x0000000000517E14 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTVertexTangentBitangent(
        float32x2_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        float *a7,
        float *a8,
        float *a9)
{
  __int64 result; // x0
  float v14; // s0
  float v15; // s1

  _ReadStatusReg(TPIDR_EL0);
  result = PVRTMatrixVec3DotProductF();
  if ( v14 == 0.0 || *a8 == *a7 && *a9 == *a7 )
  {
    a1[1].n64_u32[0] = 0;
    a1->n64_u64[0] = 0;
    *(_QWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
  }
  else
  {
    PVRTMatrixVec3NormalizeF();
    PVRTMatrixVec3CrossProductF();
    PVRTMatrixVec3CrossProductF();
    if ( (float)((float)(*a9 - *a7) * (float)(a8[1] - a7[1])) < (float)((float)(a9[1] - a7[1]) * (float)(*a8 - *a7)) )
    {
      v15 = -a1[1].n64_f32[0];
      a1->n64_u64[0] = vneg_f32((float32x2_t)a1->n64_u64[0]).n64_u64[0];
      a1[1].n64_f32[0] = v15;
    }
    PVRTMatrixVec3NormalizeF();
    return PVRTMatrixVec3NormalizeF();
  }
  return result;
}

