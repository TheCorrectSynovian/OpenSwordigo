/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005211BC
 * Mangled: sub_5211BC
 * Demangled: sub_5211BC
 *
 * Callers: 2
 *   0x0000000000521268  sub_521268
 *   0x0000000000521338  sub_521338
 *
 * Callees: 6
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E184  sub_52E184
 *   0x000000000052E1EC  sub_52E1EC
 *   0x000000000052F0C0  sub_52F0C0
 *   0x000000000052F270  sub_52F270
 *   0x000000000052F2DC  sub_52F2DC
 *
 * Referenced strings: 7
 *   insn=0x00000000005211E0 string=0x00000000005211E4 "\0"
 *   insn=0x00000000005211EC string=0x00000000005211F0 " 8"
 *   insn=0x00000000005211F4 string=0x00000000005211F8 "`"
 *   insn=0x0000000000521208 string=0x000000000052120C "48"
 *   insn=0x0000000000521210 string=0x0000000000521214 " "
 *   insn=0x0000000000521248 string=0x000000000052124C "$8"
 *   insn=0x0000000000521250 string=0x0000000000521254 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5211BC(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0

  if ( (unsigned __int8)sub_52F0C0(a2) )
  {
    a1[30] = sub_52D354(a2);
    if ( (unsigned __int8)sub_52F270(a2) )
      goto LABEL_3;
LABEL_6:
    a1[31] = 0;
    result = (unsigned __int8)sub_52F2DC(a2);
    if ( (_BYTE)result )
      goto LABEL_4;
    goto LABEL_7;
  }
  a1[30] = 0;
  if ( !(unsigned __int8)sub_52F270(a2) )
    goto LABEL_6;
LABEL_3:
  a1[31] = sub_52E184(a2);
  result = (unsigned __int8)sub_52F2DC(a2);
  if ( (_BYTE)result )
  {
LABEL_4:
    result = sub_52E1EC(a2);
    a1[32] = result;
    return result;
  }
LABEL_7:
  a1[32] = 0;
  return result;
}

