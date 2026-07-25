/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C9E0
 * Mangled: sub_20C9E0
 * Demangled: sub_20C9E0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000004A2184  boost::shared_ptr<Caver::GUIWindow>::~shared_ptr()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x000000000020C9F4 string=0x000000000020C9F8 "'V"
 *   insn=0x000000000020CA14 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020CA24 string=0x000000000020CA28 "?|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C9E0()
{
  sub_522294(&unk_6E9E58);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9E58, &off_6E8000);
  qword_6E9E60 = 0;
  qword_6E9E68 = 0;
  return __cxa_atexit((void (*)(void *))boost::shared_ptr<Caver::GUIWindow>::~shared_ptr, &qword_6E9E60, &off_6E8000);
}

