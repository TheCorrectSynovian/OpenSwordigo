/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020641C
 * Mangled: sub_20641C
 * Demangled: sub_20641C
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002062C4  sub_2062C4
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 21
 *   insn=0x0000000000206430 string=0x0000000000206434 "U"
 *   insn=0x0000000000206464 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000206470 string=0x0000000000589BDF "inactive"
 *   insn=0x0000000000206480 string=0x0000000000206484 "t""
 *   insn=0x0000000000206488 string=0x0000000000589BE8 "wait"
 *   insn=0x0000000000206498 string=0x000000000020649C "tB"
 *   insn=0x00000000002064A0 string=0x0000000000589BED "continuous"
 *   insn=0x00000000002064BC string=0x00000000002064C0 "B"
 *   insn=0x00000000002064D8 string=0x00000000002064F4 "w"
 *   insn=0x00000000002064F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000020651C string=0x000000000020652C "!"
 *   insn=0x0000000000206520 string=0x0000000000206524 "a"
 *   insn=0x0000000000206530 string=0x0000000000206534 "\t"
 *   insn=0x0000000000206530 string=0x0000000000206550 "\t"
 *   insn=0x0000000000206534 string=0x0000000000206538 "*"
 *   insn=0x0000000000206538 string=0x000000000020653C "\n"
 *   insn=0x0000000000206540 string=0x0000000000206544 "?"
 *   insn=0x0000000000206550 string=0x0000000000206554 "*"
 *   insn=0x0000000000206554 string=0x0000000000206558 "\n"
 *   insn=0x0000000000206558 string=0x000000000020655C "?"
 *   insn=0x0000000000206594 string=0x0000000000206598 "?o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20641C()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E8BD8);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8BD8, &off_6E8000);
  sub_566BB8((int)&qword_6E8BE0, "inactive");
  sub_566BB8((int)&qword_6E8BE8, "wait");
  sub_566BB8((int)&qword_6E8BF0, "continuous");
  return __cxa_atexit((void (*)(void *))sub_2062C4, 0, &off_6E8000);
}

