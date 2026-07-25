/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004792AC
 * Mangled: _ZN5Caver26StartTextInputWithDelegateEPNS_18ITextInputDelegateERKSs
 * Demangled: Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FFC90  Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x00000000004792C4 string=0x00000000004792C8 " Y"
 *   insn=0x00000000004792CC string=0x00000000004792D0 "\n"
 *   insn=0x00000000004792D8 string=0x000000000059601B "startTextInput"
 *   insn=0x00000000004792DC string=0x00000000004792E0 "J"
 *   insn=0x00000000004792DC string=0x000000000059602A "(Ljava/lang/String;)V"
 *   insn=0x00000000004792E4 string=0x00000000004792E8 "Bl"
 *   insn=0x00000000004792E8 string=0x00000000004792EC "c"
 *   insn=0x00000000004792F4 string=0x00000000004792F8 "@"
 *   insn=0x00000000004792FC string=0x0000000000479300 "a"
 *   insn=0x0000000000479310 string=0x0000000000479314 ""
 *   insn=0x0000000000479334 string=0x0000000000479338 "~"
 *   insn=0x0000000000479338 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StartTextInputWithDelegate(__int64 a1, _QWORD *a2)
{
  qword_6E9CB0 = a1;
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "startTextInput",
    "(Ljava/lang/String;)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a2);
  return _JNIEnv::CallStaticVoidMethod();
}

