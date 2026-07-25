/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1270
 * Mangled: _ZN5Caver10Quaternion17RotationAxisAngleEfRKNS_7Vector3E
 * Demangled: Caver::Quaternion::RotationAxisAngle(float,Caver::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 5
 *   insn=0x00000000004B1284 string=0x00000000004B1288 "!"
 *   insn=0x00000000004B1294 string=0x00000000004B1298 "vJ"
 *   insn=0x00000000004B12A8 string=0x00000000004B12AC "`"
 *   insn=0x00000000004B12C0 string=0x00000000004B12C4 "`\n@"
 *   insn=0x00000000004B12C4 string=0x00000000004B12C8 "  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Quaternion::RotationAxisAngle@<S0>(float32x2_t *a1@<X0>, __int64 a2@<X8>, float a3@<S0>)
{
  float v3; // s8
  float result; // s0
  float v7; // [xsp+0h] [xbp-30h]

  v3 = a3 * 0.5;
  v7 = sinf(a3 * 0.5);
  *(float *)a2 = cosf(v3);
  *(float32x2_t *)(a2 + 4) = vmul_n_f32((float32x2_t)a1->n64_u64[0], v7);
  result = v7 * a1[1].n64_f32[0];
  *(float *)(a2 + 12) = result;
  return result;
}

