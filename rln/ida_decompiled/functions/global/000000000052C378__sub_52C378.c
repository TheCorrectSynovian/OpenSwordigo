/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052C378
 * Mangled: sub_52C378
 * Demangled: sub_52C378
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000053B7BC  nullsub_2
 *   0x000000000053EFC4  sub_53EFC4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000052C378 string=0x000000000052C37C "?"
 *   insn=0x000000000052C390 string=0x000000000052C394 "b"
 *   insn=0x000000000052C398 string=0x000000000052C39C "B"
 *   insn=0x000000000052C3A4 string=0x000000000052C3A8 "K"
 *   insn=0x000000000052C3C4 string=0x000000000052C3C8 "?U"
 *   insn=0x000000000052C3CC string=0x000000000052C3D0 "_"
 *   insn=0x000000000052C3E0 string=0x000000000052C3E4 "b"
 *   insn=0x000000000052C3E8 string=0x000000000052C3EC "B"
 *   insn=0x000000000052C418 string=0x000000000052C41C "*U"
 *   insn=0x000000000052C420 string=0x000000000052C424 "_"
 *   insn=0x000000000052C434 string=0x000000000052C438 "b"
 *   insn=0x000000000052C43C string=0x000000000052C440 "B"
 *   insn=0x000000000052C478 string=0x000000000052C47C "!@"
 *   insn=0x000000000052C47C string=0x000000000052C480 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52C378(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = a2 != 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_6DA130;
  return sub_53EFC4();
}

