/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052D354
 * Mangled: sub_52D354
 * Demangled: sub_52D354
 *
 * Callers: 25
 *   0x0000000000520D44  sub_520D44
 *   0x00000000005210E8  sub_5210E8
 *   0x00000000005211BC  sub_5211BC
 *   0x0000000000524C20  sub_524C20
 *   0x0000000000528E58  sub_528E58
 *   0x000000000052D3BC  sub_52D3BC
 *   0x000000000052D5D4  sub_52D5D4
 *   0x000000000052D908  sub_52D908
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052E854  sub_52E854
 *   0x000000000052EE7C  sub_52EE7C
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x0000000000530D30  sub_530D30
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x0000000000532890  sub_532890
 *   0x0000000000532C04  sub_532C04
 *   0x0000000000533030  sub_533030
 *   0x0000000000533278  sub_533278
 *   0x0000000000533538  sub_533538
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536428  sub_536428
 *
 * Callees: 4
 *   0x00000000001F8810  .__cxa_bad_cast
 *   0x00000000001FF690  .__dynamic_cast
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 9
 *   insn=0x000000000052D368 string=0x000000000052D36C "Y<"
 *   insn=0x000000000052D36C string=0x000000000052D370 "a"
 *   insn=0x000000000052D370 string=0x000000000052D374 ""@"
 *   insn=0x000000000052D374 string=0x000000000052D378 "!"
 *   insn=0x000000000052D380 string=0x000000000052D384 " x`"
 *   insn=0x000000000052D384 string=0x000000000052D388 "`"
 *   insn=0x000000000052D394 string=0x000000000052D398 "!"
 *   insn=0x000000000052D398 string=0x000000000052D39C "B"
 *   insn=0x000000000052D3B8 string=0x00000000001F8810 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_52D354(__int64 a1)
{
  unsigned __int64 v2; // x0
  void *result; // x0

  v2 = sub_53C4D0(&qword_6FBD20);
  if ( v2 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) || (v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8 * v2)) == 0 )
    sub_5652C8(v2);
  result = __dynamic_cast(
             (const void *)v2,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::ctype<char>,
             0);
  if ( !result )
    __cxa_bad_cast();
  return result;
}

