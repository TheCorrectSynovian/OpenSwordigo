/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B1A8
 * Mangled: _ZN5Caver27AndroidInitiateGoogleSignInEv
 * Demangled: Caver::AndroidInitiateGoogleSignIn(void)
 *
 * Callers: 1
 *   0x00000000001F4B00  Caver::AndroidInitiateGoogleSignIn(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B1B0 string=0x000000000047B1B4 "s"
 *   insn=0x000000000047B1B4 string=0x000000000047B1B8 "`2F"
 *   insn=0x000000000047B1B8 string=0x000000000047B1BC "t"
 *   insn=0x000000000047B1C4 string=0x000000000047B1C8 ""
 *   insn=0x000000000047B1C4 string=0x000000000059627E "initiateGoogleSignIn"
 *   insn=0x000000000047B1CC string=0x000000000047B1D0 "B"
 *   insn=0x000000000047B1CC string=0x000000000059604E "()V"
 *   insn=0x000000000047B1D0 string=0x000000000047B1D4 "c8"
 *   insn=0x000000000047B1D4 string=0x000000000047B1D8 ""
 *   insn=0x000000000047B1DC string=0x000000000047B1E0 "h2F"
 *   insn=0x000000000047B1F8 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidInitiateGoogleSignIn(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "initiateGoogleSignIn",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

