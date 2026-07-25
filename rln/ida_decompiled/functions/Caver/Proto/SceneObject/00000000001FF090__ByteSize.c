/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF090
 * Mangled: ._ZNK5Caver5Proto11SceneObject8ByteSizeEv
 * Demangled: Caver::Proto::SceneObject::ByteSize(void)
 *
 * Callers: 3
 *   0x00000000002FC42C  Caver::Proto::ObjectTemplate::ByteSize(void)
 *   0x00000000002FDBD4  Caver::Proto::ObjectLibrary::ByteSize(void)
 *   0x00000000003023A4  Caver::Proto::Scene::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002FEE60  Caver::Proto::SceneObject::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF098 string=0x00000000001FF09C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SceneObject::ByteSize(Caver::Proto::SceneObject *this)
{
  return _ZNK5Caver5Proto11SceneObject8ByteSizeEv(this);
}

