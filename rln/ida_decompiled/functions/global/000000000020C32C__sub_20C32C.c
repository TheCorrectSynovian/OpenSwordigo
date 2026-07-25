/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C32C
 * Mangled: sub_20C32C
 * Demangled: sub_20C32C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000483750  std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::~_List_base()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 5
 *   insn=0x000000000020C35C string=0x000000000020C360 "8"
 *   insn=0x000000000020C360 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020C364 string=0x000000000020C36C " "
 *   insn=0x000000000020C374 string=0x000000000020C378 " "
 *   insn=0x000000000020C384 string=0x000000000020C388 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C32C()
{
  sub_522294(&unk_6E9D90);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9D90, &off_6E8000);
  xmmword_6E9DA0 = (__int128)vdupq_n_s64((unsigned __int64)&xmmword_6E9DA0);
  return __cxa_atexit(
           (void (*)(void *))std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>>::~_List_base,
           &xmmword_6E9DA0,
           &off_6E8000);
}

