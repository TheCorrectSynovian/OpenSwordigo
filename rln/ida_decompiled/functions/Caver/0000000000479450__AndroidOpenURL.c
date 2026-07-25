/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000479450
 * Mangled: _ZN5Caver14AndroidOpenURLERKSs
 * Demangled: Caver::AndroidOpenURL(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FFAD0  Caver::AndroidOpenURL(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 10
 *   insn=0x0000000000479470 string=0x0000000000479474 "\t"
 *   insn=0x0000000000479470 string=0x0000000000596052 "openURL"
 *   insn=0x0000000000479478 string=0x000000000059602A "(Ljava/lang/String;)V"
 *   insn=0x000000000047947C string=0x0000000000479480 "BH"
 *   insn=0x0000000000479480 string=0x0000000000479484 ")"
 *   insn=0x0000000000479484 string=0x0000000000479488 "c"
 *   insn=0x000000000047948C string=0x0000000000479490 " "
 *   insn=0x0000000000479494 string=0x0000000000479498 "a"
 *   insn=0x00000000004794A8 string=0x00000000004794AC ""
 *   insn=0x00000000004794D0 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidOpenURL(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "openURL",
    "(Ljava/lang/String;)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticVoidMethod();
}

