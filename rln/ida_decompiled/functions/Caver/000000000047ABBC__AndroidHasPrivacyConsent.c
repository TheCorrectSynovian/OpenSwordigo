/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047ABBC
 * Mangled: _ZN5Caver24AndroidHasPrivacyConsentEv
 * Demangled: Caver::AndroidHasPrivacyConsent(void)
 *
 * Callers: 1
 *   0x00000000001F6660  Caver::AndroidHasPrivacyConsent(void)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047ABC4 string=0x000000000047ABC8 "s"
 *   insn=0x000000000047ABC8 string=0x000000000047ABCC "`2F"
 *   insn=0x000000000047ABCC string=0x000000000047ABD0 "t"
 *   insn=0x000000000047ABD8 string=0x000000000047ABDC ""
 *   insn=0x000000000047ABD8 string=0x0000000000596138 "hasPrivacyConsent"
 *   insn=0x000000000047ABE0 string=0x000000000047ABE4 "B"
 *   insn=0x000000000047ABE0 string=0x0000000000596115 "()Z"
 *   insn=0x000000000047ABE4 string=0x000000000047ABE8 "cT"
 *   insn=0x000000000047ABE8 string=0x000000000047ABEC ""
 *   insn=0x000000000047ABF0 string=0x000000000047ABF4 "h2F"
 *   insn=0x000000000047AC04 string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidHasPrivacyConsent(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "hasPrivacyConsent",
    "()Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

