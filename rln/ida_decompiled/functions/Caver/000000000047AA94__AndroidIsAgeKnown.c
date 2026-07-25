/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AA94
 * Mangled: _ZN5Caver17AndroidIsAgeKnownEv
 * Demangled: Caver::AndroidIsAgeKnown(void)
 *
 * Callers: 1
 *   0x0000000000201990  Caver::AndroidIsAgeKnown(void)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047AA9C string=0x000000000047AAA0 "s"
 *   insn=0x000000000047AAA0 string=0x000000000047AAA4 "`2F"
 *   insn=0x000000000047AAA4 string=0x000000000047AAA8 "t"
 *   insn=0x000000000047AAB0 string=0x000000000047AAB4 ""
 *   insn=0x000000000047AAB0 string=0x000000000059610A "isAgeKnown"
 *   insn=0x000000000047AAB8 string=0x000000000047AABC "B("
 *   insn=0x000000000047AAB8 string=0x0000000000596115 "()Z"
 *   insn=0x000000000047AABC string=0x000000000047AAC0 "cT"
 *   insn=0x000000000047AAC0 string=0x000000000047AAC4 ""
 *   insn=0x000000000047AAC8 string=0x000000000047AACC "h2F"
 *   insn=0x000000000047AAD8 string=0x000000000047AADC "E"
 *   insn=0x000000000047AADC string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidIsAgeKnown(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "isAgeKnown",
    "()Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

