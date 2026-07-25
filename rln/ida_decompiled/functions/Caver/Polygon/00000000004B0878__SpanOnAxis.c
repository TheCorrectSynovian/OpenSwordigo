/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B0878
 * Mangled: _ZNK5Caver7Polygon10SpanOnAxisERKNS_7Vector2EPfS4_
 * Demangled: Caver::Polygon::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001F4EF0  Caver::Polygon::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004B0888 string=0x00000000004B088C "\t"
 *   insn=0x00000000004B0888 string=0x00000000004B08C4 "A"
 *   insn=0x00000000004B088C string=0x00000000004B0890 """
 *   insn=0x00000000004B0890 string=0x00000000004B0894 "`uI"
 *   insn=0x00000000004B0894 string=0x00000000004B0898 "A"
 *   insn=0x00000000004B0898 string=0x00000000004B089C "#"
 *   insn=0x00000000004B089C string=0x00000000004B08A0 "c"
 *   insn=0x00000000004B08A0 string=0x00000000004B08A4 "c"
 *   insn=0x00000000004B08A4 string=0x00000000004B08A8 "` !"
 *   insn=0x00000000004B08A8 string=0x00000000004B08AC "aL!"
 *   insn=0x00000000004B08AC string=0x00000000004B08B0 "`  "
 *   insn=0x00000000004B08B0 string=0x00000000004B08B4 "`"
 *   insn=0x00000000004B08B4 string=0x00000000004B08B8 ""
 *   insn=0x00000000004B08C0 string=0x00000000004B08CC "A"
 *   insn=0x00000000004B08C4 string=0x00000000004B08C8 "`uI"
 *   insn=0x00000000004B08CC string=0x00000000004B08D0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Polygon::SpanOnAxis(__int64 result, float32x2_t *a2, float *a3, float *a4)
{
  int v4; // w8
  float32x2_t *v5; // x9
  float v6; // s0
  float v7; // s1
  float32x2_t v8; // t1
  float v9; // s3

  v4 = *(_DWORD *)result;
  if ( *(int *)result < 1 )
  {
    v7 = 3.4028e38;
    v6 = -3.4028e38;
  }
  else
  {
    v5 = *(float32x2_t **)(result + 8);
    v6 = -3.4028e38;
    v7 = 3.4028e38;
    do
    {
      v8.n64_u64[0] = v5->n64_u64[0];
      ++v5;
      v9 = vaddv_f32(vmul_f32(v8, (float32x2_t)a2->n64_u64[0]));
      if ( v9 < v7 )
        v7 = v9;
      if ( v9 > v6 )
        v6 = v9;
      --v4;
    }
    while ( v4 );
  }
  *a3 = v7;
  *a4 = v6;
  return result;
}

