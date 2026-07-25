/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047ACE4
 * Mangled: _ZN5Caver29AndroidWithdrawPrivacyConsentEv
 * Demangled: Caver::AndroidWithdrawPrivacyConsent(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047ACEC string=0x000000000047ACF0 "s"
 *   insn=0x000000000047ACF0 string=0x000000000047ACF4 "`2F"
 *   insn=0x000000000047ACF4 string=0x000000000047ACF8 "t"
 *   insn=0x000000000047AD00 string=0x000000000047AD04 ""
 *   insn=0x000000000047AD00 string=0x000000000059617F "withdrawPrivacyConsent"
 *   insn=0x000000000047AD08 string=0x000000000047AD0C "B"
 *   insn=0x000000000047AD08 string=0x000000000059604E "()V"
 *   insn=0x000000000047AD0C string=0x000000000047AD10 "c8"
 *   insn=0x000000000047AD10 string=0x000000000047AD14 ""
 *   insn=0x000000000047AD18 string=0x000000000047AD1C "h2F"
 *   insn=0x000000000047AD34 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidWithdrawPrivacyConsent(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "withdrawPrivacyConsent",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

