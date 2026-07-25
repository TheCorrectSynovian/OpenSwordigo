/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020CE6C
 * Mangled: sub_20CE6C
 * Demangled: sub_20CE6C
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000566F50  sub_566F50
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000020CE7C string=0x000000000020CE80 "U"
 *   insn=0x000000000020CEB0 string=0x000000000020CEB4 "c"
 *   insn=0x000000000020CEB4 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020CEB8 string=0x000000000020CEBC ""
 *   insn=0x000000000020CECC string=0x000000000020CED0 "6"
 *   insn=0x000000000020CED0 string=0x000000000020CED4 "sfF"
 *   insn=0x000000000020CEDC string=0x000000000020CEE0 "X"
 *   insn=0x000000000020CEF0 string=0x000000000020CEF4 "6"
 *   insn=0x000000000020CEF4 string=0x000000000020CEF8 "R"
 *   insn=0x000000000020CEFC string=0x000000000020CF00 "A"
 *   insn=0x000000000020CF00 string=0x0000000000596011 "resources"
 *   insn=0x000000000020CF04 string=0x000000000020CF08 "!D"
 *   insn=0x000000000020CF0C string=0x000000000020CF10 "*g"
 *   insn=0x000000000020CF20 string=0x000000000020CF24 "!"
 *   insn=0x000000000020CF24 string=0x000000000020CF28 "B"
 *   insn=0x000000000020CF28 string=0x000000000020CF2C "E"
 *   insn=0x000000000020CF54 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000020CF90 string=0x000000000020CF94 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20CE6C()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E9F40);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9F40, &off_6E8000);
  qword_6E9F48 = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &qword_6E9F48, &off_6E8000);
  qword_6E9F50 = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &qword_6E9F50, &off_6E8000);
  sub_566BB8((int)&qword_6E9F60, "resources");
  return __cxa_atexit((void (*)(void *))sub_566F50, &qword_6E9F60, &off_6E8000);
}

