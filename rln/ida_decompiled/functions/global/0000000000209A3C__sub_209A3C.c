/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209A3C
 * Mangled: sub_209A3C
 * Demangled: sub_209A3C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000388E7C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIView,Caver::GUIView>(boost::shared_ptr<Caver::GUIView> const*,Caver::GUIView *)
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 4
 *   insn=0x0000000000209A6C string=0x0000000000209A70 "t"
 *   insn=0x0000000000209A70 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000209A80 string=0x0000000000209A84 "?|"
 *   insn=0x0000000000209A90 string=0x0000000000209A94 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209A3C()
{
  sub_522294(&unk_6E9920);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9920, &off_6E8000);
  qword_6E9928 = 0;
  qword_6E9930 = 0;
  return __cxa_atexit(
           (void (*)(void *))&boost::shared_ptr<Caver::OnlineController>::~shared_ptr,
           &qword_6E9928,
           &off_6E8000);
}

