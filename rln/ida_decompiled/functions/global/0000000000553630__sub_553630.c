/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000553630
 * Mangled: sub_553630
 * Demangled: sub_553630
 *
 * Callers: 1
 *   0x0000000000553630  sub_553630
 *
 * Callees: 15
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203020  .memchr
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000053C9C4  sub_53C9C4
 *   0x000000000054F6AC  sub_54F6AC
 *   0x000000000054FE98  sub_54FE98
 *   0x0000000000551F08  sub_551F08
 *   0x00000000005530A4  sub_5530A4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x000000000055364C string=0x0000000000553650 "@"
 *   insn=0x0000000000553674 string=0x0000000000553678 "`j@"
 *   insn=0x0000000000553678 string=0x000000000055367C "wB"
 *   insn=0x000000000055367C string=0x0000000000553680 ""
 *   insn=0x0000000000553680 string=0x0000000000553684 "|{v"
 *   insn=0x0000000000553688 string=0x000000000055368C "d"
 *   insn=0x00000000005536B8 string=0x00000000005536BC "a"
 *   insn=0x00000000005536BC string=0x00000000005536C0 "@"
 *   insn=0x00000000005536C0 string=0x00000000005536C4 "a"
 *   insn=0x00000000005536C4 string=0x00000000005536C8 "C@"
 *   insn=0x00000000005536C8 string=0x00000000005536CC "` "
 *   insn=0x00000000005536DC string=0x00000000005536E0 "?` "
 *   insn=0x00000000005536E8 string=0x000000000053BE10 "@"
 *   insn=0x0000000000553724 string=0x0000000000553728 "C"
 *   insn=0x000000000055372C string=0x0000000000553730 "cx"
 *   insn=0x0000000000553734 string=0x0000000000553738 "c"
 *   insn=0x0000000000553754 string=0x0000000000553758 "v"
 *   insn=0x000000000055375C string=0x0000000000553760 "0"
 *   insn=0x000000000055377C string=0x0000000000553780 "x\n@"
 *   insn=0x0000000000553784 string=0x0000000000553788 ""
 *   insn=0x0000000000553790 string=0x0000000000553794 "!x"
 *   insn=0x0000000000553798 string=0x000000000055379C "!"
 *   insn=0x00000000005537A0 string=0x00000000005537A4 "_`!"
 *   insn=0x00000000005537BC string=0x00000000005537C0 "9"
 *   insn=0x00000000005537CC string=0x00000000005537D0 "!"
 *   insn=0x00000000005537E0 string=0x00000000005537E4 "c0@"
 *   insn=0x00000000005537E4 string=0x00000000005537E8 "`"
 *   insn=0x00000000005537F8 string=0x00000000005537FC "!"
 *   insn=0x0000000000553824 string=0x0000000000553828 "m"
 *   insn=0x000000000055382C string=0x0000000000553830 "?"
 *   insn=0x0000000000553830 string=0x0000000000553834 "h"
 *   insn=0x0000000000553848 string=0x000000000055384C "?"
 *   insn=0x0000000000553870 string=0x0000000000553874 "?`6"
 *   insn=0x000000000055387C string=0x0000000000553880 " "
 *   insn=0x00000000005538B0 string=0x00000000005538B4 ""
 *   insn=0x00000000005538B8 string=0x00000000005538BC "v"
 *   insn=0x00000000005538C4 string=0x00000000005538C8 "{"
 *   insn=0x00000000005538CC string=0x00000000005538D0 "8"
 *   insn=0x00000000005538E0 string=0x00000000005538E4 "?"
 *   insn=0x00000000005538E4 string=0x00000000005538E8 """
 *   insn=0x00000000005538E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000005538EC string=0x00000000005538F0 "B"
 *   insn=0x0000000000553924 string=0x0000000000553928 "\"
 *   insn=0x0000000000553928 string=0x000000000055392C "`j@"
 *   insn=0x0000000000553938 string=0x000000000055393C "|{v"
 *   insn=0x000000000055393C string=0x0000000000553940 "S"
 *   insn=0x0000000000553944 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000553954 string=0x0000000000553958 "!"
 *   insn=0x0000000000553958 string=0x000000000055395C " "
 *   insn=0x0000000000553964 string=0x0000000000553968 "\n"
 *   insn=0x0000000000553968 string=0x00000000001FD590 "0'"
 *   insn=0x000000000055397C string=0x0000000000553980 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_553630(__int64 a1, __int64 a2, char a3, _QWORD *a4, wchar_t a5, char a6, long double a7)
{
  __int64 v12; // x22
  __int64 v13; // x27
  __int64 v14; // x28
  __int64 v15; // x22
  void *v16; // x0
  int v17; // w27
  __int64 v18; // x22
  _BYTE *v19; // x0
  int v20; // w1
  wchar_t *v21; // x4
  __int64 v22; // x24
  __int64 v23; // x5
  int v25; // w24
  __int64 v26; // x5
  __int64 v27; // x0
  _DWORD *v28; // x28
  wchar_t v29[2]; // [xsp+10h] [xbp+0h] BYREF
  __int64 v30; // [xsp+78h] [xbp+68h]
  long double v31; // [xsp+80h] [xbp+70h]
  int v32; // [xsp+94h] [xbp+84h] BYREF
  __int64 v33; // [xsp+98h] [xbp+88h] BYREF
  char v34[16]; // [xsp+A0h] [xbp+90h] BYREF

  v30 = a1;
  v31 = a7;
  v12 = sub_53C4D0(&qword_6FD2A8);
  v13 = *(_QWORD *)(a4[26] + 24LL);
  v14 = *(_QWORD *)(v13 + 8 * v12);
  if ( !v14 )
  {
    v27 = operator new(0x150u);
    *(_DWORD *)(v27 + 8) = 0;
    *(_QWORD *)v27 = off_6B7C80;
    v28 = (_DWORD *)v27;
    *(_QWORD *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 24) = 0;
    *(_BYTE *)(v27 + 32) = 0;
    *(_QWORD *)(v27 + 40) = 0;
    *(_QWORD *)(v27 + 48) = 0;
    *(_QWORD *)(v27 + 56) = 0;
    *(_QWORD *)(v27 + 64) = 0;
    *(_DWORD *)(v27 + 72) = 0;
    *(_DWORD *)(v27 + 76) = 0;
    *(_BYTE *)(v27 + 328) = 0;
    sub_54FE98(v27, (__int64)(a4 + 26));
    sub_53C340(a4[26], v28, v12);
    v14 = *(_QWORD *)(v13 + 8 * v12);
  }
  v15 = 6;
  if ( (__int64)a4[1] >= 0 )
    v15 = a4[1];
  sub_53C9C4((__int64)a4, v34, a6);
  v33 = sub_53BE10();
  v32 = sub_52BA00((__int64)&v33, (char *)v29, 0, v34, v15, *(double *)&v31);
  v16 = sub_54F6AC((__int64)(a4 + 26));
  (*(void (__fastcall **)(void *, wchar_t *, char *, wchar_t *))(*(_QWORD *)v16 + 88LL))(
    v16,
    v29,
    (char *)v29 + v32,
    v29);
  v17 = v32;
  v18 = v32;
  v19 = memchr(v29, 46, v32);
  if ( v19 )
  {
    v20 = *(unsigned __int8 *)(v14 + 32);
    v21 = &v29[v19 - (_BYTE *)v29];
    *v21 = *(_DWORD *)(v14 + 72);
    if ( !v20 )
      goto LABEL_7;
  }
  else
  {
    if ( !*(_BYTE *)(v14 + 32)
      || v17 > 2 && (BYTE1(v29[0]) > 0x39u || (unsigned __int8)(BYTE2(v29[0]) - 48) > 9u || BYTE1(v29[0]) <= 0x2Fu) )
    {
      goto LABEL_7;
    }
    v21 = 0;
  }
  if ( ((LOBYTE(v29[0]) - 43) & 0xFD) != 0 )
  {
    v25 = 0;
    v26 = 0;
  }
  else
  {
    v25 = 1;
    v32 = v17 - 1;
    v26 = 1;
  }
  sub_551F08(
    v30,
    *(unsigned __int8 **)(v14 + 16),
    *(_QWORD *)(v14 + 24),
    *(_DWORD *)(v14 + 76),
    v21,
    (char *)&v29[v26],
    (unsigned __int64)&v29[v26],
    &v32);
  v32 += v25;
  v18 = v32;
LABEL_7:
  v22 = a4[2];
  if ( v22 > v18 )
  {
    v23 = v18;
    v18 = (int)v22;
    sub_5530A4((__int64)a4, a5, v29, v29, a4[2], v23);
    v32 = v22;
  }
  a4[2] = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v29, v18);
  return a2;
}

