/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B60
 * Mangled: ._ZN5Caver14ModelComponent12setModelNameERKSs
 * Demangled: Caver::ModelComponent::setModelName(std::string const&)
 *
 * Callers: 2
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000224024  Caver::ModelComponent::setModelName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B68 string=0x0000000000201B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ModelComponent::setModelName()
{
  return _ZN5Caver14ModelComponent12setModelNameERKSs();
}

