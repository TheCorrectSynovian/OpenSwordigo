/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B148
 * Mangled: _ZN5Caver36AndroidIsGoogleGameServicesAvailableEv
 * Demangled: Caver::AndroidIsGoogleGameServicesAvailable(void)
 *
 * Callers: 1
 *   0x00000000001F3700  Caver::AndroidIsGoogleGameServicesAvailable(void)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B150 string=0x000000000047B154 "s"
 *   insn=0x000000000047B154 string=0x000000000047B158 "`2F"
 *   insn=0x000000000047B158 string=0x000000000047B15C "t"
 *   insn=0x000000000047B164 string=0x000000000047B168 ""
 *   insn=0x000000000047B164 string=0x0000000000596260 "isGoogleGameServicesAvailable"
 *   insn=0x000000000047B16C string=0x000000000047B170 "B"
 *   insn=0x000000000047B16C string=0x0000000000596115 "()Z"
 *   insn=0x000000000047B170 string=0x000000000047B174 "cT"
 *   insn=0x000000000047B174 string=0x000000000047B178 ""
 *   insn=0x000000000047B17C string=0x000000000047B180 "h2F"
 *   insn=0x000000000047B190 string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidIsGoogleGameServicesAvailable(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "isGoogleGameServicesAvailable",
    "()Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

