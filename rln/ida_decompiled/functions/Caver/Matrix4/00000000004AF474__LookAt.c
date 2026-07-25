/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF474
 * Mangled: _ZN5Caver7Matrix46LookAtERKNS_7Vector3ES3_S3_
 * Demangled: Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x0000000000200CA0  Caver::Matrix4::LookAt(Caver::Vector3 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD530  .sqrtf
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 46
 *   insn=0x00000000004AF48C string=0x00000000004AF490 "V"
 *   insn=0x00000000004AF4AC string=0x00000000004AF4B0 "!"
 *   insn=0x00000000004AF4B4 string=0x00000000004AF4B8 "#@"
 *   insn=0x00000000004AF4C0 string=0x00000000004AF4C4 "A8#"
 *   insn=0x00000000004AF4DC string=0x00000000004AF4E0 "&""
 *   insn=0x00000000004AF4E0 string=0x00000000004AF4E4 "B "
 *   insn=0x00000000004AF4E8 string=0x00000000004AF4EC "d$"
 *   insn=0x00000000004AF4EC string=0x00000000004AF4F0 "c%"
 *   insn=0x00000000004AF4F0 string=0x00000000004AF4F4 "!%"
 *   insn=0x00000000004AF4F8 string=0x00000000004AF4FC "i8""
 *   insn=0x00000000004AF4FC string=0x00000000004AF500 "\n8!"
 *   insn=0x00000000004AF504 string=0x00000000004AF508 "!\t)"
 *   insn=0x00000000004AF50C string=0x00000000004AF510 "A\t*"
 *   insn=0x00000000004AF510 string=0x00000000004AF514 "!( "
 *   insn=0x00000000004AF514 string=0x00000000004AF518 " "
 *   insn=0x00000000004AF51C string=0x00000000004AF520 "g"
 *   insn=0x00000000004AF520 string=0x00000000004AF524 " "
 *   insn=0x00000000004AF528 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004AF52C string=0x0000000000583944 "\n"
 *   insn=0x00000000004AF53C string=0x00000000004AF540 "eB"
 *   insn=0x00000000004AF548 string=0x00000000004AF54C "a"
 *   insn=0x00000000004AF54C string=0x00000000004AF550 "c\n"
 *   insn=0x00000000004AF550 string=0x00000000004AF554 ":"
 *   insn=0x00000000004AF564 string=0x00000000004AF568 "("
 *   insn=0x00000000004AF568 string=0x00000000004AF56C " "
 *   insn=0x00000000004AF578 string=0x00000000004AF57C "4\t "
 *   insn=0x00000000004AF57C string=0x00000000004AF580 "@\t "
 *   insn=0x00000000004AF588 string=0x00000000004AF58C "w\n#"
 *   insn=0x00000000004AF59C string=0x00000000004AF5A0 "v\n""
 *   insn=0x00000000004AF5A8 string=0x00000000004AF5AC "6;6"
 *   insn=0x00000000004AF5B0 string=0x00000000004AF5B4 "w"
 *   insn=0x00000000004AF5B4 string=0x00000000004AF5B8 "B'"
 *   insn=0x00000000004AF5C0 string=0x00000000004AF5C4 "u"
 *   insn=0x00000000004AF5CC string=0x00000000004AF5D0 "v"
 *   insn=0x00000000004AF5D0 string=0x00000000004AF5D4 "c&"
 *   insn=0x00000000004AF5D8 string=0x00000000004AF5DC "s"
 *   insn=0x00000000004AF5DC string=0x00000000004AF5E0 "t"
 *   insn=0x00000000004AF5F0 string=0x00000000004AF5F4 "`""
 *   insn=0x00000000004AF5F8 string=0x00000000004AF5FC "B8#"
 *   insn=0x00000000004AF600 string=0x00000000004AF604 "d"
 *   insn=0x00000000004AF60C string=0x00000000004AF610 "a(!"
 *   insn=0x00000000004AF618 string=0x00000000004AF61C "`"
 *   insn=0x00000000004AF61C string=0x00000000004AF620 "B(1"
 *   insn=0x00000000004AF630 string=0x00000000004AF634 "`"
 *   insn=0x00000000004AF634 string=0x00000000004AF638 "b"
 *   insn=0x00000000004AF668 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Matrix4::LookAt@<X0>(
        float32x2_t *this@<X0>,
        float32x2_t *a2@<X1>,
        const Caver::Vector3 *a3@<X2>,
        float32x2_t *a4@<X8>)
{
  float v8; // s2
  float v9; // s3
  __int64 result; // x0
  float v11; // s1
  float v12; // s3
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s0
  __int128 v17; // q0
  __int128 v18; // q2
  __int128 v19; // q3
  float v20; // s2
  float v21; // s3
  float v22; // s4
  float v23; // s5
  float v24; // s7
  float v25; // s0
  float v26; // s6
  float32x2_t v27; // d19
  float32x2_t v28; // d20
  float32x2_t v29; // d0
  float v30; // s21
  float v31; // s23
  float v32; // s24
  float v33; // s22
  unsigned __int64 v34; // [xsp+8h] [xbp-58h] BYREF
  float v35; // [xsp+10h] [xbp-50h]
  __int64 v36; // [xsp+18h] [xbp-48h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = this[1].n64_f32[0];
  v9 = a2[1].n64_f32[0];
  v34 = vsub_f32((float32x2_t)this->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v35 = v8 - v9;
  result = Caver::Vector3::Normalize((Caver::Vector3 *)&v34);
  v11 = *((float *)a3 + 1);
  v12 = *((float *)a3 + 2);
  v13 = (float)(v11 * v35) - (float)(v12 * *((float *)&v34 + 1));
  v14 = (float)(v12 * *(float *)&v34) - (float)(v35 * *(float *)a3);
  v15 = (float)(*((float *)&v34 + 1) * *(float *)a3) - (float)(v11 * *(float *)&v34);
  v16 = sqrtf((float)(v15 * v15) + (float)((float)(v13 * v13) + (float)(v14 * v14)));
  if ( v16 >= 0.01 )
  {
    v20 = *((float *)&v34 + 1);
    v21 = v35;
    v22 = *(float *)&v34;
    v23 = this->n64_f32[0];
    v24 = this->n64_f32[1];
    v25 = 1.0 / v16;
    v26 = this[1].n64_f32[0];
    v27.n64_f32[0] = v13 * v25;
    v28.n64_f32[0] = v14 * v25;
    v29.n64_f32[0] = v15 * v25;
    v30 = (float)(v29.n64_f32[0] * *((float *)&v34 + 1)) - (float)(v28.n64_f32[0] * v35);
    v31 = (float)(v27.n64_f32[0] * v35) - (float)(v29.n64_f32[0] * *(float *)&v34);
    v32 = -this->n64_f32[0];
    v33 = (float)(v28.n64_f32[0] * *(float *)&v34) - (float)(v27.n64_f32[0] * *((float *)&v34 + 1));
    a4[2].n64_f32[1] = v31;
    a4[3].n64_f32[0] = v20;
    a4->n64_f32[1] = v30;
    a4[1].n64_f32[0] = v22;
    a4[4].n64_f32[1] = v33;
    a4[5].n64_f32[0] = v21;
    a4->n64_u32[0] = v27.n64_u32[0];
    a4[2].n64_u32[0] = v28.n64_u32[0];
    v27.n64_f32[1] = v30;
    v28.n64_f32[1] = v31;
    a4[4].n64_u32[0] = v29.n64_u32[0];
    v29.n64_f32[1] = v33;
    a4[1].n64_u32[1] = 0;
    a4[3].n64_u32[1] = 0;
    a4[5].n64_u32[1] = 0;
    a4[6].n64_u64[0] = vadd_f32(
                         vadd_f32(vadd_f32(vmul_n_f32(v27, v32), vmul_n_f32(v28, -v24)), vmul_n_f32(v29, -v26)),
                         0).n64_u64[0];
    a4[7].n64_f32[0] = (float)((float)((float)(v22 * v32) - (float)(v20 * v24)) - (float)(v21 * v26)) + 0.0;
    a4[7].n64_f32[1] = (float)((float)((float)(v24 * -0.0) - (float)(v23 * 0.0)) - (float)(v26 * 0.0)) + 1.0;
  }
  else
  {
    v17 = xmmword_6E9F20;
    v19 = Caver::Matrix4::identityMatrix;
    v18 = xmmword_6E9F00;
    *(_OWORD *)a4[4].n64_u64 = xmmword_6E9F10;
    *(_OWORD *)a4[6].n64_u64 = v17;
    *(_OWORD *)a4->n64_u64 = v19;
    *(_OWORD *)a4[2].n64_u64 = v18;
  }
  return result;
}

