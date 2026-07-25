/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AFA0
 * Mangled: _ZN7_JNIEnv19CallStaticIntMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 1
 *   0x00000000001F69C0  _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 8
 *   insn=0x000000000047AFC8 string=0x000000000047AFCC "S"
 *   insn=0x000000000047AFCC string=0x000000000047AFD0 "i"
 *   insn=0x000000000047AFE8 string=0x000000000047AFEC "k"
 *   insn=0x000000000047AFFC string=0x000000000047B000 ""
 *   insn=0x000000000047B004 string=0x000000000047B008 "!"
 *   insn=0x000000000047B00C string=0x000000000047B010 "\tB"
 *   insn=0x000000000047B018 string=0x000000000047B01C "h"
 *   insn=0x000000000047B03C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 _JNIEnv::CallStaticIntMethod(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __va_list_tag *); // x8
  gcc_va_list va1; // [xsp+C0h] [xbp-60h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-38h] BYREF

  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __va_list_tag *))(*(_QWORD *)a1 + 1040LL);
  va_copy(va1, va);
  return v3(a1, a2, a3, va1);
}

