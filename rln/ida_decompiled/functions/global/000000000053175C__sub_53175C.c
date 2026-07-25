/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053175C
 * Mangled: sub_53175C
 * Demangled: sub_53175C
 *
 * Callers: 1
 *   0x000000000053175C  sub_53175C
 *
 * Callees: 12
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052F63C  sub_52F63C
 *   0x0000000000530D30  sub_530D30
 *   0x00000000005316B4  sub_5316B4
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 68
 *   insn=0x000000000053175C string=0x0000000000531760 "@"
 *   insn=0x0000000000531794 string=0x0000000000531798 "N+"
 *   insn=0x00000000005317A4 string=0x00000000005317A8 "\{y"
 *   insn=0x00000000005317A8 string=0x00000000005317AC "\"
 *   insn=0x00000000005317B0 string=0x00000000005317B4 "A\t"
 *   insn=0x00000000005317BC string=0x00000000005317C0 ""
 *   insn=0x0000000000531808 string=0x000000000053180C "D"
 *   insn=0x0000000000531814 string=0x0000000000531818 "V\t"
 *   insn=0x0000000000531834 string=0x0000000000531838 " "
 *   insn=0x000000000053183C string=0x0000000000531840 "?` "
 *   insn=0x0000000000531858 string=0x000000000053185C "5"
 *   insn=0x0000000000531868 string=0x000000000053186C "4"
 *   insn=0x000000000053187C string=0x0000000000531880 "#3@"
 *   insn=0x0000000000531880 string=0x0000000000531884 "`"
 *   insn=0x00000000005318E8 string=0x00000000005318EC "_c%"
 *   insn=0x00000000005318F8 string=0x00000000005318FC "P"
 *   insn=0x00000000005318FC string=0x000000000052F63C "H"
 *   insn=0x0000000000531920 string=0x0000000000531924 "9"
 *   insn=0x0000000000531928 string=0x000000000053192C "!@9"
 *   insn=0x0000000000531954 string=0x0000000000531958 """
 *   insn=0x0000000000531958 string=0x000000000053195C """
 *   insn=0x0000000000531958 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000531960 string=0x0000000000531964 "B"
 *   insn=0x00000000005319A8 string=0x00000000005319AC "e*"
 *   insn=0x00000000005319AC string=0x00000000005319B0 "\{y"
 *   insn=0x00000000005319CC string=0x00000000005319D0 "a"
 *   insn=0x00000000005319CC string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005319D4 string=0x00000000005319D8 "!"
 *   insn=0x00000000005319D8 string=0x00000000005319DC " "
 *   insn=0x00000000005319DC string=0x00000000005319E0 "dD"
 *   insn=0x00000000005319F0 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000531A04 string=0x0000000000531A08 "x"
 *   insn=0x0000000000531A30 string=0x0000000000531A34 "U"
 *   insn=0x0000000000531A34 string=0x0000000000531A38 "8"
 *   insn=0x0000000000531A38 string=0x0000000000531A7C "@"
 *   insn=0x0000000000531A3C string=0x0000000000531A40 "%"
 *   insn=0x0000000000531A40 string=0x0000000000531A44 "F"
 *   insn=0x0000000000531A48 string=0x0000000000531A4C "5"
 *   insn=0x0000000000531A98 string=0x0000000000531A9C "9"
 *   insn=0x0000000000531AA8 string=0x0000000000531AAC "9"
 *   insn=0x0000000000531AB0 string=0x0000000000531AB4 "-"
 *   insn=0x0000000000531AB4 string=0x0000000000531AB8 ""
 *   insn=0x0000000000531ABC string=0x0000000000531AC0 "`{"
 *   insn=0x0000000000531AD4 string=0x0000000000531AD8 "Z("
 *   insn=0x0000000000531AD8 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000531AEC string=0x0000000000531AF0 "{"
 *   insn=0x0000000000531AEC string=0x0000000000531B64 "u"
 *   insn=0x0000000000531B04 string=0x0000000000531B08 "c0@"
 *   insn=0x0000000000531B08 string=0x0000000000531B0C "`"
 *   insn=0x0000000000531B10 string=0x0000000000531B14 "`"
 *   insn=0x0000000000531B14 string=0x0000000000531B18 "5"
 *   insn=0x0000000000531B28 string=0x0000000000531B2C "9"
 *   insn=0x0000000000531B30 string=0x0000000000531B34 ","
 *   insn=0x0000000000531B4C string=0x0000000000531B50 "c0@"
 *   insn=0x0000000000531B50 string=0x0000000000531B54 "`"
 *   insn=0x0000000000531B54 string=0x0000000000531B58 "?"
 *   insn=0x0000000000531B74 string=0x0000000000531B78 "c0@"
 *   insn=0x0000000000531B78 string=0x0000000000531B7C "`"
 *   insn=0x0000000000531B7C string=0x0000000000531B80 "?"
 *   insn=0x0000000000531B88 string=0x0000000000531B8C "{"
 *   insn=0x0000000000531B98 string=0x0000000000531B9C "c0@"
 *   insn=0x0000000000531B9C string=0x0000000000531BA0 "`"
 *   insn=0x0000000000531BB4 string=0x0000000000531BB8 """
 *   insn=0x0000000000531BBC string=0x0000000000531BC0 "B"
 *   insn=0x0000000000531C20 string=0x0000000000531C24 "!"
 *   insn=0x0000000000531C24 string=0x0000000000531C28 " "
 *   insn=0x0000000000531C38 string=0x0000000000531C3C "U."
 *   insn=0x0000000000531C40 string=0x0000000000531C44 " ?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53175C(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5, signed __int64 a6)
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
  _BYTE v23[2]; // [xsp+80h] [xbp-40h] BYREF
  _BYTE v24[38]; // [xsp+82h] [xbp-3Eh] BYREF
  _BYTE v25[24]; // [xsp+A8h] [xbp-18h] BYREF
  int v26[2]; // [xsp+128h] [xbp+68h]

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
  v16 = sub_5316B4(
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

