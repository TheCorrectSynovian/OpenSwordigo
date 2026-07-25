/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020C014
 * Mangled: sub_20C014
 * Demangled: sub_20C014
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x0000000000477A0C  boost::shared_ptr<Caver::RenderingContext>::~shared_ptr()
 *   0x0000000000477A74  boost::shared_ptr<Caver::CaverShell>::~shared_ptr()
 *   0x0000000000477ADC  boost::shared_ptr<Caver::OnlineController_Android>::~shared_ptr()
 *   0x0000000000477B44  boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr()
 *   0x0000000000477BAC  boost::shared_ptr<Caver::StoreController_Android>::~shared_ptr()
 *   0x0000000000522294  sub_522294
 *   0x000000000052296C  sub_52296C
 *
 * Referenced strings: 9
 *   insn=0x000000000020C048 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020C04C string=0x000000000020C054 "?|"
 *   insn=0x000000000020C068 string=0x000000000020C070 "?|"
 *   insn=0x000000000020C084 string=0x000000000020C08C "?|"
 *   insn=0x000000000020C0A0 string=0x000000000020C0A8 "?|"
 *   insn=0x000000000020C0BC string=0x000000000020C0C4 "?|"
 *   insn=0x000000000020C0E0 string=0x000000000020C0E4 ""
 *   insn=0x000000000020C0E4 string=0x000000000020C0E8 ")A2"
 *   insn=0x000000000020C0EC string=0x000000000020C0F0 "?}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20C014()
{
  __int64 result; // x0

  sub_522294(&unk_6E9C00);
  __cxa_atexit((void (*)(void *))sub_52296C, &unk_6E9C00, &off_6E8000);
  qword_6E9C10 = 0;
  qword_6E9C18 = 0;
  __cxa_atexit((void (*)(void *))boost::shared_ptr<Caver::RenderingContext>::~shared_ptr, &qword_6E9C10, &off_6E8000);
  qword_6E9C20 = 0;
  qword_6E9C28 = 0;
  __cxa_atexit((void (*)(void *))boost::shared_ptr<Caver::CaverShell>::~shared_ptr, &qword_6E9C20, &off_6E8000);
  qword_6E9C30 = 0;
  qword_6E9C38 = 0;
  __cxa_atexit(
    (void (*)(void *))boost::shared_ptr<Caver::OnlineController_Android>::~shared_ptr,
    &qword_6E9C30,
    &off_6E8000);
  qword_6E9C40 = 0;
  qword_6E9C48 = 0;
  __cxa_atexit(
    (void (*)(void *))boost::shared_ptr<Caver::ProfileManager_Android>::~shared_ptr,
    &qword_6E9C40,
    &off_6E8000);
  qword_6E9C50 = 0;
  qword_6E9C58 = 0;
  result = __cxa_atexit(
             (void (*)(void *))boost::shared_ptr<Caver::StoreController_Android>::~shared_ptr,
             &qword_6E9C50,
             &off_6E8000);
  qword_6E9C80 = 0;
  qword_6E9C88 = 0;
  qword_6E9C90 = 0;
  qword_6E9C98 = 0;
  return result;
}

