/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B49C
 * Mangled: _ZN5Caver21AndroidDeleteSnapshotERKSs
 * Demangled: Caver::AndroidDeleteSnapshot(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FA920  Caver::AndroidDeleteSnapshot(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047B4A8 string=0x000000000047B4AC "t"
 *   insn=0x000000000047B4B0 string=0x000000000047B4B4 "u"
 *   insn=0x000000000047B4BC string=0x000000000047B4C0 "\t"
 *   insn=0x000000000047B4BC string=0x0000000000596333 "deleteSnapshot"
 *   insn=0x000000000047B4C4 string=0x000000000059602A "(Ljava/lang/String;)V"
 *   insn=0x000000000047B4C8 string=0x000000000047B4CC "B"
 *   insn=0x000000000047B4CC string=0x000000000047B4D0 ")"
 *   insn=0x000000000047B4D0 string=0x000000000047B4D4 "c"
 *   insn=0x000000000047B4D8 string=0x000000000047B4DC " "
 *   insn=0x000000000047B4E0 string=0x000000000047B4E4 "a"
 *   insn=0x000000000047B4F4 string=0x000000000047B4F8 ""
 *   insn=0x000000000047B51C string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidDeleteSnapshot(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "deleteSnapshot",
    "(Ljava/lang/String;)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticVoidMethod();
}

