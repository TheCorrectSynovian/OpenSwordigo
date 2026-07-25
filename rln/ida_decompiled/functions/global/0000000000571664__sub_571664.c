/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571664
 * Mangled: sub_571664
 * Demangled: sub_571664
 *
 * Callers: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Callees: 4
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x0000000000571664 string=0x0000000000571668 ""\n"
 *   insn=0x0000000000571670 string=0x0000000000571674 "B"
 *   insn=0x0000000000571698 string=0x000000000057169C "u:"
 *   insn=0x00000000005716A4 string=0x00000000005716A8 "?"
 *   insn=0x00000000005716A8 string=0x00000000005716AC "@"
 *   insn=0x00000000005716B4 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_571664(__int64 a1, unsigned int **a2)
{
  *(_QWORD *)a1 = off_6B81A0;
  return sub_56A528((unsigned int **)(a1 + 8), a2);
}

