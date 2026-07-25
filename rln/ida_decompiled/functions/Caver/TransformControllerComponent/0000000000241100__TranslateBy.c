/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241100
 * Mangled: _ZN5Caver28TransformControllerComponent11TranslateByERKNS_7Vector3Ef
 * Demangled: Caver::TransformControllerComponent::TranslateBy(Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x0000000000200460  Caver::TransformControllerComponent::TranslateBy(Caver::Vector3 const&,float)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000241100 string=0x0000000000241104 "!"
 *   insn=0x0000000000241104 string=0x0000000000241108 ""@"
 *   insn=0x0000000000241114 string=0x0000000000241118 "0"
 *   insn=0x0000000000241118 string=0x000000000024111C "a"
 *   insn=0x0000000000241128 string=0x000000000024112C "!"
 *   insn=0x000000000024112C string=0x0000000000241130 "B8$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformControllerComponent::TranslateBy(__int64 result, __int64 a2, float a3)
{
  float32x2_t *v3; // x8
  float32x2_t v4; // d1
  float v5; // s2
  float32x2_t v6; // d3
  float v7; // s4
  float32x2_t v8; // d1
  float v9; // s2

  v3 = *(float32x2_t **)(result + 40);
  v4.n64_u64[0] = *(unsigned __int64 *)a2;
  v5 = *(float *)(a2 + 8);
  v6.n64_u64[0] = v3[14].n64_u64[0];
  v7 = v3[15].n64_f32[0];
  *(_BYTE *)(result + 140) = 1;
  v8.n64_u64[0] = vadd_f32(v6, v4).n64_u64[0];
  v9 = v7 + v5;
  *(float32x2_t *)(result + 144) = v8;
  *(float *)(result + 152) = v9;
  *(float32x2_t *)(result + 156) = vsub_f32(v8, v6);
  *(float *)(result + 164) = v9 - v7;
  *(float *)(result + 168) = a3;
  return result;
}

