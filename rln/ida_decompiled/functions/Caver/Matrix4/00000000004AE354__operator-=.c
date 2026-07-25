/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE354
 * Mangled: _ZN5Caver7Matrix4mIERKS0_
 * Demangled: Caver::Matrix4::operator-=(Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x00000000004AE354 string=0x00000000004AE358 "\t"
 *   insn=0x00000000004AE35C string=0x00000000004AE360 ""
 *   insn=0x00000000004AE364 string=0x00000000004AE368 "k"
 *   insn=0x00000000004AE368 string=0x00000000004AE36C "k"
 *   insn=0x00000000004AE36C string=0x00000000004AE370 "k"
 *   insn=0x00000000004AE37C string=0x00000000004AE380 "\t"
 *   insn=0x00000000004AE380 string=0x00000000004AE384 ")"
 *   insn=0x00000000004AE384 string=0x00000000004AE388 ")"
 *   insn=0x00000000004AE388 string=0x00000000004AE38C ")"
 *   insn=0x00000000004AE38C string=0x00000000004AE390 "*"
 *   insn=0x00000000004AE390 string=0x00000000004AE394 "_"
 *   insn=0x00000000004AE398 string=0x00000000004AE39C "\t"
 *   insn=0x00000000004AE398 string=0x00000000004AE3CC "l"
 *   insn=0x00000000004AE39C string=0x00000000004AE3A0 "?"
 *   insn=0x00000000004AE3A0 string=0x00000000004AE3A4 "I"
 *   insn=0x00000000004AE3AC string=0x00000000004AE3B0 " E@"
 *   insn=0x00000000004AE3B0 string=0x00000000004AE3B4 "A"
 *   insn=0x00000000004AE3B4 string=0x00000000004AE3B8 " 8 "
 *   insn=0x00000000004AE3B8 string=0x00000000004AE3BC "@E"
 *   insn=0x00000000004AE3BC string=0x00000000004AE3C0 "_"
 *   insn=0x00000000004AE3C0 string=0x00000000004AE3C4 "c"
 *   insn=0x00000000004AE3D0 string=0x00000000004AE3D4 "@"
 *   insn=0x00000000004AE3D4 string=0x00000000004AE3D8 ")"
 *   insn=0x00000000004AE3D8 string=0x00000000004AE3DC "\n"
 *   insn=0x00000000004AE3DC string=0x00000000004AE3E0 ".@"
 *   insn=0x00000000004AE3F4 string=0x00000000004AE3F8 "@"
 *   insn=0x00000000004AE3F8 string=0x00000000004AE3FC "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall Caver::Matrix4::operator-=(float32x4_t *a1, float32x4_t *a2)
{
  unsigned __int64 n128_u64; // x8
  float32x4_t *v3; // x9
  float32x4_t *v4; // x11
  unsigned __int64 v5; // x11
  unsigned __int64 v6; // x9
  float *v7; // x9
  float *v8; // x10
  float v9; // t1
  float32x4_t result; // q0
  __int64 v11; // x10
  float32x4_t *v12; // x13
  float32x4_t *v13; // x14
  __int64 v14; // x15
  float32x4_t v15; // q0
  float32x4_t v16; // q1
  float32x4_t v17; // q1

  n128_u64 = (unsigned __int64)a1[4].n128_u64;
  v3 = (float32x4_t *)&a1->n128_u8[4];
  if ( &a1[4] <= (float32x4_t *)&a1->n128_u8[4] )
    v4 = (float32x4_t *)&a1->n128_u8[4];
  else
    v4 = a1 + 4;
  v5 = (((unsigned __int64)v4->n128_u64 + ~(unsigned __int64)a1) >> 2) + 1;
  if ( v5 < 8 )
    goto LABEL_9;
  if ( n128_u64 > (unsigned __int64)v3 )
    v3 = a1 + 4;
  v6 = (((unsigned __int64)v3->n128_u64 + ~(unsigned __int64)a1) & 0xFFFFFFFFFFFFFFFCLL) + 4;
  if ( (float32x4_t *)((char *)a2 + v6) > a1 && (float32x4_t *)((char *)a1 + v6) > a2 )
  {
LABEL_9:
    v7 = (float *)a2;
    v8 = (float *)a1;
    do
    {
LABEL_10:
      v9 = *v7++;
      result.n128_f32[0] = *v8 - v9;
      *v8++ = result.n128_f32[0];
    }
    while ( (unsigned __int64)v8 < n128_u64 );
    return result;
  }
  v11 = 4 * (v5 & 0x7FFFFFFFFFFFFFF8LL);
  v12 = a1 + 1;
  v7 = (float *)((char *)a2 + v11);
  v8 = (float *)((char *)a1 + v11);
  v13 = a2 + 1;
  v14 = v5 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v15 = v13[-1];
    v16 = *v13;
    v14 -= 8;
    v13 += 2;
    result = vsubq_f32(v12[-1], v15);
    v17 = vsubq_f32(*v12, v16);
    v12[-1] = result;
    *v12 = v17;
    v12 += 2;
  }
  while ( v14 );
  if ( v5 != (v5 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_10;
  return result;
}

