/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A4D4
 * Mangled: _ZN5Caver33AndroidConsumePurchasesForTestingEv
 * Demangled: Caver::AndroidConsumePurchasesForTesting(void)
 *
 * Callers: 1
 *   0x00000000002038E0  Caver::AndroidConsumePurchasesForTesting(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047A4DC string=0x000000000047A4E0 "s"
 *   insn=0x000000000047A4E0 string=0x000000000047A4E4 "`2F"
 *   insn=0x000000000047A4E4 string=0x000000000047A4E8 "t"
 *   insn=0x000000000047A4F0 string=0x000000000047A4F4 ""
 *   insn=0x000000000047A4F0 string=0x00000000005960CA "consumePurchasesForTesting"
 *   insn=0x000000000047A4F8 string=0x000000000047A4FC "B("
 *   insn=0x000000000047A4F8 string=0x000000000059604E "()V"
 *   insn=0x000000000047A4FC string=0x000000000047A500 "c8"
 *   insn=0x000000000047A500 string=0x000000000047A504 ""
 *   insn=0x000000000047A508 string=0x000000000047A50C "h2F"
 *   insn=0x000000000047A524 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidConsumePurchasesForTesting(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "consumePurchasesForTesting",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

