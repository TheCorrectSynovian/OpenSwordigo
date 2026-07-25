/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D1D0
 * Mangled: _ZN14MusicPlayerJNI4StopEv
 * Demangled: MusicPlayerJNI::Stop(void)
 *
 * Callers: 1
 *   0x00000000001F9970  MusicPlayerJNI::Stop(void)
 *
 * Callees: 1
 *   0x00000000001FE4E0  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 3
 *   insn=0x000000000047D1D8 string=0x000000000047D1DC "h"
 *   insn=0x000000000047D1DC string=0x000000000047D1E0 "i"
 *   insn=0x000000000047D1E4 string=0x000000000047D1E8 ""yF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall MusicPlayerJNI::Stop(MusicPlayerJNI *this)
{
  __int64 result; // x0

  if ( qword_6E9CC8 )
    return _JNIEnv::CallVoidMethod();
  return result;
}

