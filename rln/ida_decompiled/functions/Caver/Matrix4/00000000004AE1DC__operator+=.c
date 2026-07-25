/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE1DC
 * Mangled: _ZN5Caver7Matrix4pLERKS0_
 * Demangled: Caver::Matrix4::operator+=(Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000004AE1DC string=0x00000000004AE1E0 "\t"
 *   insn=0x00000000004AE1E4 string=0x00000000004AE1E8 ""
 *   insn=0x00000000004AE1EC string=0x00000000004AE1F0 "k"
 *   insn=0x00000000004AE1F0 string=0x00000000004AE1F4 "k"
 *   insn=0x00000000004AE1F4 string=0x00000000004AE1F8 "k"
 *   insn=0x00000000004AE204 string=0x00000000004AE208 "\t"
 *   insn=0x00000000004AE208 string=0x00000000004AE20C ")"
 *   insn=0x00000000004AE20C string=0x00000000004AE210 ")"
 *   insn=0x00000000004AE210 string=0x00000000004AE214 ")"
 *   insn=0x00000000004AE214 string=0x00000000004AE218 "*"
 *   insn=0x00000000004AE218 string=0x00000000004AE21C "_"
 *   insn=0x00000000004AE220 string=0x00000000004AE224 "\t"
 *   insn=0x00000000004AE220 string=0x00000000004AE254 "l"
 *   insn=0x00000000004AE224 string=0x00000000004AE228 "?"
 *   insn=0x00000000004AE228 string=0x00000000004AE22C "I"
 *   insn=0x00000000004AE234 string=0x00000000004AE238 " E@"
 *   insn=0x00000000004AE238 string=0x00000000004AE23C "A"
 *   insn=0x00000000004AE240 string=0x00000000004AE244 "@E"
 *   insn=0x00000000004AE244 string=0x00000000004AE248 "_"
 *   insn=0x00000000004AE248 string=0x00000000004AE24C "c"
 *   insn=0x00000000004AE258 string=0x00000000004AE25C "@"
 *   insn=0x00000000004AE25C string=0x00000000004AE260 ")"
 *   insn=0x00000000004AE260 string=0x00000000004AE264 "\n"
 *   insn=0x00000000004AE264 string=0x00000000004AE268 ".@"
 *   insn=0x00000000004AE280 string=0x00000000004AE284 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall Caver::Matrix4::operator+=(float32x4_t *a1, float32x4_t *a2)
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
      result.n128_f32[0] = v9 + *v8;
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
    result = vaddq_f32(v15, v12[-1]);
    v17 = vaddq_f32(v16, *v12);
    v12[-1] = result;
    *v12 = v17;
    v12 += 2;
  }
  while ( v14 );
  if ( v5 != (v5 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_10;
  return result;
}

