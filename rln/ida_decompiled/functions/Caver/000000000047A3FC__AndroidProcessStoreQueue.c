/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A3FC
 * Mangled: _ZN5Caver24AndroidProcessStoreQueueEv
 * Demangled: Caver::AndroidProcessStoreQueue(void)
 *
 * Callers: 1
 *   0x00000000001F9A00  Caver::AndroidProcessStoreQueue(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047A404 string=0x000000000047A408 "s"
 *   insn=0x000000000047A408 string=0x000000000047A40C "`2F"
 *   insn=0x000000000047A40C string=0x000000000047A410 "t"
 *   insn=0x000000000047A418 string=0x000000000047A41C ""
 *   insn=0x000000000047A418 string=0x00000000005960A3 "processStoreQueue"
 *   insn=0x000000000047A420 string=0x000000000047A424 "B"
 *   insn=0x000000000047A420 string=0x000000000059604E "()V"
 *   insn=0x000000000047A424 string=0x000000000047A428 "c8"
 *   insn=0x000000000047A428 string=0x000000000047A42C ""
 *   insn=0x000000000047A430 string=0x000000000047A434 "h2F"
 *   insn=0x000000000047A448 string=0x000000000047A44C "9"
 *   insn=0x000000000047A44C string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidProcessStoreQueue(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "processStoreQueue",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

