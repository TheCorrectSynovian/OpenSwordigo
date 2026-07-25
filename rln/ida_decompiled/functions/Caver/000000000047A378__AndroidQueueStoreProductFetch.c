/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A378
 * Mangled: _ZN5Caver29AndroidQueueStoreProductFetchERKSs
 * Demangled: Caver::AndroidQueueStoreProductFetch(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8560  Caver::AndroidQueueStoreProductFetch(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 13
 *   insn=0x000000000047A384 string=0x000000000047A388 "t"
 *   insn=0x000000000047A38C string=0x000000000047A390 "u"
 *   insn=0x000000000047A398 string=0x000000000047A39C "\t"
 *   insn=0x000000000047A398 string=0x000000000059608C "queueStoreProductFetch"
 *   insn=0x000000000047A3A0 string=0x000000000059602A "(Ljava/lang/String;)V"
 *   insn=0x000000000047A3A4 string=0x000000000047A3A8 "B0"
 *   insn=0x000000000047A3A8 string=0x000000000047A3AC ")"
 *   insn=0x000000000047A3AC string=0x000000000047A3B0 "c"
 *   insn=0x000000000047A3B4 string=0x000000000047A3B8 " "
 *   insn=0x000000000047A3BC string=0x000000000047A3C0 "a"
 *   insn=0x000000000047A3D0 string=0x000000000047A3D4 ""
 *   insn=0x000000000047A3F4 string=0x000000000047A3F8 "N"
 *   insn=0x000000000047A3F8 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidQueueStoreProductFetch(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "queueStoreProductFetch",
    "(Ljava/lang/String;)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticVoidMethod();
}

