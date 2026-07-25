/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004794D4
 * Mangled: _ZN5Caver22AndroidQuitApplicationEv
 * Demangled: Caver::AndroidQuitApplication(void)
 *
 * Callers: 1
 *   0x00000000001F8060  Caver::AndroidQuitApplication(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 9
 *   insn=0x00000000004794E0 string=0x00000000004794E4 "`2F"
 *   insn=0x00000000004794F0 string=0x00000000004794F4 ""
 *   insn=0x00000000004794F0 string=0x000000000059605A "quitApplication"
 *   insn=0x00000000004794F8 string=0x00000000004794FC "Bh"
 *   insn=0x00000000004794F8 string=0x000000000059604E "()V"
 *   insn=0x00000000004794FC string=0x0000000000479500 "c8"
 *   insn=0x0000000000479500 string=0x0000000000479504 ""
 *   insn=0x0000000000479508 string=0x000000000047950C "h2F"
 *   insn=0x0000000000479524 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidQuitApplication(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "quitApplication",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

