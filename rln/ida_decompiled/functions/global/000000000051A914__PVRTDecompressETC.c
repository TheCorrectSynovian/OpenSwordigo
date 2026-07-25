/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051A914
 * Mangled: _Z17PVRTDecompressETCPKvRKjS2_PvRKi
 * Demangled: PVRTDecompressETC(void const*,uint const&,uint const&,void *,int const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89E0  .free
 *   0x00000000001FC7F0  ETCTextureDecompress(void const*,int const&,int const&,void const*,int const&)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 38
 *   insn=0x000000000051A930 string=0x000000000051A934 "X"
 *   insn=0x000000000051A934 string=0x000000000051A938 ""
 *   insn=0x000000000051A954 string=0x000000000051A958 "?"
 *   insn=0x000000000051A95C string=0x000000000051A990 "?"
 *   insn=0x000000000051A960 string=0x000000000051A964 "i"
 *   insn=0x000000000051A97C string=0x00000000001FC7F0 "0'"
 *   insn=0x000000000051A984 string=0x000000000051A988 "*"
 *   insn=0x000000000051A988 string=0x000000000051A98C "9"
 *   insn=0x000000000051A98C string=0x000000000051AA70 ""
 *   insn=0x000000000051A994 string=0x000000000051A998 ":"
 *   insn=0x000000000051A99C string=0x000000000051A9A0 ""
 *   insn=0x000000000051A9A0 string=0x000000000051A9A4 "H"
 *   insn=0x000000000051A9A8 string=0x000000000051A9AC "1m"
 *   insn=0x000000000051A9AC string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051A9D0 string=0x000000000051A9D4 "("
 *   insn=0x000000000051A9D4 string=0x000000000051AA18 "w"
 *   insn=0x000000000051A9E0 string=0x000000000051A9E4 "I"
 *   insn=0x000000000051A9E8 string=0x000000000051A9EC "`"
 *   insn=0x000000000051A9EC string=0x000000000051A9F0 "\t"
 *   insn=0x000000000051A9F0 string=0x000000000051A9F4 "I"
 *   insn=0x000000000051A9FC string=0x000000000051AA00 "X"
 *   insn=0x000000000051AA04 string=0x000000000051AA08 "{"
 *   insn=0x000000000051AA08 string=0x000000000051AA0C "Z"
 *   insn=0x000000000051AA10 string=0x000000000051AA14 "c"
 *   insn=0x000000000051AA20 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000051AA24 string=0x000000000051AA28 "J"
 *   insn=0x000000000051AA34 string=0x000000000051AA64 ""
 *   insn=0x000000000051AA38 string=0x000000000051AA3C "i\n@9k"
 *   insn=0x000000000051AA3C string=0x000000000051AA40 "k"
 *   insn=0x000000000051AA40 string=0x000000000051AA44 "J"
 *   insn=0x000000000051AA44 string=0x000000000051AA48 "i"
 *   insn=0x000000000051AA48 string=0x000000000051AA4C "k\n"
 *   insn=0x000000000051AA50 string=0x000000000051AA54 "s"
 *   insn=0x000000000051AA54 string=0x000000000051AA58 "_"
 *   insn=0x000000000051AA68 string=0x000000000051AA6C "C"
 *   insn=0x000000000051AA78 string=0x000000000051AA7C "A"
 *   insn=0x000000000051AA7C string=0x000000000051AAA4 "n"
 *   insn=0x000000000051AAA4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTDecompressETC(const void *a1, unsigned int *a2, unsigned int *a3, char *a4, const int *a5)
{
  char *v7; // x19
  unsigned int v8; // w9
  unsigned int v9; // w8
  unsigned int v11; // w22
  unsigned int v12; // w10
  int v13; // w26
  int v14; // w27
  char *v15; // x23
  const int *v16; // x4
  int v17; // w26
  unsigned int v18; // w27
  int v19; // w9
  unsigned int v20; // w9
  unsigned int v21; // w8
  unsigned int v22; // w10
  char v23; // w11
  unsigned int v25; // [xsp+0h] [xbp-60h] BYREF
  int v26; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v27; // [xsp+8h] [xbp-58h]

  v7 = a4;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *a2;
  v9 = *a3;
  if ( *a2 >= 4 && v9 > 3 )
  {
    v25 = *a3;
    v26 = v8;
    v11 = ETCTextureDecompress(a1, &v26, (const int *)&v25, a4, a5);
    v12 = *a3;
    if ( !*a3 )
      return v11;
    goto LABEL_20;
  }
  if ( v8 <= 4 )
    v13 = 4;
  else
    v13 = *a2;
  if ( v9 <= 4 )
    v14 = 4;
  else
    v14 = *a3;
  v15 = (char *)malloc((unsigned int)(4 * v13 * v14));
  v25 = v14;
  v26 = v13;
  v11 = ETCTextureDecompress(a1, &v26, (const int *)&v25, v15, v16);
  if ( *a3 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      if ( *a2 <= 4 )
        v19 = 4;
      else
        v19 = *a2;
      memcpy(&v7[v17 * *a2], &v15[v17 * v19], 4 * *a2);
      ++v18;
      v17 += 4;
    }
    while ( v18 < *a3 );
  }
  if ( v15 )
    free(v15);
  v12 = *a3;
  if ( *a3 )
  {
LABEL_20:
    v20 = *a2;
    v21 = 0;
    do
    {
      if ( v20 )
      {
        v22 = 0;
        do
        {
          v23 = *v7;
          ++v22;
          *v7 = v7[2];
          v7[2] = v23;
          v20 = *a2;
          v7 += 4;
        }
        while ( v22 < *a2 );
        v12 = *a3;
      }
      ++v21;
    }
    while ( v21 < v12 );
  }
  return v11;
}

