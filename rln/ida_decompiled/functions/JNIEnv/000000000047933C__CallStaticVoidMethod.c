/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047933C
 * Mangled: _ZN7_JNIEnv20CallStaticVoidMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 8
 *   insn=0x0000000000479364 string=0x0000000000479368 "S"
 *   insn=0x0000000000479368 string=0x000000000047936C "i"
 *   insn=0x0000000000479384 string=0x0000000000479388 "k"
 *   insn=0x0000000000479398 string=0x000000000047939C ""
 *   insn=0x00000000004793A0 string=0x00000000004793A4 "!"
 *   insn=0x00000000004793A8 string=0x00000000004793AC "9B"
 *   insn=0x00000000004793B4 string=0x00000000004793B8 "h"
 *   insn=0x00000000004793D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 _JNIEnv::CallStaticVoidMethod(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __va_list_tag *); // x8
  gcc_va_list va1; // [xsp+C0h] [xbp-60h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-38h] BYREF

  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __va_list_tag *))(*(_QWORD *)a1 + 1136LL);
  va_copy(va1, va);
  return v3(a1, a2, a3, va1);
}

