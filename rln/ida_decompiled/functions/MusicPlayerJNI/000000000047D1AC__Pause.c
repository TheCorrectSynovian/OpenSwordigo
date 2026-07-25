/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D1AC
 * Mangled: _ZN14MusicPlayerJNI5PauseEv
 * Demangled: MusicPlayerJNI::Pause(void)
 *
 * Callers: 1
 *   0x00000000001FC3B0  MusicPlayerJNI::Pause(void)
 *
 * Callees: 1
 *   0x00000000001FE4E0  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 3
 *   insn=0x000000000047D1B4 string=0x000000000047D1B8 "h"
 *   insn=0x000000000047D1B8 string=0x000000000047D1BC "i"
 *   insn=0x000000000047D1C0 string=0x000000000047D1C4 ""uF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall MusicPlayerJNI::Pause(MusicPlayerJNI *this)
{
  __int64 result; // x0

  if ( qword_6E9CC8 )
    return _JNIEnv::CallVoidMethod();
  return result;
}

