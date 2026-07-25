/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005001D0
 * Mangled: sub_5001D0
 * Demangled: sub_5001D0
 *
 * Callers: 3
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F244C  sub_4F244C
 *   0x00000000004F28AC  sub_4F28AC
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000005001D0 string=0x00000000005001D4 "\t0"
 *   insn=0x00000000005001D4 string=0x00000000005001D8 ""
 *   insn=0x00000000005001D8 string=0x00000000005001DC "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall sub_5001D0(int *result, int a2)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)result + 40LL) + 4LL * result[12] - 4) = a2;
  return result;
}

