/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004793DC
 * Mangled: _ZN5Caver25StopTextInputWithDelegateEPNS_18ITextInputDelegateE
 * Demangled: Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *
 * Callers: 1
 *   0x00000000001F8050  Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 10
 *   insn=0x00000000004793EC string=0x00000000004793F0 "hZF"
 *   insn=0x00000000004793F4 string=0x00000000004793F8 "A"
 *   insn=0x000000000047940C string=0x0000000000479410 ""
 *   insn=0x000000000047940C string=0x0000000000596040 "stopTextInput"
 *   insn=0x0000000000479414 string=0x0000000000479418 "B"
 *   insn=0x0000000000479414 string=0x000000000059604E "()V"
 *   insn=0x0000000000479418 string=0x000000000047941C "c8"
 *   insn=0x000000000047941C string=0x0000000000479420 ""
 *   insn=0x0000000000479434 string=0x0000000000479438 ">"
 *   insn=0x0000000000479438 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StopTextInputWithDelegate(__int64 result)
{
  if ( qword_6E9CB0 == result )
  {
    (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
      qword_6E9C60,
      qword_6E9C68,
      "stopTextInput",
      "()V");
    result = _JNIEnv::CallStaticVoidMethod();
    qword_6E9CB0 = 0;
  }
  return result;
}

