/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC620
 * Mangled: ._ZN5Caver19HeroEntityComponent12TargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEEi
 * Demangled: Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Callers: 1
 *   0x000000000027359C  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 1
 *   0x0000000000273CA4  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC628 string=0x00000000001FC62C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEntityComponent::TargetObject()
{
  return _ZN5Caver19HeroEntityComponent12TargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEEi();
}

