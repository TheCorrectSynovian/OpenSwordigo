/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F8CC
 * Mangled: sub_54F8CC
 * Demangled: sub_54F8CC
 *
 * Callers: 2
 *   0x000000000054FBB0  sub_54FBB0
 *   0x0000000000555830  sub_555830
 *
 * Callees: 1
 *   0x000000000054F6AC  sub_54F6AC
 *
 * Referenced strings: 56
 *   insn=0x000000000054F910 string=0x000000000054F914 "f"
 *   insn=0x000000000054F920 string=0x000000000054F924 " "
 *   insn=0x000000000054F924 string=0x000000000054FBA8 "\"
 *   insn=0x000000000054F930 string=0x000000000054F934 ""
 *   insn=0x000000000054F938 string=0x000000000054F93C "S"
 *   insn=0x000000000054F93C string=0x000000000054F940 "?"
 *   insn=0x000000000054F944 string=0x000000000054FA98 "`\n@"
 *   insn=0x000000000054F94C string=0x000000000054FAC0 "_"
 *   insn=0x000000000054F950 string=0x000000000054F954 " "
 *   insn=0x000000000054F960 string=0x000000000054F964 "`"
 *   insn=0x000000000054F964 string=0x000000000054F968 "_"
 *   insn=0x000000000054F968 string=0x000000000054F96C "c"
 *   insn=0x000000000054F974 string=0x000000000054F978 "_"
 *   insn=0x000000000054F988 string=0x000000000054F98C "d"
 *   insn=0x000000000054F998 string=0x000000000054F99C " |@"
 *   insn=0x000000000054F9C4 string=0x000000000054F9C8 "X"
 *   insn=0x000000000054F9CC string=0x000000000054F9D0 "5"
 *   insn=0x000000000054F9D0 string=0x000000000054F9D4 "!"
 *   insn=0x000000000054F9E0 string=0x000000000054F9E4 "b"
 *   insn=0x000000000054F9F8 string=0x000000000054F9FC "?"
 *   insn=0x000000000054FA00 string=0x000000000054FA04 "`"
 *   insn=0x000000000054FA04 string=0x000000000054FA08 "'"
 *   insn=0x000000000054FA04 string=0x000000000054FAD0 "`\n@"
 *   insn=0x000000000054FA0C string=0x000000000054FA10 "B"
 *   insn=0x000000000054FA24 string=0x000000000054FA28 "?$"
 *   insn=0x000000000054FA2C string=0x000000000054FA30 "bs"
 *   insn=0x000000000054FA30 string=0x000000000054FA34 "D"
 *   insn=0x000000000054FA38 string=0x000000000054FA3C "a"
 *   insn=0x000000000054FA3C string=0x000000000054FA40 "?"
 *   insn=0x000000000054FA48 string=0x000000000054FA4C "!"
 *   insn=0x000000000054FA70 string=0x000000000054FA74 "`\n@"
 *   insn=0x000000000054FA74 string=0x000000000054FA78 "a"
 *   insn=0x000000000054FA7C string=0x000000000054FA80 "b"
 *   insn=0x000000000054FA80 string=0x000000000054FB0C "a"
 *   insn=0x000000000054FA88 string=0x000000000054FA8C "`\n"
 *   insn=0x000000000054FA8C string=0x000000000054FA90 "Z"
 *   insn=0x000000000054FA98 string=0x000000000054FA9C "b"
 *   insn=0x000000000054FAA4 string=0x000000000054FB54 "b"
 *   insn=0x000000000054FAC0 string=0x000000000054FAC4 "b"
 *   insn=0x000000000054FAD0 string=0x000000000054FAD4 "a"
 *   insn=0x000000000054FADC string=0x000000000054FB90 "a"
 *   insn=0x000000000054FAE0 string=0x000000000054FAE4 "?"
 *   insn=0x000000000054FAE8 string=0x000000000054FAEC "s"
 *   insn=0x000000000054FB00 string=0x000000000054FB04 "Z"
 *   insn=0x000000000054FB10 string=0x000000000054FB14 "!(@"
 *   insn=0x000000000054FB14 string=0x000000000054FB18 " "
 *   insn=0x000000000054FB28 string=0x000000000054FB2C "a"
 *   insn=0x000000000054FB30 string=0x000000000054FB34 ""
 *   insn=0x000000000054FB48 string=0x000000000054FB4C "@"
 *   insn=0x000000000054FB5C string=0x000000000054FB60 "B$@"
 *   insn=0x000000000054FB60 string=0x000000000054FB64 "@"
 *   insn=0x000000000054FB78 string=0x000000000054FB7C "B$@"
 *   insn=0x000000000054FB7C string=0x000000000054FB80 "@"
 *   insn=0x000000000054FB94 string=0x000000000054FB98 "!$@"
 *   insn=0x000000000054FB98 string=0x000000000054FB9C " "
 *   insn=0x000000000054FBA8 string=0x000000000054FBAC "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_54F8CC(
        __int64 a1,
        _QWORD *a2,
        int a3,
        _QWORD *a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  void *v16; // x25
  int v17; // w1
  int v18; // w28
  int v19; // w27
  unsigned __int64 v20; // x26
  int v21; // w21
  int *v23; // x0
  int v24; // w21
  int v25; // w0
  unsigned __int64 v26; // x0
  int *v27; // x0
  int v28; // w0
  _DWORD *v29; // x0
  int v30; // w1
  int v31; // [xsp+60h] [xbp+60h]
  int v32; // [xsp+60h] [xbp+60h]

  v16 = sub_54F6AC(a10 + 208);
  v17 = a3;
  if ( a9 == 2 )
  {
    v18 = 10;
  }
  else if ( a9 == 4 )
  {
    v18 = 1000;
  }
  else
  {
    v18 = 1;
  }
  v19 = 0;
  v20 = 0;
  while ( a2 )
  {
    if ( v17 == -1 )
    {
      v27 = (int *)a2[2];
      if ( (unsigned __int64)v27 >= a2[3] )
      {
        v31 = v17;
        v28 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 72LL))(a2);
        v17 = v31;
      }
      else
      {
        v28 = *v27;
      }
      if ( v28 == -1 )
        break;
      v17 = v28;
      v21 = 0;
      if ( a4 )
      {
LABEL_9:
        if ( a5 != -1 )
          goto LABEL_10;
        goto LABEL_19;
      }
    }
    else
    {
      v21 = 0;
      if ( a4 )
        goto LABEL_9;
    }
    if ( v20 >= a9 )
      goto LABEL_12;
    v24 = v17;
LABEL_26:
    v25 = (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v16 + 96LL))(v16) - 48;
    if ( (unsigned __int8)v25 > 9u || (v19 = 10 * v19 + v25, v19 * v18 > a8) || a7 >= v19 * v18 + v18 )
    {
      if ( a9 != v20 )
        goto LABEL_13;
LABEL_48:
      *a6 = v19;
      return a2;
    }
    v18 /= 10;
    if ( a2 )
    {
      v26 = a2[2];
      if ( v26 >= a2[3] )
      {
        (*(void (__fastcall **)(_QWORD *))(*a2 + 80LL))(a2);
        v17 = -1;
      }
      else
      {
        v17 = -1;
        a2[2] = v26 + 4;
      }
      ++v20;
    }
    else
    {
      v17 = v24;
      ++v20;
    }
  }
  a2 = 0;
  if ( !a4 )
    goto LABEL_12;
  v21 = 1;
  if ( a5 == -1 )
  {
LABEL_19:
    v23 = (int *)a4[2];
    if ( (unsigned __int64)v23 >= a4[3] )
    {
      v32 = v17;
      a5 = (*(__int64 (__fastcall **)(_QWORD *))(*a4 + 72LL))(a4);
      v17 = v32;
    }
    else
    {
      a5 = *v23;
    }
    if ( a5 == -1 )
      a4 = 0;
  }
LABEL_10:
  if ( (a5 == -1) != v21 && v20 < a9 )
  {
    if ( a2 )
    {
      v24 = v17;
      if ( v17 == -1 )
      {
        v29 = (_DWORD *)a2[2];
        v30 = (unsigned __int64)v29 >= a2[3] ? (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 72LL))(a2) : *v29;
        v24 = v30;
        if ( v30 == -1 )
          a2 = 0;
      }
    }
    else
    {
      v24 = v17;
    }
    goto LABEL_26;
  }
LABEL_12:
  if ( a9 == v20 )
    goto LABEL_48;
LABEL_13:
  if ( v20 == 2 && a9 == 4 )
    *a6 = v19 - 100;
  else
    *a11 |= 4u;
  return a2;
}

