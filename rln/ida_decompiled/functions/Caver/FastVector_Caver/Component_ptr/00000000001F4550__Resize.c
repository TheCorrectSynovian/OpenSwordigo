/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4550
 * Mangled: ._ZN5Caver10FastVectorIPNS_9ComponentEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::Component *>::Resize(int)
 *
 * Callers: 2
 *   0x0000000000473FB0  Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *   0x000000000047417C  Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *
 * Callees: 1
 *   0x0000000000474C48  Caver::FastVector<Caver::Component *>::Resize(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4558 string=0x00000000001F455C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FastVector<Caver::Component *>::Resize()
{
  return _ZN5Caver10FastVectorIPNS_9ComponentEE6ResizeEi();
}

