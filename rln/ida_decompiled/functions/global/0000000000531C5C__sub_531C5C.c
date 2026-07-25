/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000531C5C
 * Mangled: sub_531C5C
 * Demangled: sub_531C5C
 *
 * Callers: 2
 *   0x0000000000531C5C  sub_531C5C
 *   0x0000000000531ED4  sub_531ED4
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
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
 * Referenced strings: 32
 *   insn=0x0000000000531C5C string=0x0000000000531C60 "@"
 *   insn=0x0000000000531CA4 string=0x0000000000531CA8 "\{t"
 *   insn=0x0000000000531CA8 string=0x0000000000531CAC "|"
 *   insn=0x0000000000531CB0 string=0x0000000000531CB4 "S\t"
 *   insn=0x0000000000531CBC string=0x0000000000531CC0 "3"
 *   insn=0x0000000000531CEC string=0x0000000000531CF0 "q"
 *   insn=0x0000000000531CFC string=0x0000000000531D00 "d"
 *   insn=0x0000000000531D00 string=0x0000000000531D04 "%"
 *   insn=0x0000000000531D08 string=0x0000000000531DE4 "X"
 *   insn=0x0000000000531D28 string=0x0000000000531D2C "?` "
 *   insn=0x0000000000531D54 string=0x0000000000531D58 "5"
 *   insn=0x0000000000531D6C string=0x0000000000531D70 "`"
 *   insn=0x0000000000531DD4 string=0x000000000052F63C "H"
 *   insn=0x0000000000531DDC string=0x0000000000531DE0 "t"
 *   insn=0x0000000000531DE4 string=0x0000000000531DE8 "9"
 *   insn=0x0000000000531DEC string=0x0000000000531DF0 "`"
 *   insn=0x0000000000531DF0 string=0x0000000000531DF4 "';N"
 *   insn=0x0000000000531DF8 string=0x0000000000531DFC "Z"
 *   insn=0x0000000000531E00 string=0x0000000000531E04 "A@9"
 *   insn=0x0000000000531E1C string=0x0000000000531E20 """
 *   insn=0x0000000000531E1C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000531E24 string=0x0000000000531E28 "B"
 *   insn=0x0000000000531E5C string=0x0000000000531E60 "d"
 *   insn=0x0000000000531E6C string=0x0000000000531E70 "4)"
 *   insn=0x0000000000531E70 string=0x0000000000531E74 "\{t"
 *   insn=0x0000000000531E90 string=0x0000000000531E94 "a"
 *   insn=0x0000000000531E90 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000531E98 string=0x0000000000531E9C "!"
 *   insn=0x0000000000531E9C string=0x0000000000531EA0 " "
 *   insn=0x0000000000531EA0 string=0x0000000000531EA4 "3C"
 *   insn=0x0000000000531EB4 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000531EC4 string=0x0000000000531EC8 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_531C5C(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5, unsigned __int64 a6)
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
  v15 = sub_5316B4((__int64)v24, a6, v12 + 74, v13, v14);
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

