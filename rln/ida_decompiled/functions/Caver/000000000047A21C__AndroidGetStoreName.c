/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A21C
 * Mangled: _ZN5Caver19AndroidGetStoreNameEv
 * Demangled: Caver::AndroidGetStoreName(void)
 *
 * Callers: 1
 *   0x00000000001F6ED0  Caver::AndroidGetStoreName(void)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC730  _JNIEnv::CallStaticObjectMethod(_jclass *,_jmethodID *,...)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000047A22C string=0x000000000047A230 "T"
 *   insn=0x000000000047A234 string=0x000000000047A238 "u"
 *   insn=0x000000000047A238 string=0x000000000047A23C "v"
 *   insn=0x000000000047A240 string=0x000000000059606A "getStoreName"
 *   insn=0x000000000047A250 string=0x000000000047A254 "B"
 *   insn=0x000000000047A250 string=0x0000000000596077 "()Ljava/lang/String;"
 *   insn=0x000000000047A254 string=0x000000000047A258 "\t"
 *   insn=0x000000000047A258 string=0x000000000047A25C "c"
 *   insn=0x000000000047A260 string=0x000000000047A264 ")"
 *   insn=0x000000000047A264 string=0x000000000047A268 " "
 *   insn=0x000000000047A278 string=0x000000000047A27C "-\t"
 *   insn=0x000000000047A27C string=0x00000000001FC730 "0'"
 *   insn=0x000000000047A288 string=0x000000000047A28C "\t"
 *   insn=0x000000000047A290 string=0x000000000047A294 ")"
 *   insn=0x000000000047A294 string=0x000000000047A298 " "
 *   insn=0x000000000047A2A4 string=0x000000000047A2A8 "D"
 *   insn=0x000000000047A2D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047A300 string=0x000000000047A304 "S"
 *   insn=0x000000000047A304 string=0x000000000047A308 "i"
 *   insn=0x000000000047A320 string=0x000000000047A324 "k"
 *   insn=0x000000000047A334 string=0x000000000047A338 ""
 *   insn=0x000000000047A33C string=0x000000000047A340 "!"
 *   insn=0x000000000047A344 string=0x000000000047A348 ""
 *   insn=0x000000000047A350 string=0x000000000047A354 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::AndroidGetStoreName@<X0>(int a1@<W8>)
{
  __int64 v3; // x0
  char *v4; // x0

  _ReadStatusReg(TPIDR_EL0);
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "getStoreName",
    "()Ljava/lang/String;");
  _JNIEnv::CallStaticObjectMethod();
  v4 = (char *)(*(_QWORD *(__fastcall **)(__int64 __return_ptr, __int64, __int64, _QWORD))(*(_QWORD *)qword_6E9C60
                                                                                         + 1352LL))(
                 qword_6E9C60,
                 qword_6E9C60,
                 v3,
                 0);
  return sub_566BB8(a1, v4);
}

