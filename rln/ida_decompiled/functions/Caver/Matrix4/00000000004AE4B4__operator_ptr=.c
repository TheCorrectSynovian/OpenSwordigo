/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE4B4
 * Mangled: _ZN5Caver7Matrix4mLEf
 * Demangled: Caver::Matrix4::operator*=(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004AE4B4 string=0x00000000004AE4B8 "\t"
 *   insn=0x00000000004AE4BC string=0x00000000004AE4C0 "\t"
 *   insn=0x00000000004AE4C4 string=0x00000000004AE4C8 ")"
 *   insn=0x00000000004AE4C8 string=0x00000000004AE4CC ")"
 *   insn=0x00000000004AE4CC string=0x00000000004AE4D0 "*"
 *   insn=0x00000000004AE4D0 string=0x00000000004AE4D4 "_!"
 *   insn=0x00000000004AE4DC string=0x00000000004AE4E0 "K"
 *   insn=0x00000000004AE4DC string=0x00000000004AE518 "!"
 *   insn=0x00000000004AE4E4 string=0x00000000004AE4E8 "\t"
 *   insn=0x00000000004AE4F8 string=0x00000000004AE4FC "B"
 *   insn=0x00000000004AE4FC string=0x00000000004AE500 "c"
 *   insn=0x00000000004AE508 string=0x00000000004AE50C "A"
 *   insn=0x00000000004AE50C string=0x00000000004AE510 "_"
 *   insn=0x00000000004AE518 string=0x00000000004AE51C "! "
 *   insn=0x00000000004AE51C string=0x00000000004AE520 "!E"
 *   insn=0x00000000004AE520 string=0x00000000004AE524 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t *__fastcall Caver::Matrix4::operator*=(float32x4_t *result, double a2)
{
  float32x4_t *v2; // x9
  unsigned __int64 v3; // x10
  float *v4; // x9
  float32x4_t v5; // q1
  float32x4_t *v6; // x12
  __int64 v7; // x13
  float32x4_t v8; // q3

  v2 = (float32x4_t *)&result->n128_u8[4];
  if ( &result[4] > (float32x4_t *)&result->n128_u8[4] )
    v2 = result + 4;
  v3 = (((unsigned __int64)v2->n128_u64 + ~(unsigned __int64)result) >> 2) + 1;
  v4 = (float *)result;
  if ( v3 < 8 )
    goto LABEL_10;
  v5 = vdupq_lane_s32(*(int32x2_t *)&a2, 0);
  v4 = (float *)result + (v3 & 0x7FFFFFFFFFFFFFF8LL);
  v6 = result + 1;
  v7 = v3 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v7 -= 8;
    v8 = vmulq_f32(*v6, v5);
    v6[-1] = vmulq_f32(v6[-1], v5);
    *v6 = v8;
    v6 += 2;
  }
  while ( v7 );
  if ( v3 != (v3 & 0x7FFFFFFFFFFFFFF8LL) )
  {
LABEL_10:
    do
    {
      *v4 = *v4 * *(float *)&a2;
      ++v4;
    }
    while ( v4 < (float *)&result[4] );
  }
  return result;
}

