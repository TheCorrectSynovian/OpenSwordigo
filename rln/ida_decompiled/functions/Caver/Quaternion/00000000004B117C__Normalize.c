/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B117C
 * Mangled: _ZN5Caver10Quaternion9NormalizeEv
 * Demangled: Caver::Quaternion::Normalize(void)
 *
 * Callers: 1
 *   0x00000000001F9080  Caver::Quaternion::Normalize(void)
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 13
 *   insn=0x00000000004B1188 string=0x00000000004B118C "`"
 *   insn=0x00000000004B118C string=0x00000000004B1190 "b"
 *   insn=0x00000000004B1194 string=0x00000000004B1198 "!!"
 *   insn=0x00000000004B1198 string=0x00000000004B119C "B""
 *   insn=0x00000000004B11A4 string=0x00000000004B11A8 "a#"
 *   insn=0x00000000004B11AC string=0x00000000004B11B0 " "
 *   insn=0x00000000004B11B4 string=0x00000000004B11B8 "g"
 *   insn=0x00000000004B11B8 string=0x00000000004B11BC " "
 *   insn=0x00000000004B11B8 string=0x00000000004B11C4 "a"
 *   insn=0x00000000004B11C0 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B11C8 string=0x00000000004B11CC "@"
 *   insn=0x00000000004B11CC string=0x00000000004B11D0 " "
 *   insn=0x00000000004B11D0 string=0x00000000004B11D4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall Caver::Quaternion::Normalize(float32x4_t *this)
{
  float32x4_t result; // q0

  result = vmulq_n_f32(
             *this,
             1.0
           / sqrtf(
               (float)((float)((float)(this->n128_f32[0] * this->n128_f32[0])
                             + (float)(this->n128_f32[1] * this->n128_f32[1]))
                     + (float)(this->n128_f32[2] * this->n128_f32[2]))
             + (float)(this->n128_f32[3] * this->n128_f32[3])));
  *this = result;
  return result;
}

