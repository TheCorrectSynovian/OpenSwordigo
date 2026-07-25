/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE720
 * Mangled: ._ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEEixERS3_
 * Demangled: std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *
 * Callers: 7
 *   0x0000000000233744  Caver::PropertiesComponent::RegisterLibrary(void)
 *   0x0000000000233E70  Caver::PropertiesComponent::PropertyForKey(std::string const&)
 *   0x0000000000233EC0  sub_233EC0
 *   0x0000000000234110  sub_234110
 *   0x0000000000273368  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000002339FC  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE728 string=0x00000000001FE72C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,std::string>::operator[]()
{
  return _ZNSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEEixERS3_();
}

