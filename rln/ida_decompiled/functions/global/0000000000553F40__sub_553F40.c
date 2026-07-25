/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000553F40
 * Mangled: sub_553F40
 * Demangled: sub_553F40
 *
 * Callers: 2
 *   0x0000000000553F40  sub_553F40
 *   0x00000000005541C0  sub_5541C0
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000054FE98  sub_54FE98
 *   0x0000000000551BB0  sub_551BB0
 *   0x00000000005530A4  sub_5530A4
 *   0x000000000055398C  sub_55398C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000553F40 string=0x0000000000553F44 "@"
 *   insn=0x0000000000553F74 string=0x0000000000553F78 "V"
 *   insn=0x0000000000553F84 string=0x0000000000553F88 "[{y"
 *   insn=0x0000000000553F90 string=0x0000000000553F94 "@\t"
 *   insn=0x0000000000553F98 string=0x0000000000553F9C "yC"
 *   insn=0x0000000000553FCC string=0x0000000000553FD0 "o"
 *   insn=0x0000000000553FD0 string=0x0000000000553FD4 "a"
 *   insn=0x0000000000553FDC string=0x0000000000553FE0 "F"
 *   insn=0x0000000000553FE0 string=0x0000000000553FE4 "!"
 *   insn=0x0000000000553FE4 string=0x0000000000553FE8 "S"
 *   insn=0x0000000000554000 string=0x0000000000554004 "!x"
 *   insn=0x0000000000554008 string=0x000000000055400C "!"
 *   insn=0x0000000000554010 string=0x0000000000554014 "_`!"
 *   insn=0x0000000000554034 string=0x0000000000554038 "4"
 *   insn=0x0000000000554048 string=0x000000000055404C "c0@"
 *   insn=0x000000000055404C string=0x0000000000554050 "`"
 *   insn=0x000000000055408C string=0x0000000000554090 "Z"
 *   insn=0x0000000000554090 string=0x0000000000554094 "aO@"
 *   insn=0x0000000000554094 string=0x0000000000554098 "Z{"
 *   insn=0x0000000000554098 string=0x000000000055409C "b@"
 *   insn=0x000000000055409C string=0x00000000005540A0 "Z"
 *   insn=0x00000000005540A0 string=0x00000000005540A4 "c"
 *   insn=0x00000000005540BC string=0x0000000000551BB0 "H"
 *   insn=0x00000000005540D8 string=0x00000000005540DC "`"
 *   insn=0x00000000005540DC string=0x0000000000554168 "ac@"
 *   insn=0x00000000005540EC string=0x00000000005540F0 "!{|"
 *   insn=0x00000000005540F4 string=0x00000000005540F8 "ac@"
 *   insn=0x0000000000554104 string=0x0000000000554108 "6"
 *   insn=0x0000000000554108 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000554110 string=0x0000000000554114 "B"
 *   insn=0x0000000000554148 string=0x000000000055414C "S"
 *   insn=0x0000000000554158 string=0x000000000055415C "y"
 *   insn=0x000000000055415C string=0x0000000000554160 "[{y"
 *   insn=0x000000000055417C string=0x0000000000554180 "a"
 *   insn=0x000000000055417C string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000554184 string=0x0000000000554188 "!"
 *   insn=0x0000000000554188 string=0x000000000055418C " "
 *   insn=0x000000000055418C string=0x0000000000554190 "x"
 *   insn=0x00000000005541A0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005541B0 string=0x00000000005541B4 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_553F40(__int64 a1, __int64 a2, char a3, __int64 a4, wchar_t a5, unsigned __int64 a6)
{
  __int64 v10; // x25
  __int64 v11; // x26
  __int64 v12; // x27
  unsigned __int64 v13; // x28
  _BOOL4 v14; // w19
  unsigned __int64 v15; // x0
  wchar_t *v16; // x6
  __int64 v17; // x4
  __int64 v18; // x19
  __int64 v20; // x0
  _DWORD *v21; // x19
  wchar_t v22[2]; // [xsp+10h] [xbp-B0h] BYREF
  _DWORD v23[38]; // [xsp+18h] [xbp-A8h] BYREF
  _BYTE v24[16]; // [xsp+B0h] [xbp-10h] BYREF
  wchar_t c[2]; // [xsp+128h] [xbp+68h]

  c[0] = a5;
  v10 = sub_53C4D0(&qword_6FD2A8);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !v12 )
  {
    v20 = operator new(0x150u);
    *(_DWORD *)(v20 + 8) = 0;
    *(_QWORD *)v20 = off_6B7C80;
    v21 = (_DWORD *)v20;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = 0;
    *(_BYTE *)(v20 + 32) = 0;
    *(_QWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 48) = 0;
    *(_QWORD *)(v20 + 56) = 0;
    *(_QWORD *)(v20 + 64) = 0;
    *(_DWORD *)(v20 + 72) = 0;
    *(_DWORD *)(v20 + 76) = 0;
    *(_BYTE *)(v20 + 328) = 0;
    sub_54FE98(v20, a4 + 208);
    sub_53C340(*(_QWORD *)(a4 + 208), v21, v10);
    v12 = *(_QWORD *)(v11 + 8 * v10);
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = (*(_DWORD *)(a4 + 24) & 0x4A) != 8 && (*(_DWORD *)(a4 + 24) & 0x4A) != 64;
  LODWORD(v15) = sub_55398C((__int64)v24, a6, v12 + 80, v13, v14);
  v16 = &v22[40 - (int)v15];
  if ( *(_BYTE *)(v12 + 32) )
  {
    v15 = (unsigned __int64)((char *)sub_551BB0(
                                       v23,
                                       *(_DWORD *)(v12 + 76),
                                       *(unsigned __int8 **)(v12 + 16),
                                       *(_QWORD *)(v12 + 24),
                                       (unsigned __int64)&v22[40 - (int)v15],
                                       (unsigned __int64)&v16[(int)v15])
                           - (char *)v23) >> 2;
    v16 = v23;
    if ( v14 )
      goto LABEL_5;
  }
  else if ( v14 )
  {
    goto LABEL_5;
  }
  if ( a6 && (v13 & 0x200) != 0 )
  {
    if ( (v13 & 0x4A) == 0x40 )
    {
      LODWORD(v15) = v15 + 1;
      *--v16 = *(_DWORD *)(v12 + 96);
    }
    else
    {
      v16 -= 2;
      LODWORD(v15) = v15 + 2;
      v16[1] = *(_DWORD *)(v12 + 80 + 4 * (((v13 >> 14) & 1) + 2));
      *v16 = *(_DWORD *)(v12 + 96);
    }
  }
LABEL_5:
  v17 = *(_QWORD *)(a4 + 16);
  v18 = (int)v15;
  if ( v17 > (int)v15 )
  {
    v18 = (int)v17;
    sub_5530A4(a4, c[0], v22, v16, v17, (int)v15);
    v16 = v22;
  }
  *(_QWORD *)(a4 + 16) = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v16, v18);
  return a2;
}

