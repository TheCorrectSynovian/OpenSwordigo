/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047BFD4
 * Mangled: _ZN14MusicPlayerJNI8LoadFileERKSs
 * Demangled: MusicPlayerJNI::LoadFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9380  MusicPlayerJNI::LoadFile(std::string const&)
 *
 * Callees: 2
 *   0x00000000001FD9A0  _JNIEnv::CallBooleanMethod(_jobject *,_jmethodID *,...)
 *   0x000000000047D048  _JNIEnv::CallBooleanMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 8
 *   insn=0x000000000047BFE0 string=0x000000000047BFE4 "h"
 *   insn=0x000000000047BFE8 string=0x000000000047BFEC "S"
 *   insn=0x000000000047BFEC string=0x000000000047BFF0 "h"
 *   insn=0x000000000047BFF4 string=0x000000000047BFF8 "i"
 *   insn=0x000000000047C000 string=0x000000000047C04C "5mF"
 *   insn=0x000000000047C008 string=0x000000000047C00C ""
 *   insn=0x000000000047C020 string=0x000000000047C024 "_"
 *   insn=0x000000000047C024 string=0x00000000001FD9A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool MusicPlayerJNI::LoadFile()
{
  if ( !qword_6E9CC8 )
    return 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_6E9CC0 + 1336LL))(qword_6E9CC0);
  return (unsigned __int8)_JNIEnv::CallBooleanMethod() != 0;
}

