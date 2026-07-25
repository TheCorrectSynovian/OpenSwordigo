/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D0E8
 * Mangled: _ZN14MusicPlayerJNI4PlayEv
 * Demangled: MusicPlayerJNI::Play(void)
 *
 * Callers: 1
 *   0x00000000001FDB90  MusicPlayerJNI::Play(void)
 *
 * Callees: 1
 *   0x00000000001FE4E0  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 3
 *   insn=0x000000000047D0F0 string=0x000000000047D0F4 "h"
 *   insn=0x000000000047D0F4 string=0x000000000047D0F8 "i"
 *   insn=0x000000000047D0FC string=0x000000000047D100 ""qF"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall MusicPlayerJNI::Play(MusicPlayerJNI *this)
{
  __int64 result; // x0

  if ( qword_6E9CC8 )
    return _JNIEnv::CallVoidMethod();
  return result;
}

