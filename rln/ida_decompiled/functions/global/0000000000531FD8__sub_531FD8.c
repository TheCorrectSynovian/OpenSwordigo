/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000531FD8
 * Mangled: sub_531FD8
 * Demangled: sub_531FD8
 *
 * Callers: 1
 *   0x0000000000531FD8  sub_531FD8
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
 *   insn=0x0000000000531FD8 string=0x0000000000531FDC "@"
 *   insn=0x0000000000532010 string=0x0000000000532014 "/)"
 *   insn=0x0000000000532020 string=0x0000000000532024 "\{y"
 *   insn=0x0000000000532024 string=0x0000000000532028 "\"
 *   insn=0x000000000053202C string=0x0000000000532030 "A\t"
 *   insn=0x0000000000532038 string=0x000000000053203C ""
 *   insn=0x0000000000532084 string=0x0000000000532088 "D"
 *   insn=0x0000000000532090 string=0x0000000000532094 "V\t"
 *   insn=0x00000000005320B0 string=0x00000000005320B4 " "
 *   insn=0x00000000005320B8 string=0x00000000005320BC "?` "
 *   insn=0x00000000005320E4 string=0x00000000005320E8 "4"
 *   insn=0x00000000005320F8 string=0x00000000005320FC "#3@"
 *   insn=0x00000000005320FC string=0x0000000000532100 "`"
 *   insn=0x0000000000532164 string=0x0000000000532168 "_c%"
 *   insn=0x0000000000532174 string=0x0000000000532178 "1"
 *   insn=0x0000000000532178 string=0x000000000052F63C "H"
 *   insn=0x000000000053219C string=0x00000000005321A0 "9"
 *   insn=0x00000000005321A4 string=0x00000000005321A8 "!@9"
 *   insn=0x00000000005321D4 string=0x00000000005321D8 """
 *   insn=0x00000000005321D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000005321DC string=0x00000000005321E0 "B"
 *   insn=0x0000000000532214 string=0x0000000000532218 "v"
 *   insn=0x0000000000532224 string=0x0000000000532228 "F("
 *   insn=0x0000000000532228 string=0x000000000053222C "\{y"
 *   insn=0x0000000000532248 string=0x000000000053224C "a"
 *   insn=0x0000000000532248 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000532250 string=0x0000000000532254 "!"
 *   insn=0x0000000000532254 string=0x0000000000532258 " "
 *   insn=0x0000000000532258 string=0x000000000053225C "EB"
 *   insn=0x000000000053226C string=0x00000000001FD590 "0'"
 *   insn=0x000000000053227C string=0x0000000000532280 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_531FD8(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5, signed __int64 a6)
{
  __int64 v10; // x25
  __int64 v11; // x26
  __int64 v12; // x28
  unsigned __int64 v13; // x24
  unsigned int v14; // w19
  unsigned __int64 v15; // x1
  int v16; // w0
  unsigned __int8 *v17; // x4
  __int64 v18; // x22
  __int64 v19; // x19
  __int64 v21; // x0
  __int64 v22; // x19
  _BYTE v23[2]; // [xsp+10h] [xbp-40h] BYREF
  _BYTE v24[38]; // [xsp+12h] [xbp-3Eh] BYREF
  _BYTE v25[24]; // [xsp+38h] [xbp-18h] BYREF
  int v26[2]; // [xsp+B8h] [xbp+68h]

  v26[0] = a5;
  v10 = sub_53C4D0(&qword_6FBDD0);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v12 = *(_QWORD *)(v11 + 8 * v10);
  if ( !v12 )
  {
    v21 = operator new(0x90u);
    *(_DWORD *)(v21 + 8) = 0;
    *(_QWORD *)v21 = off_6B70C0;
    v22 = v21;
    *(_QWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0;
    *(_BYTE *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_QWORD *)(v21 + 56) = 0;
    *(_QWORD *)(v21 + 64) = 0;
    *(_BYTE *)(v21 + 72) = 0;
    *(_BYTE *)(v21 + 73) = 0;
    *(_BYTE *)(v21 + 136) = 0;
    sub_52DBF0(v21, a4 + 208);
    sub_53C340(*(_QWORD *)(a4 + 208), v22, v10);
    v12 = *(_QWORD *)(v11 + 8 * v10);
  }
  v13 = *(unsigned int *)(a4 + 24);
  v14 = (*(_DWORD *)(a4 + 24) & 0x4A) != 8 && (*(_DWORD *)(a4 + 24) & 0x4A) != 64;
  if ( (a6 > 0) >= v14 )
    v15 = a6;
  else
    v15 = -a6;
  v16 = sub_531F30(
          (__int64)v25,
          v15,
          v12 + 74,
          *(_DWORD *)(a4 + 24),
          ((*(_DWORD *)(a4 + 24) & 0x4A) != 8) & (unsigned __int8)((*(_DWORD *)(a4 + 24) & 0x4A) != 64));
  v17 = &v23[40 - v16];
  if ( *(_BYTE *)(v12 + 32) )
  {
    v16 = sub_52F63C(
            (unsigned __int64)v24,
            *(_BYTE *)(v12 + 73),
            *(unsigned __int8 **)(v12 + 16),
            *(_QWORD *)(v12 + 24),
            (unsigned __int64)v17,
            &v17[v16])
        - (unsigned int)v24;
    v17 = v24;
    if ( v14 )
    {
LABEL_8:
      if ( a6 < 0 )
      {
        ++v16;
        *--v17 = *(_BYTE *)(v12 + 74);
      }
      else if ( (v13 & 0x800) != 0 )
      {
        ++v16;
        *--v17 = *(_BYTE *)(v12 + 75);
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
      ++v16;
      *--v17 = *(_BYTE *)(v12 + 78);
    }
    else
    {
      v17 -= 2;
      v16 += 2;
      v17[1] = *(_BYTE *)(v12 + 74 + ((v13 >> 14) & 1) + 2);
      *v17 = *(_BYTE *)(v12 + 78);
    }
  }
LABEL_11:
  v18 = *(_QWORD *)(a4 + 16);
  v19 = v16;
  if ( v18 > v16 )
  {
    v19 = (int)v18;
    sub_530D30(a4, v26[0], v23, v17, *(_QWORD *)(a4 + 16), v16);
    v17 = v23;
  }
  *(_QWORD *)(a4 + 16) = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v17, v19);
  return a2;
}

