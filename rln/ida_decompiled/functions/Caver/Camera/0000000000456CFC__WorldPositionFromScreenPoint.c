/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456CFC
 * Mangled: _ZNK5Caver6Camera28WorldPositionFromScreenPointENS_7Vector2ERKNS_9RectangleEf
 * Demangled: Caver::Camera::WorldPositionFromScreenPoint(Caver::Vector2,Caver::Rectangle const&,float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7D10  Caver::Ray3::IntersectionWithXYPlane(float)
 *   0x0000000000200050  Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&)
 *
 * Referenced strings: 7
 *   insn=0x0000000000456D0C string=0x0000000000456D10 "T"
 *   insn=0x0000000000456D18 string=0x0000000000456D1C ""
 *   insn=0x0000000000456D20 string=0x0000000000456D24 " "
 *   insn=0x0000000000456D24 string=0x0000000000456D28 "A"
 *   insn=0x0000000000456D58 string=0x00000000001F7D10 "0'"
 *   insn=0x0000000000456D68 string=0x0000000000456D80 "T}"
 *   insn=0x0000000000456D80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Camera::WorldPositionFromScreenPoint(
        Caver::Camera *a1,
        float32x2_t *a2,
        float32x2_t *a3,
        float a4)
{
  float32x2_t v5; // d0
  __int64 v12[3]; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v13[2]; // [xsp+20h] [xbp-30h] BYREF

  v13[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5.n64_u64[0] = vdiv_f32((float32x2_t)a2->n64_u64[0], a3[1]).n64_u64[0];
  __asm { FMOV            V1.2S, #-1.0 }
  v13[0] = vadd_f32(vadd_f32(v5, v5), _D1).n64_u64[0];
  Caver::Camera::RayFromScreenPoint(v12, a1, (const Caver::Vector2 *)v13);
  return Caver::Ray3::IntersectionWithXYPlane((Caver::Ray3 *)v12, a4);
}

