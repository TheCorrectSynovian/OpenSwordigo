/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B11E4
 * Mangled: _ZNK5Caver10Quaternion12RotationAxisEv
 * Demangled: Caver::Quaternion::RotationAxis(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC680  .asin
 *
 * Referenced strings: 11
 *   insn=0x00000000004B11F0 string=0x00000000004B11F4 "`"
 *   insn=0x00000000004B11FC string=0x00000000004B1200 " -"
 *   insn=0x00000000004B1200 string=0x00000000004B1204 "("
 *   insn=0x00000000004B1200 string=0x00000000001FC680 "0'"
 *   insn=0x00000000004B1204 string=0x0000000000597350 "o"
 *   insn=0x00000000004B1210 string=0x00000000004B1214 "b"
 *   insn=0x00000000004B1218 string=0x00000000004B121C "` !"
 *   insn=0x00000000004B121C string=0x00000000004B1220 "cB@"
 *   insn=0x00000000004B1224 string=0x00000000004B1228 " L "
 *   insn=0x00000000004B122C string=0x00000000004B1230 "A"
 *   insn=0x00000000004B1234 string=0x00000000004B1238 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Quaternion::RotationAxis@<D0>(Caver::Quaternion *this@<X0>, float32x2_t *a2@<X8>)
{
  int32x2_t v4; // d0
  float v5; // s1
  float32x2_t result; // d0

  v4.n64_f64[0] = asin(*(float *)this);
  v4.n64_f32[0] = v4.n64_f64[0];
  v4.n64_f32[0] = v4.n64_f32[0] + v4.n64_f32[0];
  if ( fabsf(v4.n64_f32[0]) < 0.0005 )
    v4.n64_f32[0] = 1.0;
  v5 = *((float *)this + 3) / v4.n64_f32[0];
  result.n64_u64[0] = vdiv_f32(*(float32x2_t *)((char *)this + 4), vdup_lane_s32(v4, 0)).n64_u64[0];
  a2->n64_u64[0] = result.n64_u64[0];
  a2[1].n64_f32[0] = v5;
  return result;
}

