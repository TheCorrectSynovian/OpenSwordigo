/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005133BC
 * Mangled: _Z33PVRTMatrixQuaternionRotationAxisFR15PVRTQUATERNIONfRK12PVRTVECTOR3ff
 * Demangled: PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf &,PVRTVECTOR3f const&,float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FC670  .sin
 *   0x00000000001FD530  .sqrtf
 *   0x00000000001FE1C0  .cos
 *
 * Referenced strings: 23
 *   insn=0x00000000005133D0 string=0x00000000005133D4 ""
 *   insn=0x00000000005133E4 string=0x00000000005133E8 "\t@b"
 *   insn=0x00000000005133E4 string=0x00000000001FC670 "0'"
 *   insn=0x00000000005133EC string=0x00000000005133F0 "t"
 *   insn=0x00000000005133F8 string=0x00000000005133FC "`#"
 *   insn=0x00000000005133FC string=0x0000000000513400 "!)"
 *   insn=0x0000000000513400 string=0x0000000000513404 "a"
 *   insn=0x0000000000513408 string=0x000000000051340C "!!"
 *   insn=0x0000000000513410 string=0x0000000000513414 "B)"
 *   insn=0x0000000000513414 string=0x0000000000513418 "b"
 *   insn=0x000000000051341C string=0x0000000000513420 "A""
 *   insn=0x0000000000513428 string=0x000000000051342C "A""
 *   insn=0x0000000000513430 string=0x0000000000513434 " "
 *   insn=0x0000000000513438 string=0x000000000051343C "b"
 *   insn=0x0000000000513440 string=0x0000000000513444 "  "
 *   insn=0x0000000000513440 string=0x0000000000513470 " "
 *   insn=0x0000000000513448 string=0x000000000051344C "a"
 *   insn=0x0000000000513450 string=0x0000000000513454 "@"
 *   insn=0x0000000000513454 string=0x0000000000513458 " "
 *   insn=0x0000000000513458 string=0x000000000051345C "`"
 *   insn=0x0000000000513470 string=0x0000000000513474 "/"
 *   insn=0x0000000000513474 string=0x0000000000513478 "  "
 *   insn=0x0000000000513474 string=0x00000000001FD530 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTMatrixQuaternionRotationAxisF(float32x4_t *a1, float *a2, float a3)
{
  double v3; // d8
  float v6; // s9
  float v7; // s3
  float v8; // s1
  float v9; // s2
  float v10; // s0
  float v11; // s2
  float v12; // s0

  v3 = (float)(a3 * 0.5);
  v6 = sin(v3);
  v7 = cos(v3);
  v8 = *a2 * v6;
  a1->n128_f32[0] = v8;
  v9 = a2[1] * v6;
  a1->n128_f32[1] = v9;
  v10 = (float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9);
  v11 = a2[2] * v6;
  v12 = sqrtf(v10 + (float)(v11 * v11));
  a1->n128_f32[2] = v11;
  a1->n128_f32[3] = v7;
  if ( v12 != 0.0 )
    *a1 = vmulq_n_f32(*a1, 1.0 / v12);
}

