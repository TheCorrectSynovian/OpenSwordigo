/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520478
 * Mangled: sub_520478
 * Demangled: sub_520478
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001FA120  .strcmp
 *   0x000000000051F9EC  sub_51F9EC
 *   0x00000000005202A8  sub_5202A8
 *   0x0000000000520524  sub_520524
 *   0x0000000000570710  sub_570710
 *   0x0000000000570744  sub_570744
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000005204A4 string=0x00000000005204A8 "!@3"
 *   insn=0x00000000005204B0 string=0x000000000059D1C8 "C"
 *   insn=0x00000000005204B8 string=0x00000000001FA120 "0'"
 *   insn=0x00000000005204C0 string=0x000000000059D1D0 "POSIX"
 *   insn=0x00000000005204C4 string=0x00000000005204C8 "!@"
 *   insn=0x0000000000520514 string=0x0000000000520518 "5"
 *   insn=0x0000000000520520 string=0x0000000000520524 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520478(_QWORD *a1, char *a2, __int64 a3)
{
  __int64 result; // x0

  sub_5202A8((__int64)a1, 0, 0, a3);
  *a1 = off_6D9CD0;
  result = strcmp(a2, "C");
  if ( (_DWORD)result )
  {
    result = strcmp(a2, "POSIX");
    if ( (_DWORD)result )
    {
      sub_570744(a1 + 2);
      return sub_570710((int)a1 + 16, a2);
    }
  }
  return result;
}

