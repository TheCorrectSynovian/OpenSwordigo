/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC730
 * Mangled: ._ZN7_JNIEnv22CallStaticObjectMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticObjectMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 2
 *   0x000000000047A21C  Caver::AndroidGetStoreName(void)
 *   0x000000000047AD8C  Caver::AndroidGetAnalyticsId(void)
 *
 * Callees: 1
 *   0x000000000047A21C  Caver::AndroidGetStoreName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC738 string=0x00000000001FC73C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void _JNIEnv::CallStaticObjectMethod()
{
  JUMPOUT(0x47A2D8);
}

