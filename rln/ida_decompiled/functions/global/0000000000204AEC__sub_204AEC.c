/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204AEC
 * Mangled: sub_204AEC
 * Demangled: sub_204AEC
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000204940  sub_204940
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 30
 *   insn=0x0000000000204B00 string=0x0000000000204B04 "U"
 *   insn=0x0000000000204B08 string=0x0000000000204B0C "3'"
 *   insn=0x0000000000204B24 string=0x0000000000204B28 ""'"
 *   insn=0x0000000000204B30 string=0x0000000000204B34 "C"
 *   insn=0x0000000000204B34 string=0x0000000000204B38 "3'"
 *   insn=0x0000000000204B34 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000204B40 string=0x0000000000583AEC "none"
 *   insn=0x0000000000204B50 string=0x0000000000204B54 "t""
 *   insn=0x0000000000204B58 string=0x00000000005847E0 "rectangle"
 *   insn=0x0000000000204B68 string=0x0000000000204B6C "tB"
 *   insn=0x0000000000204B70 string=0x00000000005847EA "circle"
 *   insn=0x0000000000204B80 string=0x0000000000204B84 "tb"
 *   insn=0x0000000000204B88 string=0x00000000005847F1 "polygon"
 *   insn=0x0000000000204B94 string=0x0000000000204B98 ""
 *   insn=0x0000000000204B9C string=0x0000000000204BA0 ""'"
 *   insn=0x0000000000204BA4 string=0x0000000000204BA8 "B"
 *   insn=0x0000000000204BAC string=0x0000000000204BB0 "$"
 *   insn=0x0000000000204BDC string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000204C08 string=0x0000000000204C18 "!"
 *   insn=0x0000000000204C0C string=0x0000000000204C10 "a"
 *   insn=0x0000000000204C1C string=0x0000000000204C20 "\t"
 *   insn=0x0000000000204C1C string=0x0000000000204C3C "\t"
 *   insn=0x0000000000204C20 string=0x0000000000204C24 "*"
 *   insn=0x0000000000204C24 string=0x0000000000204C28 "\n"
 *   insn=0x0000000000204C2C string=0x0000000000204C30 "?"
 *   insn=0x0000000000204C3C string=0x0000000000204C40 "*"
 *   insn=0x0000000000204C40 string=0x0000000000204C44 "\n"
 *   insn=0x0000000000204C44 string=0x0000000000204C48 "?"
 *   insn=0x0000000000204C74 string=0x0000000000204C78 "3'"
 *   insn=0x0000000000204C90 string=0x0000000000204C94 ""'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_204AEC()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E8AB8);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8AB8, &off_6E8000);
  sub_566BB8((int)&qword_6E8AC0, "none");
  sub_566BB8((int)&qword_6E8AC8, "rectangle");
  sub_566BB8((int)&qword_6E8AD0, "circle");
  sub_566BB8((int)&qword_6E8AD8, "polygon");
  return __cxa_atexit((void (*)(void *))sub_204940, 0, &off_6E8000);
}

