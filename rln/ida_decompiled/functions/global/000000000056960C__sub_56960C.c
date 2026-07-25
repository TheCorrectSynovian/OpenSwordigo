/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056960C
 * Mangled: sub_56960C
 * Demangled: sub_56960C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 7
 *   insn=0x0000000000569614 string=0x0000000000569618 "#"
 *   insn=0x0000000000569618 string=0x000000000056961C "b"
 *   insn=0x000000000056961C string=0x0000000000569620 "_"
 *   insn=0x0000000000569630 string=0x0000000000569634 """
 *   insn=0x000000000056963C string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000569640 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x0000000000569644 string=0x0000000000569648 "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall sub_56960C(__int64 *a1)
{
  __int64 v1; // x3

  v1 = *(_QWORD *)(*a1 - 24);
  if ( !v1 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFFFFFFFFFFLL, 0);
  return sub_568CB8(a1, v1 - 1, 1, 0);
}

