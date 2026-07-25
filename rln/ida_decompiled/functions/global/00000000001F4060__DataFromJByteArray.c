/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4060
 * Mangled: ._Z18DataFromJByteArrayP7_JNIEnvP11_jbyteArray
 * Demangled: DataFromJByteArray(_JNIEnv *,_jbyteArray *)
 *
 * Callers: 1
 *   0x000000000047A834  Java_com_touchfoo_swordigo_Native_snapshotLoaded
 *
 * Callees: 1
 *   0x000000000047A684  DataFromJByteArray(_JNIEnv *,_jbyteArray *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4068 string=0x00000000001F406C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 DataFromJByteArray()
{
  return _Z18DataFromJByteArrayP7_JNIEnvP11_jbyteArray();
}

