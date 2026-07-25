/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051FCA0
 * Mangled: sub_51FCA0
 * Demangled: sub_51FCA0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 28
 *   insn=0x000000000051FCA4 string=0x000000000051FE60 ""
 *   insn=0x000000000051FCAC string=0x000000000051FCB0 "T"
 *   insn=0x000000000051FCB4 string=0x000000000051FCB8 "8"
 *   insn=0x000000000051FCB4 string=0x000000000051FE70 "\n"
 *   insn=0x000000000051FCBC string=0x000000000051FCC0 "S"
 *   insn=0x000000000051FCC4 string=0x000000000051FCC8 " "
 *   insn=0x000000000051FCC8 string=0x000000000051FCCC "!"
 *   insn=0x000000000051FCCC string=0x000000000051FCD0 "R"
 *   insn=0x000000000051FCD8 string=0x000000000051FCDC "Q"
 *   insn=0x000000000051FCE0 string=0x000000000051FCE4 "7"
 *   insn=0x000000000051FCE8 string=0x000000000051FCEC "!"
 *   insn=0x000000000051FCF8 string=0x000000000051FCFC "5"
 *   insn=0x000000000051FD14 string=0x000000000051FD18 "("
 *   insn=0x000000000051FD18 string=0x000000000051FD1C "G("
 *   insn=0x000000000051FD2C string=0x000000000051FD30 "d("
 *   insn=0x000000000051FD40 string=0x000000000051FD44 "$("
 *   insn=0x000000000051FD48 string=0x000000000051FD4C "A("
 *   insn=0x000000000051FD50 string=0x000000000051FD54 ""(aNa(!"
 *   insn=0x000000000051FD54 string=0x000000000051FD58 "a(!"
 *   insn=0x000000000051FD58 string=0x000000000051FD5C "A(!N"
 *   insn=0x000000000051FD68 string=0x000000000051FD6C "d"
 *   insn=0x000000000051FD6C string=0x000000000051FD70 "u"
 *   insn=0x000000000051FD88 string=0x000000000051FD8C "6"
 *   insn=0x000000000051FD90 string=0x000000000051FD94 "v"
 *   insn=0x000000000051FDA4 string=0x00000000001F5190 "P'"
 *   insn=0x000000000051FDA8 string=0x000000000051FDAC "@"
 *   insn=0x000000000051FDA8 string=0x000000000051FDC4 "d"
 *   insn=0x000000000051FDAC string=0x000000000051FDB0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51FCA0(
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
  unsigned __int8 v18; // [xsp+3Fh] [xbp+3Fh] BYREF
  char v19; // [xsp+40h] [xbp+40h] BYREF
  _BYTE v20[7]; // [xsp+41h] [xbp+41h] BYREF

  v9 = (int64x2_t)xmmword_51FE10;
  v11 = (int8x16_t *)&v19;
  do
  {
    v12 = vaddq_s64(v9, (int64x2_t)xmmword_51FE70);
    v13 = vaddq_s64(v9, (int64x2_t)xmmword_51FE60);
    v14 = vaddq_s64(v9, (int64x2_t)xmmword_51FE90);
    v15 = vaddq_s64(v9, (int64x2_t)xmmword_51FE80);
    v16 = vmovn_hight_s32(
            vmovn_s32(vmovn_hight_s64(vmovn_s64(v9), vaddq_s64(v9, (int64x2_t)xmmword_51FE30))),
            vmovn_hight_s64(
              vmovn_s64(vaddq_s64(v9, (int64x2_t)xmmword_51FE40)),
              vaddq_s64(v9, (int64x2_t)xmmword_51FE50)));
    v9 = vaddq_s64(v9, (int64x2_t)xmmword_51FE20);
    *v11++ = vmovn_hight_s16(
               vmovn_s16(v16),
               vmovn_hight_s32(vmovn_s32(vmovn_hight_s64(vmovn_s64(v13), v12)), vmovn_hight_s64(vmovn_s64(v15), v14)));
  }
  while ( v11 != (int8x16_t *)&a9 );
  (*(void (__fastcall **)(_BYTE *, char *, char *, _QWORD, _BYTE *, long double))(*(_QWORD *)a1 + 72LL))(
    a1,
    &v19,
    &a9,
    0,
    a1 + 313,
    *(long double *)&v9);
  a1[569] = 1;
  if ( memcmp(&v19, a1 + 313, 0x100u)
    || ((*(void (__fastcall **)(_BYTE *, char *, _BYTE *, __int64, unsigned __int8 *))(*(_QWORD *)a1 + 72LL))(
          a1,
          &v19,
          v20,
          1,
          &v18),
        result = v18,
        v18 == 1) )
  {
    result = 2;
    a1[569] = 2;
  }
  return result;
}

