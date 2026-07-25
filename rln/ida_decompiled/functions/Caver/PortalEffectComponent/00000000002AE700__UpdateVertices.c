/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE700
 * Mangled: _ZN5Caver21PortalEffectComponent14UpdateVerticesEv
 * Demangled: Caver::PortalEffectComponent::UpdateVertices(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 49
 *   insn=0x00000000002AE70C string=0x00000000002AE710 "hZ@"
 *   insn=0x00000000002AE714 string=0x00000000002AE718 "`"
 *   insn=0x00000000002AE720 string=0x00000000002AE724 "hZ@"
 *   insn=0x00000000002AE720 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AE724 string=0x00000000002AE728 "h\n"
 *   insn=0x00000000002AE730 string=0x00000000002AE734 " "
 *   insn=0x00000000002AE738 string=0x00000000002AE73C "h"
 *   insn=0x00000000002AE740 string=0x00000000002AE744 "+\t"
 *   insn=0x00000000002AE744 string=0x00000000002AE748 "b"
 *   insn=0x00000000002AE748 string=0x00000000002AE74C "jr@"
 *   insn=0x00000000002AE750 string=0x00000000002AE754 "!"
 *   insn=0x00000000002AE754 string=0x00000000002AE758 "B"
 *   insn=0x00000000002AE758 string=0x00000000002AE75C "h"
 *   insn=0x00000000002AE75C string=0x00000000002AE768 ""
 *   insn=0x00000000002AE760 string=0x00000000002AE764 "*"
 *   insn=0x00000000002AE768 string=0x00000000002AE76C "\t"
 *   insn=0x00000000002AE778 string=0x00000000002AE77C "m?"
 *   insn=0x00000000002AE780 string=0x00000000002AE784 "L"
 *   insn=0x00000000002AE784 string=0x00000000002AE788 "-"
 *   insn=0x00000000002AE788 string=0x00000000002AE78C "\t"
 *   insn=0x00000000002AE78C string=0x00000000002AE790 "l"
 *   insn=0x00000000002AE794 string=0x00000000002AE798 "$"
 *   insn=0x00000000002AE798 string=0x00000000002AE79C "E"
 *   insn=0x00000000002AE79C string=0x00000000002AE7A0 "Ka"
 *   insn=0x00000000002AE7AC string=0x00000000002AE7B0 "p"
 *   insn=0x00000000002AE7B0 string=0x00000000002AE7B4 "q\t"
 *   insn=0x00000000002AE7BC string=0x00000000002AE7C0 "2&"
 *   insn=0x00000000002AE7C0 string=0x00000000002AE7C4 "0"
 *   insn=0x00000000002AE7C4 string=0x00000000002AE7C8 "Q"
 *   insn=0x00000000002AE7CC string=0x00000000002AE7D0 "1za"
 *   insn=0x00000000002AE7D4 string=0x00000000002AE7D8 "1"
 *   insn=0x00000000002AE7D8 string=0x00000000002AE7DC "p"
 *   insn=0x00000000002AE7DC string=0x00000000002AE7E0 "q"
 *   insn=0x00000000002AE7E4 string=0x00000000002AE7E8 "1"
 *   insn=0x00000000002AE7EC string=0x00000000002AE7F0 "1ja"
 *   insn=0x00000000002AE7F8 string=0x00000000002AE7FC "rA"
 *   insn=0x00000000002AE7FC string=0x00000000002AE800 "pA"
 *   insn=0x00000000002AE800 string=0x00000000002AE804 "k"
 *   insn=0x00000000002AE804 string=0x00000000002AE808 "A"
 *   insn=0x00000000002AE810 string=0x00000000002AE814 "c"
 *   insn=0x00000000002AE810 string=0x0000000000583944 "\n"
 *   insn=0x00000000002AE818 string=0x00000000002AE81C "J"
 *   insn=0x00000000002AE81C string=0x00000000002AE820 "Jq"
 *   insn=0x00000000002AE820 string=0x00000000002AE824 "E"
 *   insn=0x00000000002AE824 string=0x00000000002AE828 ")"
 *   insn=0x00000000002AE828 string=0x00000000002AE82C "?"
 *   insn=0x00000000002AE858 string=0x00000000002AE85C "E"
 *   insn=0x00000000002AE85C string=0x00000000002AE860 "J"
 *   insn=0x00000000002AE860 string=0x00000000002AE864 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::PortalEffectComponent::UpdateVertices(float *this)
{
  float *v1; // x19
  __int64 v2; // x8
  double v3; // d0
  __int64 v4; // x8
  __int64 v5; // x10
  __int64 v6; // d1
  __int64 v7; // d2
  __int64 v8; // x9
  __int64 v9; // x9
  float64x2_t v10; // q3
  float64x2_t v11; // q4
  float64x2_t v12; // q5
  __int128 *v13; // x11
  float64x2_t v14; // q6
  float32x2_t v15; // d7
  __int64 v16; // x12
  __int128 v17; // q16
  float32x2_t v18; // d18
  int32x2_t v19; // d17
  float *v20; // x10
  float v21; // s5
  float v22; // s6

  v1 = this;
  v2 = *((_QWORD *)this + 22);
  if ( v2
    || (this = (float *)Caver::ComponentOutletBase::Connect(
                          (Caver::ComponentOutletBase *)(this + 40),
                          (const Caver::Component *)this),
        (v2 = *((_QWORD *)v1 + 22)) != 0) )
  {
    v3 = (float)(1.0 / *(float *)(v2 + 128));
  }
  else
  {
    v3 = 1.0;
  }
  v4 = *((int *)v1 + 54);
  if ( (int)v4 >= 1 )
  {
    v5 = *((_QWORD *)v1 + 28);
    *(double *)&v6 = v1[63];
    *(double *)&v7 = v1[62];
    if ( (unsigned int)v4 > 2 )
    {
      v9 = v4 & 1;
      if ( (v4 & 1) == 0 )
        v9 = 2;
      v8 = v4 - v9;
      v10 = vdupq_lane_s64(*(__int64 *)&v3, 0);
      v11 = vdupq_lane_s64(v6, 0);
      v12 = vdupq_lane_s64(v7, 0);
      v13 = (__int128 *)(v5 + 24);
      v14 = vdupq_n_s64(0x401921FB54442D18uLL);
      v15.n64_u64[0] = vdup_n_s32(0x3C23D70Au).n64_u64[0];
      v16 = v8;
      do
      {
        v17 = *v13;
        v16 -= 2;
        v18.n64_u32[0] = vdupq_lane_s32(*(int32x2_t *)v13, 1).n128_u32[0];
        v18.n64_u32[1] = HIDWORD(*((_QWORD *)v13 + 4));
        DWORD1(v17) = v13[2];
        *(float32x2_t *)&v17 = vcvt_f32_f64(vaddq_f64(vmulq_f64(v10, vdivq_f64(vcvtq_f64_f32(*(float32x2_t *)&v17), v14)), v11));
        v19.n64_u64[0] = vcvt_f32_f64(vaddq_f64(vmulq_f64(v10, vdivq_f64(vcvtq_f64_f32(vmul_f32(v18, v15)), v14)), v12)).n64_u64[0];
        *(int32x2_t *)((char *)v13 - 12) = vzip1_s32(*(int32x2_t *)&v17, v19);
        *(int32x2_t *)((char *)v13 + 20) = vzip2_s32(*(int32x2_t *)&v17, v19);
        v13 += 4;
      }
      while ( v16 );
    }
    else
    {
      v8 = 0;
    }
    v20 = (float *)(v5 + 32 * v8 + 28);
    do
    {
      ++v8;
      v21 = v3 * (*(v20 - 1) / 6.28318531) + *(double *)&v6;
      v22 = v3 * ((float)(*v20 * 0.01) / 6.28318531) + *(double *)&v7;
      *(v20 - 4) = v21;
      *(v20 - 3) = v22;
      v20 += 8;
    }
    while ( v8 < v4 );
  }
  return this;
}

