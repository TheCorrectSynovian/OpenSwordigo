/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ACA14
 * Mangled: _ZN5Caver28RectangleIntersectsRectangleERKNS_9RectangleERKNS_7Vector2EffS2_S5_ffPS3_PfS5_
 * Demangled: Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F66A0  Caver::RectangleIntersectsRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *,Caver::Vector2 const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCFA0  Caver::OrientedRect::IntersectsOrientedRectOnAxis(Caver::OrientedRect const&,Caver::Vector2 const&,float *,float *)
 *   0x00000000001FDC90  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 50
 *   insn=0x00000000004ACA3C string=0x00000000004ACA40 "X"
 *   insn=0x00000000004ACA40 string=0x00000000004ACA44 ""
 *   insn=0x00000000004ACA44 string=0x00000000004ACA48 ""
 *   insn=0x00000000004ACA48 string=0x00000000004ACA4C "i"
 *   insn=0x00000000004ACA4C string=0x00000000004ACA50 "J"
 *   insn=0x00000000004ACA54 string=0x00000000004ACA58 ""
 *   insn=0x00000000004ACA7C string=0x00000000004ACA80 ""
 *   insn=0x00000000004ACA8C string=0x00000000001FDC90 "0'"
 *   insn=0x00000000004ACAA0 string=0x00000000004ACAA4 "@"
 *   insn=0x00000000004ACAA4 string=0x00000000004ACAA8 "!"
 *   insn=0x00000000004ACAB0 string=0x00000000004ACAB4 "wD"
 *   insn=0x00000000004ACAB8 string=0x0000000000583734 "o"
 *   insn=0x00000000004ACABC string=0x00000000004ACAC0 "a9*"
 *   insn=0x00000000004ACAC0 string=0x00000000004ACAC4 "!"
 *   insn=0x00000000004ACACC string=0x00000000004ACAD0 "   "
 *   insn=0x00000000004ACAD4 string=0x00000000004ACAD8 "K"
 *   insn=0x00000000004ACAE8 string=0x00000000004ACAEC "9"
 *   insn=0x00000000004ACAF0 string=0x00000000004ACAF4 "\t"
 *   insn=0x00000000004ACAF4 string=0x00000000004ACAF8 "\n"
 *   insn=0x00000000004ACB10 string=0x00000000004ACB14 "#A"
 *   insn=0x00000000004ACB14 string=0x00000000001FCFA0 "0'"
 *   insn=0x00000000004ACB24 string=0x00000000004ACB28 ""
 *   insn=0x00000000004ACB30 string=0x00000000004ACB34 "@ +"
 *   insn=0x00000000004ACB34 string=0x00000000004ACB38 "e"
 *   insn=0x00000000004ACB3C string=0x00000000004ACB40 "A"
 *   insn=0x00000000004ACB44 string=0x00000000004ACB94 "("
 *   insn=0x00000000004ACB4C string=0x00000000004ACB50 "E "
 *   insn=0x00000000004ACB60 string=0x00000000004ACB64 "G!"
 *   insn=0x00000000004ACB64 string=0x00000000004ACB68 "f8&"
 *   insn=0x00000000004ACB68 string=0x00000000004ACB6C "c8'"
 *   insn=0x00000000004ACB78 string=0x00000000004ACB7C "c#"
 *   insn=0x00000000004ACB7C string=0x00000000004ACB80 "c(%"
 *   insn=0x00000000004ACB84 string=0x00000000004ACB88 "` $"
 *   insn=0x00000000004ACB8C string=0x00000000004ACB90 ":"
 *   insn=0x00000000004ACB98 string=0x00000000004ACB9C "K"
 *   insn=0x00000000004ACBAC string=0x00000000004ACBB0 "b@!"
 *   insn=0x00000000004ACBBC string=0x00000000004ACBC0 "`!""
 *   insn=0x00000000004ACBC4 string=0x00000000004ACC14 "(@!"
 *   insn=0x00000000004ACBCC string=0x00000000004ACBD0 "G"
 *   insn=0x00000000004ACBD0 string=0x00000000004ACBD4 "$#"
 *   insn=0x00000000004ACBD4 string=0x00000000004ACBD8 "g\t'"
 *   insn=0x00000000004ACBE4 string=0x00000000004ACBE8 "g\t,"
 *   insn=0x00000000004ACBF4 string=0x00000000004ACBF8 "c#"
 *   insn=0x00000000004ACC08 string=0x00000000004ACC0C "` $"
 *   insn=0x00000000004ACC1C string=0x00000000004ACC20 "K"
 *   insn=0x00000000004ACC30 string=0x00000000004ACC34 "T"
 *   insn=0x00000000004ACC34 string=0x00000000004ACC3C "S"
 *   insn=0x00000000004ACC3C string=0x00000000004ACC40 "k"
 *   insn=0x00000000004ACC48 string=0x00000000004ACC50 ""
 *   insn=0x00000000004ACC8C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RectangleIntersectsRectangle(
        Caver *this,
        const Caver::Rectangle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Rectangle *a6,
        const Caver::Vector2 *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11,
        const Caver::Vector2 *a12)
{
  float v12; // s8
  float v21; // s12
  const Caver::Vector2 *v22; // x3
  float v23; // s1
  float v24; // s11
  __int64 v25; // x23
  float v26; // w26
  __int64 v27; // x25
  float *v28; // x22
  float v29; // s0
  float v30; // s1
  float v31; // s4
  float v32; // s6
  float v34; // [xsp+8h] [xbp-F8h]
  float v35; // [xsp+Ch] [xbp-F4h]
  __int64 v36; // [xsp+10h] [xbp-F0h] BYREF
  __int128 v37; // [xsp+18h] [xbp-E8h]
  __int128 v38; // [xsp+38h] [xbp-C8h]
  _OWORD v39[2]; // [xsp+50h] [xbp-B0h] BYREF
  __int64 v40; // [xsp+78h] [xbp-88h]

  v12 = 1.0;
  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v36 = 0;
  v21 = 0.0;
  Caver::OrientedRect::OBFromTransformedRectangle(this, a2, (const Caver::Vector2 *)&v36, a4, a5, a6, 0.0, 1.0);
  *(_QWORD *)&v39[0] = 0;
  Caver::OrientedRect::OBFromTransformedRectangle(a3, a6, (const Caver::Vector2 *)v39, a8, a9, v22, 0.0, 1.0);
  v23 = fabsf(a4 - a8);
  v24 = 3.4028e38;
  v25 = 0;
  v26 = 1.0;
  if ( v23 <= 0.001 )
    v27 = 2;
  else
    v27 = 4;
  v28 = (float *)v39;
  v39[0] = v38;
  v39[1] = v37;
  do
  {
    if ( (Caver::OrientedRect::IntersectsOrientedRectOnAxis() & 1) == 0 )
      return 0;
    v29 = v28[1];
    if ( v21 > 0.5 && v29 > 0.5 )
    {
      if ( v35 >= v24 )
      {
        v30 = *v28;
        goto LABEL_14;
      }
      v26 = *v28;
      v30 = *v28;
      goto LABEL_12;
    }
    v30 = *v28;
    v31 = a11[1];
    if ( (float)((float)((float)(*a11 - (float)(v35 * *v28)) * (float)(*a11 - (float)(v35 * *v28)))
               + (float)((float)(v31 - (float)(v35 * v29)) * (float)(v31 - (float)(v35 * v29)))) < (float)((float)((float)(*a11 - (float)(v12 * v24)) * (float)(*a11 - (float)(v12 * v24))) + (float)((float)(v31 - (float)(v21 * v24)) * (float)(v31 - (float)(v21 * v24)))) )
    {
      v26 = *v28;
LABEL_12:
      v12 = v30;
      v21 = v28[1];
      v24 = v35;
    }
LABEL_14:
    if ( v29 >= -0.5 || v21 <= 0.5 )
    {
      v32 = a11[1];
      if ( (float)((float)((float)(*a11 - (float)(v30 * v34)) * (float)(*a11 - (float)(v30 * v34)))
                 + (float)((float)(v32 - (float)(v29 * v34)) * (float)(v32 - (float)(v29 * v34)))) >= (float)((float)((float)(*a11 - (float)(v24 * v26)) * (float)(*a11 - (float)(v24 * v26))) + (float)((float)(v32 - (float)(v24 * v21)) * (float)(v32 - (float)(v24 * v21)))) )
        goto LABEL_20;
LABEL_19:
      v12 = -v30;
      v21 = -v29;
      v26 = -v30;
      v24 = -v34;
      goto LABEL_20;
    }
    if ( v24 > (float)-v34 )
      goto LABEL_19;
LABEL_20:
    ++v25;
    v28 += 2;
  }
  while ( v25 < v27 );
  if ( a7 )
  {
    *(float *)a7 = v12;
    *((float *)a7 + 1) = v21;
  }
  if ( a10 )
    *(float *)a10 = v24;
  return 1;
}

