/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FEA0
 * Mangled: sub_51FEA0
 * Demangled: sub_51FEA0
 *
 * Callers: 31
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *   0x0000000000520EBC  sub_520EBC
 *   0x0000000000520F38  sub_520F38
 *   0x000000000052103C  sub_52103C
 *   0x0000000000521338  sub_521338
 *   0x0000000000522F8C  sub_522F8C
 *   0x00000000005236B8  sub_5236B8
 *   0x0000000000524E8C  sub_524E8C
 *   0x000000000052B4BC  sub_52B4BC
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052E854  sub_52E854
 *   0x000000000052EE7C  sub_52EE7C
 *   0x0000000000530504  sub_530504
 *   0x0000000000530D30  sub_530D30
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x0000000000533538  sub_533538
 *   0x0000000000536428  sub_536428
 *   0x000000000053E1F0  sub_53E1F0
 *   0x0000000000540294  sub_540294
 *   0x000000000054031C  sub_54031C
 *   0x0000000000540490  sub_540490
 *   0x0000000000540A88  sub_540A88
 *   0x0000000000540D40  sub_540D40
 *   0x0000000000540F84  sub_540F84
 *   0x00000000005411B8  sub_5411B8
 *   0x00000000005413EC  sub_5413EC
 *   0x0000000000541620  sub_541620
 *   0x0000000000541868  sub_541868
 *   0x0000000000541AB0  sub_541AB0
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 34
 *   insn=0x000000000051FEA0 string=0x000000000051FEA4 "b"
 *   insn=0x000000000051FEA4 string=0x000000000051FEA8 "A\t"
 *   insn=0x000000000051FEA4 string=0x0000000000520010 ""
 *   insn=0x000000000051FEAC string=0x000000000051FEB0 "T"
 *   insn=0x000000000051FEB0 string=0x000000000051FEB4 "b"
 *   insn=0x000000000051FEB4 string=0x000000000051FEB8 "8"
 *   insn=0x000000000051FEB4 string=0x0000000000520020 "\n"
 *   insn=0x000000000051FEB8 string=0x000000000051FEBC "!"
 *   insn=0x000000000051FEBC string=0x000000000051FEC0 "S"
 *   insn=0x000000000051FEC0 string=0x000000000051FEC4 "b"
 *   insn=0x000000000051FEC4 string=0x000000000051FEC8 " "
 *   insn=0x000000000051FECC string=0x000000000051FED0 "R"
 *   insn=0x000000000051FED0 string=0x000000000051FED4 "b"
 *   insn=0x000000000051FED8 string=0x000000000051FEDC "Q"
 *   insn=0x000000000051FEE0 string=0x000000000051FEE4 "7"
 *   insn=0x000000000051FEE4 string=0x000000000051FEE8 "@"
 *   insn=0x000000000051FEF8 string=0x000000000051FEFC "5"
 *   insn=0x000000000051FF14 string=0x000000000051FF18 "("
 *   insn=0x000000000051FF18 string=0x000000000051FF1C "G("
 *   insn=0x000000000051FF2C string=0x000000000051FF30 "d("
 *   insn=0x000000000051FF40 string=0x000000000051FF44 "$("
 *   insn=0x000000000051FF48 string=0x000000000051FF4C "A("
 *   insn=0x000000000051FF50 string=0x000000000051FF54 ""(aNa(!"
 *   insn=0x000000000051FF54 string=0x000000000051FF58 "a(!"
 *   insn=0x000000000051FF58 string=0x000000000051FF5C "A(!N"
 *   insn=0x000000000051FF68 string=0x000000000051FF6C "d"
 *   insn=0x000000000051FF6C string=0x000000000051FF70 "u"
 *   insn=0x000000000051FF88 string=0x000000000051FF8C "!"
 *   insn=0x000000000051FF90 string=0x000000000051FF94 "a"
 *   insn=0x000000000051FF9C string=0x000000000051FFA0 "|T"
 *   insn=0x000000000051FFA0 string=0x000000000051FFA4 "`"
 *   insn=0x000000000051FFA0 string=0x00000000001F5190 "P'"
 *   insn=0x000000000051FFA4 string=0x000000000051FFA8 "@"
 *   insn=0x000000000051FFA8 string=0x000000000051FFAC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51FEA0(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  int64x2_t v9; // q0
  int8x16_t *v11; // x0
  int64x2_t v12; // q1
  int64x2_t v13; // q6
  int64x2_t v14; // q2
  int64x2_t v15; // q5
  int16x8_t v16; // q3
  __int64 result; // x0
  _BYTE v18[256]; // [xsp+30h] [xbp+30h] BYREF

  v9 = (int64x2_t)xmmword_51FFC0;
  v11 = (int8x16_t *)v18;
  do
  {
    v12 = vaddq_s64(v9, (int64x2_t)xmmword_520020);
    v13 = vaddq_s64(v9, (int64x2_t)xmmword_520010);
    v14 = vaddq_s64(v9, (int64x2_t)xmmword_520040);
    v15 = vaddq_s64(v9, (int64x2_t)xmmword_520030);
    v16 = vmovn_hight_s32(
            vmovn_s32(vmovn_hight_s64(vmovn_s64(v9), vaddq_s64(v9, (int64x2_t)xmmword_51FFE0))),
            vmovn_hight_s64(
              vmovn_s64(vaddq_s64(v9, (int64x2_t)xmmword_51FFF0)),
              vaddq_s64(v9, (int64x2_t)xmmword_520000)));
    v9 = vaddq_s64(v9, (int64x2_t)xmmword_51FFD0);
    *v11++ = vmovn_hight_s16(
               vmovn_s16(v16),
               vmovn_hight_s32(vmovn_s32(vmovn_hight_s64(vmovn_s64(v13), v12)), vmovn_hight_s64(vmovn_s64(v15), v14)));
  }
  while ( v11 != (int8x16_t *)&a9 );
  (*(void (__fastcall **)(_BYTE *, _BYTE *, char *, _BYTE *, long double))(*(_QWORD *)a1 + 56LL))(
    a1,
    v18,
    &a9,
    a1 + 57,
    *(long double *)&v9);
  a1[56] = 1;
  result = memcmp(v18, a1 + 57, 0x100u);
  if ( (_DWORD)result )
  {
    result = 2;
    a1[56] = 2;
  }
  return result;
}

