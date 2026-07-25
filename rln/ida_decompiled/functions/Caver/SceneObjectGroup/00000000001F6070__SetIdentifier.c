/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6070
 * Mangled: ._ZN5Caver16SceneObjectGroup13SetIdentifierERKSs
 * Demangled: Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *
 * Callers: 3
 *   0x00000000002819C0  Caver::DimensionObjectComponent::Prepare(void)
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *   0x00000000004760BC  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000004763D0  Caver::SceneObjectGroup::SetIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6078 string=0x00000000001F607C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObjectGroup::SetIdentifier()
{
  return _ZN5Caver16SceneObjectGroup13SetIdentifierERKSs();
}

