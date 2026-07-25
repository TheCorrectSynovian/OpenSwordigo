/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002135B8
 * Mangled: _ZN5Caver15FloatDataBuffer10AccumulateERKS0_f
 * Demangled: Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Callers: 1
 *   0x00000000001FE670  Caver::FloatDataBuffer::Accumulate(Caver::FloatDataBuffer const&,float)
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000002135B8 string=0x00000000002135BC "("
 *   insn=0x00000000002135BC string=0x00000000002135C0 "-"
 *   insn=0x00000000002135C0 string=0x00000000002135C4 ""
 *   insn=0x00000000002135C4 string=0x00000000002135C8 "\n"
 *   insn=0x00000000002135C8 string=0x00000000002135CC "I"
 *   insn=0x00000000002135CC string=0x00000000002135D0 "?"
 *   insn=0x00000000002135D0 string=0x00000000002135D4 ")"
 *   insn=0x00000000002135D4 string=0x00000000002135D8 "J"
 *   insn=0x00000000002135D8 string=0x00000000002135DC "J"
 *   insn=0x00000000002135E8 string=0x00000000002135EC "j"
 *   insn=0x00000000002135FC string=0x0000000000213600 "AE@"
 *   insn=0x0000000000213600 string=0x0000000000213604 "b"
 *   insn=0x0000000000213604 string=0x0000000000213608 ")"
 *   insn=0x0000000000213608 string=0x000000000021360C "?"
 *   insn=0x000000000021360C string=0x0000000000213610 "! "
 *   insn=0x0000000000213610 string=0x0000000000213614 "A(!"
 *   insn=0x0000000000213614 string=0x0000000000213618 "aE"
 *   insn=0x0000000000213618 string=0x000000000021361C "#"
 *   insn=0x0000000000213624 string=0x0000000000213628 ")"
 *   insn=0x0000000000213628 string=0x000000000021362C "/"
 *   insn=0x0000000000213630 string=0x0000000000213634 "nA"
 *   insn=0x0000000000213638 string=0x000000000021363C "k"
 *   insn=0x0000000000213654 string=0x0000000000213658 "B"
 *   insn=0x0000000000213658 string=0x000000000021365C "c"
 *   insn=0x0000000000213670 string=0x0000000000213674 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FloatDataBuffer::Accumulate(__int64 this, const Caver::FloatDataBuffer *a2, double a3)
{
  unsigned int v3; // w8
  float32x4_t *v4; // x13
  float *v5; // x11
  __int64 v6; // x10
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 v9; // x9
  float *v10; // x10
  float v11; // t1
  float32x4_t v12; // q1
  float32x4_t *v13; // x14
  float32x4_t *v14; // x13
  __int64 v15; // x15
  float32x4_t v16; // q2
  float32x4_t v17; // q3
  float32x4_t v18; // q3

  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v4 = (float32x4_t *)*((_QWORD *)a2 + 1);
    v5 = *(float **)(this + 8);
    v6 = v3 - 1;
    v7 = v6 + 1;
    if ( (unsigned __int64)(v6 + 1) <= 7
      || (v8 = 4 * v6 + 4, v5 < (float *)((char *)v4 + v8)) && v4 < (float32x4_t *)((char *)v5 + v8) )
    {
      LODWORD(v9) = 0;
      v10 = (float *)*((_QWORD *)a2 + 1);
      do
      {
LABEL_6:
        v11 = *v10++;
        LODWORD(v9) = v9 + 1;
        *v5 = *v5 + (float)(v11 * *(float *)&a3);
        ++v5;
      }
      while ( (unsigned int)v9 < v3 );
      return this;
    }
    v9 = v7 - (v3 & 7);
    v12 = vdupq_lane_s32(*(int32x2_t *)&a3, 0);
    v13 = (float32x4_t *)(v5 + 4);
    v10 = (float *)v4 + v9;
    v5 += v9;
    v14 = v4 + 1;
    v15 = v9;
    do
    {
      v16 = v14[-1];
      v17 = *v14;
      v15 -= 8;
      v14 += 2;
      v18 = vaddq_f32(*v13, vmulq_f32(v17, v12));
      v13[-1] = vaddq_f32(v13[-1], vmulq_f32(v16, v12));
      *v13 = v18;
      v13 += 2;
    }
    while ( v15 );
    if ( (v3 & 7) != 0 )
      goto LABEL_6;
  }
  return this;
}

