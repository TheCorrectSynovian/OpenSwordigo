/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000209E00
 * Mangled: sub_209E00
 * Demangled: sub_209E00
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000003A9410  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileManagerLoadingView,Caver::ProfileManagerLoadingView>(boost::shared_ptr<Caver::ProfileManagerLoadingView> const*,Caver::ProfileManagerLoadingView *)
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 3
 *   insn=0x0000000000209E34 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000209E44 string=0x0000000000209E48 "?|"
 *   insn=0x0000000000209E54 string=0x0000000000209E58 "z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_209E00()
{
  sub_522294(&unk_6E9968);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9968, &off_6E8000);
  qword_6E9970 = 0;
  qword_6E9978 = 0;
  return __cxa_atexit(
           (void (*)(void *))&boost::shared_ptr<Caver::StoreController>::~shared_ptr,
           &qword_6E9970,
           &off_6E8000);
}

