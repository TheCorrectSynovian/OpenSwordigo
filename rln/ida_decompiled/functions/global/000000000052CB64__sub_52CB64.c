/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CB64
 * Mangled: sub_52CB64
 * Demangled: sub_52CB64
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 23
 *   insn=0x000000000052CB64 string=0x000000000052CB68 "Bd@"
 *   insn=0x000000000052CB68 string=0x000000000052CB6C """
 *   insn=0x000000000052CB70 string=0x000000000052CB74 "Bh@"
 *   insn=0x000000000052CB74 string=0x000000000052CB78 """
 *   insn=0x000000000052CB7C string=0x000000000052CB80 "Bl@"
 *   insn=0x000000000052CB80 string=0x000000000052CB84 """
 *   insn=0x000000000052CB88 string=0x000000000052CB8C "Bp@"
 *   insn=0x000000000052CB8C string=0x000000000052CB90 """
 *   insn=0x000000000052CB94 string=0x000000000052CB98 "Bt@"
 *   insn=0x000000000052CB98 string=0x000000000052CB9C """
 *   insn=0x000000000052CBA0 string=0x000000000052CBA4 "Bx@"
 *   insn=0x000000000052CBA4 string=0x000000000052CBA8 """
 *   insn=0x000000000052CBAC string=0x000000000052CBB0 "B|@"
 *   insn=0x000000000052CBB0 string=0x000000000052CBB4 """
 *   insn=0x000000000052CBB8 string=0x000000000052CBBC "B"
 *   insn=0x000000000052CBBC string=0x000000000052CBC0 """
 *   insn=0x000000000052CBC4 string=0x000000000052CBC8 "B"
 *   insn=0x000000000052CBC8 string=0x000000000052CBCC "" "
 *   insn=0x000000000052CBD0 string=0x000000000052CBD4 "B"
 *   insn=0x000000000052CBD4 string=0x000000000052CBD8 ""$"
 *   insn=0x000000000052CBDC string=0x000000000052CBE0 "B"
 *   insn=0x000000000052CBE0 string=0x000000000052CBE4 ""("
 *   insn=0x000000000052CBEC string=0x000000000052CBF0 " ,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CB64(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 200LL);
  a2[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 208LL);
  a2[2] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL);
  a2[3] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 224LL);
  a2[4] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
  a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL);
  a2[6] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL);
  a2[7] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 256LL);
  a2[8] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 264LL);
  a2[9] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL);
  a2[10] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL);
  a2[11] = result;
  return result;
}

