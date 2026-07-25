/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473C50
 * Mangled: _ZN5Caver11SceneObject24LocalPointFromWorldPointERKNS_7Vector2E
 * Demangled: Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FF660  Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *
 * Referenced strings: 11
 *   insn=0x0000000000473C60 string=0x0000000000473C64 "U"
 *   insn=0x0000000000473C78 string=0x0000000000473C7C " "
 *   insn=0x0000000000473C88 string=0x0000000000473C8C "@@!"
 *   insn=0x0000000000473C94 string=0x00000000001FC440 "0'"
 *   insn=0x0000000000473CA0 string=0x0000000000473CA4 "@"
 *   insn=0x0000000000473CA4 string=0x0000000000473CA8 " "
 *   insn=0x0000000000473CA8 string=0x0000000000473CAC "`"
 *   insn=0x0000000000473CB0 string=0x0000000000473CB4 "h"
 *   insn=0x0000000000473CB8 string=0x0000000000473CBC "`"
 *   insn=0x0000000000473CCC string=0x0000000000473CE4 "{\t"
 *   insn=0x0000000000473CE4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::SceneObject::LocalPointFromWorldPoint@<S0>(
        float32x2_t *this@<X0>,
        float32x2_t *a2@<X1>,
        unsigned __int64 *a3@<X8>)
{
  float v5; // s0
  unsigned __int64 v6; // d0
  float32x2_t v8[2]; // [xsp+0h] [xbp-30h] BYREF

  v8[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = -this[16].n64_f32[0];
  v8[0] = vsub_f32((float32x2_t)a2->n64_u64[0], this[14]);
  Caver::Vector2::Rotate((Caver::Vector2 *)v8, v5);
  v6 = vmul_n_f32(v8[0], 1.0 / this[17].n64_f32[1]).n64_u64[0];
  *a3 = v6;
  if ( this[18].n64_u8[0] )
  {
    *(float *)&v6 = -*(float *)&v6;
    *(_DWORD *)a3 = v6;
  }
  return *(float *)&v6;
}

