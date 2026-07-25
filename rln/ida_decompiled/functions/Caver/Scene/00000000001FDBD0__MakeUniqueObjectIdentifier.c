/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDBD0
 * Mangled: ._ZN5Caver5Scene26MakeUniqueObjectIdentifierERKSs
 * Demangled: Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *
 * Callers: 2
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000464844  Caver::Scene::MakeUniqueObjectIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDBD8 string=0x00000000001FDBDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::MakeUniqueObjectIdentifier()
{
  return _ZN5Caver5Scene26MakeUniqueObjectIdentifierERKSs();
}

