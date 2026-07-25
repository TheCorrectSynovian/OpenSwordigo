/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD4F8
 * Mangled: _ZN5Caver28LineSegmentIntersectsPolygonERKNS_11LineSegmentERKNS_7PolygonERKNS_7Vector2EffPfPS6_SA_Pi
 * Demangled: Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *
 * Callers: 1
 *   0x00000000002000A0  Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&,Caver::Polygon const&,Caver::Vector2 const&,float,float,float *,Caver::Vector2*,Caver::Vector2*,int *)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x0000000000202CC0  Caver::LineSegment::IntersectsLineSegment(Caver::LineSegment const&,float *,float *)
 *
 * Referenced strings: 29
 *   insn=0x00000000004AD518 string=0x00000000004AD51C "Z"
 *   insn=0x00000000004AD51C string=0x00000000004AD520 "H"
 *   insn=0x00000000004AD544 string=0x00000000004AD548 ")"
 *   insn=0x00000000004AD548 string=0x00000000004AD54C ""
 *   insn=0x00000000004AD554 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004AD564 string=0x00000000004AD568 "!"
 *   insn=0x00000000004AD57C string=0x00000000004AD580 "("
 *   insn=0x00000000004AD580 string=0x00000000004AD584 ""
 *   insn=0x00000000004AD5C4 string=0x00000000004AD5C8 "t"
 *   insn=0x00000000004AD5F8 string=0x00000000004AD5FC "{#"
 *   insn=0x00000000004AD600 string=0x00000000004AD604 ""
 *   insn=0x00000000004AD604 string=0x00000000004AD608 ""
 *   insn=0x00000000004AD60C string=0x00000000004AD610 ""
 *   insn=0x00000000004AD610 string=0x00000000004AD614 "\"
 *   insn=0x00000000004AD614 string=0x00000000004AD618 "x"
 *   insn=0x00000000004AD628 string=0x00000000004AD644 "T"
 *   insn=0x00000000004AD630 string=0x00000000004AD634 "!"
 *   insn=0x00000000004AD634 string=0x00000000004AD638 "!"
 *   insn=0x00000000004AD644 string=0x00000000004AD68C "S"
 *   insn=0x00000000004AD64C string=0x00000000004AD650 ""
 *   insn=0x00000000004AD658 string=0x00000000004AD65C "@8 "
 *   insn=0x00000000004AD65C string=0x00000000004AD660 "a8!"
 *   insn=0x00000000004AD66C string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004AD67C string=0x00000000004AD680 "p;"
 *   insn=0x00000000004AD680 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004AD68C string=0x00000000004AD690 "y"
 *   insn=0x00000000004AD698 string=0x00000000004AD6A0 "H"
 *   insn=0x00000000004AD6A8 string=0x00000000004AD6AC "A"
 *   insn=0x00000000004AD6D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegmentIntersectsPolygon(
        Caver *this,
        const Caver::LineSegment *a2,
        const Caver::Polygon *a3,
        const Caver::Vector2 *a4,
        float a5,
        float a6,
        float32x2_t *a7,
        Caver::Vector2 *a8,
        Caver::Vector2 *a9,
        int *a10)
{
  __int64 v19; // x27
  __int64 v20; // x19
  char v21; // w28
  int v22; // w25
  signed __int64 v23; // x20
  float *v24; // x8
  float v25; // s0
  Caver::Vector2 *v27; // [xsp+0h] [xbp-D0h]
  Caver::Vector2 *v28; // [xsp+8h] [xbp-C8h]
  float v29; // [xsp+10h] [xbp-C0h]
  __int64 v30; // [xsp+28h] [xbp-A8h] BYREF
  __int128 v31; // [xsp+30h] [xbp-A0h] BYREF
  float v32; // [xsp+44h] [xbp-8Ch] BYREF
  _QWORD v33[2]; // [xsp+48h] [xbp-88h] BYREF
  __int64 v34; // [xsp+58h] [xbp-78h] BYREF
  __int64 v35[2]; // [xsp+60h] [xbp-70h] BYREF

  v35[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Vector2::InverseTransformed(v35, this, a3, a5, a6);
  Caver::Vector2::InverseTransformed(&v34, (Caver *)((char *)this + 8), a3, a5, a6);
  v33[0] = v35[0];
  v33[1] = v34;
  if ( *(_DWORD *)a2 + *((unsigned __int8 *)a2 + 33) - 1 < 1 )
    return 0;
  v27 = a8;
  v28 = a9;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = -1;
  v29 = 3.4028e38;
  do
  {
    v23 = v20 + 1;
    v31 = *(_OWORD *)(*((_QWORD *)a2 + 1) + v19);
    if ( (Caver::LineSegment::IntersectsLineSegment(
            (Caver::LineSegment *)v33,
            (const Caver::LineSegment *)&v31,
            &v32,
            0)
        & 1) != 0
      && v32 < v29 )
    {
      v21 = 1;
      v22 = v20;
      v29 = v32;
    }
    v19 += 8;
    ++v20;
  }
  while ( v23 < (__int64)(*(int *)a2 + (unsigned __int64)*((unsigned __int8 *)a2 + 33) - 1) );
  if ( (v21 & 1) == 0 )
    return 0;
  if ( a4 )
    *(float *)a4 = v29;
  if ( a7 )
    a7->n64_u64[0] = vadd_f32(
                       *(float32x2_t *)this,
                       vmul_n_f32(vsub_f32(*(float32x2_t *)((char *)this + 8), *(float32x2_t *)this), v29)).n64_u64[0];
  if ( v27 )
  {
    v24 = (float *)(*((_QWORD *)a2 + 1) + 8LL * v22);
    v25 = -(float)(v24[2] - *v24);
    *(float *)&v30 = v24[3] - v24[1];
    *((float *)&v30 + 1) = v25;
    Caver::Vector2::Normalize((Caver::Vector2 *)&v30);
    *(_QWORD *)&v31 = v30;
    Caver::Vector2::Rotate((Caver::Vector2 *)&v31, a5);
    *(_QWORD *)v27 = v31;
  }
  if ( v28 )
    *(_DWORD *)v28 = v22;
  return 1;
}

