/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F70C
 * Mangled: sub_53F70C
 * Demangled: sub_53F70C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000520C14  sub_520C14
 *
 * Referenced strings: 10
 *   insn=0x000000000053F724 string=0x000000000053F728 "`"
 *   insn=0x000000000053F730 string=0x000000000053F734 "c"
 *   insn=0x000000000053F734 string=0x000000000053F738 "c0@"
 *   insn=0x000000000053F738 string=0x000000000053F73C "`"
 *   insn=0x000000000053F740 string=0x000000000053F744 "@"
 *   insn=0x000000000053F744 string=0x000000000053F748 "`"
 *   insn=0x000000000053F74C string=0x000000000053F750 "s"
 *   insn=0x000000000053F754 string=0x000000000053F758 "a"@"
 *   insn=0x000000000053F760 string=0x000000000053F764 "!"
 *   insn=0x000000000053F764 string=0x000000000053F768 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53F70C(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 result; // x0

  v5 = *(_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 232);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
  if ( a3 != result )
    return sub_520C14(
             (__int64)a1 + *(_QWORD *)(*a1 - 24LL),
             *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL) + 32) | 1u);
  return result;
}

