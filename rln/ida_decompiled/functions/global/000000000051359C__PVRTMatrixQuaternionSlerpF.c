/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051359C
 * Mangled: _Z26PVRTMatrixQuaternionSlerpFR15PVRTQUATERNIONfRKS_S2_f
 * Demangled: PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *
 * Callers: 2
 *   0x00000000001FC2F0  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *   0x000000000051359C  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA060  .acos
 *   0x00000000001FC670  .sin
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 56
 *   insn=0x00000000005135B8 string=0x00000000005135BC "V"
 *   insn=0x00000000005135C0 string=0x00000000005135C4 ""
 *   insn=0x00000000005135D0 string=0x00000000005135D4 "! "
 *   insn=0x00000000005135D8 string=0x00000000005135DC "$"
 *   insn=0x00000000005135DC string=0x00000000005135E0 "\n"
 *   insn=0x00000000005135F4 string=0x00000000005135F8 "B"
 *   insn=0x00000000005135F8 string=0x00000000005135FC "c"
 *   insn=0x00000000005135FC string=0x0000000000513600 "B(#"
 *   insn=0x0000000000513600 string=0x0000000000513604 "c"
 *   insn=0x0000000000513604 string=0x0000000000513608 "B(#"
 *   insn=0x000000000051360C string=0x0000000000513610 "B(#"
 *   insn=0x0000000000513610 string=0x0000000000513614 "H  "
 *   insn=0x0000000000513618 string=0x000000000051361C "!"
 *   insn=0x0000000000513618 string=0x000000000051364C "@x*"
 *   insn=0x0000000000513638 string=0x000000000051363C "@"
 *   insn=0x0000000000513644 string=0x0000000000513648 "<"
 *   insn=0x0000000000513648 string=0x0000000000513738 "`"
 *   insn=0x0000000000513654 string=0x0000000000513658 "@b"
 *   insn=0x0000000000513654 string=0x00000000001FA060 "0'"
 *   insn=0x0000000000513658 string=0x000000000051365C "h! "
 *   insn=0x000000000051365C string=0x0000000000513660 "a"
 *   insn=0x0000000000513660 string=0x000000000051366C "@9("
 *   insn=0x0000000000513664 string=0x0000000000513668 "4"
 *   insn=0x0000000000513678 string=0x000000000051367C "i"
 *   insn=0x0000000000513678 string=0x00000000001FC670 "0'"
 *   insn=0x0000000000513680 string=0x0000000000513684 " "
 *   insn=0x000000000051368C string=0x0000000000513690 "a\t("
 *   insn=0x0000000000513698 string=0x000000000051369C " "
 *   insn=0x00000000005136A0 string=0x00000000005136A4 "@b"
 *   insn=0x00000000005136A4 string=0x00000000005136A8 " "
 *   insn=0x00000000005136C0 string=0x00000000005136C4 "B"
 *   insn=0x00000000005136C4 string=0x00000000005136C8 "!"
 *   insn=0x00000000005136C8 string=0x00000000005136CC "!"
 *   insn=0x00000000005136CC string=0x00000000005136D0 "a"
 *   insn=0x00000000005136D8 string=0x00000000005136DC "B"
 *   insn=0x00000000005136DC string=0x00000000005136E0 "`"
 *   insn=0x00000000005136E0 string=0x00000000005136E4 "B"
 *   insn=0x00000000005136E4 string=0x00000000005136E8 "#"
 *   insn=0x00000000005136E8 string=0x00000000005136EC "@"
 *   insn=0x00000000005136EC string=0x00000000005136F0 "c"
 *   insn=0x00000000005136F0 string=0x00000000005136F4 "!"
 *   insn=0x00000000005136F8 string=0x00000000005136FC " ( "
 *   insn=0x00000000005136FC string=0x0000000000513700 "`( "
 *   insn=0x0000000000513700 string=0x0000000000513704 "A"
 *   insn=0x0000000000513704 string=0x0000000000513708 "!( "
 *   insn=0x0000000000513708 string=0x000000000051370C " "
 *   insn=0x0000000000513710 string=0x0000000000513714 "b"
 *   insn=0x0000000000513714 string=0x0000000000513718 "g"
 *   insn=0x0000000000513718 string=0x000000000051371C " "
 *   insn=0x0000000000513718 string=0x0000000000513724 "  "
 *   insn=0x0000000000513720 string=0x00000000001FD530 "0'"
 *   insn=0x0000000000513728 string=0x000000000051372C "a"
 *   insn=0x000000000051372C string=0x0000000000513730 "@"
 *   insn=0x0000000000513730 string=0x0000000000513734 " "
 *   insn=0x0000000000513744 string=0x0000000000513748 "!"
 *   insn=0x000000000051376C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTMatrixQuaternionSlerpF(float32x4_t *a1, float32x2_t *a2, float32x2_t *a3, long double a4)
{
  float32x2_t v8; // d0
  unsigned __int64 v9; // d3
  float v10; // s2
  float32x4_t v11; // q0
  float v12; // s11
  float v13; // s12
  float v14; // s0
  float v15; // s8
  float v16; // s0
  float v17; // s0
  float32x2_t v18; // d1
  float32x2_t v19; // d2
  float v20; // s0
  float v21; // [xsp+0h] [xbp-80h]
  _QWORD v22[3]; // [xsp+18h] [xbp-68h] BYREF

  v22[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(float *)&a4 < 0.0 || *(float *)&a4 > 1.0 )
  {
    v11 = (float32x4_t)xmmword_583800;
  }
  else
  {
    v8.n64_u64[0] = a3[1].n64_u64[0];
    v9 = vmul_f32((float32x2_t)a2->n64_u64[0], (float32x2_t)a3->n64_u64[0]).n64_u64[0];
    v10 = (float)((float)(vmuls_lane_f32(a2[1].n64_f32[1], v8, 1) + *(float *)&v9) + *((float *)&v9 + 1))
        + vmuls_n_f32(a2[1].n64_f32[0], v8.n64_f32[0]);
    if ( v10 < 0.0 )
    {
      v22[0] = vneg_f32((float32x2_t)a3->n64_u64[0]).n64_u64[0];
      v22[1] = vneg_f32(v8).n64_u64[0];
      PVRTMatrixQuaternionSlerpF(a1, a2, v22, a4);
      return;
    }
    v12 = acos(fminf(v10, 1.0));
    if ( v12 == 0.0 )
    {
      v11 = *(float32x4_t *)a2->n64_u64;
    }
    else
    {
      v13 = sin((float)((float)(1.0 - *(float *)&a4) * v12));
      v14 = sin(v12);
      v21 = v13 / v14;
      v15 = sin((float)(v12 * *(float *)&a4));
      v16 = sin(v12);
      v17 = v15 / v16;
      v18.n64_u64[0] = vadd_f32(
                         vmul_n_f32((float32x2_t)a2->n64_u64[0], v21),
                         vmul_n_f32((float32x2_t)a3->n64_u64[0], v17)).n64_u64[0];
      a1->n128_u64[0] = v18.n64_u64[0];
      v19.n64_u64[0] = vadd_f32(vmul_n_f32(a2[1], v21), vmul_n_f32(a3[1], v17)).n64_u64[0];
      v20 = sqrtf(
              vmuls_n_f32(v19.n64_f32[0], v19.n64_f32[0])
            + (float)(vmuls_lane_f32(v18.n64_f32[1], v18, 1)
                    + (float)(vmuls_n_f32(v18.n64_f32[0], v18.n64_f32[0]) + vmuls_lane_f32(v19.n64_f32[1], v19, 1))));
      *(float32x2_t *)&a1->n128_i8[8] = v19;
      if ( v20 == 0.0 )
        return;
      v11 = vmulq_n_f32(*a1, 1.0 / v20);
    }
  }
  *a1 = v11;
}

