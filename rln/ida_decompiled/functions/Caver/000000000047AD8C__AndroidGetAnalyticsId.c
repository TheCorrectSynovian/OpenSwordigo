/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AD8C
 * Mangled: _ZN5Caver21AndroidGetAnalyticsIdEv
 * Demangled: Caver::AndroidGetAnalyticsId(void)
 *
 * Callers: 1
 *   0x00000000001F7720  Caver::AndroidGetAnalyticsId(void)
 *
 * Callees: 5
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC730  _JNIEnv::CallStaticObjectMethod(_jclass *,_jmethodID *,...)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 29
 *   insn=0x000000000047AD9C string=0x000000000047ADA0 "T"
 *   insn=0x000000000047ADA4 string=0x000000000047ADA8 "u"
 *   insn=0x000000000047ADA8 string=0x000000000047ADAC "v"
 *   insn=0x000000000047ADB0 string=0x00000000005961AB "getAnalyticsId"
 *   insn=0x000000000047ADC0 string=0x000000000047ADC4 "B"
 *   insn=0x000000000047ADC0 string=0x0000000000596077 "()Ljava/lang/String;"
 *   insn=0x000000000047ADC4 string=0x000000000047ADC8 "\t"
 *   insn=0x000000000047ADC8 string=0x000000000047ADCC "c"
 *   insn=0x000000000047ADD0 string=0x000000000047ADD4 ")"
 *   insn=0x000000000047ADD4 string=0x000000000047ADD8 " "
 *   insn=0x000000000047ADE8 string=0x000000000047ADEC "Q"
 *   insn=0x000000000047ADEC string=0x00000000001FC730 "0'"
 *   insn=0x000000000047ADF8 string=0x000000000047ADFC "\t"
 *   insn=0x000000000047AE00 string=0x000000000047AE04 ")"
 *   insn=0x000000000047AE04 string=0x000000000047AE08 " "
 *   insn=0x000000000047AE14 string=0x000000000047AE18 "h"
 *   insn=0x000000000047AE28 string=0x000000000047AE40 "$"
 *   insn=0x000000000047AE40 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047AE50 string=0x000000000047AE54 "s"
 *   insn=0x000000000047AE54 string=0x000000000047AE58 "`2F"
 *   insn=0x000000000047AE58 string=0x000000000047AE5C "t"
 *   insn=0x000000000047AE64 string=0x000000000047AE68 ""
 *   insn=0x000000000047AE64 string=0x00000000005961BA "showAnalyticsIdPopup"
 *   insn=0x000000000047AE6C string=0x000000000047AE70 "B"
 *   insn=0x000000000047AE6C string=0x000000000059604E "()V"
 *   insn=0x000000000047AE70 string=0x000000000047AE74 "c8"
 *   insn=0x000000000047AE74 string=0x000000000047AE78 ""
 *   insn=0x000000000047AE7C string=0x000000000047AE80 "h2F"
 *   insn=0x000000000047AE98 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::AndroidGetAnalyticsId@<X0>(int a1@<W8>)
{
  __int64 v3; // x0
  char *v4; // x0

  _ReadStatusReg(TPIDR_EL0);
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "getAnalyticsId",
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

