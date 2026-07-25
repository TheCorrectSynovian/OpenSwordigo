/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F49A0
 * Mangled: ._ZN5Caver5Scene19GroupWithIdentifierERKSsb
 * Demangled: Caver::Scene::GroupWithIdentifier(std::string const&,bool)
 *
 * Callers: 3
 *   0x00000000002819C0  Caver::DimensionObjectComponent::Prepare(void)
 *   0x0000000000469290  sub_469290
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F49A8 string=0x00000000001F49AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Scene::GroupWithIdentifier()
{
  JUMPOUT(0x468364);
}

