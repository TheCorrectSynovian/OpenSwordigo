/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D10C
 * Mangled: _ZN7_JNIEnv14CallVoidMethodEP8_jobjectP10_jmethodIDz
 * Demangled: _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Callers: 1
 *   0x00000000001FE4E0  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 9
 *   insn=0x000000000047D134 string=0x000000000047D138 "S"
 *   insn=0x000000000047D138 string=0x000000000047D13C "i"
 *   insn=0x000000000047D154 string=0x000000000047D158 "k"
 *   insn=0x000000000047D168 string=0x000000000047D16C ""
 *   insn=0x000000000047D170 string=0x000000000047D174 "!"
 *   insn=0x000000000047D178 string=0x000000000047D17C ""
 *   insn=0x000000000047D184 string=0x000000000047D188 "h"
 *   insn=0x000000000047D194 string=0x000000000047D1A8 "J"
 *   insn=0x000000000047D1A8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 _JNIEnv::CallVoidMethod(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __va_list_tag *); // x8
  gcc_va_list va1; // [xsp+C0h] [xbp-60h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-38h] BYREF

  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __va_list_tag *))(*(_QWORD *)a1 + 496LL);
  va_copy(va1, va);
  return v3(a1, a2, a3, va1);
}

