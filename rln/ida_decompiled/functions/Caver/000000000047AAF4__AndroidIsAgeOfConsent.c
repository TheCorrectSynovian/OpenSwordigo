/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AAF4
 * Mangled: _ZN5Caver21AndroidIsAgeOfConsentEv
 * Demangled: Caver::AndroidIsAgeOfConsent(void)
 *
 * Callers: 1
 *   0x00000000001FC5B0  Caver::AndroidIsAgeOfConsent(void)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047AAFC string=0x000000000047AB00 "s"
 *   insn=0x000000000047AB00 string=0x000000000047AB04 "`2F"
 *   insn=0x000000000047AB04 string=0x000000000047AB08 "t"
 *   insn=0x000000000047AB10 string=0x000000000047AB14 ""
 *   insn=0x000000000047AB10 string=0x0000000000596119 "isAgeOfConsent"
 *   insn=0x000000000047AB18 string=0x000000000047AB1C "Bd"
 *   insn=0x000000000047AB18 string=0x0000000000596115 "()Z"
 *   insn=0x000000000047AB1C string=0x000000000047AB20 "cT"
 *   insn=0x000000000047AB20 string=0x000000000047AB24 ""
 *   insn=0x000000000047AB28 string=0x000000000047AB2C "h2F"
 *   insn=0x000000000047AB38 string=0x000000000047AB3C "-"
 *   insn=0x000000000047AB3C string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidIsAgeOfConsent(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "isAgeOfConsent",
    "()Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

