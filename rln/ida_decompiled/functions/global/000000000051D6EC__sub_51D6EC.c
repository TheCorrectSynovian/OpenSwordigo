/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D6EC
 * Mangled: sub_51D6EC
 * Demangled: sub_51D6EC
 *
 * Callers: 2
 *   0x000000000051D768  sub_51D768
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 2
 *   0x00000000001FE620  .abort
 *   0x00000000005800F8  sub_5800F8
 *
 * Referenced strings: 13
 *   insn=0x000000000051D6F8 string=0x000000000051D6FC " "
 *   insn=0x000000000051D700 string=0x000000000051D704 "_"
 *   insn=0x000000000051D708 string=0x000000000051D70C "I"
 *   insn=0x000000000051D70C string=0x000000000051D710 "_"
 *   insn=0x000000000051D70C string=0x000000000051D734 "b"
 *   insn=0x000000000051D714 string=0x000000000051D718 "_@"
 *   insn=0x000000000051D718 string=0x000000000051D71C " "
 *   insn=0x000000000051D71C string=0x000000000051D720 "_"
 *   insn=0x000000000051D720 string=0x000000000051D724 "A"
 *   insn=0x000000000051D72C string=0x000000000051D730 "~"
 *   insn=0x000000000051D734 string=0x000000000051D738 "_@"
 *   insn=0x000000000051D754 string=0x000000000051D758 "h"
 *   insn=0x000000000051D760 string=0x000000000051D764 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51D6EC(unsigned __int8 a1, __int64 a2)
{
  unsigned int v2; // w2

  if ( a1 == 255 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return *(_QWORD *)(a2 + 808);
  if ( v2 <= 0x20 )
  {
    if ( (a1 & 0x70) != 0 && v2 != 16 )
      goto LABEL_11;
    return 0;
  }
  if ( v2 != 64 )
  {
    if ( v2 != 80 )
    {
      if ( v2 == 48 )
        return *(_QWORD *)(a2 + 816);
LABEL_11:
      abort();
    }
    return 0;
  }
  return sub_5800F8(a2);
}

