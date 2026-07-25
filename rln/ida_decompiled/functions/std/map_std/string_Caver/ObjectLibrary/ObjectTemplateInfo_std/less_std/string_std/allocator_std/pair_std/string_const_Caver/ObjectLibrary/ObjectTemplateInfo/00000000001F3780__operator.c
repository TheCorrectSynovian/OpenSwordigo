/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3780
 * Mangled: ._ZNSt3mapISsN5Caver13ObjectLibrary18ObjectTemplateInfoESt4lessISsESaISt4pairIKSsS2_EEEixERS6_
 * Demangled: std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x000000000045CFD4  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 1
 *   0x000000000045CDB0  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3788 string=0x00000000001F378C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo>::operator[]()
{
  return _ZNSt3mapISsN5Caver13ObjectLibrary18ObjectTemplateInfoESt4lessISsESaISt4pairIKSsS2_EEEixERS6_();
}

