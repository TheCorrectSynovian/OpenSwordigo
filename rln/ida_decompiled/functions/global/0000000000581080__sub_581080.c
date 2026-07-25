/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581080
 * Mangled: sub_581080
 * Demangled: sub_581080
 *
 * Callers: 2
 *   0x000000000058128C  sub_58128C
 *   0x0000000000581368  sub_581368
 *
 * Callees: 6
 *   0x00000000001FE620  .abort
 *   0x0000000000201760  .memcpy
 *   0x000000000057FC60  sub_57FC60
 *   0x000000000057FECC  sub_57FECC
 *   0x000000000057FF08  sub_57FF08
 *   0x0000000000580ACC  sub_580ACC
 *
 * Referenced strings: 36
 *   insn=0x00000000005810BC string=0x00000000005810C0 "`"
 *   insn=0x00000000005810C8 string=0x00000000005810E4 "`"
 *   insn=0x00000000005810D0 string=0x00000000005810D4 "a"
 *   insn=0x00000000005810DC string=0x00000000005810E0 "{"
 *   insn=0x00000000005810E4 string=0x00000000005810E8 "@"
 *   insn=0x0000000000581100 string=0x0000000000581104 "!"
 *   insn=0x0000000000581124 string=0x0000000000581128 "i"
 *   insn=0x0000000000581138 string=0x000000000058113C "s"
 *   insn=0x0000000000581148 string=0x000000000058114C "w"
 *   insn=0x0000000000581154 string=0x0000000000581158 "vb"
 *   insn=0x0000000000581168 string=0x000000000058116C "<"
 *   insn=0x000000000058116C string=0x0000000000581170 "@@"
 *   insn=0x0000000000581178 string=0x000000000058117C ""
 *   insn=0x0000000000581180 string=0x0000000000581184 " H`8a"
 *   insn=0x0000000000581184 string=0x0000000000581188 "a"
 *   insn=0x0000000000581188 string=0x000000000058118C " "
 *   insn=0x0000000000581188 string=0x0000000000581194 "@"
 *   insn=0x0000000000581190 string=0x00000000005811A0 "A"
 *   insn=0x0000000000581190 string=0x00000000005811D4 "@"
 *   insn=0x0000000000581190 string=0x0000000000581204 "@"
 *   insn=0x0000000000581190 string=0x0000000000581210 "@"
 *   insn=0x000000000058119C string=0x00000000005811F4 "a"
 *   insn=0x00000000005811B0 string=0x00000000005811B4 "U"
 *   insn=0x00000000005811B4 string=0x00000000005811B8 "a"
 *   insn=0x00000000005811BC string=0x00000000005811C0 "? "
 *   insn=0x00000000005811CC string=0x00000000005811D0 "\t"
 *   insn=0x00000000005811DC string=0x00000000005811E0 "!"
 *   insn=0x00000000005811EC string=0x00000000005811F0 "7"
 *   insn=0x00000000005811F8 string=0x0000000000581238 "`z4"
 *   insn=0x0000000000581218 string=0x000000000058121C "!"
 *   insn=0x0000000000581228 string=0x000000000058122C "("
 *   insn=0x000000000058123C string=0x0000000000581240 "ZC"
 *   insn=0x0000000000581248 string=0x000000000058124C "!"
 *   insn=0x000000000058124C string=0x0000000000581250 "`"
 *   insn=0x000000000058125C string=0x0000000000581260 "_"
 *   insn=0x0000000000581264 string=0x0000000000581268 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581080(__int64 *a1, __int64 *a2)
{
  int v4; // w0
  char *v5; // x0
  __int64 v6; // x23
  char **v7; // x26
  _BYTE *v8; // x22
  __int64 v9; // x20
  __int64 v10; // x0
  char *v11; // x1
  char *v12; // x0
  char *v13; // x0
  __int64 v14; // x0
  unsigned __int64 v15; // x1
  __int64 result; // x0
  __int64 v17; // [xsp+70h] [xbp+70h] BYREF
  __int64 v18; // [xsp+78h] [xbp+78h] BYREF
  _QWORD v19[110]; // [xsp+80h] [xbp+80h] BYREF
  char v20; // [xsp+3F7h] [xbp+3F7h]

  memcpy(v19, a1, 0x3C0u);
  if ( ((v19[104] & 0x4000000000000000LL) == 0 || !v20) && !v19[31] )
    sub_57FECC((__int64)v19, a1[98], &v17);
  if ( (a1[104] & 0x4000000000000000LL) != 0 )
    *((_BYTE *)a1 + 887) = 0;
  v4 = *((_DWORD *)a2 + 400);
  a1[31] = 0;
  if ( v4 == 1 )
  {
    v6 = sub_57FF08((__int64)v19, *((_DWORD *)a2 + 396)) + a2[197];
  }
  else
  {
    if ( v4 != 2 )
LABEL_17:
      abort();
    v5 = sub_57FC60((char *)a2[199], &v18);
    v6 = sub_580ACC(v5, (unsigned __int64)&v5[v18], (__int64)v19, 0);
  }
  a1[98] = v6;
  v7 = (char **)a2;
  v8 = a1 + 107;
  v9 = 0;
  while ( 2 )
  {
    switch ( *((_DWORD *)v7 + 2) )
    {
      case 1:
        v10 = (__int64)&(*v7)[v6];
        goto LABEL_20;
      case 2:
        v11 = *v7;
        if ( *((_BYTE *)&v19[107] + (int)*v7) )
        {
          v10 = sub_57FF08((__int64)v19, (int)v11);
LABEL_16:
          if ( (unsigned __int8)byte_6FE360[v9] > 8u )
            goto LABEL_17;
          *v8 = 1;
        }
        else
        {
          v10 = v19[(int)v11];
LABEL_20:
          if ( (a1[104] & 0x4000000000000000LL) != 0 )
            *v8 = 0;
        }
        a1[v9] = v10;
LABEL_26:
        ++v9;
        v7 += 2;
        ++v8;
        if ( v9 != 98 )
          continue;
        v14 = a1[104];
        v15 = v14 | 0x8000000000000000LL;
        result = v14 & 0x7FFFFFFFFFFFFFFFLL;
        if ( *((_BYTE *)a2 + 1651) )
          result = v15;
        a1[104] = result;
        return result;
      case 3:
        v12 = sub_57FC60(*v7, &v18);
        v10 = sub_580ACC(v12, (unsigned __int64)&v12[v18], (__int64)v19, v6);
        goto LABEL_20;
      case 4:
        v10 = (__int64)&(*v7)[v6];
        goto LABEL_16;
      case 5:
        v13 = sub_57FC60(*v7, &v18);
        v10 = sub_580ACC(v13, (unsigned __int64)&v13[v18], (__int64)v19, v6);
        goto LABEL_16;
      default:
        goto LABEL_26;
    }
  }
}

