/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B574
 * Mangled: _ZN5Caver32AndroidGetInterstitialAdIntervalERKSsi
 * Demangled: Caver::AndroidGetInterstitialAdInterval(std::string const&,int)
 *
 * Callers: 1
 *   0x00000000001F6A00  Caver::AndroidGetInterstitialAdInterval(std::string const&,int)
 *
 * Callees: 1
 *   0x00000000001F69C0  _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B580 string=0x000000000047B584 "u"
 *   insn=0x000000000047B588 string=0x000000000047B58C "v"
 *   insn=0x000000000047B594 string=0x000000000047B598 "\t"
 *   insn=0x000000000047B59C string=0x0000000000596355 "getInterstitialAdInterval"
 *   insn=0x000000000047B5A0 string=0x000000000059636F "(Ljava/lang/String;I)I"
 *   insn=0x000000000047B5A4 string=0x000000000047B5A8 ")"
 *   insn=0x000000000047B5A8 string=0x000000000047B5AC "BT"
 *   insn=0x000000000047B5AC string=0x000000000047B5B0 "c"
 *   insn=0x000000000047B5B4 string=0x000000000047B5B8 " "
 *   insn=0x000000000047B5D0 string=0x000000000047B5D4 ""
 *   insn=0x000000000047B5FC string=0x00000000001F69C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidGetInterstitialAdInterval(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "getInterstitialAdInterval",
    "(Ljava/lang/String;I)I");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticIntMethod();
}

