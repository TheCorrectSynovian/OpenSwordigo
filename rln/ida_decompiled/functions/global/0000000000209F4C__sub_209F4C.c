/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209F4C
 * Mangled: sub_209F4C
 * Demangled: sub_209F4C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000003B42F8  boost::shared_ptr<Caver::GameOptions>::~shared_ptr()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 7
 *   insn=0x0000000000209F7C string=0x0000000000209F80 "0"
 *   insn=0x0000000000209F80 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000209F84 string=0x0000000000209F8C "?|"
 *   insn=0x0000000000209F90 string=0x0000000000209F94 "s"
 *   insn=0x0000000000209F9C string=0x0000000000209FA0 "("
 *   insn=0x0000000000209FA4 string=0x0000000000209FAC "?|"
 *   insn=0x0000000000209FBC string=0x0000000000209FC0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209F4C()
{
  sub_522294(&unk_6E9990);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9990, &off_6E8000);
  qword_6E9998 = 0;
  qword_6E99A0 = 0;
  __cxa_atexit((void (*)(void *))boost::shared_ptr<Caver::GameOptions>::~shared_ptr, &qword_6E9998, &off_6E8000);
  qword_6E99A8 = 0;
  qword_6E99B0 = 0;
  return __cxa_atexit((void (*)(void *))boost::shared_ptr<Caver::GameOptions>::~shared_ptr, &qword_6E99A8, &off_6E8000);
}

