/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D220
 * Mangled: _ZN14MusicPlayerJNI9SetVolumeEf
 * Demangled: MusicPlayerJNI::SetVolume(float)
 *
 * Callers: 1
 *   0x00000000001FD6D0  MusicPlayerJNI::SetVolume(float)
 *
 * Callees: 1
 *   0x00000000001FE4E0  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 3
 *   insn=0x000000000047D228 string=0x000000000047D22C "h"
 *   insn=0x000000000047D22C string=0x000000000047D230 "i"
 *   insn=0x000000000047D234 string=0x000000000047D238 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall MusicPlayerJNI::SetVolume(MusicPlayerJNI *this, float a2)
{
  __int64 result; // x0

  if ( qword_6E9CC8 )
    return _JNIEnv::CallVoidMethod();
  return result;
}

