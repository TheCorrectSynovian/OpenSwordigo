/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AC1C
 * Mangled: _ZN5Caver31AndroidIsExplicitPrivacyConsentEv
 * Demangled: Caver::AndroidIsExplicitPrivacyConsent(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047AC24 string=0x000000000047AC28 "s"
 *   insn=0x000000000047AC28 string=0x000000000047AC2C "`2F"
 *   insn=0x000000000047AC2C string=0x000000000047AC30 "t"
 *   insn=0x000000000047AC38 string=0x000000000047AC3C ""
 *   insn=0x000000000047AC38 string=0x000000000059614A "isExplicitPrivacyConsent"
 *   insn=0x000000000047AC40 string=0x000000000047AC44 "B("
 *   insn=0x000000000047AC40 string=0x0000000000596115 "()Z"
 *   insn=0x000000000047AC44 string=0x000000000047AC48 "cT"
 *   insn=0x000000000047AC48 string=0x000000000047AC4C ""
 *   insn=0x000000000047AC50 string=0x000000000047AC54 "h2F"
 *   insn=0x000000000047AC64 string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidIsExplicitPrivacyConsent(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "isExplicitPrivacyConsent",
    "()Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

