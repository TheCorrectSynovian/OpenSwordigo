/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053228C
 * Mangled: sub_53228C
 * Demangled: sub_53228C
 *
 * Callers: 1
 *   0x000000000053228C  sub_53228C
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052F63C  sub_52F63C
 *   0x0000000000530D30  sub_530D30
 *   0x0000000000531F30  sub_531F30
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000053228C string=0x0000000000532290 "@"
 *   insn=0x00000000005322D4 string=0x00000000005322D8 "\{t"
 *   insn=0x00000000005322D8 string=0x00000000005322DC "|"
 *   insn=0x00000000005322E0 string=0x00000000005322E4 "S\t"
 *   insn=0x00000000005322EC string=0x00000000005322F0 "3"
 *   insn=0x000000000053232C string=0x0000000000532330 "d"
 *   insn=0x0000000000532330 string=0x0000000000532334 "%"
 *   insn=0x0000000000532338 string=0x0000000000532414 "X"
 *   insn=0x0000000000532358 string=0x000000000053235C "?` "
 *   insn=0x0000000000532374 string=0x0000000000532378 "n"
 *   insn=0x0000000000532384 string=0x0000000000532388 "5"
 *   insn=0x000000000053239C string=0x00000000005323A0 "`"
 *   insn=0x0000000000532404 string=0x000000000052F63C "H"
 *   insn=0x000000000053240C string=0x0000000000532410 "t"
 *   insn=0x0000000000532414 string=0x0000000000532418 "9"
 *   insn=0x000000000053241C string=0x0000000000532420 "`"
 *   insn=0x0000000000532420 string=0x0000000000532424 "';N"
 *   insn=0x0000000000532428 string=0x000000000053242C "Z"
 *   insn=0x0000000000532430 string=0x0000000000532434 "A@9"
 *   insn=0x0000000000532448 string=0x000000000053244C "e"
 *   insn=0x000000000053244C string=0x0000000000532450 """
 *   insn=0x000000000053244C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000532454 string=0x0000000000532458 "B"
 *   insn=0x00000000005324A0 string=0x00000000005324A4 "\{t"
 *   insn=0x00000000005324C0 string=0x00000000005324C4 "a"
 *   insn=0x00000000005324C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005324C8 string=0x00000000005324CC "!"
 *   insn=0x00000000005324CC string=0x00000000005324D0 " "
 *   insn=0x00000000005324E0 string=0x00000000005324E4 "+,"
 *   insn=0x00000000005324E4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005324F4 string=0x00000000005324F8 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53228C(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5, unsigned __int64 a6)
{
  __int64 v10; // x20
  __int64 v11; // x26
  __int64 v12; // x28
  unsigned __int64 v13; // x25
  _BOOL4 v14; // w20
  int v15; // w0
  unsigned __int8 *v16; // x4
  __int64 v17; // x20
  __int64 v18; // x19
  __int64 v20; // x0
  __int64 v21; // x19
  _BYTE v22[2]; // [xsp+10h] [xbp-40h] BYREF
  _BYTE v23[38]; // [xsp+12h] [xbp-3Eh] BYREF
  _BYTE v24[24]; // [xsp+38h] [xbp-18h] BYREF
  int v25[2]; // [xsp+B8h] [xbp+68h]

  v25[0] = a5;
  v10 = sub_53C4D0(&qword_6FBDD0);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !v12 )
  {
    v20 = operator new(0x90u);
    *(_DWORD *)(v20 + 8) = 0;
    *(_QWORD *)v20 = off_6B70C0;
    v21 = v20;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = 0;
    *(_BYTE *)(v20 + 32) = 0;
    *(_QWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 48) = 0;
    *(_QWORD *)(v20 + 56) = 0;
    *(_QWORD *)(v20 + 64) = 0;
    *(_BYTE *)(v20 + 72) = 0;
    *(_BYTE *)(v20 + 73) = 0;
    *(_BYTE *)(v20 + 136) = 0;
    sub_52DBF0(v20, a4 + 208);
    sub_53C340(*(_QWORD *)(a4 + 208), v21, v10);
    v12 = *(_QWORD *)(v11 + 8 * v10);
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = (*(_DWORD *)(a4 + 24) & 0x4A) != 8 && (*(_DWORD *)(a4 + 24) & 0x4A) != 64;
  v15 = sub_531F30((__int64)v24, a6, v12 + 74, v13, v14);
  v16 = &v22[40 - v15];
  if ( *(_BYTE *)(v12 + 32) )
  {
    v15 = sub_52F63C(
            (unsigned __int64)v23,
            *(_BYTE *)(v12 + 73),
            *(unsigned __int8 **)(v12 + 16),
            *(_QWORD *)(v12 + 24),
            (unsigned __int64)v16,
            &v16[v15])
        - (unsigned int)v23;
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
      ++v15;
      *--v16 = *(_BYTE *)(v12 + 78);
    }
    else
    {
      v16 -= 2;
      v15 += 2;
      v16[1] = *(_BYTE *)(v12 + 74 + ((v13 >> 14) & 1) + 2);
      *v16 = *(_BYTE *)(v12 + 78);
    }
  }
LABEL_5:
  v17 = *(_QWORD *)(a4 + 16);
  v18 = v15;
  if ( v17 > v15 )
  {
    v18 = (int)v17;
    sub_530D30(a4, v25[0], v22, v16, *(_QWORD *)(a4 + 16), v15);
    v16 = v22;
  }
  *(_QWORD *)(a4 + 16) = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v16, v18);
  return a2;
}

