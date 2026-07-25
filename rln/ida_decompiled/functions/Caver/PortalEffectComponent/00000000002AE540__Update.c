/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE540
 * Mangled: _ZN5Caver21PortalEffectComponent6UpdateEf
 * Demangled: Caver::PortalEffectComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001FD3F0  Caver::PortalEffectComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 60
 *   insn=0x00000000002AE550 string=0x00000000002AE554 "b"
 *   insn=0x00000000002AE554 string=0x00000000002AE558 "c"
 *   insn=0x00000000002AE558 string=0x00000000002AE55C "h"
 *   insn=0x00000000002AE55C string=0x00000000002AE560 ""
 *   insn=0x00000000002AE560 string=0x00000000002AE564 "! "
 *   insn=0x00000000002AE564 string=0x00000000002AE568 "@ "
 *   insn=0x00000000002AE568 string=0x00000000002AE56C "a(!"
 *   insn=0x00000000002AE574 string=0x00000000002AE578 "  ("
 *   insn=0x00000000002AE578 string=0x00000000002AE57C "A"
 *   insn=0x00000000002AE580 string=0x00000000002AE584 "@"
 *   insn=0x00000000002AE588 string=0x00000000002AE58C "a"
 *   insn=0x00000000002AE590 string=0x00000000002AE594 "hZ@"
 *   insn=0x00000000002AE598 string=0x00000000002AE59C "`"
 *   insn=0x00000000002AE5A0 string=0x00000000002AE5A4 "O%"
 *   insn=0x00000000002AE5A4 string=0x00000000002AE5A8 "hZ@"
 *   insn=0x00000000002AE5A4 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002AE5A8 string=0x00000000002AE5AC "h\n"
 *   insn=0x00000000002AE5B8 string=0x00000000002AE5BC "h"
 *   insn=0x00000000002AE5C0 string=0x00000000002AE5C4 "+\t"
 *   insn=0x00000000002AE5C4 string=0x00000000002AE5C8 "b"
 *   insn=0x00000000002AE5C8 string=0x00000000002AE5CC "ir@"
 *   insn=0x00000000002AE5D0 string=0x00000000002AE5D4 "!"
 *   insn=0x00000000002AE5D4 string=0x00000000002AE5D8 "B"
 *   insn=0x00000000002AE5D8 string=0x00000000002AE5DC "b"
 *   insn=0x00000000002AE5DC string=0x00000000002AE5E8 ""
 *   insn=0x00000000002AE5E0 string=0x00000000002AE5E4 "*"
 *   insn=0x00000000002AE5E8 string=0x00000000002AE5EC "\n"
 *   insn=0x00000000002AE5F8 string=0x00000000002AE5FC "m?"
 *   insn=0x00000000002AE600 string=0x00000000002AE604 "L"
 *   insn=0x00000000002AE604 string=0x00000000002AE608 "-"
 *   insn=0x00000000002AE608 string=0x00000000002AE60C "\n"
 *   insn=0x00000000002AE60C string=0x00000000002AE610 "l"
 *   insn=0x00000000002AE614 string=0x00000000002AE618 "$"
 *   insn=0x00000000002AE618 string=0x00000000002AE61C "E"
 *   insn=0x00000000002AE61C string=0x00000000002AE620 "+a"
 *   insn=0x00000000002AE62C string=0x00000000002AE630 "p"
 *   insn=0x00000000002AE630 string=0x00000000002AE634 "q\t"
 *   insn=0x00000000002AE63C string=0x00000000002AE640 "2&"
 *   insn=0x00000000002AE640 string=0x00000000002AE644 "0"
 *   insn=0x00000000002AE644 string=0x00000000002AE648 "Q"
 *   insn=0x00000000002AE64C string=0x00000000002AE650 "1za"
 *   insn=0x00000000002AE654 string=0x00000000002AE658 "1"
 *   insn=0x00000000002AE658 string=0x00000000002AE65C "p"
 *   insn=0x00000000002AE65C string=0x00000000002AE660 "q"
 *   insn=0x00000000002AE664 string=0x00000000002AE668 "1"
 *   insn=0x00000000002AE66C string=0x00000000002AE670 "1ja"
 *   insn=0x00000000002AE678 string=0x00000000002AE67C "rA"
 *   insn=0x00000000002AE67C string=0x00000000002AE680 "pA"
 *   insn=0x00000000002AE680 string=0x00000000002AE684 "k"
 *   insn=0x00000000002AE684 string=0x00000000002AE688 "A"
 *   insn=0x00000000002AE690 string=0x00000000002AE694 "c"
 *   insn=0x00000000002AE690 string=0x0000000000583944 "\n"
 *   insn=0x00000000002AE698 string=0x00000000002AE69C ")"
 *   insn=0x00000000002AE69C string=0x00000000002AE6A0 ""
 *   insn=0x00000000002AE6A0 string=0x00000000002AE6A4 ")A"
 *   insn=0x00000000002AE6A4 string=0x00000000002AE6A8 "%"
 *   insn=0x00000000002AE6A8 string=0x00000000002AE6AC ""
 *   insn=0x00000000002AE6C0 string=0x00000000002AE6C4 "%"
 *   insn=0x00000000002AE6DC string=0x00000000002AE6E0 "%"
 *   insn=0x00000000002AE6E0 string=0x00000000002AE6E4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalEffectComponent::Update(__int64 this, float a2)
{
  __int64 v2; // x19
  int v3; // w8
  float v4; // s1
  float v5; // s0
  __int64 v6; // x8
  double v7; // d0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // d1
  __int64 v11; // d2
  __int64 v12; // x10
  __int64 v13; // x10
  float64x2_t v14; // q3
  float64x2_t v15; // q4
  float64x2_t v16; // q5
  __int128 *v17; // x11
  float64x2_t v18; // q6
  float32x2_t v19; // d7
  __int64 v20; // x12
  __int128 v21; // q16
  float32x2_t v22; // d18
  int32x2_t v23; // d17
  __int64 v24; // x8
  float *v25; // x9
  float v26; // s6
  float v27; // s5
  float v28; // s5

  v2 = this;
  v3 = *(_DWORD *)(this + 216);
  v4 = *(float *)(this + 248) + (float)(*(float *)(this + 204) * a2);
  v5 = *(float *)(this + 252) + (float)(*(float *)(this + 200) * a2);
  if ( v4 > 1.0 )
    v4 = 0.0;
  if ( v5 > 1.0 )
    v5 = 0.0;
  *(float *)(this + 248) = v4;
  *(float *)(this + 252) = v5;
  if ( v3 >= 1 )
  {
    v6 = *(_QWORD *)(this + 176);
    if ( v6
      || (this = Caver::ComponentOutletBase::Connect(
                   (Caver::ComponentOutletBase *)(this + 160),
                   (const Caver::Component *)this),
          (v6 = *(_QWORD *)(v2 + 176)) != 0) )
    {
      v7 = (float)(1.0 / *(float *)(v6 + 128));
    }
    else
    {
      v7 = 1.0;
    }
    v8 = *(int *)(v2 + 216);
    if ( (int)v8 >= 1 )
    {
      v9 = *(_QWORD *)(v2 + 224);
      *(double *)&v10 = *(float *)(v2 + 252);
      *(double *)&v11 = *(float *)(v2 + 248);
      if ( (unsigned int)v8 >= 3 )
      {
        v13 = v8 & 1;
        if ( (v8 & 1) == 0 )
          v13 = 2;
        v12 = v8 - v13;
        v14 = vdupq_lane_s64(*(__int64 *)&v7, 0);
        v15 = vdupq_lane_s64(v10, 0);
        v16 = vdupq_lane_s64(v11, 0);
        v17 = (__int128 *)(v9 + 24);
        v18 = vdupq_n_s64(0x401921FB54442D18uLL);
        v19.n64_u64[0] = vdup_n_s32(0x3C23D70Au).n64_u64[0];
        v20 = v12;
        do
        {
          v21 = *v17;
          v20 -= 2;
          v22.n64_u32[0] = vdupq_lane_s32(*(int32x2_t *)v17, 1).n128_u32[0];
          v22.n64_u32[1] = HIDWORD(*((_QWORD *)v17 + 4));
          DWORD1(v21) = v17[2];
          *(float32x2_t *)&v21 = vcvt_f32_f64(vaddq_f64(vmulq_f64(v14, vdivq_f64(vcvtq_f64_f32(*(float32x2_t *)&v21), v18)), v15));
          v23.n64_u64[0] = vcvt_f32_f64(vaddq_f64(vmulq_f64(v14, vdivq_f64(vcvtq_f64_f32(vmul_f32(v22, v19)), v18)), v16)).n64_u64[0];
          *(int32x2_t *)((char *)v17 - 12) = vzip1_s32(*(int32x2_t *)&v21, v23);
          *(int32x2_t *)((char *)v17 + 20) = vzip2_s32(*(int32x2_t *)&v21, v23);
          v17 += 4;
        }
        while ( v20 );
      }
      else
      {
        v12 = 0;
      }
      v24 = v8 - v12;
      v25 = (float *)(v9 + 32 * v12 + 16);
      do
      {
        v26 = v25[3];
        --v24;
        v27 = v7 * (v25[2] / 6.28318531) + *(double *)&v10;
        *(v25 - 1) = v27;
        v28 = v7 * ((float)(v26 * 0.01) / 6.28318531) + *(double *)&v11;
        *v25 = v28;
        v25 += 8;
      }
      while ( v24 );
    }
  }
  return this;
}

