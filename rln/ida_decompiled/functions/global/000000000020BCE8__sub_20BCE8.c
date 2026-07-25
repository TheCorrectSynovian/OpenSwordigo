/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020BCE8
 * Mangled: sub_20BCE8
 * Demangled: sub_20BCE8
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x000000000045AC58  std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::ObjectLibrary>>>>::~map()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *   0x0000000000566F50  sub_566F50
 *
 * Referenced strings: 8
 *   insn=0x000000000020BCFC string=0x000000000020BD00 "eY"
 *   insn=0x000000000020BD1C string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020BD20 string=0x000000000020BD24 ""
 *   insn=0x000000000020BD30 string=0x000000000020BD34 "a"
 *   insn=0x000000000020BD34 string=0x000000000020BD38 "("
 *   insn=0x000000000020BD50 string=0x000000000020BD54 "?|"
 *   insn=0x000000000020BD54 string=0x000000000020BD58 "?|"
 *   insn=0x000000000020BD68 string=0x000000000020BD6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20BCE8()
{
  sub_522294(&unk_6E9BA8);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9BA8, &off_6E8000);
  qword_6E9BB0 = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &qword_6E9BB0, &off_6E8000);
  *(_QWORD *)&xmmword_6E9BC8 = 0;
  qword_6E9BE0 = 0;
  qword_6E9BC0 = 0;
  *(__int128 *)((char *)&xmmword_6E9BC8 + 8) = (__int128)vdupq_n_s64((unsigned __int64)&qword_6E9BC0);
  return __cxa_atexit(
           (void (*)(void *))std::map<std::string,boost::weak_ptr<Caver::ObjectLibrary>>::~map,
           &unk_6E9BB8,
           &off_6E8000);
}

