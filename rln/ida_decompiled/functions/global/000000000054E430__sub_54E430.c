/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054E430
 * Mangled: sub_54E430
 * Demangled: sub_54E430
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001FA120  .strcmp
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EB8C  sub_53EB8C
 *   0x000000000053ECF0  sub_53ECF0
 *   0x000000000053EE54  sub_53EE54
 *   0x000000000053EF0C  sub_53EF0C
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x000000000054E430 string=0x000000000054E434 "_"
 *   insn=0x000000000054E434 string=0x000000000054E438 "b"
 *   insn=0x000000000054E444 string=0x000000000054E448 "B"
 *   insn=0x000000000054E468 string=0x000000000054E46C "!"
 *   insn=0x000000000054E46C string=0x000000000054E470 "A"
 *   insn=0x000000000054E474 string=0x000000000054E478 "!"
 *   insn=0x000000000054E478 string=0x000000000054E47C "a"
 *   insn=0x000000000054E47C string=0x000000000054E480 "a"
 *   insn=0x000000000054E480 string=0x000000000054E488 "&"
 *   insn=0x000000000054E480 string=0x000000000059D1C8 "C"
 *   insn=0x000000000054E488 string=0x00000000001FA120 "0'"
 *   insn=0x000000000054E48C string=0x000000000054E490 "a"
 *   insn=0x000000000054E490 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000054E494 string=0x000000000054E498 "!@"
 *   insn=0x000000000054E498 string=0x000000000054E49C "!"
 *   insn=0x000000000054E4D0 string=0x000000000054E4D4 ""
 *   insn=0x000000000054E518 string=0x000000000054E51C "_"
 *   insn=0x000000000054E51C string=0x000000000054E520 "b"
 *   insn=0x000000000054E52C string=0x000000000054E530 "B"
 *   insn=0x000000000054E554 string=0x000000000054E558 "A"
 *   insn=0x000000000054E55C string=0x000000000054E560 "!"
 *   insn=0x000000000054E560 string=0x000000000054E564 "a"
 *   insn=0x000000000054E564 string=0x000000000054E568 "a"
 *   insn=0x000000000054E574 string=0x000000000054E578 "a"
 *   insn=0x000000000054E57C string=0x000000000054E580 "!@"
 *   insn=0x000000000054E5A8 string=0x000000000054E5AC "Y"
 *   insn=0x000000000054E5B8 string=0x000000000054E5BC "t"
 *   insn=0x000000000054E5C0 string=0x000000000054E5C4 "`"
 *   insn=0x000000000054E5F0 string=0x000000000054E5F4 "r"
 *   insn=0x000000000054E5FC string=0x000000000054E600 "?"
 *   insn=0x000000000054E608 string=0x000000000054E60C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54E430(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v6; // [xsp+38h] [xbp+38h] BYREF

  *(_QWORD *)a1 = &off_6DB1A0;
  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)(a1 + 16) = 0;
  sub_53ECF0(a1);
  *(_QWORD *)a1 = off_6B7A00;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570710((int)&v6, a2);
      sub_53ECF0(a1);
      return sub_570744(&v6);
    }
  }
  return result;
}

