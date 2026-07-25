/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE418
 * Mangled: _ZNK5Caver7Matrix4mlEf
 * Demangled: Caver::Matrix4::operator*(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004AE418 string=0x00000000004AE41C "\t"
 *   insn=0x00000000004AE41C string=0x00000000004AE420 "\n"
 *   insn=0x00000000004AE420 string=0x00000000004AE424 "?"
 *   insn=0x00000000004AE430 string=0x00000000004AE434 "*"
 *   insn=0x00000000004AE434 string=0x00000000004AE438 "J"
 *   insn=0x00000000004AE440 string=0x00000000004AE444 "J"
 *   insn=0x00000000004AE444 string=0x00000000004AE448 "K"
 *   insn=0x00000000004AE460 string=0x00000000004AE464 "l"
 *   insn=0x00000000004AE460 string=0x00000000004AE49C "A"
 *   insn=0x00000000004AE468 string=0x00000000004AE46C "\n\t"
 *   insn=0x00000000004AE46C string=0x00000000004AE470 "A"
 *   insn=0x00000000004AE47C string=0x00000000004AE480 "B"
 *   insn=0x00000000004AE480 string=0x00000000004AE484 "c"
 *   insn=0x00000000004AE488 string=0x00000000004AE48C ""
 *   insn=0x00000000004AE48C string=0x00000000004AE490 "A"
 *   insn=0x00000000004AE49C string=0x00000000004AE4A0 "! "
 *   insn=0x00000000004AE4A0 string=0x00000000004AE4A4 "AE"
 *   insn=0x00000000004AE4A4 string=0x00000000004AE4A8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_OWORD *__usercall Caver::Matrix4::operator*@<X0>(_OWORD *result@<X0>, unsigned __int64 a2@<X8>, double a3@<D0>)
{
  float *v3; // x9
  _OWORD *v4; // x10
  unsigned __int64 v5; // x11
  float *v6; // x10
  float32x4_t v7; // q1
  float32x4_t *v8; // x8
  __int64 v9; // x13
  float32x4_t v10; // q3

  v3 = (float *)(a2 + 64);
  v4 = (_OWORD *)(a2 + 4);
  *(_OWORD *)(a2 + 48) = result[3];
  if ( a2 + 64 > a2 + 4 )
    v4 = (_OWORD *)(a2 + 64);
  *(_OWORD *)(a2 + 32) = result[2];
  v5 = (((unsigned __int64)v4 + ~a2) >> 2) + 1;
  *(_OWORD *)(a2 + 16) = result[1];
  v6 = (float *)a2;
  *(_OWORD *)a2 = *result;
  if ( v5 < 8 )
    goto LABEL_10;
  v7 = vdupq_lane_s32(*(int32x2_t *)&a3, 0);
  v6 = (float *)(a2 + 4 * (v5 & 0x7FFFFFFFFFFFFFF8LL));
  v8 = (float32x4_t *)(a2 + 16);
  v9 = v5 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v9 -= 8;
    v10 = vmulq_f32(*v8, v7);
    v8[-1] = vmulq_f32(v8[-1], v7);
    *v8 = v10;
    v8 += 2;
  }
  while ( v9 );
  if ( v5 != (v5 & 0x7FFFFFFFFFFFFFF8LL) )
  {
LABEL_10:
    do
    {
      *v6 = *v6 * *(float *)&a3;
      ++v6;
    }
    while ( v6 < v3 );
  }
  return result;
}

