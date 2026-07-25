/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AB54
 * Mangled: _ZN5Caver17AndroidEnteredAgeEi
 * Demangled: Caver::AndroidEnteredAge(int)
 *
 * Callers: 1
 *   0x00000000001F4720  Caver::AndroidEnteredAge(int)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047AB60 string=0x000000000047AB64 "t"
 *   insn=0x000000000047AB68 string=0x000000000047AB6C "u"
 *   insn=0x000000000047AB74 string=0x000000000047AB78 "\t"
 *   insn=0x000000000047AB74 string=0x0000000000596128 "enteredAge"
 *   insn=0x000000000047AB7C string=0x0000000000596133 "(I)V"
 *   insn=0x000000000047AB80 string=0x000000000047AB84 "B"
 *   insn=0x000000000047AB84 string=0x000000000047AB88 ")"
 *   insn=0x000000000047AB88 string=0x000000000047AB8C "c"
 *   insn=0x000000000047AB90 string=0x000000000047AB94 " "
 *   insn=0x000000000047ABB4 string=0x000000000047ABB8 "^"
 *   insn=0x000000000047ABB8 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidEnteredAge(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "enteredAge",
    "(I)V");
  return _JNIEnv::CallStaticVoidMethod();
}

