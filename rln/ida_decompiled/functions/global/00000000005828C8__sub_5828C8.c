/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005828C8
 * Mangled: sub_5828C8
 * Demangled: sub_5828C8
 *
 * Callers: 1
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 4
 *   0x0000000000581DA4  sub_581DA4
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000582044  sub_582044
 *
 * Referenced strings: 21
 *   insn=0x00000000005828FC string=0x0000000000582900 "A"
 *   insn=0x0000000000582908 string=0x000000000058290C "9"
 *   insn=0x0000000000582910 string=0x0000000000582914 "a"
 *   insn=0x0000000000582914 string=0x0000000000582918 "A"
 *   insn=0x0000000000582918 string=0x000000000058291C "a"
 *   insn=0x0000000000582920 string=0x0000000000582924 "A"
 *   insn=0x0000000000582924 string=0x00000000005829CC "`"
 *   insn=0x0000000000582928 string=0x000000000058292C "b"
 *   insn=0x000000000058292C string=0x0000000000582930 "t"
 *   insn=0x000000000058294C string=0x0000000000582950 "-"
 *   insn=0x0000000000582958 string=0x000000000058295C "`"
 *   insn=0x000000000058295C string=0x0000000000582960 "`"
 *   insn=0x000000000058296C string=0x0000000000582970 "b""
 *   insn=0x0000000000582978 string=0x000000000058297C "R"
 *   insn=0x0000000000582980 string=0x0000000000582984 ""
 *   insn=0x0000000000582998 string=0x000000000058299C "!#"
 *   insn=0x000000000058299C string=0x00000000005829A0 "!"
 *   insn=0x00000000005829A4 string=0x00000000005829A8 "?"
 *   insn=0x00000000005829B8 string=0x00000000005829BC """
 *   insn=0x00000000005829BC string=0x00000000005829C0 "!"
 *   insn=0x00000000005829D0 string=0x00000000005829D4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5828C8(__int64 a1, __int64 *a2, unsigned int *a3)
{
  unsigned __int8 v4; // w0
  int v6; // w21
  char *v8; // x26
  __int64 result; // x0
  signed int v10; // w1
  __int64 v11; // x20
  unsigned int v12; // w0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  unsigned __int64 v16; // [xsp+68h] [xbp+68h] BYREF

  v4 = (unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3;
  v6 = v4;
  v8 = (char *)sub_581E04(v4, a1);
  result = 0;
  while ( *a3 )
  {
    v10 = a3[1];
    v11 = result;
    if ( !v10 )
      goto LABEL_15;
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    {
      v11 = (__int64)a3 - v10 + 4;
      if ( v11 != result )
      {
        v6 = sub_582044((__int64)a3 - v10 + 4);
        v8 = (char *)sub_581E04(v6, a1);
      }
    }
    if ( !v6 )
    {
      if ( !*((_QWORD *)a3 + 1) )
        goto LABEL_15;
LABEL_13:
      v14 = *a2;
      if ( *a2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = v15 + 1;
        *(_QWORD *)(v14 + 8 * (v15 + 2)) = a3;
      }
      goto LABEL_15;
    }
    sub_581EC4(v6, v8, (char *)a3 + 8, &v16);
    v12 = sub_581DA4(v6);
    v13 = -1;
    if ( v12 <= 7uLL )
      v13 = (1LL << (8 * (unsigned __int8)v12)) - 1;
    if ( (v13 & v16) != 0 )
      goto LABEL_13;
LABEL_15:
    a3 = (unsigned int *)((char *)a3 + *a3 + 4);
    result = v11;
  }
  return result;
}

