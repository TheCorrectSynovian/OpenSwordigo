/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ACC90
 * Mangled: _ZN5Caver23CircleIntersectsPolygonERKNS_6CircleERKNS_7Vector2EffRKNS_7PolygonES5_ffPS3_Pf
 * Demangled: Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callers: 1
 *   0x00000000001FEBB0  Caver::CircleIntersectsPolygon(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FD560  Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&,Caver::Polygon const&,int)
 *   0x00000000001FDD90  Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 107
 *   insn=0x00000000004ACCBC string=0x00000000004ACCC0 "X"
 *   insn=0x00000000004ACCC0 string=0x00000000004ACCC4 ""
 *   insn=0x00000000004ACCCC string=0x00000000004ACCD0 "h"
 *   insn=0x00000000004ACCD8 string=0x00000000004ACCDC "I"
 *   insn=0x00000000004ACCE4 string=0x00000000004ACCE8 "*"
 *   insn=0x00000000004ACCFC string=0x00000000004ACD00 " "
 *   insn=0x00000000004ACD08 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004ACD10 string=0x00000000004ACD14 " "
 *   insn=0x00000000004ACD24 string=0x00000000004ACD28 "!"
 *   insn=0x00000000004ACD28 string=0x00000000004ACD2C "   "
 *   insn=0x00000000004ACD2C string=0x00000000004ACD30 "@*"
 *   insn=0x00000000004ACD34 string=0x00000000004ACD38 " "
 *   insn=0x00000000004ACD44 string=0x00000000004ACD48 "("
 *   insn=0x00000000004ACD48 string=0x00000000004ACD4C ""
 *   insn=0x00000000004ACD50 string=0x00000000004ACD54 "+"
 *   insn=0x00000000004ACD5C string=0x00000000004ACD60 "\t"
 *   insn=0x00000000004ACD84 string=0x00000000004ACD88 ""
 *   insn=0x00000000004ACD9C string=0x00000000004ACDA0 ""
 *   insn=0x00000000004ACDA0 string=0x00000000004ACDA4 "\t"
 *   insn=0x00000000004ACDA8 string=0x00000000004ACDAC "\n"
 *   insn=0x00000000004ACDAC string=0x00000000004ACDB0 " "
 *   insn=0x00000000004ACDB4 string=0x00000000004ACDB8 "\t@"
 *   insn=0x00000000004ACDB8 string=0x00000000004ACDBC "A"
 *   insn=0x00000000004ACDC0 string=0x00000000004ACDC4 "@"
 *   insn=0x00000000004ACDC4 string=0x00000000004ACDC8 "b"
 *   insn=0x00000000004ACDC8 string=0x00000000004ACDCC "@8 "
 *   insn=0x00000000004ACDD4 string=0x00000000004ACDD8 "A8!"
 *   insn=0x00000000004ACDE0 string=0x00000000004ACDE4 "0"
 *   insn=0x00000000004ACDE4 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004ACDFC string=0x00000000001FDD90 "0'"
 *   insn=0x00000000004ACE3C string=0x00000000004ACE40 "$"
 *   insn=0x00000000004ACE40 string=0x00000000004ACE44 "c($"
 *   insn=0x00000000004ACE44 string=0x00000000004ACE48 "h  "
 *   insn=0x00000000004ACE48 string=0x00000000004ACE4C "e"
 *   insn=0x00000000004ACE4C string=0x00000000004ACE50 "B"
 *   insn=0x00000000004ACE5C string=0x00000000004ACE60 "!"
 *   insn=0x00000000004ACE64 string=0x00000000004ACE68 "  "
 *   insn=0x00000000004ACE68 string=0x00000000004ACE6C "e"
 *   insn=0x00000000004ACE6C string=0x00000000004ACE70 "@"
 *   insn=0x00000000004ACEA8 string=0x00000000004ACEAC " "
 *   insn=0x00000000004ACEB8 string=0x00000000004ACEBC ""
 *   insn=0x00000000004ACEBC string=0x00000000004ACEC0 "  +"
 *   insn=0x00000000004ACED0 string=0x00000000004ACED4 ","
 *   insn=0x00000000004ACEE0 string=0x00000000004ACEE4 "C9#"
 *   insn=0x00000000004ACEE4 string=0x00000000004ACEE8 "c#"
 *   insn=0x00000000004ACEEC string=0x00000000004ACEF0 "E9%"
 *   insn=0x00000000004ACEF4 string=0x00000000004ACEF8 "$\t,"
 *   insn=0x00000000004ACEF8 string=0x00000000004ACEFC "c(%"
 *   insn=0x00000000004ACEFC string=0x00000000004ACF00 "%\t."
 *   insn=0x00000000004ACF00 string=0x00000000004ACF04 "D9$"
 *   insn=0x00000000004ACF04 string=0x00000000004ACF08 "E9%"
 *   insn=0x00000000004ACF14 string=0x00000000004ACF18 "` $"
 *   insn=0x00000000004ACF18 string=0x00000000004ACF1C "%"
 *   insn=0x00000000004ACF1C string=0x00000000004ACF20 "Y"
 *   insn=0x00000000004ACF20 string=0x00000000004ACF24 "L"
 *   insn=0x00000000004ACF28 string=0x00000000004ACF2C ":"
 *   insn=0x00000000004ACF2C string=0x00000000004ACF30 "h"
 *   insn=0x00000000004ACF34 string=0x00000000004ACF38 ""
 *   insn=0x00000000004ACF38 string=0x00000000004ACF54 "."
 *   insn=0x00000000004ACF40 string=0x00000000004ACF44 "\t"
 *   insn=0x00000000004ACF48 string=0x00000000004ACF4C "A"
 *   insn=0x00000000004ACF54 string=0x00000000004ACF58 "/"
 *   insn=0x00000000004ACF58 string=0x00000000004ACF5C "\t"
 *   insn=0x00000000004ACF88 string=0x00000000004ACF8C "A9!"
 *   insn=0x00000000004ACF8C string=0x00000000004ACF90 """
 *   insn=0x00000000004ACF94 string=0x00000000004ACF98 "@9 "
 *   insn=0x00000000004ACF98 string=0x00000000004ACF9C "!!"
 *   insn=0x00000000004ACFA0 string=0x00000000004ACFA4 ""\t""
 *   insn=0x00000000004ACFA4 string=0x00000000004ACFA8 " ( "
 *   insn=0x00000000004ACFA8 string=0x00000000004ACFAC "!\t/"
 *   insn=0x00000000004ACFAC string=0x00000000004ACFB0 "B9""
 *   insn=0x00000000004ACFB0 string=0x00000000004ACFB4 "A9!"
 *   insn=0x00000000004ACFB4 string=0x00000000004ACFB8 "B""
 *   insn=0x00000000004ACFB8 string=0x00000000004ACFBC "!!"
 *   insn=0x00000000004ACFBC string=0x00000000004ACFC0 "A(!"
 *   insn=0x00000000004ACFD4 string=0x00000000004ACFD8 "bA"
 *   insn=0x00000000004ACFD8 string=0x00000000001FD560 "0'"
 *   insn=0x00000000004ACFEC string=0x00000000004ACFF0 ","
 *   insn=0x00000000004ACFF4 string=0x00000000004ACFF8 "\t"
 *   insn=0x00000000004AD00C string=0x00000000004AD010 "m"
 *   insn=0x00000000004AD020 string=0x00000000004AD024 "A9!"
 *   insn=0x00000000004AD024 string=0x00000000004AD028 """
 *   insn=0x00000000004AD02C string=0x00000000004AD030 "@9 "
 *   insn=0x00000000004AD030 string=0x00000000004AD034 "!!"
 *   insn=0x00000000004AD038 string=0x00000000004AD03C ""\t""
 *   insn=0x00000000004AD03C string=0x00000000004AD040 " ( "
 *   insn=0x00000000004AD040 string=0x00000000004AD044 "!\t/"
 *   insn=0x00000000004AD044 string=0x00000000004AD048 "B9""
 *   insn=0x00000000004AD048 string=0x00000000004AD04C "A9!"
 *   insn=0x00000000004AD04C string=0x00000000004AD050 "B""
 *   insn=0x00000000004AD050 string=0x00000000004AD054 "!!"
 *   insn=0x00000000004AD054 string=0x00000000004AD058 "A(!"
 *   insn=0x00000000004AD068 string=0x00000000004AD06C "%"
 *   insn=0x00000000004AD06C string=0x00000000004AD070 ""
 *   insn=0x00000000004AD07C string=0x00000000004AD080 "8A"
 *   insn=0x00000000004AD080 string=0x00000000004AD084 "@"
 *   insn=0x00000000004AD094 string=0x00000000004AD098 ","
 *   insn=0x00000000004AD0BC string=0x00000000004AD0C0 ""
 *   insn=0x00000000004AD0C0 string=0x00000000004AD0C4 ""
 *   insn=0x00000000004AD0C8 string=0x00000000004AD0CC "K"
 *   insn=0x00000000004AD0CC string=0x00000000004AD0D0 "h"
 *   insn=0x00000000004AD0D0 string=0x00000000004AD0D4 "h"
 *   insn=0x00000000004AD0DC string=0x00000000004AD114 ""
 *   insn=0x00000000004AD0F0 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004AD104 string=0x00000000004AD108 " \t "
 *   insn=0x00000000004AD120 string=0x00000000004AD154 "_$"
 *   insn=0x00000000004AD154 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CircleIntersectsPolygon(
        Caver *this,
        const Caver::Circle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Polygon *a6,
        float32x2_t *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11)
{
  float v19; // s0
  float v20; // s9
  __int64 v21; // x23
  __int64 v22; // x22
  bool v23; // w27
  char v24; // w19
  float v25; // w26
  unsigned __int32 v26; // w25
  float v27; // s12
  float v28; // s14
  float v29; // s15
  signed __int64 v30; // x28
  float32x2_t *v31; // x8
  int v32; // w3
  float v33; // s8
  unsigned __int32 v34; // s13
  float v35; // s13
  unsigned __int32 v36; // s8
  bool v37; // nf
  int v38; // w8
  float v40; // [xsp+8h] [xbp-F8h]
  float v41; // [xsp+Ch] [xbp-F4h]
  float *v42; // [xsp+10h] [xbp-F0h]
  float32x2_t v43; // [xsp+18h] [xbp-E8h] BYREF
  float32x2_t v44; // [xsp+20h] [xbp-E0h] BYREF
  float v45; // [xsp+2Ch] [xbp-D4h] BYREF
  float v46; // [xsp+30h] [xbp-D0h] BYREF
  float v47; // [xsp+34h] [xbp-CCh] BYREF
  float v48; // [xsp+38h] [xbp-C8h] BYREF
  float v49; // [xsp+3Ch] [xbp-C4h]
  float32x2_t v50; // [xsp+40h] [xbp-C0h] BYREF
  float32x2_t v51; // [xsp+48h] [xbp-B8h]
  _BYTE v52[8]; // [xsp+50h] [xbp-B0h] BYREF
  float32x2_t v53; // [xsp+58h] [xbp-A8h] BYREF
  float v54; // [xsp+60h] [xbp-A0h]
  __int64 v55; // [xsp+68h] [xbp-98h]

  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Vector2::Transformed(this, a2, a4, a5);
  Caver::Vector2::InverseTransformed((__int64 *)&v50, (Caver::Vector2 *)v52, a6, a8, a9);
  v53.n64_u64[0] = v50.n64_u64[0];
  v19 = *((float *)this + 2) * a5;
  if ( fabsf(a9 + -1.0) > 0.0001 )
    v19 = v19 / a9;
  v54 = v19;
  if ( *(_DWORD *)a3 + *((unsigned __int8 *)a3 + 33) - 1 < 1 )
    return 0;
  v40 = a8;
  v41 = a9;
  v20 = 3.4028e38;
  v42 = (float *)a10;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0.0;
  v26 = 1065353216;
  v27 = 1.0;
  v28 = 0.0;
  v29 = 0.0;
  do
  {
    v30 = v22 + 1;
    v31 = (float32x2_t *)(*((_QWORD *)a3 + 1) + v21);
    v50.n64_u64[0] = v31->n64_u64[0];
    v51.n64_u64[0] = v31[1].n64_u64[0];
    v48 = v51.n64_f32[1] - v50.n64_f32[1];
    v49 = -(float)(v51.n64_f32[0] - v50.n64_f32[0]);
    Caver::Vector2::Normalize((Caver::Vector2 *)&v48);
    if ( (Caver::Circle::IntersectsLineSegmentOnAxis(
            (Caver::Circle *)&v53,
            (const Caver::LineSegment *)&v50,
            (const Caver::Vector2 *)&v48,
            &v47,
            0)
        & 1) != 0 )
    {
      v44.n64_u64[0] = vsub_f32(v50, v53).n64_u64[0];
      Caver::Vector2::Normalize((Caver::Vector2 *)&v44);
      v43.n64_u64[0] = vsub_f32(v51, v53).n64_u64[0];
      Caver::Vector2::Normalize((Caver::Vector2 *)&v43);
      if ( (float)(vmuls_n_f32(v48, v44.n64_f32[0]) + vmuls_lane_f32(v49, v44, 1)) < 0.0 )
        v44.n64_u64[0] = vneg_f32(v44).n64_u64[0];
      if ( (float)(vmuls_n_f32(v48, v43.n64_f32[0]) + vmuls_lane_f32(v49, v43, 1)) < 0.0 )
        v43.n64_u64[0] = vneg_f32(v43).n64_u64[0];
      if ( (Caver::Circle::IntersectsLineSegmentOnAxis(
              (Caver::Circle *)&v53,
              (const Caver::LineSegment *)&v50,
              (const Caver::Vector2 *)&v44,
              &v46,
              0)
          & 1) != 0
        && (Caver::Circle::IntersectsLineSegmentOnAxis(
              (Caver::Circle *)&v53,
              (const Caver::LineSegment *)&v50,
              (const Caver::Vector2 *)&v43,
              &v45,
              0)
          & 1) != 0 )
      {
        if ( v28 <= 0.5 || v49 <= 0.5 )
        {
          if ( (float)((float)((float)(0.0 - (float)(v47 * v49)) * (float)(0.0 - (float)(v47 * v49)))
                     + (float)((float)(0.0 - (float)(v47 * v48)) * (float)(0.0 - (float)(v47 * v48)))) >= (float)((float)((float)(0.0 - (float)(v20 * v27)) * (float)(0.0 - (float)(v20 * v27))) + (float)((float)(0.0 - (float)(v20 * v28)) * (float)(0.0 - (float)(v20 * v28)))) )
            goto LABEL_24;
          v26 = LODWORD(v48);
          v27 = v48;
        }
        else
        {
          if ( v47 >= v20 )
            goto LABEL_24;
          v26 = LODWORD(v48);
          v27 = v48;
        }
        v25 = v49;
        v23 = !*((_BYTE *)a3 + 33) && (!v22 || v22 == *(_DWORD *)a3 - 2);
        v28 = v49;
        v29 = v49;
        v20 = v47;
LABEL_24:
        v33 = v46;
        v34 = v44.n64_u32[1];
        if ( v29 <= 0.5 || v44.n64_f32[1] <= 0.5 )
        {
          if ( (float)((float)((float)(0.0 - (float)(v46 * v44.n64_f32[1]))
                             * (float)(0.0 - (float)(v46 * v44.n64_f32[1])))
                     + (float)((float)(0.0 - (float)(v46 * v44.n64_f32[0]))
                             * (float)(0.0 - (float)(v46 * v44.n64_f32[0])))) >= (float)((float)((float)(0.0 - (float)(v20 * *(float *)&v26))
                                                                                               * (float)(0.0 - (float)(v20 * *(float *)&v26)))
                                                                                       + (float)((float)(0.0 - (float)(v20 * v29))
                                                                                               * (float)(0.0 - (float)(v20 * v29)))) )
          {
LABEL_31:
            v35 = v45;
            v36 = v43.n64_u32[1];
            if ( v29 <= 0.5 || v43.n64_f32[1] <= 0.5 )
              v37 = (float)((float)((float)(0.0 - (float)(v45 * v43.n64_f32[1]))
                                  * (float)(0.0 - (float)(v45 * v43.n64_f32[1])))
                          + (float)((float)(0.0 - (float)(v45 * v43.n64_f32[0]))
                                  * (float)(0.0 - (float)(v45 * v43.n64_f32[0])))) < (float)((float)((float)(0.0 - (float)(v20 * *(float *)&v26)) * (float)(0.0 - (float)(v20 * *(float *)&v26)))
                                                                                           + (float)((float)(0.0 - (float)(v20 * v29)) * (float)(0.0 - (float)(v20 * v29))));
            else
              v37 = v45 < v20;
            v38 = v37;
            v24 = 1;
            if ( v45 < v20 && v38 )
            {
              if ( (Caver::IsCollisionNormalValidForPolygonLineSegment(
                      (Caver *)&v43,
                      a3,
                      (const Caver::Polygon *)(unsigned int)v22,
                      v32)
                  & 1) != 0 )
              {
                v26 = v43.n64_u32[0];
                v23 = 0;
                LODWORD(v25) = v36;
                v24 = 1;
                v27 = v43.n64_f32[0];
                v28 = *(float *)&v36;
                v29 = *(float *)&v36;
                v20 = v35;
              }
              else
              {
                v24 = 1;
              }
            }
            goto LABEL_43;
          }
        }
        else if ( v46 >= v20 )
        {
          goto LABEL_31;
        }
        if ( (Caver::IsCollisionNormalValidForPolygonLineSegment(
                (Caver *)&v44,
                a3,
                (const Caver::Polygon *)(unsigned int)v22,
                v32)
            & 1) != 0 )
        {
          v26 = v44.n64_u32[0];
          v23 = 0;
          LODWORD(v25) = v34;
          v29 = *(float *)&v34;
          v27 = v44.n64_f32[0];
          v28 = *(float *)&v34;
          v20 = v33;
        }
        goto LABEL_31;
      }
    }
LABEL_43:
    v21 += 8;
    ++v22;
  }
  while ( v30 < (__int64)(*(int *)a3 + (unsigned __int64)*((unsigned __int8 *)a3 + 33) - 1) );
  if ( v23 || (v24 & 1) == 0 )
    return 0;
  if ( a7 )
  {
    v50.n64_u64[0] = __PAIR64__(LODWORD(v25), v26);
    Caver::Vector2::Rotate((Caver::Vector2 *)&v50, v40);
    a7->n64_u64[0] = v50.n64_u64[0];
  }
  if ( v42 )
    *v42 = v20 * v41;
  return 1;
}

