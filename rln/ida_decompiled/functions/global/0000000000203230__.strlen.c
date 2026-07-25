/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203230
 * Mangled: .strlen
 * Demangled: .strlen
 *
 * Callers: 92
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x00000000004C2478  Caver::ProgramTable::StringAtIndex(int)
 *   0x00000000004D6868  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000004D70B8  google::protobuf::internal::LogMessage::operator<<(char const*)
 *   0x00000000004D7474  google::protobuf::internal::LogMessage::operator<<(char)
 *   0x00000000004D74FC  google::protobuf::internal::LogMessage::operator<<(int)
 *   0x00000000004D7588  google::protobuf::internal::LogMessage::operator<<(uint)
 *   0x00000000004D7614  google::protobuf::internal::LogMessage::operator<<(long)
 *   0x00000000004D76A0  google::protobuf::internal::LogMessage::operator<<(ulong)
 *   0x00000000004D772C  google::protobuf::internal::LogMessage::operator<<(double)
 *   0x00000000004D7A4C  google::protobuf::internal::Mutex::Lock(void)
 *   0x00000000004D7C50  google::protobuf::internal::Mutex::Unlock(void)
 *   0x00000000004E8610  lua_pushstring(lua_State *,char const*)
 *   0x00000000004E8A34  lua_getfield(lua_State *,int,char const*)
 *   0x00000000004E9194  lua_setfield(lua_State *,int,char const*)
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004EF46C  sub_4EF46C
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004F4E10  sub_4F4E10
 *   0x00000000004F5F80  sub_4F5F80
 *   0x00000000004F63FC  sub_4F63FC
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004F6B64  sub_4F6B64
 *   0x00000000004F8C78  luaL_optlstring(lua_State *,int,char const*,ulong *)
 *   0x00000000004F9474  luaL_findtable(lua_State *,int,char const*,int)
 *   0x00000000004F9594  luaL_gsub(lua_State *,char const*,char const*,char const*)
 *   0x00000000004F97E4  luaL_addstring(luaL_Buffer *,char const*)
 *   0x00000000004FA010  luaL_loadstring(lua_State *,char const*)
 *   0x00000000004FBC90  sub_4FBC90
 *   0x00000000005006C4  sub_5006C4
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x00000000005043EC  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *   0x0000000000504E44  PVRTModelPODCopyTexture(SPODTexture const&,SPODTexture&)
 *   0x0000000000504EC8  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *   0x0000000000506484  sub_506484
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000513E80  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *   0x0000000000514058  CPVRTString::CPVRTString(char const*,ulong)
 *   0x0000000000514110  CPVRTString::assign(char const*)
 *   0x000000000051451C  CPVRTString::append(char const*)
 *   0x0000000000514AB0  CPVRTString::compare(ulong,ulong,char const*)
 *   0x0000000000514B5C  CPVRTString::compare(ulong,ulong,char const*,ulong)
 *   0x0000000000515714  CPVRTString::operator+=(char const*)
 *   0x00000000005158E4  CPVRTString::operator=(char const*)
 *   0x0000000000515B1C  operator+(CPVRTString const&,char const*)
 *   0x0000000000515D18  operator+(char const*,CPVRTString const&)
 *   0x000000000051C8A8  CPVRTglesExt::IsGLExtensionSupported(char const*)
 *   0x000000000052B4F4  sub_52B4F4
 *   0x000000000052B780  sub_52B780
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000052C8FC  sub_52C8FC
 *   0x000000000052EE7C  sub_52EE7C
 *   0x0000000000532890  sub_532890
 *   0x0000000000532C04  sub_532C04
 *   0x0000000000533538  sub_533538
 *   0x000000000053B81C  sub_53B81C
 *   0x000000000053C134  sub_53C134
 *   0x0000000000540944  sub_540944
 *   0x00000000005409B0  sub_5409B0
 *   0x0000000000540A1C  sub_540A1C
 *   0x000000000054307C  sub_54307C
 *   0x000000000054BD8C  sub_54BD8C
 *   0x000000000054C178  sub_54C178
 *   0x000000000054EC54  sub_54EC54
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056750C  sub_56750C
 *   0x00000000005677FC  sub_5677FC
 *   0x0000000000567D9C  sub_567D9C
 *   0x0000000000567FF0  sub_567FF0
 *   0x0000000000568178  sub_568178
 *   0x0000000000568308  sub_568308
 *   0x00000000005684EC  sub_5684EC
 *   0x00000000005686D4  sub_5686D4
 *   0x00000000005689E0  sub_5689E0
 *   0x0000000000568A5C  sub_568A5C
 *   0x0000000000569324  sub_569324
 *   0x0000000000569358  sub_569358
 *   0x00000000005695C4  sub_5695C4
 *   0x000000000056A15C  sub_56A15C
 *   0x000000000056A1C8  sub_56A1C8
 *   0x0000000000570348  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570468  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000572840  sub_572840
 *   0x0000000000572A48  sub_572A48
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057F3DC  sub_57F3DC
 *   0x000000000057F820  __cxa_demangle
 *   0x00000000005806A8  sub_5806A8
 *   0x0000000000582044  sub_582044
 *
 * Callees: 1
 *   0x00000000006FECA0  strlen
 *
 * Referenced strings: 1
 *   insn=0x0000000000203238 string=0x000000000020323C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t strlen(const char *a1)
{
  return strlen(a1);
}

