/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000235A70
 * Mangled: _ZN5Caver15ShadowComponent22CreateShadowWithShapesEPPNS_23CollisionShapeComponentEiPNS_10FastVectorINS_12ShadowVertexEEE
 * Demangled: Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callers: 1
 *   0x00000000001F93D0  Caver::ShadowComponent::CreateShadowWithShapes(Caver::CollisionShapeComponent **,int,Caver::FastVector<Caver::ShadowVertex> *)
 *
 * Callees: 8
 *   0x00000000001F3AE0  Caver::ShadowComponent::AddShadowSegment(Caver::Vector2 const&,Caver::Vector2 const&,float,float,Caver::FastVector<Caver::ShadowVertex> *)
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FAE20  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *   0x00000000001FCC70  Caver::CollisionShape::TransformedPolygonVertexAtIndex(int)
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 166
 *   insn=0x0000000000235A9C string=0x0000000000235AA0 "Y"
 *   insn=0x0000000000235AA0 string=0x0000000000235AA4 "("
 *   insn=0x0000000000235AA8 string=0x0000000000235AAC "\t"
 *   insn=0x0000000000235AAC string=0x0000000000235AB0 ""
 *   insn=0x0000000000235AC8 string=0x0000000000235ACC " ( "
 *   insn=0x0000000000235ACC string=0x0000000000235AD0 "a)"
 *   insn=0x0000000000235AD0 string=0x0000000000235AD4 "A(!"
 *   insn=0x0000000000235AD8 string=0x0000000000235ADC "c-"
 *   insn=0x0000000000235ADC string=0x0000000000235AE0 "c8$"
 *   insn=0x0000000000235AE8 string=0x0000000000235AEC "!($"
 *   insn=0x0000000000235AF4 string=0x0000000000235AF8 "_"
 *   insn=0x0000000000235AFC string=0x0000000000235B00 "#(#"
 *   insn=0x0000000000235B0C string=0x0000000000235B10 "h"
 *   insn=0x0000000000235B10 string=0x0000000000235B14 ""
 *   insn=0x0000000000235B1C string=0x0000000000235B20 ""
 *   insn=0x0000000000235B24 string=0x0000000000235B28 "i"
 *   insn=0x0000000000235B28 string=0x0000000000235B2C ")\t"
 *   insn=0x0000000000235B30 string=0x0000000000235B34 "@"
 *   insn=0x0000000000235B34 string=0x0000000000235B38 "0"
 *   insn=0x0000000000235B38 string=0x0000000000235BF8 "9"
 *   insn=0x0000000000235B3C string=0x0000000000235B40 ""
 *   insn=0x0000000000235B40 string=0x0000000000235B44 ""
 *   insn=0x0000000000235B44 string=0x0000000000235B48 "s@"
 *   insn=0x0000000000235B44 string=0x0000000000235C24 "Z"
 *   insn=0x0000000000235B54 string=0x0000000000235B58 "`"
 *   insn=0x0000000000235B68 string=0x0000000000235B6C "  ""
 *   insn=0x0000000000235B84 string=0x0000000000235B88 ""
 *   insn=0x0000000000235B8C string=0x0000000000235B90 "0"
 *   insn=0x0000000000235B90 string=0x00000000001F8C50 "0'"
 *   insn=0x0000000000235BA0 string=0x0000000000235BA4 ""
 *   insn=0x0000000000235BA4 string=0x00000000001F3FD0 "P'"
 *   insn=0x0000000000235BA8 string=0x0000000000235BAC "@"
 *   insn=0x0000000000235BC0 string=0x00000000001FAE20 "0'"
 *   insn=0x0000000000235BCC string=0x0000000000235BD0 "B8 "
 *   insn=0x0000000000235BD0 string=0x0000000000235BD4 "c8!"
 *   insn=0x0000000000235BD4 string=0x0000000000235BD8 "B""
 *   insn=0x0000000000235BD8 string=0x0000000000235BDC "c#"
 *   insn=0x0000000000235BDC string=0x0000000000235BE0 "B(#"
 *   insn=0x0000000000235BE0 string=0x0000000000235BE4 "@ ("
 *   insn=0x0000000000235BE8 string=0x0000000000235BEC "i"
 *   insn=0x0000000000235BFC string=0x0000000000235C00 ""
 *   insn=0x0000000000235C04 string=0x0000000000235C08 ","
 *   insn=0x0000000000235C10 string=0x0000000000235C14 "H"
 *   insn=0x0000000000235C44 string=0x0000000000235C48 "g"
 *   insn=0x0000000000235C4C string=0x0000000000235C50 "8"
 *   insn=0x0000000000235C50 string=0x00000000001FD530 "0'"
 *   insn=0x0000000000235C54 string=0x0000000000235C58 "h"
 *   insn=0x0000000000235C58 string=0x0000000000584430 "333?"
 *   insn=0x0000000000235C5C string=0x0000000000235C60 "h"
 *   insn=0x0000000000235C60 string=0x0000000000583944 "\n"
 *   insn=0x0000000000235C64 string=0x0000000000235C68 "B-"
 *   insn=0x0000000000235C68 string=0x0000000000235C6C "B#"
 *   insn=0x0000000000235C7C string=0x0000000000235C80 "M"
 *   insn=0x0000000000235C8C string=0x0000000000235C90 "`8 "
 *   insn=0x0000000000235CA4 string=0x0000000000235CA8 "("
 *   insn=0x0000000000235CB0 string=0x0000000000235CB4 "!""
 *   insn=0x0000000000235CB4 string=0x00000000002360F8 "v"
 *   insn=0x0000000000235CF0 string=0x0000000000235CF4 ""
 *   insn=0x0000000000235D0C string=0x0000000000235D10 ""
 *   insn=0x0000000000235D10 string=0x0000000000235D3C "h"
 *   insn=0x0000000000235D18 string=0x0000000000235D1C "h"
 *   insn=0x0000000000235D1C string=0x00000000005846C0 "ff"
 *   insn=0x0000000000235D20 string=0x0000000000235D24 "E8!"
 *   insn=0x0000000000235D24 string=0x0000000000235D28 "c)"
 *   insn=0x0000000000235D2C string=0x0000000000235D30 "c(%"
 *   insn=0x0000000000235D30 string=0x0000000000235D34 "c$"
 *   insn=0x0000000000235D3C string=0x0000000000235D40 "i"
 *   insn=0x0000000000235D40 string=0x00000000005846C8 "ff&?"
 *   insn=0x0000000000235D48 string=0x0000000000235D4C "%"
 *   insn=0x0000000000235D54 string=0x0000000000235D58 "d$"
 *   insn=0x0000000000235D58 string=0x0000000000235D5C "c%"
 *   insn=0x0000000000235D68 string=0x0000000000235D6C "d($"
 *   insn=0x0000000000235D74 string=0x0000000000235D78 "H"
 *   insn=0x0000000000235D7C string=0x0000000000235D80 "k"
 *   insn=0x0000000000235D80 string=0x0000000000235D84 "H"
 *   insn=0x0000000000235D9C string=0x0000000000235DA0 "x"
 *   insn=0x0000000000235DA0 string=0x0000000000235DA4 ""
 *   insn=0x0000000000235DA4 string=0x0000000000235DA8 "h"
 *   insn=0x0000000000235DBC string=0x0000000000235DC0 " (""
 *   insn=0x0000000000235DC4 string=0x0000000000235DC8 "i"
 *   insn=0x0000000000235DCC string=0x0000000000235DD0 "6"
 *   insn=0x0000000000235DD0 string=0x0000000000235DD4 "H"
 *   insn=0x0000000000235DDC string=0x0000000000235DE0 "k"
 *   insn=0x0000000000235DE0 string=0x0000000000235DE4 "H"
 *   insn=0x0000000000235DE0 string=0x0000000000235DEC "w"
 *   insn=0x0000000000235DF0 string=0x0000000000235E20 "H"
 *   insn=0x0000000000235DF4 string=0x0000000000235DF8 "V"
 *   insn=0x0000000000235E08 string=0x0000000000235E0C "*"
 *   insn=0x0000000000235E18 string=0x0000000000235E1C ""
 *   insn=0x0000000000235E24 string=0x0000000000235E28 "H"
 *   insn=0x0000000000235E4C string=0x00000000001FCC70 "0'"
 *   insn=0x0000000000235E54 string=0x0000000000235E58 "h  "
 *   insn=0x0000000000235E60 string=0x0000000000235E64 "m"
 *   insn=0x0000000000235E68 string=0x0000000000235E6C "$8*"
 *   insn=0x0000000000235E70 string=0x0000000000235E74 "@ %"
 *   insn=0x0000000000235E74 string=0x0000000000235E78 "%"
 *   insn=0x0000000000235E88 string=0x0000000000235E8C "E(%"
 *   insn=0x0000000000235E8C string=0x0000000000235E90 "`!%"
 *   insn=0x0000000000235E90 string=0x0000000000235E94 ""
 *   insn=0x0000000000235EA0 string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000235EAC string=0x0000000000235EB0 "c9""
 *   insn=0x0000000000235EB8 string=0x0000000000235EBC "!#"
 *   insn=0x0000000000235EBC string=0x0000000000235EC0 " ) "
 *   insn=0x0000000000235EC0 string=0x0000000000235EC4 "A)!"
 *   insn=0x0000000000235ED0 string=0x0000000000235F08 ""
 *   insn=0x0000000000235EF4 string=0x0000000000235EF8 "@8!"
 *   insn=0x0000000000235EF8 string=0x0000000000235EFC "A(!"
 *   insn=0x0000000000235F00 string=0x00000000001F3AE0 "P'"
 *   insn=0x0000000000235F08 string=0x0000000000235F0C "*"
 *   insn=0x0000000000235F0C string=0x0000000000235F10 "\t"
 *   insn=0x0000000000235F18 string=0x0000000000235F28 ""
 *   insn=0x0000000000235F1C string=0x0000000000235F20 "`"
 *   insn=0x0000000000235F20 string=0x0000000000235F24 "A"
 *   insn=0x0000000000235F28 string=0x0000000000235F2C "*"
 *   insn=0x0000000000235F3C string=0x0000000000235F40 "L"
 *   insn=0x0000000000235F44 string=0x0000000000235F48 "A8("
 *   insn=0x0000000000235F48 string=0x0000000000235F4C "(  "
 *   insn=0x0000000000235F4C string=0x0000000000235F50 "M"
 *   insn=0x0000000000235F54 string=0x0000000000235F58 "-"
 *   insn=0x0000000000235F60 string=0x0000000000235F64 "`"
 *   insn=0x0000000000235F68 string=0x0000000000235F6C "e"
 *   insn=0x0000000000235F74 string=0x0000000000235F78 "B8$"
 *   insn=0x0000000000235F78 string=0x0000000000235F7C "N"
 *   insn=0x0000000000235FAC string=0x0000000000235FB0 "!#"
 *   insn=0x0000000000235FB0 string=0x0000000000235FB4 "B#"
 *   insn=0x0000000000235FCC string=0x0000000000235FD0 "! "
 *   insn=0x0000000000235FD0 string=0x0000000000235FD4 "@8!"
 *   insn=0x0000000000235FD4 string=0x0000000000235FD8 "A(!"
 *   insn=0x0000000000235FD8 string=0x0000000000235FDC "{"
 *   insn=0x0000000000236004 string=0x0000000000236008 ""
 *   insn=0x0000000000236008 string=0x000000000023600C ","
 *   insn=0x0000000000236010 string=0x0000000000236014 "|"
 *   insn=0x0000000000236024 string=0x0000000000236028 "J"
 *   insn=0x000000000023602C string=0x0000000000236030 "h"
 *   insn=0x0000000000236034 string=0x0000000000236038 "\t"
 *   insn=0x0000000000236048 string=0x000000000023604C ""8+"
 *   insn=0x0000000000236050 string=0x0000000000236054 "B#"
 *   insn=0x0000000000236054 string=0x0000000000236058 "a!"
 *   insn=0x0000000000236058 string=0x000000000023605C "@ !"
 *   insn=0x000000000023605C string=0x0000000000236060 "AL!"
 *   insn=0x0000000000236064 string=0x0000000000236068 "\n"
 *   insn=0x0000000000236068 string=0x000000000023606C "h"
 *   insn=0x0000000000236070 string=0x0000000000236074 "i"
 *   insn=0x0000000000236074 string=0x0000000000236078 "$"
 *   insn=0x0000000000236078 string=0x000000000023607C "!()"
 *   insn=0x000000000023607C string=0x0000000000236080 "!X%"
 *   insn=0x0000000000236094 string=0x0000000000236098 "\n"
 *   insn=0x000000000023609C string=0x00000000002360A0 ")"
 *   insn=0x00000000002360A0 string=0x00000000002360A4 "_"
 *   insn=0x00000000002360A4 string=0x00000000002360A8 "J"
 *   insn=0x00000000002360A8 string=0x00000000002360AC "?"
 *   insn=0x00000000002360AC string=0x00000000002360B0 "("
 *   insn=0x00000000002360B0 string=0x00000000002360B4 ""
 *   insn=0x00000000002360B8 string=0x00000000002360BC ""
 *   insn=0x00000000002360BC string=0x00000000002360C0 "I"
 *   insn=0x00000000002360C4 string=0x00000000002360C8 "\n}\n"
 *   insn=0x00000000002360C8 string=0x00000000002360CC "i"
 *   insn=0x00000000002360CC string=0x00000000002360D0 "i"
 *   insn=0x00000000002360D0 string=0x00000000002360D4 "JQ"
 *   insn=0x00000000002360D4 string=0x00000000002360D8 "k"
 *   insn=0x00000000002360D8 string=0x00000000002360DC ""
 *   insn=0x00000000002360DC string=0x00000000002360E0 "ii*"
 *   insn=0x00000000002360E0 string=0x00000000002360E4 "k"
 *   insn=0x00000000002360E4 string=0x00000000002360E8 "Ja"
 *   insn=0x00000000002360EC string=0x00000000002360F0 "K"
 *   insn=0x00000000002360F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::ShadowComponent::CreateShadowWithShapes(
        Caver::SceneObject *result,
        __int64 *a2,
        int a3,
        int *a4)
{
  Caver::CollisionShape *v4; // x21
  int v5; // w22
  float v6; // w27
  __int128 v7; // q11
  __int128 v8; // q12
  float v9; // s15
  unsigned __int64 StatusReg; // x25
  Caver::SceneObject *v11; // x20
  float v12; // s9
  float v13; // s3
  float v14; // s1
  float v17; // s3
  float v18; // s8
  char v19; // w28
  __int64 v20; // x26
  __int64 v21; // x24
  float v22; // s0
  float v23; // w25
  Caver::CollisionShape *v24; // x24
  __int64 v25; // x27
  __int128 v26; // q0
  __int128 v27; // q1
  float v28; // s0
  float v29; // s0
  float v30; // s4
  float v31; // s3
  int *v32; // x26
  int v33; // w23
  float v34; // s5
  float v35; // s4
  float v36; // s3
  bool v37; // vf
  int v38; // w24
  unsigned int v39; // w27
  float v40; // s8
  __int128 v41; // q10
  float v42; // s9
  __int128 v43; // q1
  __int128 v44; // q0
  float v45; // s13
  float v46; // s11
  int v47; // w28
  float v48; // s3
  float v49; // s13
  float v50; // s14
  int v51; // w28
  float v52; // s3
  int v53; // w8
  float v54; // s1
  float v55; // s2
  float v56; // s1
  float v57; // s0
  int v58; // w10
  char v59; // w8
  unsigned __int8 v60; // w11
  unsigned __int8 v61; // w9
  __int64 v62; // x8
  int v63; // w9
  __int64 v64; // x10
  float v65; // [xsp+Ch] [xbp-E4h]
  float v66; // [xsp+10h] [xbp-E0h]
  unsigned __int64 v67; // [xsp+18h] [xbp-D8h]
  float v68; // [xsp+20h] [xbp-D0h] BYREF
  float v69; // [xsp+24h] [xbp-CCh]
  float v70; // [xsp+28h] [xbp-C8h] BYREF
  float v71; // [xsp+2Ch] [xbp-C4h]
  unsigned __int64 v72; // [xsp+30h] [xbp-C0h] BYREF
  unsigned __int64 v73; // [xsp+38h] [xbp-B8h] BYREF
  float v74; // [xsp+40h] [xbp-B0h] BYREF
  float v75; // [xsp+44h] [xbp-ACh]
  float v76; // [xsp+48h] [xbp-A8h] BYREF
  float v77; // [xsp+4Ch] [xbp-A4h]
  float v78; // [xsp+50h] [xbp-A0h]
  float v79; // [xsp+54h] [xbp-9Ch]
  __int64 v80; // [xsp+58h] [xbp-98h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v11 = result;
  v12 = 0.5;
  v80 = *(_QWORD *)(StatusReg + 40);
  v13 = *((float *)result + 39);
  v14 = (float)(*((float *)result + 37) + (float)(v13 * 0.5)) + 0.0;
  v17 = v14 + (float)((float)(v13 * -0.5) - *((float *)result + 42));
  v76 = (float)(*((float *)result + 36) + (float)(*((float *)result + 38) * 0.5)) + *((float *)result + 33);
  v77 = v14;
  v78 = v76 + 0.0;
  v79 = v17;
  if ( a3 <= 0 )
    goto LABEL_22;
  v18 = 3.4028e38;
  v19 = 0;
  v20 = (unsigned int)a3;
  do
  {
    v21 = *a2;
    if ( *(_BYTE *)(*a2 + 378) )
    {
      if ( *(_DWORD *)(v21 + 112) == 3 )
      {
        result = *(Caver::SceneObject **)(v21 + 40);
        if ( result )
        {
          v22 = *((float *)result + 30);
          if ( (float)(v22 + *((float *)result + 46)) <= *((float *)v11 + 41)
            && (float)(v22 + *((float *)result + 47)) >= *((float *)v11 + 40) )
          {
            if ( *(_BYTE *)(v21 + 376) )
            {
              result = (Caver::SceneObject *)Caver::SceneObject::isHidden(result);
              if ( ((unsigned __int8)result & 1) == 0 )
              {
                v67 = StatusReg;
                v23 = v6;
                v24 = (Caver::CollisionShape *)Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v21);
                v25 = *((_QWORD *)v24 + 1);
                result = (Caver::SceneObject *)Caver::CollisionShape::IntersectsWithLineSegment(
                                                 v24,
                                                 (const Caver::LineSegment *)&v76,
                                                 (Caver::Vector2 *)&v74,
                                                 0,
                                                 (Caver::Vector2 *)&v73);
                if ( ((unsigned __int8)result & 1) != 0 )
                {
                  *(float *)&v26 = v74;
                  *(float *)&v27 = v75;
                  if ( (float)((float)((float)(v76 - v74) * (float)(v76 - v74))
                             + (float)((float)(v77 - v75) * (float)(v77 - v75))) < v18
                    && (*(_BYTE *)(v25 + 33) || (_DWORD)v73 && (_DWORD)v73 != *(_DWORD *)v25 - 2) )
                  {
                    v23 = v75;
                    v19 = 1;
                    v7 = v26;
                    v9 = v74;
                    v8 = v27;
                    v4 = v24;
                    v5 = v73;
                    v18 = (float)((float)(v76 - v74) * (float)(v76 - v74))
                        + (float)((float)(v77 - v75) * (float)(v77 - v75));
                    v66 = v74;
                  }
                }
                v6 = v23;
                StatusReg = v67;
              }
            }
          }
        }
      }
    }
    --v20;
    ++a2;
  }
  while ( v20 );
  if ( (v19 & 1) != 0 )
  {
    *((_BYTE *)v11 + 188) = 1;
    *((float *)v11 + 48) = v9;
    *((_DWORD *)v11 + 49) = v8;
    v28 = sqrtf(v18) + (float)((float)(*((float *)v11 + 39) * -0.5) * 0.7);
    *((_DWORD *)v11 + 52) = 1065353216;
    if ( v28 <= 0.01 )
    {
      v29 = 1.0;
    }
    else
    {
      v29 = fmaxf(1.0 - (float)(v28 / *((float *)v11 + 42)), 0.0);
      *((float *)v11 + 52) = v29;
    }
    v30 = *((float *)v11 + 31);
    if ( v30 <= 0.01 )
      v31 = (float)((float)(*((float *)v11 + 38) * 0.5)
                  + (float)((float)(*((float *)v11 + 41) - *((float *)v11 + 40)) * 0.5))
          * 0.45;
    else
      v31 = v30 * *(float *)(*((_QWORD *)v11 + 5) + 140LL);
    v32 = (int *)*((_QWORD *)v4 + 1);
    v33 = v5 + 1;
    v34 = 1.0;
    v35 = (float)(v31 * 0.65) + (float)((float)((float)(v31 * 1.1) - (float)(v31 * 0.65)) * v29);
    v36 = 1.0 / v35;
    *((float *)v11 + 50) = v35;
    *((float *)v11 + 51) = 1.0 / v35;
    v37 = __OFSUB__(v5 + 1, *v32);
    if ( v5 + 1 >= *v32 )
      v33 = *((unsigned __int8 *)v32 + 33) - 1;
    v74 = *(float *)&v7;
    v75 = v6;
    v73 = __PAIR64__(LODWORD(v6), LODWORD(v66));
    v38 = *a4;
    if ( (v33 & v5) < 0 == v37 )
    {
      v39 = 1;
      v40 = v9;
      v41 = v8;
      v42 = *(float *)&v7;
      v65 = *(float *)&v7;
      while ( 1 )
      {
        if ( v5 < 0 )
        {
          v5 = -1;
          if ( v33 < 0 )
            goto LABEL_47;
        }
        else
        {
          v37 = __OFSUB__(++v5, *v32);
          if ( v5 >= *v32 )
            v5 = *((unsigned __int8 *)v32 + 33) - 1;
          if ( v33 < 0 )
          {
LABEL_47:
            v33 = -1;
            if ( (v5 & 0x80000000) == 0 )
              goto LABEL_48;
            goto LABEL_38;
          }
        }
        if ( v33 )
        {
          --v33;
          if ( v5 < 0 )
            goto LABEL_38;
LABEL_48:
          result = (Caver::SceneObject *)Caver::CollisionShape::TransformedPolygonVertexAtIndex((__int64 *)&v72, v4, v5);
          LODWORD(v44) = v72;
          v37 = 0;
          if ( (float)(*(float *)&v72 - v42) < 0.0 )
          {
            LODWORD(v43) = HIDWORD(v72);
            v45 = fabsf(*(float *)&v72 - v42);
            v37 = 0;
            if ( fabsf(*((float *)&v72 + 1) - *(float *)&v41) < (float)(v45 + v45) )
            {
              v46 = fabsf(*(float *)&v72 - v9);
              v37 = 0;
              if ( v46 <= (float)(*((float *)v11 + 50) + -0.1) )
              {
                v47 = 0;
                if ( (v39 & 1) != 0 )
                  goto LABEL_55;
              }
              else
              {
                v70 = *(float *)&v72 - v42;
                v71 = *((float *)&v72 + 1) - *(float *)&v41;
                result = (Caver::SceneObject *)Caver::Vector2::Normalize((Caver::Vector2 *)&v70);
                v47 = 1;
                v48 = v45 - (float)(v46 - *((float *)v11 + 50));
                *(float *)&v44 = v42 + (float)(v70 * v48);
                *(float *)&v43 = *(float *)&v41 + (float)(v71 * v48);
                *(float *)&v72 = *(float *)&v44;
                *((float *)&v72 + 1) = *(float *)&v43;
                if ( (v39 & 1) != 0 )
                {
LABEL_55:
                  v7 = v44;
                  v41 = v43;
                  v42 = *(float *)&v44;
                  v74 = *(float *)&v44;
                  v75 = *(float *)&v43;
                  if ( !v47 )
                    goto LABEL_57;
                  goto LABEL_56;
                }
              }
              result = (Caver::SceneObject *)Caver::ShadowComponent::AddShadowSegment();
              LODWORD(v43) = HIDWORD(v72);
              LODWORD(v44) = v72;
              goto LABEL_55;
            }
          }
LABEL_56:
          v5 = -1;
          v44 = v7;
          v43 = v41;
LABEL_57:
          v7 = v44;
          v41 = v43;
          if ( v33 < 0 )
            goto LABEL_39;
LABEL_58:
          Caver::CollisionShape::TransformedPolygonVertexAtIndex((__int64 *)&v72, v4, v33);
          v37 = 0;
          if ( (float)(*(float *)&v72 - v40) <= 0.0 )
            goto LABEL_64;
          v49 = fabsf(*(float *)&v72 - v40);
          v37 = 0;
          if ( fabsf(*((float *)&v72 + 1) - *(float *)&v8) >= (float)(v49 + v49) )
            goto LABEL_64;
          v50 = fabsf(*(float *)&v72 - v65);
          if ( v50 <= (float)(*((float *)v11 + 50) + -0.1) )
          {
            v51 = 0;
          }
          else
          {
            v68 = *(float *)&v72 - v40;
            v69 = *((float *)&v72 + 1) - *(float *)&v8;
            Caver::Vector2::Normalize((Caver::Vector2 *)&v68);
            v51 = 1;
            v52 = v49 - (float)(v50 - *((float *)v11 + 50));
            *(float *)&v72 = v40 + (float)(v68 * v52);
            *((float *)&v72 + 1) = *(float *)&v8 + (float)(v69 * v52);
          }
          Caver::ShadowComponent::AddShadowSegment();
          v39 = 0;
          result = 0;
          LODWORD(v8) = HIDWORD(v72);
          v40 = *(float *)&v72;
          v73 = v72;
          if ( v51 )
          {
LABEL_64:
            v33 = -1;
            result = (Caver::SceneObject *)v39;
          }
          v39 = (unsigned int)result;
          if ( (v33 & v5) < 0 != v37 )
          {
LABEL_67:
            v36 = *((float *)v11 + 51);
            v29 = *((float *)v11 + 52);
            v53 = *a4;
            v9 = v40;
            v12 = 0.5;
            v34 = 1.0;
            goto LABEL_69;
          }
        }
        else
        {
          if ( !*((_BYTE *)v32 + 33) )
            goto LABEL_47;
          v33 = *v32 - 1;
          if ( (v5 & 0x80000000) == 0 )
            goto LABEL_48;
LABEL_38:
          v5 = -1;
          if ( (v33 & 0x80000000) == 0 )
            goto LABEL_58;
LABEL_39:
          v33 = -1;
          if ( v5 < 0 != v37 )
            goto LABEL_67;
        }
      }
    }
    v53 = *a4;
LABEL_69:
    v54 = *((float *)v11 + 48);
    v55 = (float)(v54 - *(float *)&v7) * v36;
    v56 = v36 * (float)(v9 - v54);
    if ( v55 < v56 )
      v56 = v55;
    if ( v38 < v53 )
    {
      v57 = (float)(v29 * 0.6) * fminf(v56 + v12, v34);
      v58 = (int)(float)(v57 * 255.0);
      if ( v58 >= 255 )
        LOBYTE(v58) = -1;
      if ( (int)(float)(v57 * 0.0) >= 255 )
        v59 = -1;
      else
        v59 = (int)(float)(v57 * 0.0);
      v60 = v59;
      v61 = v59;
      v62 = v38;
      v63 = v61 | ((unsigned __int8)v58 << 24) | (v60 << 16) | (v60 << 8);
      v64 = 24LL * v38 + 20;
      do
      {
        ++v62;
        *(_DWORD *)(*((_QWORD *)a4 + 1) + v64) = v63;
        v64 += 24;
      }
      while ( v62 < *a4 );
    }
  }
  else
  {
LABEL_22:
    *((_BYTE *)v11 + 188) = 0;
  }
  return result;
}

