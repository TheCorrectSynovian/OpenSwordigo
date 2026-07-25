/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F67C0
 * Mangled: ._ZN5Caver5Scene22GroupIdentifierChangedERKSsS2_
 * Demangled: Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000004763D0  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x0000000000468A54  Caver::Scene::GroupIdentifierChanged(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F67C8 string=0x00000000001F67CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::GroupIdentifierChanged()
{
  return _ZN5Caver5Scene22GroupIdentifierChangedERKSsS2_();
}

