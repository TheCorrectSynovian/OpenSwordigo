/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EEBC
 * Mangled: sub_54EEBC
 * Demangled: sub_54EEBC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 23
 *   insn=0x000000000054EEBC string=0x000000000054EEC0 "Bd@"
 *   insn=0x000000000054EEC0 string=0x000000000054EEC4 """
 *   insn=0x000000000054EEC8 string=0x000000000054EECC "Bh@"
 *   insn=0x000000000054EECC string=0x000000000054EED0 """
 *   insn=0x000000000054EED4 string=0x000000000054EED8 "Bl@"
 *   insn=0x000000000054EED8 string=0x000000000054EEDC """
 *   insn=0x000000000054EEE0 string=0x000000000054EEE4 "Bp@"
 *   insn=0x000000000054EEE4 string=0x000000000054EEE8 """
 *   insn=0x000000000054EEEC string=0x000000000054EEF0 "Bt@"
 *   insn=0x000000000054EEF0 string=0x000000000054EEF4 """
 *   insn=0x000000000054EEF8 string=0x000000000054EEFC "Bx@"
 *   insn=0x000000000054EEFC string=0x000000000054EF00 """
 *   insn=0x000000000054EF04 string=0x000000000054EF08 "B|@"
 *   insn=0x000000000054EF08 string=0x000000000054EF0C """
 *   insn=0x000000000054EF10 string=0x000000000054EF14 "B"
 *   insn=0x000000000054EF14 string=0x000000000054EF18 """
 *   insn=0x000000000054EF1C string=0x000000000054EF20 "B"
 *   insn=0x000000000054EF20 string=0x000000000054EF24 "" "
 *   insn=0x000000000054EF28 string=0x000000000054EF2C "B"
 *   insn=0x000000000054EF2C string=0x000000000054EF30 ""$"
 *   insn=0x000000000054EF34 string=0x000000000054EF38 "B"
 *   insn=0x000000000054EF38 string=0x000000000054EF3C ""("
 *   insn=0x000000000054EF44 string=0x000000000054EF48 " ,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54EEBC(__int64 a1, _QWORD *a2)
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

