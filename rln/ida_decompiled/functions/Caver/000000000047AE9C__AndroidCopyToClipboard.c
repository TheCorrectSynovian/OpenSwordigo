/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AE9C
 * Mangled: _ZN5Caver22AndroidCopyToClipboardERKSsS1_
 * Demangled: Caver::AndroidCopyToClipboard(std::string const&,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 16
 *   insn=0x000000000047AEAC string=0x000000000047AEB0 "w"
 *   insn=0x000000000047AEB4 string=0x000000000047AEB8 "v"
 *   insn=0x000000000047AEC0 string=0x000000000047AEC4 "\t"
 *   insn=0x000000000047AEC8 string=0x00000000005961CF "copyToClipboard"
 *   insn=0x000000000047AECC string=0x00000000005961DF "(Ljava/lang/String;Ljava/lang/String;)V"
 *   insn=0x000000000047AED0 string=0x000000000047AED4 ")"
 *   insn=0x000000000047AED4 string=0x000000000047AED8 "B<"
 *   insn=0x000000000047AED8 string=0x000000000047AEDC "c|"
 *   insn=0x000000000047AEE0 string=0x000000000047AEE4 " "
 *   insn=0x000000000047AEFC string=0x000000000047AF00 ""
 *   insn=0x000000000047AF08 string=0x000000000047AF0C "a"
 *   insn=0x000000000047AF10 string=0x000000000047AF14 "\t"
 *   insn=0x000000000047AF18 string=0x000000000047AF1C ")"
 *   insn=0x000000000047AF1C string=0x000000000047AF20 " "
 *   insn=0x000000000047AF44 string=0x000000000047AF48 "z"
 *   insn=0x000000000047AF48 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidCopyToClipboard(_QWORD *a1, _QWORD *a2)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "copyToClipboard",
    "(Ljava/lang/String;Ljava/lang/String;)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  (*(void (__fastcall **)(__int64 __return_ptr, __int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(
    qword_6E9C60,
    qword_6E9C60,
    *a2);
  return _JNIEnv::CallStaticVoidMethod();
}

