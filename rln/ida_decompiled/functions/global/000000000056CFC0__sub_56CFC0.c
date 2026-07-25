/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CFC0
 * Mangled: sub_56CFC0
 * Demangled: sub_56CFC0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 7
 *   insn=0x000000000056CFC8 string=0x000000000056CFCC "#"
 *   insn=0x000000000056CFCC string=0x000000000056CFD0 "b"
 *   insn=0x000000000056CFD0 string=0x000000000056CFD4 "_"
 *   insn=0x000000000056CFE4 string=0x000000000056CFE8 """
 *   insn=0x000000000056CFF0 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x000000000056CFF4 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x000000000056CFF8 string=0x000000000056CFFC "!@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56CFC0(const wchar_t **a1)
{
  __int64 v1; // x3

  v1 = *((_QWORD *)*a1 - 3);
  if ( !v1 )
    sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", 0xFFFFFFFFFFFFFFFFLL, 0);
  return sub_56C650(a1, v1 - 1, 1, 0);
}

