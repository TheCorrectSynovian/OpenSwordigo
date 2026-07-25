/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3FB8
 * Mangled: sub_4F3FB8
 * Demangled: sub_4F3FB8
 *
 * Callers: 1
 *   0x00000000004EDB10  sub_4EDB10
 *
 * Callees: 1
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 12
 *   insn=0x00000000004F3FC4 string=0x00000000004F3FC8 "a"
 *   insn=0x00000000004F3FC8 string=0x00000000004F3FCC "("
 *   insn=0x00000000004F3FD4 string=0x00000000004F3FD8 "?"
 *   insn=0x00000000004F3FD8 string=0x00000000004F3FDC " "
 *   insn=0x00000000004F3FDC string=0x00000000004F3FE0 "h.@9"
 *   insn=0x00000000004F3FDC string=0x00000000004F4000 "h:"
 *   insn=0x00000000004F3FEC string=0x00000000004F3FF0 "(!"
 *   insn=0x00000000004F3FF0 string=0x00000000004F3FF4 "\t"
 *   insn=0x00000000004F3FF8 string=0x00000000004F3FFC "^"
 *   insn=0x00000000004F4000 string=0x00000000004F4004 "a"
 *   insn=0x00000000004F4010 string=0x00000000004F4014 "X"
 *   insn=0x00000000004F402C string=0x00000000004F4030 "Q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3FB8(__int64 a1, __int64 a2)
{
  void *v3; // x1

  v3 = *(void **)(a2 + 32);
  if ( v3 != &unk_59A2A0 )
    sub_4EED74(a1, (__int64)v3, 40LL * (1 << *(_BYTE *)(a2 + 11)), 0);
  sub_4EED74(a1, *(_QWORD *)(a2 + 24), 16LL * *(int *)(a2 + 56), 0);
  return sub_4EED74(a1, a2, 64, 0);
}

