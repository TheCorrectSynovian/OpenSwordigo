/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F87F0
 * Mangled: ._ZN5Caver11SceneObject12AddComponentERKN5boost13intrusive_ptrINS_9ComponentEEE
 * Demangled: Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callers: 1
 *   0x000000000046119C  Caver::ObjectTemplate::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callees: 1
 *   0x0000000000473FB0  Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F87F8 string=0x00000000001F87FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::AddComponent()
{
  return _ZN5Caver11SceneObject12AddComponentERKN5boost13intrusive_ptrINS_9ComponentEEE();
}

