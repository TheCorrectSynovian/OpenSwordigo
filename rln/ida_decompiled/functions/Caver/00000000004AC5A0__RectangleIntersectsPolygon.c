/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC5A0
 * Mangled: _ZN5Caver26RectangleIntersectsPolygonERKNS_9RectangleERKNS_7Vector2EffRKNS_7PolygonES5_ffPS3_PfS5_
 * Demangled: Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F8FE0  Caver::RectangleIntersectsPolygon(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Polygon const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callees: 7
 *   0x00000000001F3620  Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FD560  Caver::IsCollisionNormalValidForPolygonLineSegment(Caver::Vector2 const&,Caver::Polygon const&,int)
 *   0x00000000001FDC90  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 84
 *   insn=0x00000000004AC5CC string=0x00000000004AC5D0 "W"
 *   insn=0x00000000004AC5F0 string=0x00000000004AC5F4 "h"
 *   insn=0x00000000004AC5F4 string=0x00000000004AC5F8 "I"
 *   insn=0x00000000004AC5FC string=0x00000000001FDC90 "0'"
 *   insn=0x00000000004AC608 string=0x00000000004AC60C " "
 *   insn=0x00000000004AC614 string=0x00000000004AC618 "^2"
 *   insn=0x00000000004AC618 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004AC620 string=0x00000000004AC624 "("
 *   insn=0x00000000004AC624 string=0x00000000004AC628 ""
 *   insn=0x00000000004AC62C string=0x00000000004AC630 "K"
 *   insn=0x00000000004AC634 string=0x00000000004AC638 ""
 *   insn=0x00000000004AC654 string=0x00000000004AC658 ""
 *   insn=0x00000000004AC65C string=0x00000000004AC660 "\n"
 *   insn=0x00000000004AC66C string=0x00000000004AC670 ""
 *   insn=0x00000000004AC670 string=0x00000000004AC674 "\t"
 *   insn=0x00000000004AC678 string=0x00000000004AC67C "\n"
 *   insn=0x00000000004AC67C string=0x00000000004AC680 " "
 *   insn=0x00000000004AC684 string=0x00000000004AC688 "\t@"
 *   insn=0x00000000004AC688 string=0x00000000004AC68C "A"
 *   insn=0x00000000004AC690 string=0x00000000004AC694 "@"
 *   insn=0x00000000004AC694 string=0x00000000004AC698 "b"
 *   insn=0x00000000004AC698 string=0x00000000004AC69C "@8 "
 *   insn=0x00000000004AC6A4 string=0x00000000004AC6A8 "A8!"
 *   insn=0x00000000004AC6B4 string=0x00000000001F8E10 "0'"
 *   insn=0x00000000004AC6CC string=0x00000000001F3620 "P'"
 *   insn=0x00000000004AC6E0 string=0x00000000004AC6E4 "%"
 *   insn=0x00000000004AC6E8 string=0x00000000004AC6EC "C%"
 *   insn=0x00000000004AC6EC string=0x00000000004AC6F0 "!(#"
 *   insn=0x00000000004AC6F0 string=0x00000000004AC6F4 "(  "
 *   insn=0x00000000004AC6F4 string=0x00000000004AC6F8 "C"
 *   insn=0x00000000004AC6F8 string=0x00000000004AC6FC "a"
 *   insn=0x00000000004AC718 string=0x00000000004AC71C "B!"
 *   insn=0x00000000004AC720 string=0x00000000004AC724 "  "
 *   insn=0x00000000004AC728 string=0x00000000004AC72C "`@!"
 *   insn=0x00000000004AC72C string=0x00000000004AC730 "!@!"
 *   insn=0x00000000004AC768 string=0x00000000004AC76C " "
 *   insn=0x00000000004AC778 string=0x00000000004AC77C ""
 *   insn=0x00000000004AC77C string=0x00000000004AC780 "  *"
 *   insn=0x00000000004AC790 string=0x00000000004AC794 "+"
 *   insn=0x00000000004AC7B4 string=0x00000000004AC7B8 """
 *   insn=0x00000000004AC7C0 string=0x00000000004AC7C4 "c#"
 *   insn=0x00000000004AC7D8 string=0x00000000004AC7DC "` $"
 *   insn=0x00000000004AC7E0 string=0x00000000004AC7E4 "Y"
 *   insn=0x00000000004AC7E4 string=0x00000000004AC7E8 "K"
 *   insn=0x00000000004AC7EC string=0x00000000004AC7F0 ":"
 *   insn=0x00000000004AC7F0 string=0x00000000004AC7F4 "h"
 *   insn=0x00000000004AC7F8 string=0x00000000004AC7FC ""
 *   insn=0x00000000004AC7FC string=0x00000000004AC818 ","
 *   insn=0x00000000004AC804 string=0x00000000004AC808 "\t"
 *   insn=0x00000000004AC80C string=0x00000000004AC810 "A"
 *   insn=0x00000000004AC818 string=0x00000000004AC81C ""
 *   insn=0x00000000004AC850 string=0x00000000004AC854 ""8""
 *   insn=0x00000000004AC854 string=0x00000000004AC858 "!8$"
 *   insn=0x00000000004AC858 string=0x00000000004AC85C "$"
 *   insn=0x00000000004AC864 string=0x00000000004AC868 "d8$"
 *   insn=0x00000000004AC868 string=0x00000000004AC86C "`8 "
 *   insn=0x00000000004AC86C string=0x00000000004AC870 "B""
 *   insn=0x00000000004AC874 string=0x00000000004AC878 "!!"
 *   insn=0x00000000004AC880 string=0x00000000004AC884 "a(!"
 *   insn=0x00000000004AC898 string=0x00000000004AC89C "1C"
 *   insn=0x00000000004AC89C string=0x00000000001FD560 "0'"
 *   insn=0x00000000004AC8B0 string=0x00000000004AC8B4 "+"
 *   insn=0x00000000004AC8CC string=0x00000000004AC8D0 "m"
 *   insn=0x00000000004AC8E8 string=0x00000000004AC8EC ""8""
 *   insn=0x00000000004AC8EC string=0x00000000004AC8F0 "!8$"
 *   insn=0x00000000004AC8F0 string=0x00000000004AC8F4 "$"
 *   insn=0x00000000004AC8FC string=0x00000000004AC900 "d8$"
 *   insn=0x00000000004AC900 string=0x00000000004AC904 "`8 "
 *   insn=0x00000000004AC904 string=0x00000000004AC908 "B""
 *   insn=0x00000000004AC90C string=0x00000000004AC910 "!!"
 *   insn=0x00000000004AC918 string=0x00000000004AC91C "a(!"
 *   insn=0x00000000004AC940 string=0x00000000004AC944 "C"
 *   insn=0x00000000004AC944 string=0x00000000004AC948 " "
 *   insn=0x00000000004AC958 string=0x00000000004AC95C "+"
 *   insn=0x00000000004AC97C string=0x00000000004AC980 ""
 *   insn=0x00000000004AC980 string=0x00000000004AC984 ""
 *   insn=0x00000000004AC98C string=0x00000000004AC990 "h"
 *   insn=0x00000000004AC990 string=0x00000000004AC994 "h"
 *   insn=0x00000000004AC998 string=0x00000000004AC99C ""
 *   insn=0x00000000004AC9A4 string=0x00000000004AC9A8 " "
 *   insn=0x00000000004AC9B0 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004AC9BC string=0x00000000004AC9C0 "h"
 *   insn=0x00000000004AC9DC string=0x00000000004ACA10 "0&"
 *   insn=0x00000000004ACA10 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RectangleIntersectsPolygon(
        Caver *this,
        const Caver::Rectangle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Polygon *a6,
        const Caver::Vector2 *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        Caver::Vector2 *a11,
        const Caver::Vector2 *a12)
{
  float v18; // s13
  __int64 v19; // x24
  __int64 v20; // x22
  bool v21; // w27
  char v22; // w19
  float v23; // w26
  float v24; // w25
  float v25; // s11
  float v26; // s12
  signed __int64 v27; // x28
  __int64 v28; // x8
  int v29; // w3
  float v30; // s14
  float v31; // s15
  float v32; // s14
  float v33; // s15
  bool v34; // nf
  int v35; // w8
  float *v37; // [xsp+10h] [xbp-100h]
  float v38; // [xsp+18h] [xbp-F8h] BYREF
  float v39; // [xsp+1Ch] [xbp-F4h]
  float v40; // [xsp+20h] [xbp-F0h] BYREF
  float v41; // [xsp+24h] [xbp-ECh]
  float v42; // [xsp+2Ch] [xbp-E4h] BYREF
  float v43; // [xsp+30h] [xbp-E0h] BYREF
  float v44; // [xsp+34h] [xbp-DCh] BYREF
  float v45; // [xsp+38h] [xbp-D8h] BYREF
  float v46; // [xsp+3Ch] [xbp-D4h]
  unsigned __int64 v47; // [xsp+40h] [xbp-D0h] BYREF
  float v48; // [xsp+48h] [xbp-C8h]
  float v49; // [xsp+4Ch] [xbp-C4h]
  __int64 v50; // [xsp+50h] [xbp-C0h] BYREF
  _BYTE v51[8]; // [xsp+58h] [xbp-B8h] BYREF
  float v52; // [xsp+60h] [xbp-B0h]
  float v53; // [xsp+64h] [xbp-ACh]
  float v54; // [xsp+68h] [xbp-A8h]
  float v55; // [xsp+6Ch] [xbp-A4h]
  __int64 v56; // [xsp+78h] [xbp-98h]

  v56 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::OrientedRect::OBFromTransformedRectangle(this, a2, a6, a4, a5, a6, a8, a9);
  v47 = 0;
  Caver::Vector2::InverseTransformed(&v50, a11, (const Caver::Vector2 *)&v47, a8, a9);
  if ( *(_DWORD *)a3 + *((unsigned __int8 *)a3 + 33) - 1 < 1 )
    return 0;
  v18 = 3.4028e38;
  v37 = (float *)a10;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0.0;
  v24 = 1.0;
  v25 = 1.0;
  v26 = 0.0;
  do
  {
    v27 = v20 + 1;
    v28 = *((_QWORD *)a3 + 1) + v19;
    v47 = *(_QWORD *)v28;
    v48 = *(float *)(v28 + 8);
    v49 = *(float *)(v28 + 12);
    v45 = v49 - *((float *)&v47 + 1);
    v46 = -(float)(v48 - *(float *)&v47);
    Caver::Vector2::Normalize((Caver::Vector2 *)&v45);
    if ( (Caver::OrientedRect::IntersectsLineSegmentOnAxis(
            (Caver::OrientedRect *)v51,
            (const Caver::LineSegment *)&v47,
            (const Caver::Vector2 *)&v45,
            &v44,
            0)
        & 1) != 0 )
    {
      v40 = v52;
      v41 = v53;
      v38 = v54;
      v39 = v55;
      if ( (float)((float)(v45 * v52) + (float)(v46 * v53)) < 0.0 )
      {
        v40 = -v52;
        v41 = -v53;
      }
      if ( (float)((float)(v45 * v54) + (float)(v46 * v55)) < 0.0 )
      {
        v38 = -v54;
        v39 = -v55;
      }
      if ( (Caver::OrientedRect::IntersectsLineSegmentOnAxis(
              (Caver::OrientedRect *)v51,
              (const Caver::LineSegment *)&v47,
              (const Caver::Vector2 *)&v40,
              &v43,
              0)
          & 1) != 0
        && (Caver::OrientedRect::IntersectsLineSegmentOnAxis(
              (Caver::OrientedRect *)v51,
              (const Caver::LineSegment *)&v47,
              (const Caver::Vector2 *)&v38,
              &v42,
              0)
          & 1) != 0 )
      {
        if ( v26 <= 0.5 || v46 <= 0.5 )
        {
          if ( (float)((float)((float)(*(float *)&v50 - (float)(v44 * v45))
                             * (float)(*(float *)&v50 - (float)(v44 * v45)))
                     + (float)((float)(*((float *)&v50 + 1) - (float)(v44 * v46))
                             * (float)(*((float *)&v50 + 1) - (float)(v44 * v46)))) >= (float)((float)((float)(*(float *)&v50 - (float)(v18 * v25)) * (float)(*(float *)&v50 - (float)(v18 * v25)))
                                                                                             + (float)((float)(*((float *)&v50 + 1) - (float)(v18 * v26)) * (float)(*((float *)&v50 + 1) - (float)(v18 * v26)))) )
            goto LABEL_22;
          v24 = v45;
          v25 = v45;
        }
        else
        {
          if ( v44 >= v18 )
            goto LABEL_22;
          v24 = v45;
          v25 = v45;
        }
        v23 = v46;
        v21 = !*((_BYTE *)a3 + 33) && (!v20 || v20 == *(_DWORD *)a3 - 2);
        v26 = v46;
        v18 = v44;
LABEL_22:
        v30 = v43;
        v31 = v41;
        if ( v26 <= 0.5 || v41 <= 0.5 )
        {
          if ( (float)((float)((float)(*(float *)&v50 - (float)(v43 * v40))
                             * (float)(*(float *)&v50 - (float)(v43 * v40)))
                     + (float)((float)(*((float *)&v50 + 1) - (float)(v43 * v41))
                             * (float)(*((float *)&v50 + 1) - (float)(v43 * v41)))) >= (float)((float)((float)(*(float *)&v50 - (float)(v18 * v24)) * (float)(*(float *)&v50 - (float)(v18 * v24)))
                                                                                             + (float)((float)(*((float *)&v50 + 1) - (float)(v18 * v26)) * (float)(*((float *)&v50 + 1) - (float)(v18 * v26)))) )
          {
LABEL_29:
            v32 = v42;
            v33 = v39;
            if ( v26 <= 0.5 || v39 <= 0.5 )
              v34 = (float)((float)((float)(*(float *)&v50 - (float)(v42 * v38))
                                  * (float)(*(float *)&v50 - (float)(v42 * v38)))
                          + (float)((float)(*((float *)&v50 + 1) - (float)(v42 * v39))
                                  * (float)(*((float *)&v50 + 1) - (float)(v42 * v39)))) < (float)((float)((float)(*(float *)&v50 - (float)(v18 * v24)) * (float)(*(float *)&v50 - (float)(v18 * v24)))
                                                                                                 + (float)((float)(*((float *)&v50 + 1) - (float)(v18 * v26)) * (float)(*((float *)&v50 + 1) - (float)(v18 * v26))));
            else
              v34 = v42 < v18;
            v35 = v34;
            v22 = 1;
            if ( v42 < v18 && v35 )
            {
              if ( (Caver::IsCollisionNormalValidForPolygonLineSegment(
                      (Caver *)&v38,
                      a3,
                      (const Caver::Polygon *)(unsigned int)v20,
                      v29)
                  & 1) != 0 )
              {
                v24 = v38;
                v21 = 0;
                v23 = v33;
                v22 = 1;
                v25 = v38;
                v26 = v33;
                v18 = v32;
              }
              else
              {
                v22 = 1;
              }
            }
            goto LABEL_41;
          }
        }
        else if ( v43 >= v18 )
        {
          goto LABEL_29;
        }
        if ( (Caver::IsCollisionNormalValidForPolygonLineSegment(
                (Caver *)&v40,
                a3,
                (const Caver::Polygon *)(unsigned int)v20,
                v29)
            & 1) != 0 )
        {
          v24 = v40;
          v21 = 0;
          v23 = v31;
          v26 = v31;
          v25 = v40;
          v18 = v30;
        }
        goto LABEL_29;
      }
    }
LABEL_41:
    v19 += 8;
    ++v20;
  }
  while ( v27 < (__int64)(*(int *)a3 + (unsigned __int64)*((unsigned __int8 *)a3 + 33) - 1) );
  if ( v21 || (v22 & 1) == 0 )
    return 0;
  if ( a7 )
  {
    v47 = __PAIR64__(LODWORD(v23), LODWORD(v24));
    Caver::Vector2::Rotate((Caver::Vector2 *)&v47, a8);
    *(_QWORD *)a7 = v47;
  }
  if ( v37 )
    *v37 = v18 * a9;
  return 1;
}

