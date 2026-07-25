/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021353C
 * Mangled: _ZN5Caver15FloatDataBuffer8MultiplyEf
 * Demangled: Caver::FloatDataBuffer::Multiply(float)
 *
 * Callers: 1
 *   0x00000000001F47B0  Caver::FloatDataBuffer::Multiply(float)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x0000000000213544 string=0x0000000000213548 "\t"
 *   insn=0x0000000000213548 string=0x000000000021354C ")"
 *   insn=0x000000000021354C string=0x0000000000213550 "?"
 *   insn=0x0000000000213554 string=0x0000000000213564 "\t"
 *   insn=0x0000000000213560 string=0x000000000021359C "A"
 *   insn=0x0000000000213564 string=0x0000000000213568 ")"
 *   insn=0x0000000000213580 string=0x0000000000213584 "B"
 *   insn=0x0000000000213584 string=0x0000000000213588 "c"
 *   insn=0x0000000000213590 string=0x0000000000213594 "A"
 *   insn=0x000000000021359C string=0x00000000002135A0 ")"
 *   insn=0x00000000002135A0 string=0x00000000002135A4 "?"
 *   insn=0x00000000002135A4 string=0x00000000002135A8 "! "
 *   insn=0x00000000002135A8 string=0x00000000002135AC "AE"
 *   insn=0x00000000002135AC string=0x00000000002135B0 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FloatDataBuffer::Multiply(__int64 this, double a2)
{
  unsigned int v2; // w8
  float32x4_t *v3; // x12
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x9
  float *v6; // x10
  float32x4_t v7; // q1
  float32x4_t *v8; // x12
  unsigned __int64 v9; // x13
  float32x4_t v10; // q3

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v3 = *(float32x4_t **)(this + 8);
    v4 = v2 - 1 + 1LL;
    if ( v4 <= 7 )
    {
      LODWORD(v5) = 0;
      v6 = *(float **)(this + 8);
      do
      {
LABEL_7:
        LODWORD(v5) = v5 + 1;
        *v6 = *v6 * *(float *)&a2;
        ++v6;
      }
      while ( (unsigned int)v5 < v2 );
      return this;
    }
    v5 = v4 - (v2 & 7);
    v7 = vdupq_lane_s32(*(int32x2_t *)&a2, 0);
    v6 = (float *)v3 + v5;
    v8 = v3 + 1;
    v9 = v5;
    do
    {
      v9 -= 8LL;
      v10 = vmulq_f32(*v8, v7);
      v8[-1] = vmulq_f32(v8[-1], v7);
      *v8 = v10;
      v8 += 2;
    }
    while ( v9 );
    if ( (v2 & 7) != 0 )
      goto LABEL_7;
  }
  return this;
}

