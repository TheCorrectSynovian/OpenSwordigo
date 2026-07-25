/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052C570
 * Mangled: sub_52C570
 * Demangled: sub_52C570
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001FA120  .strcmp
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EFC4  sub_53EFC4
 *   0x000000000053F0E4  sub_53F0E4
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 16
 *   insn=0x000000000052C570 string=0x000000000052C574 "_"
 *   insn=0x000000000052C574 string=0x000000000052C578 "b"
 *   insn=0x000000000052C58C string=0x000000000052C590 "B"
 *   insn=0x000000000052C5A8 string=0x000000000052C5AC "A"
 *   insn=0x000000000052C5B0 string=0x000000000052C5B4 "!@3"
 *   insn=0x000000000052C5B4 string=0x000000000052C5B8 "a"
 *   insn=0x000000000052C5BC string=0x000000000059D1C8 "C"
 *   insn=0x000000000052C5C4 string=0x00000000001FA120 "0'"
 *   insn=0x000000000052C5CC string=0x000000000059D1D0 "POSIX"
 *   insn=0x000000000052C5D0 string=0x000000000052C5D4 "!@"
 *   insn=0x000000000052C5FC string=0x000000000052C600 "D"
 *   insn=0x000000000052C608 string=0x000000000052C60C "nJ"
 *   insn=0x000000000052C610 string=0x000000000052C614 "L"
 *   insn=0x000000000052C640 string=0x000000000052C644 "^<"
 *   insn=0x000000000052C64C string=0x000000000052C650 "?"
 *   insn=0x000000000052C658 string=0x000000000052C65C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52C570(__int64 a1, char *a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v6; // [xsp+38h] [xbp+38h] BYREF

  *(_DWORD *)(a1 + 8) = a3 != 0;
  *(_QWORD *)a1 = &off_6DA130;
  *(_QWORD *)(a1 + 16) = 0;
  ((void (*)(void))sub_53EFC4)();
  *(_QWORD *)a1 = off_6B6CD0;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570710((int)&v6, a2);
      sub_53EFC4(a1, v6);
      return sub_570744(&v6);
    }
  }
  return result;
}

