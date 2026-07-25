/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFC30
 * Mangled: _ZN5Caver12OrientedRect26OBFromTransformedRectangleERKNS_9RectangleERKNS_7Vector2EffS6_ff
 * Demangled: Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Callers: 1
 *   0x00000000001FDC90  Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&,Caver::Vector2 const&,float,float,Caver::Vector2 const&,float,float)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8F90  Caver::Vector2::InverseTransformed(Caver::Vector2 const&,float,float)
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x00000000001FE880  Caver::Vector2::Transformed(Caver::Vector2 const&,float,float)
 *
 * Referenced strings: 29
 *   insn=0x00000000004AFC4C string=0x00000000004AFC50 "V"
 *   insn=0x00000000004AFC5C string=0x00000000004AFC60 ")"
 *   insn=0x00000000004AFC60 string=0x00000000004AFC64 ""
 *   insn=0x00000000004AFC7C string=0x00000000004AFC80 " "
 *   insn=0x00000000004AFC84 string=0x00000000004AFC88 "`"
 *   insn=0x00000000004AFC88 string=0x00000000004AFC8C "!"
 *   insn=0x00000000004AFC8C string=0x00000000004AFC90 "h"
 *   insn=0x00000000004AFC90 string=0x00000000004AFC94 "J"
 *   insn=0x00000000004AFCA8 string=0x00000000004AFCAC "@"
 *   insn=0x00000000004AFCB4 string=0x00000000001F8F90 "0'"
 *   insn=0x00000000004AFCB8 string=0x00000000004AFCBC "`9*"
 *   insn=0x00000000004AFCC0 string=0x00000000004AFCC4 "J"
 *   insn=0x00000000004AFCC8 string=0x00000000004AFCCC "!"
 *   insn=0x00000000004AFCD0 string=0x00000000004AFCD4 "@ *"
 *   insn=0x00000000004AFCD4 string=0x00000000004AFCD8 "h"
 *   insn=0x00000000004AFCD8 string=0x00000000004AFCDC "a"
 *   insn=0x00000000004AFCDC string=0x00000000004AFCE0 ""
 *   insn=0x00000000004AFCEC string=0x00000000001FC440 "0'"
 *   insn=0x00000000004AFCF0 string=0x00000000004AFCF4 " "
 *   insn=0x00000000004AFCF4 string=0x00000000004AFCF8 "h&"
 *   insn=0x00000000004AFD08 string=0x00000000004AFD0C "h"
 *   insn=0x00000000004AFD10 string=0x00000000004AFD14 "`"
 *   insn=0x00000000004AFD24 string=0x00000000004AFD28 " "
 *   insn=0x00000000004AFD2C string=0x00000000004AFD30 "!"
 *   insn=0x00000000004AFD30 string=0x00000000004AFD34 " "
 *   insn=0x00000000004AFD34 string=0x00000000004AFD38 "`"
 *   insn=0x00000000004AFD44 string=0x00000000004AFD48 "!"
 *   insn=0x00000000004AFD48 string=0x00000000004AFD6C "Y"
 *   insn=0x00000000004AFD6C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::OrientedRect::OBFromTransformedRectangle@<X0>(
        float32x2_t *this@<X0>,
        const Caver::Rectangle *a2@<X1>,
        const Caver::Vector2 *a3@<X2>,
        float a4@<S0>,
        float a5@<S1>,
        float a6@<S2>,
        float a7@<S3>,
        float32x2_t *a8@<X8>)
{
  __int64 *result; // x0
  int v17; // w8
  float v18; // s0
  float v19; // s0
  __int64 v20; // [xsp+0h] [xbp-70h] BYREF
  unsigned __int64 v21; // [xsp+8h] [xbp-68h] BYREF
  __int64 v22[2]; // [xsp+10h] [xbp-60h] BYREF

  v22[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v21 = vadd_f32((float32x2_t)this->n64_u64[0], vmul_f32(this[1], (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  Caver::Vector2::Transformed((Caver::Vector2 *)&v21, a2, a4, a5);
  result = Caver::Vector2::InverseTransformed(v22, (Caver::Vector2 *)&v20, a3, a6, a7);
  a8->n64_u64[0] = v22[0];
  a8[1].n64_u64[0] = 1065353216;
  if ( fabsf(a4 - a6) <= 0.0001 )
  {
    v18 = 0.0;
    v17 = 1065353216;
  }
  else
  {
    v22[0] = 1065353216;
    result = (__int64 *)Caver::Vector2::Rotate((Caver::Vector2 *)v22, a4 - a6);
    v17 = v22[0];
    v18 = *((float *)v22 + 1);
    a8[1].n64_u32[0] = v22[0];
    a8[1].n64_f32[1] = v18;
  }
  a8[2].n64_u32[1] = v17;
  a8[2].n64_f32[0] = -v18;
  v19 = a5 / a7;
  if ( fabsf(a7 + -1.0) <= 0.0001 )
    v19 = a5;
  a8[3].n64_u64[0] = vmul_n_f32(vmul_f32(this[1], (float32x2_t)0x3F0000003F000000LL), v19).n64_u64[0];
  return result;
}

