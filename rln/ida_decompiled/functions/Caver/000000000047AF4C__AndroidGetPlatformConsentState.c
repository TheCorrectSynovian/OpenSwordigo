/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AF4C
 * Mangled: _ZN5Caver30AndroidGetPlatformConsentStateEv
 * Demangled: Caver::AndroidGetPlatformConsentState(void)
 *
 * Callers: 1
 *   0x00000000001F6280  Caver::AndroidGetPlatformConsentState(void)
 *
 * Callees: 1
 *   0x00000000001F69C0  _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047AF54 string=0x000000000047AF58 "s"
 *   insn=0x000000000047AF58 string=0x000000000047AF5C "`2F"
 *   insn=0x000000000047AF5C string=0x000000000047AF60 "t"
 *   insn=0x000000000047AF68 string=0x000000000047AF6C ""
 *   insn=0x000000000047AF68 string=0x0000000000596207 "getPlatformConsentState"
 *   insn=0x000000000047AF70 string=0x000000000047AF74 "B"
 *   insn=0x000000000047AF70 string=0x000000000059621F "()I"
 *   insn=0x000000000047AF74 string=0x000000000047AF78 "c|"
 *   insn=0x000000000047AF78 string=0x000000000047AF7C ""
 *   insn=0x000000000047AF80 string=0x000000000047AF84 "h2F"
 *   insn=0x000000000047AF9C string=0x00000000001F69C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidGetPlatformConsentState(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "getPlatformConsentState",
    "()I");
  return _JNIEnv::CallStaticIntMethod();
}

