/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AAA8
 * Mangled: sub_51AAA8
 * Demangled: sub_51AAA8
 *
 * Callers: 1
 *   0x000000000051960C  PVRTTextureLoadFromPVR(char const*,uint *,void const*,bool,uint)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 35
 *   insn=0x000000000051AAB0 string=0x000000000051AAB4 "H"
 *   insn=0x000000000051AAE4 string=0x000000000051AAE8 "k"
 *   insn=0x000000000051AAEC string=0x000000000051AAF0 " "
 *   insn=0x000000000051AAF8 string=0x000000000051AAFC "*"
 *   insn=0x000000000051AB00 string=0x000000000051AB04 "@"
 *   insn=0x000000000051AB18 string=0x000000000051AB1C "d"
 *   insn=0x000000000051AB24 string=0x000000000051AB28 "k"
 *   insn=0x000000000051AB30 string=0x000000000051AB34 "i"
 *   insn=0x000000000051AB38 string=0x000000000051AB3C "%"
 *   insn=0x000000000051AB44 string=0x000000000051AB48 "J"
 *   insn=0x000000000051AB48 string=0x000000000051AB4C " "
 *   insn=0x000000000051AB50 string=0x000000000051AB54 "J\t"
 *   insn=0x000000000051AB60 string=0x000000000051AB64 "C"
 *   insn=0x000000000051AB90 string=0x000000000051AB94 "B"
 *   insn=0x000000000051AB9C string=0x000000000051ABA0 "@"
 *   insn=0x000000000051ABA8 string=0x000000000051ABAC "\t"
 *   insn=0x000000000051ABA8 string=0x000000000051ABD8 "!"
 *   insn=0x000000000051ABAC string=0x000000000051ABB0 ""u@"
 *   insn=0x000000000051ABB0 string=0x000000000051ABB4 "!"
 *   insn=0x000000000051ABB4 string=0x000000000051ABB8 "+<"
 *   insn=0x000000000051ABB8 string=0x000000000051ABBC ","
 *   insn=0x000000000051ABBC string=0x000000000051ABC0 "B"
 *   insn=0x000000000051ABC8 string=0x000000000051ABCC "\n<"
 *   insn=0x000000000051ABCC string=0x000000000051ABD0 "\t"
 *   insn=0x000000000051ABD0 string=0x000000000051ABD4 "\t"
 *   insn=0x000000000051ABD8 string=0x000000000051ABDC "\t"
 *   insn=0x000000000051ABDC string=0x000000000051ABE0 ")}"
 *   insn=0x000000000051ABE0 string=0x000000000051ABE4 "\n<"
 *   insn=0x000000000051ABE4 string=0x000000000051ABE8 "+<"
 *   insn=0x000000000051ABE8 string=0x000000000051ABEC ","
 *   insn=0x000000000051ABF8 string=0x000000000051ABFC "k"
 *   insn=0x000000000051ABFC string=0x000000000051AC00 ")"
 *   insn=0x000000000051AC00 string=0x000000000051AC04 "J"
 *   insn=0x000000000051AC0C string=0x000000000051AC10 ""
 *   insn=0x000000000051AC2C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int32x2_t *__fastcall sub_51AAA8(
        int32x2_t *result,
        int32x2_t *a2,
        __int128 *a3,
        int32x2_t *a4,
        int a5,
        int a6,
        unsigned int a7,
        int32x2_t *a8)
{
  int v8; // w11
  unsigned int v9; // w13
  int32x2_t v10; // d0
  int v11; // w11
  int v12; // w9
  int32x2_t v13; // d5
  int32x2_t v14; // d2
  int32x2_t v15; // d0
  int32x2_t v16; // d3
  int32x2_t v17; // d1
  int32x2_t v18; // d4
  int32x2_t v19; // d0
  unsigned __int64 v20; // d1
  int v21; // w11
  int v22; // w12
  unsigned __int64 v23; // d0
  int v24; // w10
  int v25; // w9
  unsigned __int64 v26; // d1
  __int128 v27; // [xsp+10h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a5 )
    v8 = 7;
  else
    v8 = 3;
  if ( a5 )
    v9 = 8;
  else
    v9 = 4;
  v27 = *a3;
  v10.n64_u64[0] = vsub_s32((int32x2_t)a2->n64_u64[0], (int32x2_t)result->n64_u64[0]).n64_u64[0];
  v11 = v9 & (2 * a6) | v8 & a6;
  if ( a5 )
    v12 = -4;
  else
    v12 = -2;
  v13.n64_u64[0] = vdup_n_s32((v11 ^ v9) + v12).n64_u64[0];
  v14.n64_u64[0] = vdup_n_s32(v9).n64_u64[0];
  v15.n64_u64[0] = vmla_s32(vmul_s32(v10, v13), (int32x2_t)result->n64_u64[0], v14).n64_u64[0];
  v16.n64_u64[0] = vdup_n_s32(((a7 & 3 | (4 * ((a7 >> 1) & 1))) ^ 4) - 2).n64_u64[0];
  v17.n64_u64[0] = vmla_s32(
                     vshl_n_s32(v15, 2u),
                     vmla_s32(
                       vsub_s32(vmul_s32(*(int32x2_t *)&v27, v14), v15),
                       vsub_s32((int32x2_t)a4->n64_u64[0], *(int32x2_t *)&v27),
                       v13),
                     v16).n64_u64[0];
  v18.n64_u64[0] = vmla_s32(vmul_s32(vsub_s32(a2[1], result[1]), v13), result[1], v14).n64_u64[0];
  v19.n64_u64[0] = vmla_s32(
                     vshl_n_s32(v18, 2u),
                     vmla_s32(
                       vsub_s32(vmul_s32(*(int32x2_t *)((char *)&v27 + 8), v14), v18),
                       vsub_s32(a4[1], *(int32x2_t *)((char *)&v27 + 8)),
                       v13),
                     v16).n64_u64[0];
  a8->n64_u64[0] = v17.n64_u64[0];
  a8[1].n64_u64[0] = v19.n64_u64[0];
  if ( a5 )
  {
    v20 = vshr_n_s32(v17, 2u).n64_u64[0];
    v21 = HIDWORD(v20);
    v22 = v20;
    v23 = vshl_s32(v19, vneg_s32((int32x2_t)0x100000002LL)).n64_u64[0];
    a8->n64_u64[0] = v20;
    a8[1].n64_u64[0] = v23;
    v24 = HIDWORD(v23);
    v25 = v23;
  }
  else
  {
    v26 = vshr_n_s32(v17, 1u).n64_u64[0];
    v25 = v19.n64_i32[0] >> 1;
    v24 = v19.n64_i32[1];
    v21 = HIDWORD(v26);
    v22 = v26;
    a8->n64_u64[0] = v26;
    a8[1].n64_u32[0] = v19.n64_i32[0] >> 1;
  }
  a8->n64_u32[0] = v22 + (v22 >> 5);
  a8->n64_u32[1] = v21 + (v21 >> 5);
  a8[1].n64_u32[0] = v25 + (v25 >> 5);
  a8[1].n64_u32[1] = v24 + (v24 >> 4);
  return result;
}

