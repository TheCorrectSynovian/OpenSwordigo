/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513484
 * Mangled: _Z30PVRTMatrixQuaternionNormalizeFR15PVRTQUATERNIONf
 * Demangled: PVRTMatrixQuaternionNormalizeF(PVRTQUATERNIONf &)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 15
 *   insn=0x0000000000513490 string=0x0000000000513494 "c"
 *   insn=0x0000000000513494 string=0x0000000000513498 "a\n@-"
 *   insn=0x000000000051349C string=0x00000000005134A0 "!!"
 *   insn=0x00000000005134A0 string=0x00000000005134A4 "B""
 *   insn=0x00000000005134AC string=0x00000000005134B0 "a#"
 *   insn=0x00000000005134B4 string=0x00000000005134B8 " "
 *   insn=0x00000000005134BC string=0x00000000005134C0 "f"
 *   insn=0x00000000005134C0 string=0x00000000005134C4 "  "
 *   insn=0x00000000005134C0 string=0x00000000005134EC " "
 *   insn=0x00000000005134C8 string=0x00000000005134CC "a"
 *   insn=0x00000000005134D0 string=0x00000000005134D4 "@"
 *   insn=0x00000000005134D4 string=0x00000000005134D8 " "
 *   insn=0x00000000005134D8 string=0x00000000005134DC "`"
 *   insn=0x00000000005134F0 string=0x00000000005134F4 "  "
 *   insn=0x00000000005134F0 string=0x00000000001FD530 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall PVRTMatrixQuaternionNormalizeF(float32x4_t *a1)
{
  float32x4_t result; // q0

  result.n128_f32[0] = sqrtf(
                         (float)((float)((float)(a1->n128_f32[3] * a1->n128_f32[3])
                                       + (float)(a1->n128_f32[0] * a1->n128_f32[0]))
                               + (float)(a1->n128_f32[1] * a1->n128_f32[1]))
                       + (float)(a1->n128_f32[2] * a1->n128_f32[2]));
  if ( result.n128_f32[0] != 0.0 )
  {
    result = vmulq_n_f32(*a1, 1.0 / result.n128_f32[0]);
    *a1 = result;
  }
  return result;
}

