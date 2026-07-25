/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F38E0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver7ProgramEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *
 * Callers: 8
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000460B48  Caver::ObjectTemplate::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000475190  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000004760BC  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x0000000000487824  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *
 * Callees: 1
 *   0x000000000045ED50  boost::detail::shared_count::shared_count<Caver::Program>(Caver::Program *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F38E8 string=0x00000000001F38EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Program>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver7ProgramEEEPT_();
}

