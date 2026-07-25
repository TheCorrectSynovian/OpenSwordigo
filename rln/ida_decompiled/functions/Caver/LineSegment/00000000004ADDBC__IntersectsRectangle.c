/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADDBC
 * Mangled: _ZNK5Caver11LineSegment19IntersectsRectangleERKNS_9RectangleEPNS_7Vector2ES5_
 * Demangled: Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 *,Caver::Vector2 *)
 *
 * Callers: 1
 *   0x00000000001FA6F0  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 *,Caver::Vector2 *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002008F0  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,float *,float *)
 *
 * Referenced strings: 8
 *   insn=0x00000000004ADDCC string=0x00000000004ADDD0 "V"
 *   insn=0x00000000004ADDF0 string=0x00000000004ADDF4 " "
 *   insn=0x00000000004ADE00 string=0x00000000004ADE04 "!"
 *   insn=0x00000000004ADE04 string=0x00000000004ADE08 "!"
 *   insn=0x00000000004ADE1C string=0x00000000004ADE20 "!"
 *   insn=0x00000000004ADE20 string=0x00000000004ADE24 "!"
 *   insn=0x00000000004ADE28 string=0x00000000004ADE2C "`"
 *   insn=0x00000000004ADE60 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegment::IntersectsRectangle(
        float32x2_t *this,
        const Caver::Rectangle *a2,
        float32x2_t *a3,
        float32x2_t *a4)
{
  float v8; // [xsp+0h] [xbp-30h] BYREF
  float v9; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v10; // [xsp+8h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (Caver::LineSegment::IntersectsRectangle((Caver::LineSegment *)this, a2, &v9, &v8) & 1) == 0 )
    return 0;
  if ( a3 )
    a3->n64_u64[0] = vadd_f32(
                       (float32x2_t)this->n64_u64[0],
                       vmul_n_f32(vsub_f32(this[1], (float32x2_t)this->n64_u64[0]), v9)).n64_u64[0];
  if ( a4 )
    a4->n64_u64[0] = vadd_f32(
                       (float32x2_t)this->n64_u64[0],
                       vmul_n_f32(vsub_f32(this[1], (float32x2_t)this->n64_u64[0]), v8)).n64_u64[0];
  return 1;
}

