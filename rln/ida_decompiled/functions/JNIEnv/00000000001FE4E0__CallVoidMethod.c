/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE4E0
 * Mangled: ._ZN7_JNIEnv14CallVoidMethodEP8_jobjectP10_jmethodIDz
 * Demangled: _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Callers: 5
 *   0x000000000047D0E8  MusicPlayerJNI::Play(void)
 *   0x000000000047D1AC  MusicPlayerJNI::Pause(void)
 *   0x000000000047D1D0  MusicPlayerJNI::Stop(void)
 *   0x000000000047D1F4  MusicPlayerJNI::SetLooping(bool)
 *   0x000000000047D220  MusicPlayerJNI::SetVolume(float)
 *
 * Callees: 1
 *   0x000000000047D10C  _JNIEnv::CallVoidMethod(_jobject *,_jmethodID *,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE4E8 string=0x00000000001FE4EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 _JNIEnv::CallVoidMethod()
{
  return _ZN7_JNIEnv14CallVoidMethodEP8_jobjectP10_jmethodIDz();
}

