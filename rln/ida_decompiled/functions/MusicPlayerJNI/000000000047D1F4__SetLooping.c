/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D1F4
 * Mangled: _ZN14MusicPlayerJNI10SetLoopingEb
 * Demangled: MusicPlayerJNI::SetLooping(bool)
 *
 * Callers: 1
 *   0x0000000000200530  MusicPlayerJNI::SetLooping(bool)
 *
 * Callees: 1
 *   0x00000000001FE4E0  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 4
 *   insn=0x000000000047D1FC string=0x000000000047D200 "h"
 *   insn=0x000000000047D200 string=0x000000000047D204 "i"
 *   insn=0x000000000047D204 string=0x000000000047D208 "aF"
 *   insn=0x000000000047D208 string=0x000000000047D20C ""}F"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall MusicPlayerJNI::SetLooping(MusicPlayerJNI *this)
{
  __int64 result; // x0

  if ( qword_6E9CC8 )
    return _JNIEnv::CallVoidMethod();
  return result;
}

