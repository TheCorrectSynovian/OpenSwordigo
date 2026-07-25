/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD6D8
 * Mangled: _ZN5Caver30LineSegmentIntersectsRectangleERKNS_11LineSegmentERKNS_9RectangleERKNS_7Vector2EffPfPS6_
 * Demangled: Caver::LineSegmentIntersectsRectangle(Caver::LineSegment const&,Caver::Rectangle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Callers: 1
 *   0x00000000001FC130  Caver::LineSegmentIntersectsRectangle(Caver::LineSegment const&,Caver::Rectangle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000002008F0  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,float *,float *)
 *
 * Referenced strings: 14
 *   insn=0x00000000004AD6F0 string=0x00000000004AD6F4 "X"
 *   insn=0x00000000004AD6F4 string=0x00000000004AD6F8 ""
 *   insn=0x00000000004AD714 string=0x00000000004AD718 "("
 *   insn=0x00000000004AD718 string=0x00000000004AD71C "\t"
 *   insn=0x00000000004AD720 string=0x00000000004AD724 "."
 *   insn=0x00000000004AD724 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004AD730 string=0x00000000004AD734 " "
 *   insn=0x00000000004AD754 string=0x00000000004AD758 "fL"
 *   insn=0x00000000004AD75C string=0x00000000004AD760 "u"
 *   insn=0x00000000004AD774 string=0x00000000004AD778 "!"
 *   insn=0x00000000004AD778 string=0x00000000004AD77C "!"
 *   insn=0x00000000004AD780 string=0x00000000004AD784 "`"
 *   insn=0x00000000004AD78C string=0x00000000004AD794 ""
 *   insn=0x00000000004AD7C0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegmentIntersectsRectangle(
        Caver *this,
        const Caver::LineSegment *a2,
        const Caver::Rectangle *a3,
        const Caver::Vector2 *a4,
        float a5,
        float a6,
        float32x2_t *a7,
        Caver::Vector2 *a8)
{
  float v16; // [xsp+4h] [xbp-6Ch] BYREF
  _QWORD v17[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v18; // [xsp+18h] [xbp-58h] BYREF
  __int64 v19[2]; // [xsp+20h] [xbp-50h] BYREF

  v19[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Vector2::InverseTransformed(v19, this, a3, a5, a6);
  Caver::Vector2::InverseTransformed(&v18, (Caver *)((char *)this + 8), a3, a5, a6);
  v17[0] = v19[0];
  v17[1] = v18;
  if ( (Caver::LineSegment::IntersectsRectangle((Caver::LineSegment *)v17, a2, &v16, 0) & 1) == 0 )
    return 0;
  if ( a4 )
    *(float *)a4 = v16;
  if ( a7 )
    a7->n64_u64[0] = vadd_f32(
                       *(float32x2_t *)this,
                       vmul_n_f32(vsub_f32(*(float32x2_t *)((char *)this + 8), *(float32x2_t *)this), v16)).n64_u64[0];
  return 1;
}

