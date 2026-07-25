/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF1C0
 * Mangled: _ZN5Caver7Matrix413PostTranslateERKNS_7Vector3E
 * Demangled: Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001F5110  Caver::Matrix4::PostTranslate(Caver::Vector3 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004AF1C8 string=0x00000000004AF1CC "!@"
 *   insn=0x00000000004AF1E8 string=0x00000000004AF1EC "c"
 *   insn=0x00000000004AF1F0 string=0x00000000004AF1F4 "B"
 *   insn=0x00000000004AF1FC string=0x00000000004AF200 "B"
 *   insn=0x00000000004AF204 string=0x00000000004AF208 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Matrix4::PostTranslate(float32x2_t *a1, __int64 a2)
{
  const float *v2; // x8
  float32x2_t v3; // d0
  float v4; // s1
  float32x2_t v5; // d2
  float32x2_t result; // d0

  v2 = (const float *)a2;
  v3.n64_u64[0] = vld1_dup_f32(v2++).n64_u64[0];
  v4 = *(float *)(a2 + 8);
  v5.n64_u64[0] = vmul_f32(v3, (float32x2_t)a1->n64_u64[0]).n64_u64[0];
  result.n64_u64[0] = vadd_f32(
                        a1[7],
                        vadd_f32(vadd_f32(vmul_f32(v3, a1[1]), vmul_n_f32(a1[3], *v2)), vmul_n_f32(a1[5], v4))).n64_u64[0];
  a1[6].n64_u64[0] = vadd_f32(a1[6], vadd_f32(vadd_f32(v5, vmul_n_f32(a1[2], *v2)), vmul_n_f32(a1[4], v4))).n64_u64[0];
  a1[7].n64_u64[0] = result.n64_u64[0];
  return result;
}

