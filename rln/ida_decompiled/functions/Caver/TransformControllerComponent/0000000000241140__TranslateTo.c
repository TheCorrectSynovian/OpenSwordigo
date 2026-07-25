/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241140
 * Mangled: _ZN5Caver28TransformControllerComponent11TranslateToERKNS_7Vector3Ef
 * Demangled: Caver::TransformControllerComponent::TranslateTo(Caver::Vector3 const&,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x0000000000241140 string=0x0000000000241144 "0"
 *   insn=0x0000000000241144 string=0x0000000000241148 "!"
 *   insn=0x0000000000241148 string=0x000000000024114C "\t"
 *   insn=0x0000000000241150 string=0x0000000000241154 "(@"
 *   insn=0x0000000000241154 string=0x0000000000241158 ""
 *   insn=0x0000000000241158 string=0x000000000024115C ""9@"
 *   insn=0x000000000024115C string=0x0000000000241160 "#y@"
 *   insn=0x0000000000241160 string=0x0000000000241164 "!"
 *   insn=0x0000000000241168 string=0x000000000024116C "B8#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformControllerComponent::TranslateTo(__int64 result, __int64 a2, float a3)
{
  float32x2_t v3; // d1
  float32x2_t *v4; // x9
  float v5; // w8
  float v6; // s2

  *(_BYTE *)(result + 140) = 1;
  v3.n64_u64[0] = *(unsigned __int64 *)a2;
  v4 = *(float32x2_t **)(result + 40);
  *(_QWORD *)(result + 144) = *(_QWORD *)a2;
  v5 = *(float *)(a2 + 8);
  *(float *)(result + 152) = v5;
  v6 = v5 - v4[15].n64_f32[0];
  *(float32x2_t *)(result + 156) = vsub_f32(v3, v4[14]);
  *(float *)(result + 164) = v6;
  *(float *)(result + 168) = a3;
  return result;
}

