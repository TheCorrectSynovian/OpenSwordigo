/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B2EC
 * Mangled: _ZN5Caver19AndroidLoadSnapshotERKSsd
 * Demangled: Caver::AndroidLoadSnapshot(std::string const&,double)
 *
 * Callers: 1
 *   0x00000000001F5F20  Caver::AndroidLoadSnapshot(std::string const&,double)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 14
 *   insn=0x000000000047B2FC string=0x000000000047B300 "t"
 *   insn=0x000000000047B304 string=0x000000000047B308 "u"
 *   insn=0x000000000047B310 string=0x000000000047B314 "\t"
 *   insn=0x000000000047B310 string=0x00000000005962D6 "loadSnapshot"
 *   insn=0x000000000047B318 string=0x00000000005962E3 "(Ljava/lang/String;D)V"
 *   insn=0x000000000047B31C string=0x000000000047B320 "BX"
 *   insn=0x000000000047B320 string=0x000000000047B324 ")"
 *   insn=0x000000000047B324 string=0x000000000047B328 "c"
 *   insn=0x000000000047B32C string=0x000000000047B330 ""
 *   insn=0x000000000047B330 string=0x000000000047B334 " "
 *   insn=0x000000000047B338 string=0x000000000047B33C "a"
 *   insn=0x000000000047B34C string=0x000000000047B350 ""
 *   insn=0x000000000047B378 string=0x000000000047B37C "m"
 *   insn=0x000000000047B37C string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidLoadSnapshot(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "loadSnapshot",
    "(Ljava/lang/String;D)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticVoidMethod();
}

