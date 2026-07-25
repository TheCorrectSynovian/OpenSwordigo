/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206770
 * Mangled: sub_206770
 * Demangled: sub_206770
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000206670  sub_206670
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 23
 *   insn=0x000000000020677C string=0x0000000000206780 "T"
 *   insn=0x00000000002067AC string=0x00000000002067B0 "$"
 *   insn=0x00000000002067B0 string=0x00000000001F4C40 "P'"
 *   insn=0x00000000002067B4 string=0x00000000002067B8 "s"
 *   insn=0x00000000002067BC string=0x0000000000589EDB "plain"
 *   insn=0x00000000002067D0 string=0x00000000002067D4 "`""
 *   insn=0x00000000002067D0 string=0x0000000000589EE1 "roundedHat"
 *   insn=0x00000000002067D4 string=0x00000000002067D8 "!"
 *   insn=0x00000000002067EC string=0x00000000002067F0 "B"
 *   insn=0x000000000020681C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000206824 string=0x0000000000206828 "J"
 *   insn=0x000000000020682C string=0x0000000000206830 "(a"
 *   insn=0x000000000020683C string=0x0000000000206840 "J=G"
 *   insn=0x0000000000206840 string=0x0000000000206844 ")!"
 *   insn=0x0000000000206848 string=0x000000000020684C "*"
 *   insn=0x0000000000206848 string=0x0000000000206878 "*"
 *   insn=0x000000000020684C string=0x0000000000206850 "K"
 *   insn=0x0000000000206850 string=0x0000000000206854 "+"
 *   insn=0x0000000000206858 string=0x000000000020685C "_"
 *   insn=0x0000000000206878 string=0x000000000020687C "K"
 *   insn=0x000000000020687C string=0x0000000000206880 "+"
 *   insn=0x0000000000206880 string=0x0000000000206884 "_"
 *   insn=0x00000000002068A8 string=0x00000000002068AC "zn"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_206770()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E8C00);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8C00, &off_6E8000);
  sub_566BB8((int)&Caver::groundMeshTypeStrings, "plain");
  sub_566BB8((int)&qword_6E8C10, "roundedHat");
  return __cxa_atexit((void (*)(void *))sub_206670, 0, &off_6E8000);
}

