/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B0E8
 * Mangled: _ZN5Caver22AndroidStartReviewFlowEv
 * Demangled: Caver::AndroidStartReviewFlow(void)
 *
 * Callers: 1
 *   0x00000000001F6AB0  Caver::AndroidStartReviewFlow(void)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B0F0 string=0x000000000047B0F4 "s"
 *   insn=0x000000000047B0F4 string=0x000000000047B0F8 "`2F"
 *   insn=0x000000000047B0F8 string=0x000000000047B0FC "t"
 *   insn=0x000000000047B104 string=0x000000000047B108 ""
 *   insn=0x000000000047B104 string=0x0000000000596250 "startReviewFlow"
 *   insn=0x000000000047B10C string=0x000000000047B110 "B@\t"
 *   insn=0x000000000047B10C string=0x0000000000596115 "()Z"
 *   insn=0x000000000047B110 string=0x000000000047B114 "cT"
 *   insn=0x000000000047B114 string=0x000000000047B118 ""
 *   insn=0x000000000047B11C string=0x000000000047B120 "h2F"
 *   insn=0x000000000047B130 string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidStartReviewFlow(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "startReviewFlow",
    "()Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

