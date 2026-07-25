/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052D3BC
 * Mangled: sub_52D3BC
 * Demangled: sub_52D3BC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000052D354  sub_52D354
 *
 * Referenced strings: 34
 *   insn=0x000000000052D3C8 string=0x000000000052D3CC "`@"
 *   insn=0x000000000052D404 string=0x000000000052D408 ""
 *   insn=0x000000000052D40C string=0x000000000052D410 ":"
 *   insn=0x000000000052D40C string=0x000000000052D4AC "a"
 *   insn=0x000000000052D410 string=0x000000000052D4F8 "x"
 *   insn=0x000000000052D41C string=0x000000000052D420 "a"
 *   insn=0x000000000052D424 string=0x000000000052D428 "g"
 *   insn=0x000000000052D430 string=0x000000000052D434 "`"
 *   insn=0x000000000052D434 string=0x000000000052D440 "z\n"
 *   insn=0x000000000052D438 string=0x000000000052D43C "a"
 *   insn=0x000000000052D448 string=0x000000000052D44C "a\n@9"
 *   insn=0x000000000052D450 string=0x000000000052D454 "f"
 *   insn=0x000000000052D45C string=0x000000000052D460 "x"
 *   insn=0x000000000052D480 string=0x000000000052D484 " "
 *   insn=0x000000000052D48C string=0x000000000052D490 " "
 *   insn=0x000000000052D494 string=0x000000000052D498 ";"
 *   insn=0x000000000052D49C string=0x000000000052D4A0 "s"
 *   insn=0x000000000052D4B0 string=0x000000000052D4B4 "@"
 *   insn=0x000000000052D4B4 string=0x000000000052D4B8 "@"
 *   insn=0x000000000052D4C0 string=0x000000000052D4C4 "a"
 *   insn=0x000000000052D4C0 string=0x000000000052D414 "z"
 *   insn=0x000000000052D4DC string=0x000000000052D4E0 "s"
 *   insn=0x000000000052D528 string=0x000000000052D52C "c @"
 *   insn=0x000000000052D52C string=0x000000000052D530 "`"
 *   insn=0x000000000052D534 string=0x000000000052D538 "b"
 *   insn=0x000000000052D538 string=0x000000000052D53C "@"
 *   insn=0x000000000052D54C string=0x000000000052D550 "B4@"
 *   insn=0x000000000052D550 string=0x000000000052D554 "@"
 *   insn=0x000000000052D584 string=0x000000000052D588 "`"
 *   insn=0x000000000052D5A0 string=0x000000000052D5A4 "c @"
 *   insn=0x000000000052D5A4 string=0x000000000052D5A8 "`"
 *   insn=0x000000000052D5B0 string=0x000000000052D5B4 "F"
 *   insn=0x000000000052D5B4 string=0x000000000052D5B8 "`"
 *   insn=0x000000000052D5C8 string=0x000000000052D5CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_52D3BC(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned int v13; // w25
  char *v15; // x28
  int v16; // w27
  unsigned __int8 *v17; // x26
  char *v18; // x3
  int v19; // w7
  char *v20; // x19
  unsigned __int64 v21; // x24
  unsigned __int8 v22; // w1
  char *v23; // x26
  int v24; // w0
  __int64 v25; // x1
  _BYTE *v26; // x0
  unsigned __int8 v28; // w0
  char v29; // w0
  char *v30; // [xsp+60h] [xbp+60h]

  v13 = a5;
  v15 = (char *)sub_52D354(a4 + 208);
  v16 = (unsigned __int8)a3;
  if ( a7 != a8 )
  {
    while ( 1 )
    {
      v23 = &v15[*a7];
      v24 = (unsigned __int8)v23[313];
      if ( v23[313] )
        goto LABEL_12;
      LOBYTE(v24) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 64LL))(v15);
      if ( (_BYTE)v24 )
      {
        v23[313] = v24;
        v24 = (unsigned __int8)v24;
LABEL_12:
        if ( v24 != 37 )
          goto LABEL_13;
        v17 = a7 + 1;
        if ( a8 == a7 + 1 )
          return a2;
        v18 = &v15[a7[1]];
        v19 = (unsigned __int8)v18[313];
        if ( v18[313] )
          goto LABEL_5;
        v30 = &v15[a7[1]];
        v28 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 64LL))(v15);
        if ( v28 )
        {
          v30[313] = v28;
          v19 = v28;
LABEL_5:
          if ( v19 == 79 || v19 == 69 )
          {
            v17 = a7 + 2;
            if ( a8 == a7 + 2 )
              return a2;
            v20 = &v15[a7[2]];
            if ( !v20[313] )
            {
              v29 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 64LL))(v15);
              if ( v29 )
                v20[313] = v29;
            }
          }
        }
        v21 = a3 & 0xFFFFFFFFFFFFFF00LL | (unsigned __int8)v16;
        a7 = v17;
        a2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
                         a1,
                         a2,
                         v21,
                         a4,
                         v13,
                         a6);
        v16 = v22;
        a3 = v21 & 0xFFFFFFFFFFFFFF00LL | v22;
LABEL_10:
        if ( a8 == ++a7 )
          return a2;
      }
      else
      {
LABEL_13:
        v25 = *a7;
        if ( v16 )
          goto LABEL_10;
        v26 = (_BYTE *)a2[5];
        if ( (unsigned __int64)v26 >= a2[6] )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 104LL))(a2, v25) == -1;
          goto LABEL_10;
        }
        *v26 = v25;
        ++a7;
        ++a2[5];
        if ( a8 == a7 )
          return a2;
      }
    }
  }
  return a2;
}

