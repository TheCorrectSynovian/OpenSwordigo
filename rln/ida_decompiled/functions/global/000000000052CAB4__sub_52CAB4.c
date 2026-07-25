/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CAB4
 * Mangled: sub_52CAB4
 * Demangled: sub_52CAB4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x000000000052CAB4 string=0x000000000052CAB8 "B,@"
 *   insn=0x000000000052CAB8 string=0x000000000052CABC """
 *   insn=0x000000000052CAC0 string=0x000000000052CAC4 "B0@"
 *   insn=0x000000000052CAC4 string=0x000000000052CAC8 """
 *   insn=0x000000000052CACC string=0x000000000052CAD0 "B4@"
 *   insn=0x000000000052CAD0 string=0x000000000052CAD4 """
 *   insn=0x000000000052CAD8 string=0x000000000052CADC "B8@"
 *   insn=0x000000000052CADC string=0x000000000052CAE0 """
 *   insn=0x000000000052CAE4 string=0x000000000052CAE8 "B<@"
 *   insn=0x000000000052CAE8 string=0x000000000052CAEC """
 *   insn=0x000000000052CAF0 string=0x000000000052CAF4 "B@@"
 *   insn=0x000000000052CAF4 string=0x000000000052CAF8 """
 *   insn=0x000000000052CB00 string=0x000000000052CB04 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CAB4(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  a2[1] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL);
  a2[2] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  a2[3] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  a2[4] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  a2[6] = result;
  return result;
}

