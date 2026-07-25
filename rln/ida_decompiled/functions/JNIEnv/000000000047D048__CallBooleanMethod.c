/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D048
 * Mangled: _ZN7_JNIEnv17CallBooleanMethodEP8_jobjectP10_jmethodIDz
 * Demangled: _JNIEnv::CallBooleanMethod(_jobject *,_jmethodID *,...)
 *
 * Callers: 2
 *   0x00000000001FD9A0  _JNIEnv::CallBooleanMethod(_jobject *,_jmethodID *,...)
 *   0x000000000047BFD4  MusicPlayerJNI::LoadFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 9
 *   insn=0x000000000047D070 string=0x000000000047D074 "S"
 *   insn=0x000000000047D074 string=0x000000000047D078 "i"
 *   insn=0x000000000047D090 string=0x000000000047D094 "k"
 *   insn=0x000000000047D0A4 string=0x000000000047D0A8 ""
 *   insn=0x000000000047D0AC string=0x000000000047D0B0 "!"
 *   insn=0x000000000047D0B4 string=0x000000000047D0B8 ""
 *   insn=0x000000000047D0C0 string=0x000000000047D0C4 "h"
 *   insn=0x000000000047D0D0 string=0x000000000047D0E4 "{"
 *   insn=0x000000000047D0E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 _JNIEnv::CallBooleanMethod(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, __va_list_tag *); // x8
  gcc_va_list va1; // [xsp+C0h] [xbp-60h] BYREF
  gcc_va_list va; // [xsp+E8h] [xbp-38h] BYREF

  va_start(va, a3);
  _ReadStatusReg(TPIDR_EL0);
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __va_list_tag *))(*(_QWORD *)a1 + 304LL);
  va_copy(va1, va);
  return v3(a1, a2, a3, va1);
}

