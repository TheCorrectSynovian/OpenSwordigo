/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BF60
 * Mangled: _Z20PVRTTextureLoadTiledPhjjPKhjjjb
 * Demangled: PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *
 * Callers: 1
 *   0x00000000001FDE00  PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDE20  PVRTTextureTwiddle(uint &,uint,uint)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 82
 *   insn=0x000000000051BF80 string=0x000000000051BF84 "H"
 *   insn=0x000000000051BF88 string=0x000000000051BF8C "\t"
 *   insn=0x000000000051BFA4 string=0x000000000051BFA8 "H|"
 *   insn=0x000000000051BFB0 string=0x000000000051BFB4 "\t"
 *   insn=0x000000000051BFB4 string=0x000000000051BFB8 " y"
 *   insn=0x000000000051BFB8 string=0x000000000051BFBC "\t"
 *   insn=0x000000000051BFC8 string=0x000000000051BFCC " }"
 *   insn=0x000000000051BFCC string=0x000000000051BFD0 "\t"
 *   insn=0x000000000051BFD0 string=0x000000000051BFD4 "!"
 *   insn=0x000000000051BFD4 string=0x000000000051BFD8 "\t"
 *   insn=0x000000000051BFE4 string=0x000000000051BFE8 "!"
 *   insn=0x000000000051BFE8 string=0x000000000051BFEC "\t"
 *   insn=0x000000000051BFEC string=0x000000000051BFF0 """
 *   insn=0x000000000051BFF0 string=0x000000000051BFF4 "\t"
 *   insn=0x000000000051BFF4 string=0x000000000051BFF8 " "
 *   insn=0x000000000051C000 string=0x000000000051C004 """
 *   insn=0x000000000051C004 string=0x000000000051C008 "\t"
 *   insn=0x000000000051C008 string=0x000000000051C00C "#"
 *   insn=0x000000000051C00C string=0x000000000051C010 "\t"
 *   insn=0x000000000051C010 string=0x000000000051C014 "@"
 *   insn=0x000000000051C01C string=0x000000000051C020 "#"
 *   insn=0x000000000051C020 string=0x000000000051C024 "\t"
 *   insn=0x000000000051C024 string=0x000000000051C028 "$"
 *   insn=0x000000000051C028 string=0x000000000051C02C "\t"
 *   insn=0x000000000051C02C string=0x000000000051C030 "`"
 *   insn=0x000000000051C02C string=0x000000000059C270 "\t"
 *   insn=0x000000000051C038 string=0x000000000051C03C "$"
 *   insn=0x000000000051C03C string=0x000000000051C040 "\t"
 *   insn=0x000000000051C040 string=0x000000000051C044 "%"
 *   insn=0x000000000051C044 string=0x000000000051C048 "\t"
 *   insn=0x000000000051C048 string=0x000000000059C290 ""
 *   insn=0x000000000051C054 string=0x000000000051C058 "%"
 *   insn=0x000000000051C058 string=0x000000000051C05C "\t"
 *   insn=0x000000000051C05C string=0x000000000051C060 "&"
 *   insn=0x000000000051C060 string=0x000000000051C064 "\t"
 *   insn=0x000000000051C064 string=0x000000000059C2B0 ""
 *   insn=0x000000000051C070 string=0x000000000051C074 "&"
 *   insn=0x000000000051C074 string=0x000000000051C078 "\t"
 *   insn=0x000000000051C078 string=0x000000000051C07C "'"
 *   insn=0x000000000051C07C string=0x000000000051C080 "\t"
 *   insn=0x000000000051C08C string=0x000000000051C090 "'"
 *   insn=0x000000000051C0A4 string=0x000000000051C0A8 ""
 *   insn=0x000000000051C0A8 string=0x000000000051C188 "h"
 *   insn=0x000000000051C0B0 string=0x000000000051C0B4 "`"
 *   insn=0x000000000051C0BC string=0x000000000051C0C0 "!D"
 *   insn=0x000000000051C0D0 string=0x000000000051C0D4 "cD"
 *   insn=0x000000000051C0D8 string=0x000000000051C0DC "a"
 *   insn=0x000000000051C0E0 string=0x000000000051C0E4 "BD"
 *   insn=0x000000000051C0EC string=0x000000000051C0F0 "cD"
 *   insn=0x000000000051C0F0 string=0x000000000051C0F4 "b"
 *   insn=0x000000000051C100 string=0x000000000051C104 "cD"
 *   insn=0x000000000051C104 string=0x000000000051C108 "a"
 *   insn=0x000000000051C114 string=0x000000000051C118 "cD"
 *   insn=0x000000000051C118 string=0x000000000051C11C "b"
 *   insn=0x000000000051C12C string=0x000000000051C130 "cD"
 *   insn=0x000000000051C134 string=0x000000000051C138 "a"
 *   insn=0x000000000051C144 string=0x000000000051C148 "#@"
 *   insn=0x000000000051C14C string=0x000000000051C150 "!"
 *   insn=0x000000000051C154 string=0x000000000051C158 "#"
 *   insn=0x000000000051C15C string=0x000000000051C160 "!"
 *   insn=0x000000000051C160 string=0x000000000051C164 ""
 *   insn=0x000000000051C164 string=0x000000000051C168 ")"
 *   insn=0x000000000051C168 string=0x000000000051C16C "\n\t"
 *   insn=0x000000000051C16C string=0x000000000051C170 "B"
 *   insn=0x000000000051C170 string=0x000000000051C174 "(\t"
 *   insn=0x000000000051C178 string=0x000000000051C17C ")"
 *   insn=0x000000000051C17C string=0x00000000001FDE20 "0'"
 *   insn=0x000000000051C180 string=0x000000000051C184 "\t"
 *   insn=0x000000000051C184 string=0x000000000051C1A8 "}"
 *   insn=0x000000000051C188 string=0x000000000051C18C "\t"
 *   insn=0x000000000051C18C string=0x000000000051C190 "\n\t"
 *   insn=0x000000000051C190 string=0x000000000051C194 "+\t"
 *   insn=0x000000000051C194 string=0x000000000051C198 "i"
 *   insn=0x000000000051C198 string=0x000000000051C19C "H"
 *   insn=0x000000000051C19C string=0x000000000051C1A0 "%"
 *   insn=0x000000000051C1A8 string=0x000000000051C1AC " C<"
 *   insn=0x000000000051C1B4 string=0x000000000051C1B8 "j"
 *   insn=0x000000000051C1B8 string=0x000000000051C1BC "{"
 *   insn=0x000000000051C1CC string=0x000000000051C1D0 ""
 *   insn=0x000000000051C1D8 string=0x000000000051C1DC "!"
 *   insn=0x000000000051C1DC string=0x000000000051C200 "4h"
 *   insn=0x000000000051C200 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall PVRTTextureLoadTiled(
        char *result,
        unsigned int a2,
        int a3,
        const unsigned __int8 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        char a8)
{
  char *v13; // x25
  int v14; // w28
  __int64 v15; // x27
  __int64 v16; // x19
  int8x16_t v17; // q0
  int8x16_t v18; // q1
  int8x16_t v19; // q0
  int8x16_t v20; // q3
  int8x16_t v21; // q0
  int8x16_t v22; // q1
  unsigned int v23; // w8
  uint32x4_t v24; // [xsp+10h] [xbp-160h]
  uint32x4_t v25; // [xsp+20h] [xbp-150h]
  uint32x4_t v26; // [xsp+30h] [xbp-140h]
  uint32x4_t v27; // [xsp+40h] [xbp-130h]
  uint32x4_t v28; // [xsp+50h] [xbp-120h]
  uint32x4_t v29; // [xsp+60h] [xbp-110h]
  uint32x4_t v30; // [xsp+70h] [xbp-100h]
  uint32x4_t v31; // [xsp+80h] [xbp-F0h]
  unsigned int v33; // [xsp+114h] [xbp-5Ch] BYREF
  __int64 v34; // [xsp+118h] [xbp-58h]

  v13 = result;
  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 * a2 )
  {
    v14 = 0;
    v15 = 0;
    v31 = vnegq_s32((int32x4_t)xmmword_59C1F0);
    v30 = vnegq_s32((int32x4_t)xmmword_59C210);
    v29 = vnegq_s32((int32x4_t)xmmword_59C230);
    v28 = vnegq_s32((int32x4_t)xmmword_59C250);
    v27 = vnegq_s32((int32x4_t)xmmword_59C270);
    v26 = vnegq_s32((int32x4_t)xmmword_59C290);
    v16 = a3 * a2;
    v25 = vnegq_s32((int32x4_t)xmmword_59C2B0);
    v24 = vnegq_s32((int32x4_t)xmmword_59C2D0);
    do
    {
      if ( (a8 & 1) != 0 )
      {
        v17 = vdupq_n_s32(v15);
        v18 = vorrq_s8(
                vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C2A0), v25),
                vorrq_s8(
                  vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C260), v27),
                  vorrq_s8(
                    vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C220), v29),
                    vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C1E0), v31))));
        v19 = vorrq_s8(
                vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C2C0), v24),
                vorrq_s8(
                  vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C280), v26),
                  vorrq_s8(
                    vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C240), v28),
                    vshlq_u32(vandq_s8(v17, (int8x16_t)xmmword_59C200), v30))));
        v20 = vextq_s8(v18, v19, 8u);
        v21 = vorrq_s8(v19, vextq_s8(v19, v19, 8u));
        v22 = vorrq_s8(v18, v20);
        PVRTTextureTwiddle(
          &v33,
          vorrq_s8(v22, vdupq_lane_s32((int32x2_t)v22.n128_u64[0], 1)).n128_u32[0] % a5,
          vorrq_s8(v21, vdupq_lane_s32((int32x2_t)v21.n128_u64[0], 1)).n128_u32[0] % a6);
        v23 = v33;
      }
      else
      {
        v23 = (unsigned int)v15 % a2 % a5 + (unsigned int)v15 / a2 % a6 * a5;
        v33 = v23;
      }
      result = (char *)memcpy(&v13[v14], &a4[v23 * a7], a7);
      ++v15;
      v14 += a7;
    }
    while ( v16 != v15 );
  }
  return result;
}

