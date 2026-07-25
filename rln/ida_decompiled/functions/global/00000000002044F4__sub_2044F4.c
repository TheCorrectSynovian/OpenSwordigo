/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002044F4
 * Mangled: sub_2044F4
 * Demangled: sub_2044F4
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002042A4  sub_2042A4
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 36
 *   insn=0x0000000000204508 string=0x000000000020450C "U"
 *   insn=0x0000000000204510 string=0x0000000000204514 "3'"
 *   insn=0x0000000000204520 string=0x0000000000204524 "\w"
 *   insn=0x000000000020452C string=0x0000000000204530 ""'"
 *   insn=0x000000000020453C string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000204540 string=0x0000000000204544 "s:D"
 *   insn=0x0000000000204548 string=0x0000000000583F97 "unknown"
 *   insn=0x0000000000204558 string=0x000000000020455C "t""
 *   insn=0x0000000000204560 string=0x0000000000583F9F "ambient"
 *   insn=0x0000000000204570 string=0x0000000000204574 "tB"
 *   insn=0x0000000000204578 string=0x0000000000583FA7 "directional"
 *   insn=0x0000000000204588 string=0x000000000020458C "tb"
 *   insn=0x0000000000204590 string=0x0000000000583FB3 "point"
 *   insn=0x00000000002045A0 string=0x00000000002045A4 "t"
 *   insn=0x00000000002045A8 string=0x0000000000583FB9 "overlay"
 *   insn=0x00000000002045B8 string=0x00000000002045BC "t"
 *   insn=0x00000000002045BC string=0x00000000002045C0 "A"
 *   insn=0x00000000002045CC string=0x00000000002045D0 "z"
 *   insn=0x00000000002045D4 string=0x00000000002045D8 ""'"
 *   insn=0x00000000002045DC string=0x00000000002045E0 "B"
 *   insn=0x00000000002045F8 string=0x0000000000204614 "/"
 *   insn=0x0000000000204614 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000204648 string=0x0000000000204658 "!"
 *   insn=0x000000000020464C string=0x0000000000204650 "a"
 *   insn=0x000000000020465C string=0x0000000000204660 "\t"
 *   insn=0x000000000020465C string=0x000000000020467C "\t"
 *   insn=0x0000000000204660 string=0x0000000000204664 "*"
 *   insn=0x0000000000204664 string=0x0000000000204668 "\n"
 *   insn=0x000000000020466C string=0x0000000000204670 "?"
 *   insn=0x000000000020467C string=0x0000000000204680 "*"
 *   insn=0x0000000000204680 string=0x0000000000204684 "\n"
 *   insn=0x0000000000204684 string=0x0000000000204688 "?"
 *   insn=0x0000000000204690 string=0x0000000000204694 "D"
 *   insn=0x00000000002046B4 string=0x00000000002046B8 "3'"
 *   insn=0x00000000002046D0 string=0x00000000002046D4 ""'"
 *   insn=0x00000000002046E0 string=0x00000000002046E4 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_2044F4()
{
  _ReadStatusReg(TPIDR_EL0);
  sub_522294(&unk_6E8A70);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E8A70, &off_6E8000);
  sub_566BB8((int)&Caver::typeStrings, "unknown");
  sub_566BB8((int)&qword_6E8A80, "ambient");
  sub_566BB8((int)&qword_6E8A88, "directional");
  sub_566BB8((int)&qword_6E8A90, "point");
  sub_566BB8((int)&qword_6E8A98, "overlay");
  sub_566BB8((int)&qword_6E8AA0, "");
  return __cxa_atexit((void (*)(void *))sub_2042A4, 0, &off_6E8000);
}

