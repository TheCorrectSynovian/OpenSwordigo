/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD7C4
 * Mangled: _ZN5Caver27LineSegmentIntersectsCircleERKNS_11LineSegmentERKNS_6CircleERKNS_7Vector2EffPfPS6_
 * Demangled: Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Callers: 1
 *   0x00000000001F8980  Caver::LineSegmentIntersectsCircle(Caver::LineSegment const&,Caver::Circle const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FF0F0  Caver::LineSegment::IntersectsCircle(Caver::Circle const&,float *,float *)
 *
 * Referenced strings: 13
 *   insn=0x00000000004AD7DC string=0x00000000004AD7E0 "X"
 *   insn=0x00000000004AD7E0 string=0x00000000004AD7E4 ""
 *   insn=0x00000000004AD800 string=0x00000000004AD804 "("
 *   insn=0x00000000004AD804 string=0x00000000004AD808 "\t"
 *   insn=0x00000000004AD810 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004AD81C string=0x00000000004AD820 " "
 *   insn=0x00000000004AD840 string=0x00000000004AD844 "+F"
 *   insn=0x00000000004AD848 string=0x00000000004AD84C "u"
 *   insn=0x00000000004AD860 string=0x00000000004AD864 "!"
 *   insn=0x00000000004AD864 string=0x00000000004AD868 "!"
 *   insn=0x00000000004AD86C string=0x00000000004AD870 "`"
 *   insn=0x00000000004AD878 string=0x00000000004AD880 ""
 *   insn=0x00000000004AD8AC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegmentIntersectsCircle(
        Caver *this,
        const Caver::LineSegment *a2,
        const Caver::Circle *a3,
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
  if ( (Caver::LineSegment::IntersectsCircle((Caver::LineSegment *)v17, a2, &v16, 0) & 1) == 0 )
    return 0;
  if ( a4 )
    *(float *)a4 = v16;
  if ( a7 )
    a7->n64_u64[0] = vadd_f32(
                       *(float32x2_t *)this,
                       vmul_n_f32(vsub_f32(*(float32x2_t *)((char *)this + 8), *(float32x2_t *)this), v16)).n64_u64[0];
  return 1;
}

