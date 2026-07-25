/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD158
 * Mangled: _ZN5Caver25CircleIntersectsRectangleERKNS_6CircleERKNS_7Vector2EffRKNS_9RectangleES5_ffPS3_Pf
 * Demangled: Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callers: 1
 *   0x00000000001FAEA0  Caver::CircleIntersectsRectangle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6A40  RangesOverlap(float,float,float,float,float *)
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 71
 *   insn=0x00000000004AD178 string=0x00000000004AD17C "X"
 *   insn=0x00000000004AD17C string=0x00000000004AD180 ""
 *   insn=0x00000000004AD188 string=0x00000000004AD18C "h"
 *   insn=0x00000000004AD194 string=0x00000000004AD198 "I"
 *   insn=0x00000000004AD1A0 string=0x00000000004AD1A4 "*"
 *   insn=0x00000000004AD1B8 string=0x00000000004AD1BC " "
 *   insn=0x00000000004AD1C0 string=0x00000000004AD1C4 "s/"
 *   insn=0x00000000004AD1C4 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004AD1D8 string=0x00000000004AD1DC "!"
 *   insn=0x00000000004AD1E0 string=0x00000000004AD1E4 "  ""
 *   insn=0x00000000004AD1F4 string=0x00000000004AD1F8 "*"
 *   insn=0x00000000004AD1F8 string=0x00000000004AD1FC "`8*"
 *   insn=0x00000000004AD1FC string=0x00000000004AD200 "a(*"
 *   insn=0x00000000004AD200 string=0x00000000004AD204 "C($"
 *   insn=0x00000000004AD208 string=0x00000000004AD20C "&"
 *   insn=0x00000000004AD20C string=0x00000000001F6A40 "0'"
 *   insn=0x00000000004AD220 string=0x00000000004AD224 " 8*"
 *   insn=0x00000000004AD224 string=0x00000000004AD228 "A)!"
 *   insn=0x00000000004AD228 string=0x00000000004AD22C "C(#"
 *   insn=0x00000000004AD230 string=0x00000000004AD234 "`\n"
 *   insn=0x00000000004AD238 string=0x00000000004AD23C "`"
 *   insn=0x00000000004AD240 string=0x00000000004AD244 """
 *   insn=0x00000000004AD248 string=0x00000000004AD24C "@ *"
 *   insn=0x00000000004AD24C string=0x00000000004AD250 "E"
 *   insn=0x00000000004AD250 string=0x00000000004AD254 "h! "
 *   insn=0x00000000004AD260 string=0x00000000004AD264 "(  "
 *   insn=0x00000000004AD280 string=0x00000000004AD284 "h! "
 *   insn=0x00000000004AD288 string=0x00000000004AD28C "\t"
 *   insn=0x00000000004AD28C string=0x00000000004AD290 "kA!"
 *   insn=0x00000000004AD294 string=0x00000000004AD298 "5"
 *   insn=0x00000000004AD298 string=0x00000000004AD36C "s"
 *   insn=0x00000000004AD29C string=0x00000000004AD2A0 "(  "
 *   insn=0x00000000004AD2A4 string=0x00000000004AD2A8 ""
 *   insn=0x00000000004AD2A8 string=0x00000000004AD2AC "+@!"
 *   insn=0x00000000004AD2AC string=0x00000000004AD2B0 "4"
 *   insn=0x00000000004AD2B0 string=0x00000000004AD2B4 "."
 *   insn=0x00000000004AD2BC string=0x00000000004AD2C0 "(  "
 *   insn=0x00000000004AD2C0 string=0x00000000004AD2C4 "a(""
 *   insn=0x00000000004AD2C4 string=0x00000000004AD2C8 "d"
 *   insn=0x00000000004AD2C8 string=0x00000000004AD2D4 "("
 *   insn=0x00000000004AD2E0 string=0x0000000000583944 "\n"
 *   insn=0x00000000004AD2E4 string=0x00000000004AD2E8 "k8 "
 *   insn=0x00000000004AD2E8 string=0x00000000004AD2EC "!8""
 *   insn=0x00000000004AD2EC string=0x00000000004AD2F0 "b"
 *   insn=0x00000000004AD2F0 string=0x00000000004AD2F4 " "
 *   insn=0x00000000004AD2F4 string=0x00000000004AD2F8 "@ $"
 *   insn=0x00000000004AD2F8 string=0x00000000004AD2FC ""($"
 *   insn=0x00000000004AD300 string=0x00000000004AD304 "L"
 *   insn=0x00000000004AD304 string=0x00000000004AD308 "`\t+"
 *   insn=0x00000000004AD310 string=0x00000000004AD314 "@\t*"
 *   insn=0x00000000004AD314 string=0x00000000004AD318 "   "
 *   insn=0x00000000004AD318 string=0x00000000004AD31C "*"
 *   insn=0x00000000004AD31C string=0x00000000004AD320 " "
 *   insn=0x00000000004AD324 string=0x00000000004AD328 "g"
 *   insn=0x00000000004AD328 string=0x00000000004AD32C " "
 *   insn=0x00000000004AD330 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004AD334 string=0x00000000004AD338 "!"
 *   insn=0x00000000004AD33C string=0x00000000004AD340 "a\t!"
 *   insn=0x00000000004AD340 string=0x00000000004AD344 "I"
 *   insn=0x00000000004AD344 string=0x00000000004AD348 "("
 *   insn=0x00000000004AD348 string=0x00000000004AD34C "K9 "
 *   insn=0x00000000004AD354 string=0x00000000004AD358 " "
 *   insn=0x00000000004AD35C string=0x00000000004AD360 "8<"
 *   insn=0x00000000004AD360 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004AD36C string=0x00000000004AD370 "`\t("
 *   insn=0x00000000004AD370 string=0x00000000004AD374 "`"
 *   insn=0x00000000004AD37C string=0x00000000004AD384 ""
 *   insn=0x00000000004AD38C string=0x00000000004AD390 "!"
 *   insn=0x00000000004AD3C4 string=0x00000000004AD3C8 "+"
 *   insn=0x00000000004AD3C8 string=0x00000000004AD3CC "T"
 *   insn=0x00000000004AD3D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CircleIntersectsRectangle(
        Caver *this,
        const Caver::Circle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Rectangle *a6,
        const Caver::Vector2 *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11)
{
  float v19; // s10
  float v20; // s11
  float v21; // s0
  float v22; // s2
  float v23; // w8
  float v24; // s0
  float v25; // w8
  float v26; // w9
  float v27; // s11
  float v28; // s2
  float v29; // s0
  bool v30; // cc
  float v31; // s12
  float v32; // s1
  float v33; // s0
  unsigned __int64 v35; // [xsp+8h] [xbp-88h] BYREF
  float v36; // [xsp+10h] [xbp-80h] BYREF
  float v37; // [xsp+14h] [xbp-7Ch] BYREF
  _BYTE v38[8]; // [xsp+18h] [xbp-78h] BYREF
  __int64 v39[2]; // [xsp+20h] [xbp-70h] BYREF

  v39[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Vector2::Transformed(this, a2, a4, a5);
  Caver::Vector2::InverseTransformed(v39, (Caver::Vector2 *)v38, a6, a8, a9);
  if ( fabsf(a9 + -1.0) <= 0.0001 )
    v19 = *((float *)this + 2) * a5;
  else
    v19 = (float)(*((float *)this + 2) * a5) / a9;
  if ( (RangesOverlap(*(float *)v39 - v19, *(float *)v39 + v19, *(float *)a3, *(float *)a3 + *((float *)a3 + 2), &v37)
      & 1) == 0
    || (RangesOverlap(
          *((float *)v39 + 1) - v19,
          v19 + *((float *)v39 + 1),
          *((float *)a3 + 1),
          *((float *)a3 + 1) + *((float *)a3 + 3),
          &v36)
      & 1) == 0 )
  {
    return 0;
  }
  v20 = v37;
  v21 = fabsf(v37);
  v22 = fabsf(v36);
  if ( v21 >= v19 || v22 >= v19 )
  {
    if ( v21 >= v22 )
    {
      v26 = 0.0;
      if ( v36 >= 0.0 )
      {
        v25 = 1.0;
        v20 = v36;
        if ( !a7 )
          goto LABEL_30;
      }
      else
      {
        v25 = -1.0;
        v20 = -v36;
        if ( !a7 )
          goto LABEL_30;
      }
    }
    else
    {
      v25 = 0.0;
      if ( v37 >= 0.0 )
      {
        v26 = 1.0;
        if ( !a7 )
          goto LABEL_30;
      }
      else
      {
        v26 = -1.0;
        v20 = -v37;
        if ( !a7 )
          goto LABEL_30;
      }
    }
    goto LABEL_29;
  }
  if ( v37 >= 0.0 )
  {
    v24 = *((float *)a3 + 1);
    if ( v36 >= 0.0 )
      v24 = v24 + *((float *)a3 + 3);
    v23 = *(float *)a3 + *((float *)a3 + 2);
  }
  else
  {
    v23 = *(float *)a3;
    v24 = *((float *)a3 + 1);
    if ( v36 >= 0.0 )
      v24 = v24 + *((float *)a3 + 3);
  }
  v27 = *((float *)v39 + 1) - v24;
  v28 = fabsf(*((float *)v39 + 1) - v24);
  v29 = fabsf(*(float *)v39 - v23);
  v30 = v28 > 0.01 || v29 > 0.01;
  v31 = v30 ? *(float *)v39 - v23 : (float)(*(float *)v39 - v23) + 0.01;
  v32 = (float)(v27 * v27) + (float)(v31 * v31);
  if ( v32 >= (float)(v19 * v19) )
    return 0;
  v33 = sqrtf(v32);
  v26 = v31 * (float)(1.0 / v33);
  v25 = v27 * (float)(1.0 / v33);
  v20 = v19 - v33;
  if ( a7 )
  {
LABEL_29:
    v35 = __PAIR64__(LODWORD(v25), LODWORD(v26));
    Caver::Vector2::Rotate((Caver::Vector2 *)&v35, a8);
    *(_QWORD *)a7 = v35;
  }
LABEL_30:
  if ( a10 )
    *(float *)a10 = v20 * a9;
  return 1;
}

