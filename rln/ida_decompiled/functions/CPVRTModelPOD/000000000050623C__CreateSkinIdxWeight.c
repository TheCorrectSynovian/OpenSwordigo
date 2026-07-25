/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050623C
 * Mangled: _ZN13CPVRTModelPOD19CreateSkinIdxWeightEPcS0_iPKiPKf
 * Demangled: CPVRTModelPOD::CreateSkinIdxWeight(char *,char *,int,int const*,float const*)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4160  PVRTErrorOutputDebug(char const*,...)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 40
 *   insn=0x0000000000506250 string=0x0000000000506254 "W"
 *   insn=0x0000000000506274 string=0x0000000000506278 "@"
 *   insn=0x0000000000506294 string=0x0000000000506298 "Oi."
 *   insn=0x00000000005062A0 string=0x00000000005062A4 "! "
 *   insn=0x00000000005062A4 string=0x00000000005062A8 "-"
 *   insn=0x00000000005062A8 string=0x00000000005062AC "mi."
 *   insn=0x00000000005062AC string=0x00000000005062B0 "\n\t"
 *   insn=0x00000000005062BC string=0x00000000005062C0 "my("
 *   insn=0x00000000005062C0 string=0x00000000005062C4 ""
 *   insn=0x00000000005062C8 string=0x00000000005062CC "+"
 *   insn=0x00000000005062D4 string=0x00000000005062D8 "u"
 *   insn=0x00000000005062D8 string=0x00000000005062DC "+"
 *   insn=0x00000000005062E8 string=0x00000000005062EC "H"
 *   insn=0x00000000005062EC string=0x00000000005062F0 ""
 *   insn=0x00000000005062F8 string=0x00000000005062FC " "
 *   insn=0x0000000000506304 string=0x0000000000506308 "N"
 *   insn=0x0000000000506308 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000506318 string=0x000000000050631C "I"
 *   insn=0x000000000050631C string=0x0000000000506320 "U"
 *   insn=0x0000000000506328 string=0x000000000050632C ""
 *   insn=0x000000000050632C string=0x0000000000506330 "("
 *   insn=0x0000000000506330 string=0x0000000000506334 "H"
 *   insn=0x0000000000506334 string=0x0000000000506338 " "
 *   insn=0x000000000050633C string=0x0000000000506340 "L"
 *   insn=0x0000000000506348 string=0x000000000050634C "+"
 *   insn=0x000000000050634C string=0x0000000000506370 "k"
 *   insn=0x0000000000506350 string=0x0000000000506360 "?\t"
 *   insn=0x0000000000506354 string=0x0000000000506358 ""
 *   insn=0x0000000000506364 string=0x0000000000506368 "K"
 *   insn=0x0000000000506370 string=0x0000000000506374 "?\t"
 *   insn=0x0000000000506374 string=0x0000000000506378 "K"
 *   insn=0x0000000000506384 string=0x0000000000506354 "K"
 *   insn=0x0000000000506394 string=0x0000000000506398 "h"
 *   insn=0x00000000005063A4 string=0x00000000005063A8 "h"
 *   insn=0x00000000005063B4 string=0x00000000005063B8 "h\n"
 *   insn=0x00000000005063C4 string=0x00000000005063C8 "h"
 *   insn=0x00000000005063D0 string=0x00000000005063D8 "b"
 *   insn=0x00000000005063D0 string=0x000000000059B5FC "Too many bones (highest index is 255).\n"
 *   insn=0x00000000005063D8 string=0x00000000001F4160 "P'"
 *   insn=0x0000000000506408 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::CreateSkinIdxWeight(
        CPVRTModelPOD *this,
        char *a2,
        char *a3,
        int a4,
        const int *a5,
        const float *a6)
{
  __int64 i; // x8
  __int64 v10; // x14
  int v11; // w15
  int v12; // w13
  int v13; // w13
  __int64 v14; // x24
  size_t v15; // x22
  int v16; // w11
  int v17; // w8
  int v18; // w9
  __int64 result; // x0
  int v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+Ch] [xbp-54h]
  int v22; // [xsp+10h] [xbp-50h]
  int v23; // [xsp+14h] [xbp-4Ch]
  int v24; // [xsp+18h] [xbp-48h] BYREF
  int v25; // [xsp+1Ch] [xbp-44h]
  int v26; // [xsp+20h] [xbp-40h]
  int v27; // [xsp+24h] [xbp-3Ch]
  __int64 v28; // [xsp+28h] [xbp-38h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a4 < 1 )
  {
    LODWORD(i) = 0;
LABEL_10:
    v14 = 4LL * (int)i;
    v15 = 4LL * (unsigned int)(3 - i) + 4;
    memset((char *)&v24 + v14, 0, v15);
    memset((char *)&v20 + v14, 0, v15);
    if ( !a4 )
      goto LABEL_24;
  }
  else
  {
    for ( i = 0; i < a4; *(&v20 + i++) = v13 )
    {
      v10 = 4 * i;
      v11 = a5[i];
      *(int *)((char *)&v24 + v10) = v11;
      v12 = (int)(float)(a6[i] * 255.0);
      *(int *)((char *)&v20 + v10) = v12;
      if ( v11 >= 256 )
      {
        PVRTErrorOutputDebug("Too many bones (highest index is 255).\n");
        return 1;
      }
      v13 = v12 & ~(v12 >> 31);
      if ( v13 >= 255 )
        v13 = 255;
    }
    if ( (int)i <= 3 )
      goto LABEL_10;
  }
  v16 = v20;
  v17 = v23 + v22 + v21 + v20;
  if ( v17 )
  {
    if ( v17 <= 254 )
    {
      v18 = 0;
      if ( v20 )
        goto LABEL_20;
      do
      {
LABEL_16:
        if ( v18 <= 2 )
          ++v18;
        else
          v18 = 0;
        v16 = *(&v20 + v18);
      }
      while ( !v16 );
LABEL_20:
      while ( 1 )
      {
        *(&v20 + v18) = v16 + 1;
        if ( v18 <= 2 )
          ++v18;
        else
          v18 = 0;
        if ( v17 > 253 )
          break;
        v16 = *(&v20 + v18);
        ++v17;
        if ( !v16 )
          goto LABEL_16;
      }
    }
LABEL_24:
    result = 0;
    *a2 = v24;
    *a3 = v20;
    a2[1] = v25;
    a3[1] = v21;
    a2[2] = v26;
    a3[2] = v22;
    a2[3] = v27;
    a3[3] = v23;
    return result;
  }
  return 1;
}

