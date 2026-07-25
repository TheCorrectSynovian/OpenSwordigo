/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B14B4
 * Mangled: _ZN5Caver10Quaternion5NlerpERKS0_S2_f
 * Demangled: Caver::Quaternion::Nlerp(Caver::Quaternion const&,Caver::Quaternion const&,float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 16
 *   insn=0x00000000004B14C8 string=0x00000000004B14CC "#"
 *   insn=0x00000000004B14D0 string=0x00000000004B14D4 ""
 *   insn=0x00000000004B14D8 string=0x00000000004B14DC "&"
 *   insn=0x00000000004B14DC string=0x00000000004B14E0 "G"
 *   insn=0x00000000004B14F8 string=0x00000000004B14FC "f"
 *   insn=0x00000000004B1508 string=0x00000000004B150C "!"
 *   insn=0x00000000004B150C string=0x00000000004B1510 "B"
 *   insn=0x00000000004B1514 string=0x00000000004B1518 "g"
 *   insn=0x00000000004B151C string=0x00000000004B1520 "$"
 *   insn=0x00000000004B1528 string=0x00000000004B152C "E"
 *   insn=0x00000000004B1530 string=0x00000000004B1534 "!"
 *   insn=0x00000000004B1544 string=0x00000000004B1548 "a"
 *   insn=0x00000000004B154C string=0x00000000004B1550 " "
 *   insn=0x00000000004B1558 string=0x00000000004B155C " "
 *   insn=0x00000000004B1564 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B1574 string=0x00000000004B1578 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Quaternion::Nlerp@<D0>(
        float32x2_t *this@<X0>,
        int8x8_t *a2@<X1>,
        float a3@<S0>,
        float32x2_t *a4@<X8>,
        float32x2_t a5@<D5>)
{
  float32x2_t v6; // d2
  int8x8_t v7; // d4
  float32x2_t v8; // d6
  unsigned __int64 v9; // d7
  int8x8_t v10; // d5
  float32x2_t v11; // d7
  float32x2_t v12; // d4
  float32x2_t v13; // d5
  float v14; // s0
  unsigned __int64 v15; // d1
  float32x2_t result; // d0

  v6.n64_u64[0] = this[1].n64_u64[0];
  v7.n64_u64[0] = a2[1].n64_u64[0];
  a5.n64_u32[0] = 0;
  v8.n64_u64[0] = vmul_f32((float32x2_t)this->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v9 = vmul_f32(v6, v7).n64_u64[0];
  v8.n64_f32[0] = (float)(vaddv_f32(v8) + *(float *)&v9) + *((float *)&v9 + 1);
  v10.n64_u64[0] = vdup_lane_s32(vcgt_f32(a5, v8), 0).n64_u64[0];
  v11.n64_u64[0] = vbsl_s8(v10, vneg_f32(v7), v7).n64_u64[0];
  v12.n64_u64[0] = vadd_f32(
                     vmul_n_f32((float32x2_t)this->n64_u64[0], 1.0 - a3),
                     vmul_n_f32(vbsl_s8(v10, vneg_f32((float32x2_t)a2->n64_u64[0]), (int8x8_t)a2->n64_u64[0]), a3)).n64_u64[0];
  v13.n64_u64[0] = vadd_f32(vmul_n_f32(v6, 1.0 - a3), vmul_n_f32(v11, a3)).n64_u64[0];
  v14 = 1.0
      / sqrtf(
          (float)((float)(vmuls_n_f32(v12.n64_f32[0], v12.n64_f32[0]) + vmuls_lane_f32(v12.n64_f32[1], v12, 1))
                + vmuls_n_f32(v13.n64_f32[0], v13.n64_f32[0]))
        + vmuls_lane_f32(v13.n64_f32[1], v13, 1));
  v15 = vmul_n_f32(v12, v14).n64_u64[0];
  result.n64_u64[0] = vmul_n_f32(v13, v14).n64_u64[0];
  a4->n64_u64[0] = v15;
  a4[1].n64_u64[0] = result.n64_u64[0];
  return result;
}

