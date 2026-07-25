/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6100
 * Mangled: ._ZN5Caver5Proto14ObjectTemplate8CopyFromERKS1_
 * Demangled: Caver::Proto::ObjectTemplate::CopyFrom(Caver::Proto::ObjectTemplate const&)
 *
 * Callers: 1
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *
 * Callees: 1
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6108 string=0x00000000001F610C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ObjectTemplate::CopyFrom()
{
  JUMPOUT(0x2FC820);
}

