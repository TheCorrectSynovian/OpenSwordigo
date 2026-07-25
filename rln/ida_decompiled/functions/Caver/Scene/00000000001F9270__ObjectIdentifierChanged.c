/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9270
 * Mangled: ._ZN5Caver5Scene23ObjectIdentifierChangedERKSsS2_
 * Demangled: Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x000000000047301C  Caver::SceneObject::SetIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x00000000004681E0  Caver::Scene::ObjectIdentifierChanged(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9278 string=0x00000000001F927C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::ObjectIdentifierChanged()
{
  return _ZN5Caver5Scene23ObjectIdentifierChangedERKSsS2_();
}

