/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE9D0
 * Mangled: ._ZN5Caver12ModelLibrary17AnimationForModelEPKNS_5ModelERKSs
 * Demangled: Caver::ModelLibrary::AnimationForModel(Caver::Model const*,std::string const&)
 *
 * Callers: 2
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000044BEF4  std::map<Caver::Model const*,boost::shared_ptr<Caver::PODLoader>,std::less<Caver::Model const*>,std::allocator<std::pair<Caver::Model const* const,boost::shared_ptr<Caver::PODLoader>>>>::operator[](Caver::Model const* const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE9D8 string=0x00000000001FE9DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ModelLibrary::AnimationForModel()
{
  JUMPOUT(0x44C0E0);
}

