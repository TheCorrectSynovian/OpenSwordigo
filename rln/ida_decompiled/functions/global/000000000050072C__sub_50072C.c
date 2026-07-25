/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050072C
 * Mangled: sub_50072C
 * Demangled: sub_50072C
 *
 * Callers: 11
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004F2128  sub_4F2128
 *   0x00000000004F2368  sub_4F2368
 *   0x00000000004F28AC  sub_4F28AC
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 2
 *   0x00000000001FA100  .iscntrl
 *   0x00000000004EF3D4  sub_4EF3D4
 *
 * Referenced strings: 9
 *   insn=0x0000000000500748 string=0x000000000050074C "m"
 *   insn=0x000000000050074C string=0x00000000001FA100 "0'"
 *   insn=0x0000000000500758 string=0x000000000059B2F5 "char(%d)"
 *   insn=0x000000000050075C string=0x0000000000500760 ")"
 *   insn=0x000000000050075C string=0x000000000059859D "%c"
 *   insn=0x0000000000500760 string=0x0000000000500764 "Ju"
 *   insn=0x0000000000500768 string=0x000000000050076C "A"
 *   insn=0x0000000000500780 string=0x0000000000500788 ""
 *   insn=0x0000000000500788 string=0x000000000050078C "! "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_50072C(__int64 a1, int a2)
{
  char *v4; // x1

  if ( a2 > 256 )
    return (__int64)*(&off_6D8C98 + a2 - 257);
  if ( iscntrl(a2) )
    v4 = "char(%d)";
  else
    v4 = "%c";
  return sub_4EF3D4(*(_QWORD **)(a1 + 56), v4, (unsigned int)a2);
}

