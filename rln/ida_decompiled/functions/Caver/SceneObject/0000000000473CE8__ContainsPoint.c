/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473CE8
 * Mangled: _ZN5Caver11SceneObject13ContainsPointERKNS_7Vector2E
 * Demangled: Caver::SceneObject::ContainsPoint(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *   0x0000000000201A00  Caver::Rectangle::PointInside(Caver::Vector2 const&)
 *
 * Referenced strings: 15
 *   insn=0x0000000000473CF4 string=0x0000000000473CF8 "T"
 *   insn=0x0000000000473D08 string=0x0000000000473D0C " "
 *   insn=0x0000000000473D0C string=0x0000000000473D10 "a:@"
 *   insn=0x0000000000473D10 string=0x0000000000473D14 "b"
 *   insn=0x0000000000473D18 string=0x0000000000473D1C "@@!"
 *   insn=0x0000000000473D24 string=0x0000000000473D28 "`"
 *   insn=0x0000000000473D24 string=0x00000000001FC440 "0'"
 *   insn=0x0000000000473D30 string=0x0000000000473D34 "@"
 *   insn=0x0000000000473D34 string=0x0000000000473D38 " "
 *   insn=0x0000000000473D3C string=0x0000000000473D40 "hBB9h"
 *   insn=0x0000000000473D40 string=0x0000000000473D44 "h"
 *   insn=0x0000000000473D44 string=0x0000000000473D50 "`R"
 *   insn=0x0000000000473D54 string=0x0000000000473D58 "*7"
 *   insn=0x0000000000473D68 string=0x0000000000473D80 "T\t"
 *   insn=0x0000000000473D80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneObject::ContainsPoint(float32x2_t *this, float32x2_t *a2)
{
  float v3; // s0
  unsigned __int64 v4; // d0
  unsigned __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  float32x2_t v7[2]; // [xsp+10h] [xbp-20h] BYREF

  v7[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = -this[16].n64_f32[0];
  v7[0] = vsub_f32((float32x2_t)a2->n64_u64[0], this[14]);
  Caver::Vector2::Rotate((Caver::Vector2 *)v7, v3);
  v4 = vmul_n_f32(v7[0], 1.0 / this[17].n64_f32[1]).n64_u64[0];
  v6 = v4;
  if ( this[18].n64_u8[0] )
    *(float *)&v6 = -*(float *)&v4;
  return Caver::Rectangle::PointInside((Caver::Rectangle *)((char *)&this[18] + 4), (const Caver::Vector2 *)&v6) & 1;
}

