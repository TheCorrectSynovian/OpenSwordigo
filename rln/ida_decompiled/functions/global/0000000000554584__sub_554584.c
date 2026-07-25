/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000554584
 * Mangled: sub_554584
 * Demangled: sub_554584
 *
 * Callers: 1
 *   0x0000000000554584  sub_554584
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
 * Referenced strings: 37
 *   insn=0x0000000000554584 string=0x0000000000554588 "@"
 *   insn=0x00000000005545C8 string=0x00000000005545CC "[{y"
 *   insn=0x00000000005545D4 string=0x00000000005545D8 "@\t"
 *   insn=0x00000000005545DC string=0x00000000005545E0 "yC"
 *   insn=0x0000000000554614 string=0x0000000000554618 "a"
 *   insn=0x0000000000554620 string=0x0000000000554624 "F"
 *   insn=0x0000000000554624 string=0x0000000000554628 "!"
 *   insn=0x0000000000554628 string=0x000000000055462C "S"
 *   insn=0x0000000000554644 string=0x0000000000554648 "!x"
 *   insn=0x000000000055464C string=0x0000000000554650 "!"
 *   insn=0x0000000000554654 string=0x0000000000554658 "_`!"
 *   insn=0x0000000000554678 string=0x000000000055467C "4"
 *   insn=0x000000000055468C string=0x0000000000554690 "c0@"
 *   insn=0x0000000000554690 string=0x0000000000554694 "`"
 *   insn=0x00000000005546D0 string=0x00000000005546D4 "Z"
 *   insn=0x00000000005546D4 string=0x00000000005546D8 "aO@"
 *   insn=0x00000000005546D8 string=0x00000000005546DC "Z{"
 *   insn=0x00000000005546DC string=0x00000000005546E0 "b@"
 *   insn=0x00000000005546E0 string=0x00000000005546E4 "Z"
 *   insn=0x00000000005546E4 string=0x00000000005546E8 "c"
 *   insn=0x00000000005546FC string=0x0000000000554700 ","
 *   insn=0x0000000000554700 string=0x0000000000551BB0 "H"
 *   insn=0x000000000055471C string=0x0000000000554720 "`"
 *   insn=0x0000000000554720 string=0x00000000005547AC "ac@"
 *   insn=0x0000000000554730 string=0x0000000000554734 "!{|"
 *   insn=0x0000000000554738 string=0x000000000055473C "ac@"
 *   insn=0x000000000055474C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000554754 string=0x0000000000554758 "B"
 *   insn=0x00000000005547A0 string=0x00000000005547A4 "[{y"
 *   insn=0x00000000005547C0 string=0x00000000005547C4 "a"
 *   insn=0x00000000005547C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005547C8 string=0x00000000005547CC "!"
 *   insn=0x00000000005547CC string=0x00000000005547D0 " "
 *   insn=0x00000000005547E0 string=0x00000000005547E4 "k"
 *   insn=0x00000000005547E4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005547E8 string=0x00000000005547EC "6"
 *   insn=0x00000000005547F4 string=0x00000000005547F8 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_554584(__int64 a1, __int64 a2, char a3, __int64 a4, wchar_t a5, unsigned __int64 a6)
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
  LODWORD(v15) = sub_55421C((__int64)v24, a6, v12 + 80, v13, v14);
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

