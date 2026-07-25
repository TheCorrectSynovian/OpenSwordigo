/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005542C8
 * Mangled: sub_5542C8
 * Demangled: sub_5542C8
 *
 * Callers: 1
 *   0x00000000005542C8  sub_5542C8
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
 *   0x000000000055421C  sub_55421C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000005542C8 string=0x00000000005542CC "@"
 *   insn=0x00000000005542FC string=0x0000000000554300 "t"
 *   insn=0x000000000055430C string=0x0000000000554310 "[{y"
 *   insn=0x0000000000554318 string=0x000000000055431C "@\t"
 *   insn=0x0000000000554320 string=0x0000000000554324 "yC"
 *   insn=0x0000000000554364 string=0x0000000000554368 "a"
 *   insn=0x0000000000554370 string=0x0000000000554374 "F"
 *   insn=0x0000000000554378 string=0x000000000055437C "3"
 *   insn=0x000000000055437C string=0x0000000000554480 "\"
 *   insn=0x0000000000554380 string=0x00000000005544B4 "aS@"
 *   insn=0x0000000000554384 string=0x0000000000554424 "aW@"
 *   insn=0x000000000055439C string=0x00000000005543A0 "!x"
 *   insn=0x00000000005543A4 string=0x00000000005543A8 "!"
 *   insn=0x00000000005543AC string=0x00000000005543B0 "_`!"
 *   insn=0x00000000005543C0 string=0x00000000005543C4 "8"
 *   insn=0x00000000005543D0 string=0x00000000005543D4 "4"
 *   insn=0x00000000005543E4 string=0x00000000005543E8 "c0@"
 *   insn=0x00000000005543E8 string=0x00000000005543EC "`"
 *   insn=0x000000000055443C string=0x0000000000554440 "Z"
 *   insn=0x0000000000554440 string=0x0000000000554444 "aO@"
 *   insn=0x0000000000554444 string=0x0000000000554448 "Z{"
 *   insn=0x0000000000554448 string=0x000000000055444C "b@"
 *   insn=0x000000000055444C string=0x0000000000554450 "Z"
 *   insn=0x0000000000554450 string=0x0000000000554454 "c"
 *   insn=0x000000000055446C string=0x0000000000551BB0 "H"
 *   insn=0x0000000000554478 string=0x000000000055447C "3"
 *   insn=0x0000000000554480 string=0x0000000000554484 "6"
 *   insn=0x000000000055448C string=0x000000000055452C "ac@"
 *   insn=0x000000000055449C string=0x00000000005544A0 "!{|"
 *   insn=0x00000000005544A4 string=0x00000000005544A8 "ac@"
 *   insn=0x00000000005544C8 string=0x00000000005544CC "E"
 *   insn=0x00000000005544CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000005544D4 string=0x00000000005544D8 "B"
 *   insn=0x000000000055450C string=0x0000000000554510 "b"
 *   insn=0x0000000000554520 string=0x0000000000554524 "[{y"
 *   insn=0x0000000000554524 string=0x0000000000554528 "|"
 *   insn=0x0000000000554540 string=0x0000000000554544 "a"
 *   insn=0x0000000000554540 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000554548 string=0x000000000055454C "!"
 *   insn=0x000000000055454C string=0x0000000000554550 " "
 *   insn=0x0000000000554560 string=0x0000000000554564 ""
 *   insn=0x0000000000554564 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000554574 string=0x0000000000554578 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5542C8(__int64 a1, __int64 a2, char a3, __int64 a4, wchar_t a5, signed __int64 a6)
{
  __int64 v10; // x25
  __int64 v11; // x26
  __int64 v12; // x27
  unsigned __int64 v13; // x28
  unsigned int v14; // w19
  unsigned __int64 v15; // x1
  unsigned __int64 v16; // x0
  wchar_t *v17; // x6
  __int64 v18; // x4
  __int64 v19; // x19
  __int64 v21; // x0
  _DWORD *v22; // x19
  wchar_t v23[2]; // [xsp+10h] [xbp-B0h] BYREF
  _DWORD v24[38]; // [xsp+18h] [xbp-A8h] BYREF
  _BYTE v25[16]; // [xsp+B0h] [xbp-10h] BYREF
  wchar_t c[2]; // [xsp+128h] [xbp+68h]

  c[0] = a5;
  v10 = sub_53C4D0(&qword_6FD2A8);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !v12 )
  {
    v21 = operator new(0x150u);
    *(_DWORD *)(v21 + 8) = 0;
    *(_QWORD *)v21 = off_6B7C80;
    v22 = (_DWORD *)v21;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
    *(_BYTE *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_QWORD *)(v21 + 56) = 0;
    *(_QWORD *)(v21 + 64) = 0;
    *(_DWORD *)(v21 + 72) = 0;
    *(_DWORD *)(v21 + 76) = 0;
    *(_BYTE *)(v21 + 328) = 0;
    sub_54FE98(v21, a4 + 208);
    sub_53C340(*(_QWORD *)(a4 + 208), v22, v10);
    v12 = *(_QWORD *)(v11 + 8 * v10);
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = (*(_DWORD *)(a4 + 24) & 0x4A) != 8 && (*(_DWORD *)(a4 + 24) & 0x4A) != 64;
  if ( (a6 > 0) >= v14 )
    v15 = a6;
  else
    v15 = -a6;
  LODWORD(v16) = sub_55421C((__int64)v25, v15, v12 + 80, *(_DWORD *)(a4 + 24), v14);
  v17 = &v23[40 - (int)v16];
  if ( *(_BYTE *)(v12 + 32) )
  {
    v16 = (unsigned __int64)((char *)sub_551BB0(
                                       v24,
                                       *(_DWORD *)(v12 + 76),
                                       *(unsigned __int8 **)(v12 + 16),
                                       *(_QWORD *)(v12 + 24),
                                       (unsigned __int64)&v23[40 - (int)v16],
                                       (unsigned __int64)&v17[(int)v16])
                           - (char *)v24) >> 2;
    v17 = v24;
    if ( v14 )
    {
LABEL_8:
      if ( a6 < 0 )
      {
        LODWORD(v16) = v16 + 1;
        *--v17 = *(_DWORD *)(v12 + 80);
      }
      else if ( (v13 & 0x800) != 0 )
      {
        LODWORD(v16) = v16 + 1;
        *--v17 = *(_DWORD *)(v12 + 84);
      }
      goto LABEL_11;
    }
  }
  else if ( v14 )
  {
    goto LABEL_8;
  }
  if ( (v13 & 0x200) != 0 && a6 )
  {
    if ( (v13 & 0x4A) == 0x40 )
    {
      LODWORD(v16) = v16 + 1;
      *--v17 = *(_DWORD *)(v12 + 96);
    }
    else
    {
      v17 -= 2;
      LODWORD(v16) = v16 + 2;
      v17[1] = *(_DWORD *)(v12 + 80 + 4 * (((v13 >> 14) & 1) + 2));
      *v17 = *(_DWORD *)(v12 + 96);
    }
  }
LABEL_11:
  v18 = *(_QWORD *)(a4 + 16);
  v19 = (int)v16;
  if ( v18 > (int)v16 )
  {
    v19 = (int)v18;
    sub_5530A4(a4, c[0], v23, v17, v18, (int)v16);
    v17 = v23;
  }
  *(_QWORD *)(a4 + 16) = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v17, v19);
  return a2;
}

