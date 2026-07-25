/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047A5B8
 * Mangled: _ZN7_JNIEnv23CallStaticBooleanMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 8
 *   insn=0x000000000047A5E0 string=0x000000000047A5E4 "S"
 *   insn=0x000000000047A5E4 string=0x000000000047A5E8 "i"
 *   insn=0x000000000047A600 string=0x000000000047A604 "k"
 *   insn=0x000000000047A614 string=0x000000000047A618 ""
 *   insn=0x000000000047A61C string=0x000000000047A620 "!"
 *   insn=0x000000000047A624 string=0x000000000047A628 ""
 *   insn=0x000000000047A630 string=0x000000000047A634 "h"
 *   insn=0x000000000047A654 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 _JNIEnv::CallStaticBooleanMethod(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __va_list_tag *); // x8
  gcc_va_list va1; // [xsp+C0h] [xbp-60h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-38h] BYREF

  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __va_list_tag *))(*(_QWORD *)a1 + 944LL);
  va_copy(va1, va);
  return v3(a1, a2, a3, va1);
}

