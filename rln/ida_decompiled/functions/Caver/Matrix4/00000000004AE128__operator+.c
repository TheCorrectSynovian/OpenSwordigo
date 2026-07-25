/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE128
 * Mangled: _ZNK5Caver7Matrix4plERKS0_
 * Demangled: Caver::Matrix4::operator+(Caver::Matrix4 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004AE128 string=0x00000000004AE12C "\t"
 *   insn=0x00000000004AE12C string=0x00000000004AE130 "\n"
 *   insn=0x00000000004AE130 string=0x00000000004AE134 "?"
 *   insn=0x00000000004AE140 string=0x00000000004AE144 "*"
 *   insn=0x00000000004AE144 string=0x00000000004AE148 "J"
 *   insn=0x00000000004AE150 string=0x00000000004AE154 "J"
 *   insn=0x00000000004AE154 string=0x00000000004AE158 "K"
 *   insn=0x00000000004AE168 string=0x00000000004AE16C "b"
 *   insn=0x00000000004AE16C string=0x00000000004AE178 "l"
 *   insn=0x00000000004AE174 string=0x00000000004AE1C0 "@E@"
 *   insn=0x00000000004AE17C string=0x00000000004AE180 "A"
 *   insn=0x00000000004AE180 string=0x00000000004AE184 "*"
 *   insn=0x00000000004AE184 string=0x00000000004AE188 ""
 *   insn=0x00000000004AE188 string=0x00000000004AE18C ".@"
 *   insn=0x00000000004AE1A4 string=0x00000000004AE1A8 "!"
 *   insn=0x00000000004AE1D0 string=0x00000000004AE1D4 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::operator+@<S0>(_OWORD *a1@<X0>, float32x4_t *a2@<X1>, unsigned __int64 a3@<X8>)
{
  _OWORD *v3; // x9
  _OWORD *v4; // x10
  unsigned __int64 v5; // x11
  float *v6; // x10
  __int64 v7; // x14
  float32x4_t *v8; // x13
  float32x4_t *v9; // x14
  __int64 v10; // x15
  float32x4_t v11; // q0
  float32x4_t v12; // q1
  float32x4_t v13; // q0
  float32x4_t v14; // q1
  float v15; // t1

  v3 = (_OWORD *)(a3 + 64);
  v4 = (_OWORD *)(a3 + 4);
  *(_OWORD *)(a3 + 48) = a1[3];
  if ( a3 + 64 > a3 + 4 )
    v4 = (_OWORD *)(a3 + 64);
  *(_OWORD *)(a3 + 32) = a1[2];
  v5 = (((unsigned __int64)v4 + ~a3) >> 2) + 1;
  *(_OWORD *)(a3 + 16) = a1[1];
  *(_OWORD *)a3 = *a1;
  if ( v5 < 8 )
  {
    v6 = (float *)a2;
    do
    {
LABEL_8:
      v15 = *v6++;
      v13.n128_f32[0] = v15 + *(float *)a3;
      *(_DWORD *)a3 = v13.n128_u32[0];
      a3 += 4LL;
    }
    while ( a3 < (unsigned __int64)v3 );
    return v13.n128_f32[0];
  }
  v7 = 4 * (v5 & 0x7FFFFFFFFFFFFFF8LL);
  v8 = (float32x4_t *)(a3 + 16);
  v6 = (float *)((char *)a2 + v7);
  a3 += v7;
  v9 = a2 + 1;
  v10 = v5 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v11 = v9[-1];
    v12 = *v9;
    v10 -= 8;
    v9 += 2;
    v13 = vaddq_f32(v11, v8[-1]);
    v14 = vaddq_f32(v12, *v8);
    v8[-1] = v13;
    *v8 = v14;
    v8 += 2;
  }
  while ( v10 );
  if ( v5 != (v5 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_8;
  return v13.n128_f32[0];
}

