/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002052B8
 * Mangled: sub_2052B8
 * Demangled: sub_2052B8
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000205068  sub_205068
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x00000000002052CC string=0x00000000002052D0 "U"
 *   insn=0x00000000002052FC string=0x0000000000205300 "P"
 *   insn=0x0000000000205300 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000205304 string=0x0000000000205308 "sNC"
 *   insn=0x000000000020530C string=0x0000000000583F97 "unknown"
 *   insn=0x0000000000205318 string=0x000000000020531C "'"
 *   insn=0x000000000020531C string=0x0000000000205320 "t""
 *   insn=0x0000000000205324 string=0x0000000000587D04 "healthPotion"
 *   insn=0x0000000000205330 string=0x0000000000205334 "!"
 *   insn=0x0000000000205334 string=0x0000000000205338 "tB"
 *   insn=0x000000000020533C string=0x0000000000587D11 "manaPotion"
 *   insn=0x0000000000205348 string=0x000000000020534C ""
 *   insn=0x000000000020534C string=0x0000000000205350 "tb"
 *   insn=0x0000000000205354 string=0x0000000000587D1C "magicPower"
 *   insn=0x0000000000205364 string=0x0000000000205368 "t"
 *   insn=0x0000000000205368 string=0x000000000020536C "a"
 *   insn=0x000000000020536C string=0x000000000059209E "coin"
 *   insn=0x000000000020537C string=0x0000000000205380 "t"
 *   insn=0x0000000000205384 string=0x0000000000587D27 "experience"
 *   insn=0x0000000000205390 string=0x0000000000205394 "\t"
 *   insn=0x00000000002053A0 string=0x00000000002053A4 "B"
 *   insn=0x00000000002053A8 string=0x00000000002053AC "%"
 *   insn=0x00000000002053D8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000020540C string=0x000000000020541C "!"
 *   insn=0x0000000000205410 string=0x0000000000205414 "a"
 *   insn=0x0000000000205420 string=0x0000000000205424 "\t"
 *   insn=0x0000000000205420 string=0x0000000000205440 "\t"
 *   insn=0x0000000000205424 string=0x0000000000205428 "*"
 *   insn=0x0000000000205428 string=0x000000000020542C "\n"
 *   insn=0x0000000000205430 string=0x0000000000205434 "?"
 *   insn=0x0000000000205440 string=0x0000000000205444 "*"
 *   insn=0x0000000000205444 string=0x0000000000205448 "\n"
 *   insn=0x0000000000205448 string=0x000000000020544C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2052B8()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E8B50);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8B50, &off_6E8000);
  sub_566BB8((int)&Caver::bindingTypeStrings, "unknown");
  sub_566BB8((int)&qword_6E8B60, "healthPotion");
  sub_566BB8((int)&qword_6E8B68, "manaPotion");
  sub_566BB8((int)&qword_6E8B70, "magicPower");
  sub_566BB8((int)&qword_6E8B78, "coin");
  sub_566BB8((int)&qword_6E8B80, "experience");
  return __cxa_atexit((void (*)(void *))sub_205068, 0, &off_6E8000);
}

