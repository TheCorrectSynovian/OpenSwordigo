/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1CC8
 * Mangled: _ZN5Caver17TestTriangulationEv
 * Demangled: Caver::TestTriangulation(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE440  .printf
 *
 * Referenced strings: 2
 *   insn=0x00000000002C1CD0 string=0x00000000002C1CD4 "S"
 *   insn=0x00000000002C1CD4 string=0x0000000000589FD0 "[%d, %d, %d]\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TestTriangulation(Caver *this)
{
  printf("[%d, %d, %d]\n", 0, 0, 0);
  return printf("[%d, %d, %d]\n", 0, 0, 0);
}

