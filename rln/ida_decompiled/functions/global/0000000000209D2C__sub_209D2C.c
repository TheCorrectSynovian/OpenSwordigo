/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209D2C
 * Mangled: sub_209D2C
 * Demangled: sub_209D2C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000003A5CA4  boost::shared_ptr<Caver::ProfileManager>::~shared_ptr()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000209D40 string=0x0000000000209D44 "Ta"
 *   insn=0x0000000000209D60 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000209D70 string=0x0000000000209D74 "?|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209D2C()
{
  sub_522294(&unk_6E9948);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9948, &off_6E8000);
  qword_6E9950 = 0;
  qword_6E9958 = 0;
  return __cxa_atexit(
           (void (*)(void *))boost::shared_ptr<Caver::ProfileManager>::~shared_ptr,
           &qword_6E9950,
           &off_6E8000);
}

