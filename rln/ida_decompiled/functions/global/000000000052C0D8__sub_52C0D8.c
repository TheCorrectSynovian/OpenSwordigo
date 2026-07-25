/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052C0D8
 * Mangled: sub_52C0D8
 * Demangled: sub_52C0D8
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001FA120  .strcmp
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053E704  sub_53E704
 *   0x000000000053E890  sub_53E890
 *   0x000000000053EA1C  sub_53EA1C
 *   0x000000000053EAD4  sub_53EAD4
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x000000000052C0D8 string=0x000000000052C0DC "_"
 *   insn=0x000000000052C0DC string=0x000000000052C0E0 "b"
 *   insn=0x000000000052C0EC string=0x000000000052C0F0 "B"
 *   insn=0x000000000052C114 string=0x000000000052C118 "A"
 *   insn=0x000000000052C11C string=0x000000000052C120 "!"
 *   insn=0x000000000052C120 string=0x000000000052C124 "a"
 *   insn=0x000000000052C128 string=0x000000000059D1C8 "C"
 *   insn=0x000000000052C130 string=0x00000000001FA120 "0'"
 *   insn=0x000000000052C138 string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000052C13C string=0x000000000052C140 "!@"
 *   insn=0x000000000052C168 string=0x000000000052C16C "i"
 *   insn=0x000000000052C180 string=0x000000000052C184 "p"
 *   insn=0x000000000052C19C string=0x000000000052C1A0 "MJ"
 *   insn=0x000000000052C1C0 string=0x000000000052C1C4 "_"
 *   insn=0x000000000052C1C4 string=0x000000000052C1C8 "b"
 *   insn=0x000000000052C1D4 string=0x000000000052C1D8 "B"
 *   insn=0x000000000052C1F8 string=0x000000000052C1FC "BI"
 *   insn=0x000000000052C1FC string=0x000000000052C200 "A"
 *   insn=0x000000000052C204 string=0x000000000052C208 "!"
 *   insn=0x000000000052C208 string=0x000000000052C20C "a"
 *   insn=0x000000000052C224 string=0x000000000052C228 "!@"
 *   insn=0x000000000052C250 string=0x000000000052C254 "/"
 *   insn=0x000000000052C260 string=0x000000000052C264 "(I"
 *   insn=0x000000000052C268 string=0x000000000052C26C "6"
 *   insn=0x000000000052C298 string=0x000000000052C29C "H="
 *   insn=0x000000000052C2A4 string=0x000000000052C2A8 "?"
 *   insn=0x000000000052C2B0 string=0x000000000052C2B4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52C0D8(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v6; // [xsp+38h] [xbp+38h] BYREF

  *(_QWORD *)a1 = &off_6DA1F0;
  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)(a1 + 16) = 0;
  ((void (*)(void))sub_53E890)();
  *(_QWORD *)a1 = off_6B6E40;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570710((int)&v6, a2);
      sub_53E890(a1, v6, 0);
      return sub_570744(&v6);
    }
  }
  return result;
}

