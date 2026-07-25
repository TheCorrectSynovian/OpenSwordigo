/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520524
 * Mangled: sub_520524
 * Demangled: sub_520524
 *
 * Callers: 2
 *   0x0000000000520478  sub_520478
 *   0x0000000000520AAC  sub_520AAC
 *
 * Callees: 1
 *   0x00000000001F50D0  .wctype
 *
 * Referenced strings: 30
 *   insn=0x0000000000520524 string=0x0000000000520528 "? "
 *   insn=0x000000000052052C string=0x0000000000520530 "h"
 *   insn=0x0000000000520530 string=0x0000000000520534 "?"
 *   insn=0x0000000000520530 string=0x000000000052055C "?"
 *   insn=0x0000000000520534 string=0x0000000000520538 " "
 *   insn=0x0000000000520538 string=0x000000000052053C "I"
 *   insn=0x000000000052053C string=0x0000000000520540 "?"
 *   insn=0x000000000052053C string=0x0000000000520584 "?"
 *   insn=0x0000000000520544 string=0x0000000000520548 "?"
 *   insn=0x0000000000520548 string=0x000000000052054C "A"
 *   insn=0x0000000000520550 string=0x000000000059D248 "alnum"
 *   insn=0x0000000000520558 string=0x00000000001F50D0 "P'"
 *   insn=0x0000000000520564 string=0x0000000000520568 "?"
 *   insn=0x0000000000520564 string=0x00000000005205A0 "?@"
 *   insn=0x000000000052056C string=0x0000000000520570 "?\"
 *   insn=0x0000000000520578 string=0x000000000059D208 "print"
 *   insn=0x0000000000520588 string=0x000000000052058C "?"
 *   insn=0x000000000052058C string=0x0000000000520590 "!"
 *   insn=0x0000000000520594 string=0x000000000059D220 "lower"
 *   insn=0x00000000005205A0 string=0x00000000005205A4 "@"
 *   insn=0x00000000005205A4 string=0x00000000005205A8 "?\"
 *   insn=0x00000000005205A8 string=0x00000000005205AC "A"
 *   insn=0x00000000005205B0 string=0x000000000059D250 "graph"
 *   insn=0x00000000005205BC string=0x000000000059D228 "alpha"
 *   insn=0x00000000005205C8 string=0x000000000059D240 "xdigit"
 *   insn=0x00000000005205DC string=0x000000000059D218 "upper"
 *   insn=0x00000000005205E8 string=0x000000000059D200 "space"
 *   insn=0x00000000005205F4 string=0x000000000059D230 "digit"
 *   insn=0x0000000000520600 string=0x000000000059D210 "cntrl"
 *   insn=0x000000000052060C string=0x000000000059D238 "punct"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

wctype_t __fastcall sub_520524(__int64 a1, unsigned __int8 a2)
{
  if ( a2 == 8 )
    return wctype("space");
  if ( a2 > 8u )
  {
    if ( a2 == 32 )
    {
      return wctype("cntrl");
    }
    else
    {
      if ( a2 > 0x20u )
      {
        if ( a2 == 68 )
          return wctype("xdigit");
        if ( a2 == 151 )
          return wctype("print");
        return 0;
      }
      if ( a2 != 16 )
      {
        if ( a2 == 23 )
          return wctype("graph");
        return 0;
      }
      return wctype("punct");
    }
  }
  else
  {
    if ( a2 == 3 )
      return wctype("alpha");
    if ( a2 <= 3u )
    {
      if ( a2 != 1 )
      {
        if ( a2 == 2 )
          return wctype("lower");
        return 0;
      }
      return wctype("upper");
    }
    else
    {
      if ( a2 != 4 )
      {
        if ( a2 == 7 )
          return wctype("alnum");
        return 0;
      }
      return wctype("digit");
    }
  }
}

