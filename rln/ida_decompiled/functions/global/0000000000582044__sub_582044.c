/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000582044
 * Mangled: sub_582044
 * Demangled: sub_582044
 *
 * Callers: 4
 *   0x0000000000582140  sub_582140
 *   0x00000000005822A0  sub_5822A0
 *   0x0000000000582768  sub_582768
 *   0x00000000005828C8  sub_5828C8
 *
 * Callees: 4
 *   0x0000000000203230  .strlen
 *   0x0000000000581BAC  sub_581BAC
 *   0x0000000000581BD4  sub_581BD4
 *   0x0000000000581EC4  sub_581EC4
 *
 * Referenced strings: 23
 *   insn=0x0000000000582058 string=0x000000000058205C "u"
 *   insn=0x0000000000582060 string=0x0000000000582064 "b"@9"
 *   insn=0x0000000000582068 string=0x000000000058206C "_"
 *   insn=0x000000000058206C string=0x0000000000582070 "\t"
 *   insn=0x0000000000582070 string=0x0000000000582090 "`&@9"
 *   insn=0x0000000000582078 string=0x000000000058207C "_ "
 *   insn=0x0000000000582080 string=0x0000000000582084 """
 *   insn=0x0000000000582084 string=0x0000000000582088 "b"
 *   insn=0x0000000000582088 string=0x000000000058208C "!"
 *   insn=0x0000000000582094 string=0x0000000000582098 "`"
 *   insn=0x000000000058209C string=0x00000000005820A0 "%"
 *   insn=0x00000000005820B8 string=0x00000000005820BC "b"@9_"
 *   insn=0x00000000005820BC string=0x00000000005820C0 "_"
 *   insn=0x00000000005820C0 string=0x00000000005820C4 "a"
 *   insn=0x00000000005820D8 string=0x00000000005820DC "s*"
 *   insn=0x00000000005820E4 string=0x00000000005820E8 "a"
 *   insn=0x00000000005820E8 string=0x00000000005820EC "?H"
 *   insn=0x00000000005820EC string=0x00000000005820F0 "a"
 *   insn=0x00000000005820F0 string=0x00000000005820FC "?@"
 *   insn=0x0000000000582100 string=0x0000000000582120 "?0"
 *   insn=0x000000000058210C string=0x0000000000582110 "@"
 *   insn=0x0000000000582114 string=0x0000000000582118 "k"
 *   insn=0x000000000058211C string=0x000000000058212C "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_582044(__int64 a1)
{
  __int64 v1; // x20
  size_t v3; // x0
  char *v4; // x1
  int v5; // w2
  __int64 result; // x0
  char *v7; // x0
  char *v8; // x0
  char *v9; // x0
  unsigned __int8 *v10; // x19
  char *v11; // x0
  int v12; // w1
  unsigned __int64 v13; // [xsp+28h] [xbp+28h] BYREF
  __int64 v14; // [xsp+30h] [xbp+30h] BYREF
  __int64 v15; // [xsp+38h] [xbp+38h] BYREF

  v1 = a1 + 9;
  v3 = strlen((const char *)(a1 + 9)) + 1;
  v4 = (char *)(v1 + v3);
  if ( *(unsigned __int8 *)(a1 + 8) > 3u )
  {
    v5 = *(unsigned __int8 *)(v1 + v3);
    result = 255;
    if ( v5 != 8 || v4[1] )
      return result;
    v4 += 2;
  }
  if ( *(_BYTE *)(a1 + 9) != 122 )
    return 0;
  v7 = sub_581BAC(v4, &v14);
  v8 = sub_581BD4(v7, &v15);
  if ( *(_BYTE *)(a1 + 8) == 1 )
    v9 = v8 + 1;
  else
    v9 = sub_581BAC(v8, &v14);
  v10 = (unsigned __int8 *)(a1 + 10);
  v11 = sub_581BAC(v9, &v14);
  while ( 1 )
  {
    v12 = *v10;
    if ( v12 == 82 )
      break;
    if ( v12 == 80 )
    {
      v11 = sub_581EC4(*v11 & 0x7F, 0, v11 + 1, &v13);
    }
    else
    {
      if ( v12 != 76 )
        return 0;
      ++v11;
    }
    ++v10;
  }
  return (unsigned __int8)*v11;
}

