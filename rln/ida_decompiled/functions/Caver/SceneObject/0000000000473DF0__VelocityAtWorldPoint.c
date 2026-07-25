/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473DF0
 * Mangled: _ZN5Caver11SceneObject20VelocityAtWorldPointERKNS_7Vector2E
 * Demangled: Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F87B0  Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *
 * Referenced strings: 24
 *   insn=0x0000000000473E00 string=0x0000000000473E04 "U"
 *   insn=0x0000000000473E18 string=0x0000000000473E1C " "
 *   insn=0x0000000000473E28 string=0x0000000000473E2C "@@!"
 *   insn=0x0000000000473E34 string=0x00000000001FC440 "0'"
 *   insn=0x0000000000473E3C string=0x0000000000583734 "o"
 *   insn=0x0000000000473E48 string=0x0000000000473E4C "@ !"
 *   insn=0x0000000000473E4C string=0x0000000000473E50 "m"
 *   insn=0x0000000000473E60 string=0x0000000000473E64 "B"
 *   insn=0x0000000000473E64 string=0x0000000000473E68 "  "
 *   insn=0x0000000000473E68 string=0x0000000000473E6C "a""
 *   insn=0x0000000000473E6C string=0x0000000000473E70 "#@!"
 *   insn=0x0000000000473E70 string=0x0000000000473E74 "B$"
 *   insn=0x0000000000473E74 string=0x0000000000473E78 "!"
 *   insn=0x0000000000473E7C string=0x0000000000473E80 "B "
 *   insn=0x0000000000473E80 string=0x0000000000473E84 "! "
 *   insn=0x0000000000473E88 string=0x0000000000473E8C "!(%"
 *   insn=0x0000000000473E8C string=0x0000000000473E90 "\n"
 *   insn=0x0000000000473E90 string=0x0000000000473E94 ")"
 *   insn=0x0000000000473E98 string=0x0000000000473EA8 ""
 *   insn=0x0000000000473EAC string=0x0000000000473EB0 "k"
 *   insn=0x0000000000473EB4 string=0x0000000000473EB8 "H"
 *   insn=0x0000000000473EC0 string=0x0000000000473EC4 "_!"
 *   insn=0x0000000000473ED0 string=0x0000000000473ED4 "`"
 *   insn=0x0000000000473EFC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::SceneObject::VelocityAtWorldPoint@<D0>(
        float32x2_t *this@<X0>,
        float32x2_t *a2@<X1>,
        float32x2_t *a3@<X8>)
{
  float v5; // s0
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s1
  float v13; // s0
  float v14; // w10
  float v15; // w9
  float v16; // w11
  float v17; // s0
  unsigned int v18; // w11
  unsigned int v19; // w8
  float32x2_t result; // d0
  float32x2_t v21[2]; // [xsp+0h] [xbp-30h] BYREF

  v21[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = -this[16].n64_f32[0];
  v21[0] = vsub_f32((float32x2_t)a2->n64_u64[0], this[14]);
  Caver::Vector2::Rotate((Caver::Vector2 *)v21, v5);
  v6 = this[16].n64_f32[1];
  if ( fabsf(v6) <= 0.001 )
  {
    v14 = 0.0;
    v15 = 0.0;
    v13 = 0.0;
  }
  else
  {
    v7 = this[17].n64_f32[1];
    v8 = 1.0 / v7;
    v9 = v7 * v6;
    v10 = v21[0].n64_f32[0] * (float)(1.0 / v7);
    v11 = v8 * v21[0].n64_f32[1];
    if ( this[18].n64_u8[0] )
      v10 = -v10;
    v12 = v10 * v9;
    v13 = 0.0 - (float)(v11 * v9);
    v14 = v13;
    v15 = v12 + 0.0;
  }
  v16 = v13;
  v17 = this[16].n64_f32[0];
  v18 = LODWORD(v16) ^ 0x80000000;
  if ( this[18].n64_u8[0] )
    v19 = v18;
  else
    v19 = LODWORD(v14);
  v21[0].n64_u64[0] = __PAIR64__(LODWORD(v15), v19);
  Caver::Vector2::Rotate((Caver::Vector2 *)v21, v17);
  result.n64_u64[0] = vadd_f32(this[13], v21[0]).n64_u64[0];
  a3->n64_u64[0] = result.n64_u64[0];
  return result;
}

