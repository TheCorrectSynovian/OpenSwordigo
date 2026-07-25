/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7F10
 * Mangled: ._ZN5boost6detail12shared_countC2ISsEEPT_
 * Demangled: boost::detail::shared_count::shared_count<std::string>(std::string *)
 *
 * Callers: 5
 *   0x0000000000214220  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000242D5C  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000004C0068  Caver::Program::~Program()
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *
 * Callees: 1
 *   0x00000000002158A0  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7F18 string=0x00000000001F7F1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<std::string>()
{
  return _ZN5boost6detail12shared_countC2ISsEEPT_();
}

