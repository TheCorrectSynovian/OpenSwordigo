/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005532C0
 * Mangled: sub_5532C0
 * Demangled: sub_5532C0
 *
 * Callers: 1
 *   0x00000000005532C0  sub_5532C0
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
 * Referenced strings: 63
 *   insn=0x00000000005532C8 string=0x00000000005532CC "@`"
 *   insn=0x00000000005532D4 string=0x00000000005532D8 "@"
 *   insn=0x0000000000553300 string=0x0000000000553304 "s"
 *   insn=0x0000000000553318 string=0x000000000055331C "["
 *   insn=0x0000000000553358 string=0x000000000055335C "a"
 *   insn=0x000000000055335C string=0x0000000000553360 "sz"
 *   insn=0x000000000055336C string=0x0000000000553370 "s"
 *   insn=0x0000000000553370 string=0x0000000000553374 "s~@"
 *   insn=0x0000000000553374 string=0x0000000000553378 "sz"
 *   insn=0x0000000000553378 string=0x000000000055337C "s"
 *   insn=0x0000000000553388 string=0x000000000053BE10 "@"
 *   insn=0x00000000005533C4 string=0x00000000005533C8 "C"
 *   insn=0x00000000005533CC string=0x00000000005533D0 "cx"
 *   insn=0x00000000005533D4 string=0x00000000005533D8 "c"
 *   insn=0x00000000005533D8 string=0x00000000005533DC "_c#"
 *   insn=0x00000000005533FC string=0x0000000000553400 ""
 *   insn=0x0000000000553404 string=0x00000000005534C0 "`"
 *   insn=0x0000000000553408 string=0x000000000055340C "bK@"
 *   insn=0x000000000055340C string=0x0000000000553410 "a"
 *   insn=0x000000000055341C string=0x00000000005534FC "@"
 *   insn=0x0000000000553420 string=0x0000000000553424 "?"
 *   insn=0x0000000000553424 string=0x0000000000553428 ""
 *   insn=0x0000000000553428 string=0x000000000055342C "!"
 *   insn=0x0000000000553430 string=0x0000000000553434 "!x"
 *   insn=0x0000000000553438 string=0x000000000055343C "!"
 *   insn=0x0000000000553440 string=0x0000000000553444 "_`!"
 *   insn=0x0000000000553454 string=0x0000000000553458 "3"
 *   insn=0x000000000055346C string=0x0000000000553470 "!"
 *   insn=0x0000000000553480 string=0x0000000000553484 "c0@"
 *   insn=0x0000000000553484 string=0x0000000000553488 "`"
 *   insn=0x0000000000553498 string=0x000000000055349C "!"
 *   insn=0x00000000005534C8 string=0x00000000005534CC "m"
 *   insn=0x00000000005534CC string=0x00000000005534D0 "A@9?"
 *   insn=0x00000000005534D0 string=0x00000000005534D4 "?"
 *   insn=0x00000000005534D4 string=0x00000000005534D8 "H"
 *   insn=0x00000000005534D8 string=0x00000000005534DC "@@9"
 *   insn=0x00000000005534EC string=0x00000000005534F0 "?"
 *   insn=0x00000000005534F0 string=0x00000000005534F4 "i"
 *   insn=0x00000000005534FC string=0x0000000000553500 "s"
 *   insn=0x0000000000553500 string=0x0000000000553504 "sz"
 *   insn=0x000000000055350C string=0x0000000000553510 "s"
 *   insn=0x0000000000553514 string=0x0000000000553518 "?`3"
 *   insn=0x0000000000553520 string=0x0000000000553524 " "
 *   insn=0x000000000055352C string=0x0000000000553530 "a@"
 *   insn=0x0000000000553534 string=0x0000000000553538 "b"
 *   insn=0x0000000000553538 string=0x000000000055353C "e"
 *   insn=0x000000000055353C string=0x0000000000553540 "cO@"
 *   insn=0x000000000055354C string=0x0000000000553550 "n"
 *   insn=0x0000000000553554 string=0x0000000000553558 "\"
 *   insn=0x0000000000553570 string=0x0000000000553574 ":"
 *   insn=0x0000000000553588 string=0x000000000055358C """
 *   insn=0x0000000000553588 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000553590 string=0x0000000000553594 "B"
 *   insn=0x00000000005535C8 string=0x00000000005535CC "3"
 *   insn=0x00000000005535D8 string=0x00000000005535DC "Y"
 *   insn=0x00000000005535E0 string=0x00000000005535E4 "O"
 *   insn=0x00000000005535E8 string=0x00000000005535EC "a"
 *   insn=0x00000000005535E8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005535F0 string=0x00000000005535F4 "a"
 *   insn=0x00000000005535F8 string=0x00000000005535FC "!"
 *   insn=0x00000000005535FC string=0x0000000000553600 " "
 *   insn=0x000000000055360C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000553620 string=0x0000000000553624 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5532C0(__int64 a1, __int64 a2, char a3, _QWORD *a4, wchar_t a5, char a6, double a7)
{
  __int64 v14; // x26
  __int64 v15; // x28
  __int64 v16; // x27
  __int64 v17; // x4
  void *v18; // x0
  int v19; // w28
  __int64 v20; // x19
  _BYTE *v21; // x0
  int v22; // w1
  wchar_t *v23; // x4
  __int64 v24; // x25
  __int64 v25; // x5
  int v27; // w26
  __int64 v28; // x5
  __int64 v29; // x0
  _DWORD *v30; // x27
  wchar_t v31[2]; // [xsp+10h] [xbp+0h] BYREF
  char *v32; // [xsp+80h] [xbp+70h]
  __int64 v33; // [xsp+88h] [xbp+78h]
  int v34; // [xsp+94h] [xbp+84h] BYREF
  __int64 v35; // [xsp+98h] [xbp+88h] BYREF
  char v36[16]; // [xsp+A0h] [xbp+90h] BYREF

  v14 = sub_53C4D0(&qword_6FD2A8);
  v15 = *(_QWORD *)(a4[26] + 24LL);
  v16 = *(_QWORD *)(v15 + 8 * v14);
  if ( !v16 )
  {
    v29 = operator new(0x150u);
    *(_DWORD *)(v29 + 8) = 0;
    *(_QWORD *)v29 = off_6B7C80;
    v30 = (_DWORD *)v29;
    *(_QWORD *)(v29 + 16) = 0;
    *(_QWORD *)(v29 + 24) = 0;
    *(_BYTE *)(v29 + 32) = 0;
    *(_QWORD *)(v29 + 40) = 0;
    *(_QWORD *)(v29 + 48) = 0;
    *(_QWORD *)(v29 + 56) = 0;
    *(_QWORD *)(v29 + 64) = 0;
    *(_DWORD *)(v29 + 72) = 0;
    *(_DWORD *)(v29 + 76) = 0;
    *(_BYTE *)(v29 + 328) = 0;
    sub_54FE98(v29, (__int64)(a4 + 26));
    sub_53C340(a4[26], v30, v14);
    v16 = *(_QWORD *)(v15 + 8 * v14);
  }
  v17 = a4[1];
  if ( v17 < 0 )
    v17 = 6;
  v32 = v36;
  v33 = v17;
  sub_53C9C4((__int64)a4, v36, a6);
  v35 = sub_53BE10();
  v34 = sub_52BA00((__int64)&v35, (char *)v31, 0, v36, v33, a7);
  v18 = sub_54F6AC((__int64)(a4 + 26));
  (*(void (__fastcall **)(void *, wchar_t *, char *, wchar_t *))(*(_QWORD *)v18 + 88LL))(
    v18,
    v31,
    (char *)v31 + v34,
    v31);
  v19 = v34;
  v20 = v34;
  v21 = memchr(v31, 46, v34);
  if ( v21 )
  {
    v22 = *(unsigned __int8 *)(v16 + 32);
    v23 = &v31[v21 - (_BYTE *)v31];
    *v23 = *(_DWORD *)(v16 + 72);
    if ( !v22 )
      goto LABEL_7;
  }
  else
  {
    if ( !*(_BYTE *)(v16 + 32)
      || v19 > 2 && (BYTE1(v31[0]) > 0x39u || (unsigned __int8)(BYTE2(v31[0]) - 48) > 9u || BYTE1(v31[0]) <= 0x2Fu) )
    {
      goto LABEL_7;
    }
    v23 = 0;
  }
  if ( ((LOBYTE(v31[0]) - 43) & 0xFD) != 0 )
  {
    v27 = 0;
    v28 = 0;
  }
  else
  {
    v27 = 1;
    v34 = v19 - 1;
    v28 = 1;
  }
  sub_551F08(
    a1,
    *(unsigned __int8 **)(v16 + 16),
    *(_QWORD *)(v16 + 24),
    *(_DWORD *)(v16 + 76),
    v23,
    (char *)&v31[v28],
    (unsigned __int64)&v31[v28],
    &v34);
  v34 += v27;
  v20 = v34;
LABEL_7:
  v24 = a4[2];
  if ( v24 > v20 )
  {
    v25 = v20;
    v20 = (int)v24;
    sub_5530A4((__int64)a4, a5, v31, v31, a4[2], v25);
    v34 = v24;
  }
  a4[2] = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)a2 + 96LL))(a2, v31, v20);
  return a2;
}

