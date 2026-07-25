/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521A9C
 * Mangled: sub_521A9C
 * Demangled: sub_521A9C
 *
 * Callers: 2
 *   0x0000000000521B48  sub_521B48
 *   0x0000000000521C18  sub_521C18
 *
 * Callees: 6
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005503C0  sub_5503C0
 *   0x0000000000550428  sub_550428
 *   0x0000000000551634  sub_551634
 *   0x00000000005517E4  sub_5517E4
 *   0x0000000000551850  sub_551850
 *
 * Referenced strings: 9
 *   insn=0x0000000000521ACC string=0x0000000000521AD0 "E"
 *   insn=0x0000000000521AD4 string=0x0000000000521AD8 "`"
 *   insn=0x0000000000521ADC string=0x0000000000521AE0 "8"
 *   insn=0x0000000000521AE8 string=0x0000000000521AEC "Y"
 *   insn=0x0000000000521AF0 string=0x0000000000521AF4 " "
 *   insn=0x0000000000521AF8 string=0x0000000000521AFC "K"
 *   insn=0x0000000000521B14 string=0x0000000000521B18 "3"
 *   insn=0x0000000000521B28 string=0x0000000000521B2C "I"
 *   insn=0x0000000000521B30 string=0x0000000000521B34 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521A9C(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  if ( (unsigned __int8)sub_551634(a2) )
  {
    a1[30] = sub_54F6AC(a2);
    if ( (unsigned __int8)sub_5517E4(a2) )
      goto LABEL_3;
LABEL_6:
    a1[31] = 0;
    result = (unsigned __int8)sub_551850(a2);
    if ( (_BYTE)result )
      goto LABEL_4;
    goto LABEL_7;
  }
  a1[30] = 0;
  if ( !(unsigned __int8)sub_5517E4(a2) )
    goto LABEL_6;
LABEL_3:
  a1[31] = sub_5503C0(a2);
  result = (unsigned __int8)sub_551850(a2);
  if ( (_BYTE)result )
  {
LABEL_4:
    result = sub_550428(a2);
    a1[32] = result;
    return result;
  }
LABEL_7:
  a1[32] = 0;
  return result;
}

