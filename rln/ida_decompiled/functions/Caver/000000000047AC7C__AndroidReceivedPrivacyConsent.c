/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AC7C
 * Mangled: _ZN5Caver29AndroidReceivedPrivacyConsentEb
 * Demangled: Caver::AndroidReceivedPrivacyConsent(bool)
 *
 * Callers: 1
 *   0x0000000000202020  Caver::AndroidReceivedPrivacyConsent(bool)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047AC88 string=0x000000000047AC8C "t"
 *   insn=0x000000000047AC90 string=0x000000000047AC94 "u"
 *   insn=0x000000000047AC9C string=0x000000000047ACA0 "\t"
 *   insn=0x000000000047AC9C string=0x0000000000596163 "receivedPrivacyConsent"
 *   insn=0x000000000047ACA4 string=0x000000000059617A "(Z)V"
 *   insn=0x000000000047ACA8 string=0x000000000047ACAC "B"
 *   insn=0x000000000047ACAC string=0x000000000047ACB0 ")"
 *   insn=0x000000000047ACB0 string=0x000000000047ACB4 "c"
 *   insn=0x000000000047ACB8 string=0x000000000047ACBC " "
 *   insn=0x000000000047ACC4 string=0x000000000047ACC8 "c"
 *   insn=0x000000000047ACE0 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidReceivedPrivacyConsent(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "receivedPrivacyConsent",
    "(Z)V");
  return _JNIEnv::CallStaticVoidMethod();
}

