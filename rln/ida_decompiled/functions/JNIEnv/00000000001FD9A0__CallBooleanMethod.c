/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD9A0
 * Mangled: ._ZN7_JNIEnv17CallBooleanMethodEP8_jobjectP10_jmethodIDz
 * Demangled: _JNIEnv::CallBooleanMethod(_jobject *,_jmethodID *,...)
 *
 * Callers: 1
 *   0x000000000047BFD4  MusicPlayerJNI::LoadFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000047D048  _JNIEnv::CallBooleanMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD9A8 string=0x00000000001FD9AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 _JNIEnv::CallBooleanMethod()
{
  return _ZN7_JNIEnv17CallBooleanMethodEP8_jobjectP10_jmethodIDz();
}

