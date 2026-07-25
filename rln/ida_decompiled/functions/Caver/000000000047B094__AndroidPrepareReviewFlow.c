/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B094
 * Mangled: _ZN5Caver24AndroidPrepareReviewFlowEv
 * Demangled: Caver::AndroidPrepareReviewFlow(void)
 *
 * Callers: 1
 *   0x00000000001FCDC0  Caver::AndroidPrepareReviewFlow(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B09C string=0x000000000047B0A0 "s"
 *   insn=0x000000000047B0A0 string=0x000000000047B0A4 "`2F"
 *   insn=0x000000000047B0A4 string=0x000000000047B0A8 "t"
 *   insn=0x000000000047B0B0 string=0x000000000047B0B4 ""
 *   insn=0x000000000047B0B0 string=0x000000000059623E "prepareReviewFlow"
 *   insn=0x000000000047B0B8 string=0x000000000047B0BC "B"
 *   insn=0x000000000047B0B8 string=0x000000000059604E "()V"
 *   insn=0x000000000047B0BC string=0x000000000047B0C0 "c8"
 *   insn=0x000000000047B0C0 string=0x000000000047B0C4 ""
 *   insn=0x000000000047B0C8 string=0x000000000047B0CC "h2F"
 *   insn=0x000000000047B0E4 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidPrepareReviewFlow(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "prepareReviewFlow",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

