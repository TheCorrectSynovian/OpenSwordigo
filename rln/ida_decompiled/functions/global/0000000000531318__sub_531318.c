/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000531318
 * Mangled: sub_531318
 * Demangled: sub_531318
 *
 * Callers: 1
 *   0x0000000000531318  sub_531318
 *
 * Callees: 17
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203020  .memchr
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000052D354  sub_52D354
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052FE5C  sub_52FE5C
 *   0x0000000000530D30  sub_530D30
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000053C9C4  sub_53C9C4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x0000000000531324 string=0x0000000000531328 "@"
 *   insn=0x0000000000531354 string=0x0000000000531358 "^,"
 *   insn=0x000000000053135C string=0x0000000000531360 "`j@"
 *   insn=0x0000000000531360 string=0x0000000000531364 "xB"
 *   insn=0x0000000000531364 string=0x0000000000531368 ""
 *   insn=0x0000000000531368 string=0x000000000053136C "u{w"
 *   insn=0x000000000053136C string=0x0000000000531370 "5"
 *   insn=0x0000000000531370 string=0x0000000000531374 "c"
 *   insn=0x0000000000531388 string=0x000000000053138C "w"
 *   insn=0x0000000000531398 string=0x000000000053139C "y"
 *   insn=0x00000000005313A0 string=0x00000000005313A4 "a"
 *   insn=0x00000000005313A8 string=0x00000000005313AC "a"
 *   insn=0x00000000005313C4 string=0x00000000005313C8 "?` "
 *   insn=0x00000000005313D0 string=0x000000000053BE10 "@"
 *   insn=0x000000000053140C string=0x0000000000531410 "x"
 *   insn=0x000000000053141C string=0x0000000000531420 "!"
 *   insn=0x0000000000531428 string=0x000000000053142C "`"
 *   insn=0x0000000000531430 string=0x0000000000531434 "d"
 *   insn=0x000000000053144C string=0x0000000000531450 "x"
 *   insn=0x000000000053146C string=0x0000000000531470 "$"
 *   insn=0x0000000000531470 string=0x0000000000531474 "!k 8"
 *   insn=0x000000000053147C string=0x0000000000531480 "u\n@"
 *   insn=0x0000000000531498 string=0x000000000053149C "?` "
 *   insn=0x00000000005314C8 string=0x00000000005314CC "!"
 *   insn=0x00000000005314DC string=0x00000000005314E0 "c0@"
 *   insn=0x00000000005314E0 string=0x00000000005314E4 "`"
 *   insn=0x00000000005314F4 string=0x00000000005314F8 "!"
 *   insn=0x0000000000531518 string=0x000000000053151C " "
 *   insn=0x0000000000531520 string=0x0000000000531524 "m"
 *   insn=0x0000000000531528 string=0x000000000053152C "?"
 *   insn=0x0000000000531544 string=0x0000000000531548 "?"
 *   insn=0x000000000053156C string=0x0000000000531570 "?`8"
 *   insn=0x000000000053157C string=0x00000000005315D8 " "
 *   insn=0x0000000000531588 string=0x000000000053158C "&"
 *   insn=0x00000000005315A4 string=0x00000000005315A8 "-"
 *   insn=0x00000000005315AC string=0x00000000005315B0 ""
 *   insn=0x00000000005315B4 string=0x00000000005315B8 "x"
 *   insn=0x00000000005315C4 string=0x00000000005315C8 "6"
 *   insn=0x00000000005315D8 string=0x00000000005315DC "{"
 *   insn=0x00000000005315E0 string=0x00000000005315E4 "8"
 *   insn=0x00000000005315E8 string=0x00000000005315EC "%"
 *   insn=0x00000000005315F8 string=0x00000000005315FC """
 *   insn=0x00000000005315F8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000531600 string=0x0000000000531604 "B"
 *   insn=0x0000000000531638 string=0x000000000053163C "m"
 *   insn=0x000000000053163C string=0x0000000000531640 "`j@"
 *   insn=0x0000000000531648 string=0x000000000053164C "=+"
 *   insn=0x000000000053164C string=0x0000000000531650 "u{w"
 *   insn=0x0000000000531650 string=0x0000000000531654 "H"
 *   insn=0x0000000000531660 string=0x0000000000531664 "?@"
 *   insn=0x0000000000531664 string=0x0000000000531668 "{"
 *   insn=0x000000000053166C string=0x0000000000531670 "@E"
 *   insn=0x000000000053166C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000053167C string=0x0000000000531680 "!"
 *   insn=0x0000000000531680 string=0x0000000000531684 " "
 *   insn=0x0000000000531690 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_531318(
        __int64 a1,
        __int64 a2,
        char a3,
        _QWORD *a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        long double a7)
{
  unsigned int v12; // w25
  __int64 v13; // x23
  __int64 v14; // x27
  __int64 v15; // x21
  __int64 v16; // x2
  __int64 v17; // x25
  _BYTE *v18; // x0
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  int v22; // w27
  __int64 v23; // x4
  _BYTE *v24; // x3
  signed __int64 v25; // x24
  unsigned __int8 *v26; // x2
  _BYTE *v27; // x0
  const void *v28; // x4
  signed __int64 v29; // x21
  signed __int64 v30; // x5
  int v32; // w24
  __int64 v33; // x5
  __int64 v34; // x0
  __int64 v35; // x21
  char v36; // [xsp+10h] [xbp+0h] BYREF
  unsigned __int8 v37; // [xsp+11h] [xbp+1h]
  char v38; // [xsp+12h] [xbp+2h]
  unsigned __int8 *v39; // [xsp+78h] [xbp+68h]
  long double v40; // [xsp+80h] [xbp+70h]
  int v41; // [xsp+94h] [xbp+84h] BYREF
  __int64 v42; // [xsp+98h] [xbp+88h] BYREF
  char v43[16]; // [xsp+A0h] [xbp+90h] BYREF

  v12 = a6;
  v40 = a7;
  v13 = sub_53C4D0(&qword_6FBDD0);
  v14 = *(_QWORD *)(a4[26] + 24LL);
  v15 = *(_QWORD *)(v14 + 8 * v13);
  if ( !v15 )
  {
    v34 = operator new(0x90u);
    *(_DWORD *)(v34 + 8) = 0;
    *(_QWORD *)v34 = off_6B70C0;
    v35 = v34;
    *(_QWORD *)(v34 + 16) = 0;
    *(_QWORD *)(v34 + 24) = 0;
    *(_BYTE *)(v34 + 32) = 0;
    *(_QWORD *)(v34 + 40) = 0;
    *(_QWORD *)(v34 + 48) = 0;
    *(_QWORD *)(v34 + 56) = 0;
    *(_QWORD *)(v34 + 64) = 0;
    *(_BYTE *)(v34 + 72) = 0;
    *(_BYTE *)(v34 + 73) = 0;
    *(_BYTE *)(v34 + 136) = 0;
    sub_52DBF0(v34, (__int64)(a4 + 26));
    sub_53C340(a4[26], v35, v13);
    v15 = *(_QWORD *)(v14 + 8 * v13);
  }
  v16 = v12;
  v17 = 6;
  if ( (__int64)a4[1] >= 0 )
    v17 = a4[1];
  sub_53C9C4(a4, v43, v16);
  v42 = sub_53BE10();
  v41 = sub_52BA00((__int64)&v42, &v36, 0, v43, v17, *(double *)&v40);
  v18 = sub_52D354((__int64)(a4 + 26));
  v22 = v41;
  v23 = (unsigned __int8)v18[56];
  v24 = v18;
  v25 = v41;
  v26 = (unsigned __int8 *)(&v36 + v41);
  if ( (_DWORD)v23 == 1 )
  {
    memcpy(&v36, &v36, v41);
  }
  else
  {
    if ( !v18[56] )
    {
      v39 = (unsigned __int8 *)(&v36 + v41);
      *(_QWORD *)&v40 = v18;
      sub_51FEA0(v18, (v41 + 30LL) & 0xFFFFFFFFFFFFFFF0LL, (__int64)v26, (__int64)v18, v23, v19, v20, v21, v36);
      v26 = v39;
      v24 = *(_BYTE **)&v40;
    }
    (*(void (__fastcall **)(_BYTE *, char *, unsigned __int8 *, char *))(*(_QWORD *)v24 + 56LL))(v24, &v36, v26, &v36);
    v22 = v41;
    v25 = v41;
  }
  v27 = memchr(&v36, 46, v25);
  if ( v27 )
  {
    v28 = v27;
    *v27 = *(_BYTE *)(v15 + 72);
    if ( !*(_BYTE *)(v15 + 32) )
      goto LABEL_11;
  }
  else
  {
    if ( !*(_BYTE *)(v15 + 32) || v22 > 2 && (v37 > 0x39u || (unsigned __int8)(v38 - 48) > 9u || v37 <= 0x2Fu) )
      goto LABEL_11;
    v28 = 0;
  }
  if ( ((v36 - 43) & 0xFD) != 0 )
  {
    v32 = 0;
    v33 = 0;
  }
  else
  {
    v32 = 1;
    v41 = v22 - 1;
    v33 = 1;
  }
  sub_52FE5C(
    a1,
    *(unsigned __int8 **)(v15 + 16),
    *(_QWORD *)(v15 + 24),
    *(_BYTE *)(v15 + 73),
    v28,
    (unsigned __int64)(&v36 + v33),
    (unsigned __int64)(&v36 + v33),
    &v41);
  v41 += v32;
  v25 = v41;
LABEL_11:
  v29 = a4[2];
  if ( v29 > v25 )
  {
    v30 = v25;
    v25 = (int)v29;
    sub_530D30((__int64)a4, a5, &v36, (unsigned __int8 *)&v36, a4[2], v30);
    v41 = v29;
  }
  a4[2] = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, char *, signed __int64))(*(_QWORD *)a2 + 96LL))(a2, &v36, v25);
  return a2;
}

