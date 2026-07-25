/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000582140
 * Mangled: sub_582140
 * Demangled: sub_582140
 *
 * Callers: 2
 *   0x00000000005822B0  sub_5822B0
 *   0x00000000005829FC  sub_5829FC
 *
 * Callees: 4
 *   0x0000000000581DA4  sub_581DA4
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000582044  sub_582044
 *
 * Referenced strings: 21
 *   insn=0x0000000000582174 string=0x0000000000582178 "#"
 *   insn=0x0000000000582188 string=0x000000000058218C ":"
 *   insn=0x000000000058218C string=0x0000000000582190 "a"
 *   insn=0x0000000000582190 string=0x0000000000582194 "a"
 *   insn=0x0000000000582194 string=0x0000000000582198 "a"
 *   insn=0x0000000000582198 string=0x000000000058219C "a"
 *   insn=0x00000000005821A4 string=0x00000000005821A8 "b"
 *   insn=0x00000000005821A8 string=0x00000000005821AC "t"
 *   insn=0x00000000005821D4 string=0x00000000005821D8 "`"
 *   insn=0x00000000005821D8 string=0x00000000005821DC "a\n@"
 *   insn=0x00000000005821E4 string=0x00000000005821E8 " "
 *   insn=0x00000000005821E8 string=0x000000000058226C "`"
 *   insn=0x0000000000582200 string=0x0000000000582204 " "
 *   insn=0x000000000058220C string=0x0000000000582210 "b""
 *   insn=0x0000000000582218 string=0x000000000058221C "*"
 *   insn=0x000000000058222C string=0x0000000000582230 "%"
 *   insn=0x000000000058224C string=0x0000000000582250 "A#"
 *   insn=0x0000000000582250 string=0x0000000000582254 "!"
 *   insn=0x0000000000582258 string=0x000000000058225C "?"
 *   insn=0x000000000058225C string=0x0000000000582260 "`"
 *   insn=0x0000000000582270 string=0x0000000000582274 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_582140(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int8 v4; // w0
  int v7; // w21
  char *v8; // x27
  __int64 v9; // x0
  signed int v10; // w1
  __int64 v11; // x20
  unsigned __int64 v12; // x1
  char *v14; // x0
  unsigned int v15; // w0
  __int64 v16; // x1
  unsigned __int64 v17; // [xsp+60h] [xbp+60h] BYREF
  unsigned __int64 v18; // [xsp+68h] [xbp+68h] BYREF

  v4 = (unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3;
  v7 = v4;
  v8 = (char *)sub_581E04(v4, a1);
  v9 = 0;
  while ( *a2 )
  {
    v10 = a2[1];
    if ( !v10 )
    {
      v11 = v9;
      goto LABEL_16;
    }
    v11 = v9;
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    {
      v11 = (__int64)a2 - v10 + 4;
      if ( v11 != v9 )
      {
        v7 = sub_582044((__int64)a2 - v10 + 4);
        v8 = (char *)sub_581E04(v7, a1);
      }
    }
    if ( v7 )
    {
      v14 = sub_581EC4(v7, v8, (char *)a2 + 8, &v17);
      sub_581EC4(v7 & 0xF, 0, v14, &v18);
      v15 = sub_581DA4(v7);
      v16 = -1;
      if ( v15 <= 7uLL )
        v16 = (1LL << (8 * (unsigned __int8)v15)) - 1;
      if ( (v16 & v17) == 0 )
        goto LABEL_16;
    }
    else
    {
      v12 = *((_QWORD *)a2 + 2);
      v17 = *((_QWORD *)a2 + 1);
      v18 = v12;
      if ( !v17 )
        goto LABEL_16;
    }
    if ( a3 - v17 < v18 )
      return a2;
LABEL_16:
    a2 = (unsigned int *)((char *)a2 + *a2 + 4);
    v9 = v11;
  }
  return 0;
}

