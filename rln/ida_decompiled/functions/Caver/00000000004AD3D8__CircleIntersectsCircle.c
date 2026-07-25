/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD3D8
 * Mangled: _ZN5Caver22CircleIntersectsCircleERKNS_6CircleERKNS_7Vector2EffS2_S5_ffPS3_Pf
 * Demangled: Caver::CircleIntersectsCircle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callers: 1
 *   0x00000000001F8850  Caver::CircleIntersectsCircle(Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Circle const&,Caver::Vector2 const&,float,float,Caver::Vector2*,float *)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 27
 *   insn=0x00000000004AD3F4 string=0x00000000004AD3F8 "X"
 *   insn=0x00000000004AD3F8 string=0x00000000004AD3FC ""
 *   insn=0x00000000004AD404 string=0x00000000004AD408 "h"
 *   insn=0x00000000004AD410 string=0x00000000004AD414 "I"
 *   insn=0x00000000004AD41C string=0x00000000004AD420 "*"
 *   insn=0x00000000004AD438 string=0x00000000004AD43C "\n*"
 *   insn=0x00000000004AD43C string=0x00000000004AD440 " "
 *   insn=0x00000000004AD454 string=0x00000000004AD458 "!"
 *   insn=0x00000000004AD458 string=0x00000000004AD45C "!"
 *   insn=0x00000000004AD45C string=0x00000000004AD460 "H) "
 *   insn=0x00000000004AD460 string=0x00000000004AD464 "!"
 *   insn=0x00000000004AD468 string=0x00000000004AD46C "   "
 *   insn=0x00000000004AD470 string=0x00000000004AD474 "T"
 *   insn=0x00000000004AD474 string=0x00000000004AD47C " "
 *   insn=0x00000000004AD480 string=0x00000000004AD484 "g"
 *   insn=0x00000000004AD484 string=0x00000000004AD488 " "
 *   insn=0x00000000004AD488 string=0x00000000004AD48C ")@"
 *   insn=0x00000000004AD48C string=0x00000000001FD530 "0'"
 *   insn=0x00000000004AD490 string=0x00000000004AD4AC "s"
 *   insn=0x00000000004AD498 string=0x00000000004AD49C "!"
 *   insn=0x00000000004AD49C string=0x00000000004AD4A0 "b"
 *   insn=0x00000000004AD4A0 string=0x00000000004AD4A4 "!"
 *   insn=0x00000000004AD4B0 string=0x00000000004AD4B4 "`"
 *   insn=0x00000000004AD4BC string=0x00000000004AD4C4 ""
 *   insn=0x00000000004AD4CC string=0x00000000004AD4D0 "!"
 *   insn=0x00000000004AD4D0 string=0x00000000004AD4F4 "w#"
 *   insn=0x00000000004AD4F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CircleIntersectsCircle(
        Caver *this,
        const Caver::Circle *a2,
        const Caver::Vector2 *a3,
        float a4,
        float a5,
        const Caver::Circle *a6,
        float32x2_t *a7,
        float a8,
        float a9,
        Caver::Vector2 *a10,
        float *a11)
{
  float v19; // s10
  float32x2_t v20; // d1
  float v21; // s8
  float v22; // s1
  float v23; // s0
  float32x2_t v25; // [xsp+8h] [xbp-68h]
  float32x2_t v26; // [xsp+10h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::Vector2::Transformed(this, a2, a4, a5);
  v19 = *((float *)this + 2) * a5;
  Caver::Vector2::Transformed(a3, a6, a8, a9);
  v20.n64_u64[0] = vsub_f32(v25, v26).n64_u64[0];
  v21 = v19 + (float)(*((float *)a3 + 2) * a9);
  v22 = vaddv_f32(vmul_f32(v20, v20));
  if ( v22 >= (float)(v21 * v21) )
    return 0;
  if ( a7 || a10 )
  {
    v23 = sqrtf(v22);
    if ( a7 )
      a7->n64_u64[0] = vmul_n_f32(vsub_f32(v26, v25), 1.0 / v23).n64_u64[0];
    if ( a10 )
      *(float *)a10 = v21 - v23;
  }
  return 1;
}

