/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E70
 * Mangled: .malloc
 * Demangled: .malloc
 *
 * Callers: 54
 *   0x00000000002C1824  Caver::BuildVertexList(Caver::Vector2 *,int)
 *   0x00000000002C1960  Caver::BuildConcaveList(Caver::Vector2 *,int,Caver::VertexList_ *)
 *   0x000000000046D588  Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *   0x000000000046D648  Caver::SceneGridCell::Resize(int)
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *   0x000000000050C664  PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *   0x000000000050CA84  PVRTModelPODDataShred(CPODData &,uint,int const*)
 *   0x0000000000510538  sub_510538
 *   0x0000000000514058  CPVRTString::CPVRTString(char const*,ulong)
 *   0x0000000000514110  CPVRTString::assign(char const*)
 *   0x00000000005141A8  CPVRTString::assign(char const*,ulong)
 *   0x0000000000514238  CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *   0x00000000005142B8  CPVRTString::assign(CPVRTString const&,ulong,ulong)
 *   0x0000000000514354  CPVRTString::CPVRTString(ulong,char)
 *   0x00000000005143C0  CPVRTString::assign(ulong,char)
 *   0x0000000000514430  CPVRTString::CPVRTString(char)
 *   0x000000000051451C  CPVRTString::append(char const*)
 *   0x00000000005145D4  CPVRTString::append(char const*,ulong)
 *   0x0000000000514684  CPVRTString::append(CPVRTString const&)
 *   0x0000000000514730  CPVRTString::append(CPVRTString const&,ulong,ulong)
 *   0x00000000005147E4  CPVRTString::append(ulong,char)
 *   0x0000000000514898  CPVRTString::assign(CPVRTString const&)
 *   0x0000000000514D00  CPVRTString::erase(ulong,ulong)
 *   0x0000000000514E00  CPVRTString::resize(ulong,char)
 *   0x0000000000515490  CPVRTString::push_back(char)
 *   0x000000000051558C  CPVRTString::substr(ulong,ulong)
 *   0x000000000051565C  CPVRTString::operator+=(char)
 *   0x0000000000515714  CPVRTString::operator+=(char const*)
 *   0x00000000005157CC  CPVRTString::operator+=(CPVRTString const&)
 *   0x0000000000515878  CPVRTString::operator=(char)
 *   0x00000000005158E4  CPVRTString::operator=(char const*)
 *   0x000000000051597C  CPVRTString::operator=(CPVRTString const&)
 *   0x0000000000515A14  operator+(CPVRTString const&,CPVRTString const&)
 *   0x0000000000515B1C  operator+(CPVRTString const&,char const*)
 *   0x0000000000515C34  operator+(CPVRTString const&,char)
 *   0x0000000000515D18  operator+(char const*,CPVRTString const&)
 *   0x0000000000515E28  operator+(char,CPVRTString const&)
 *   0x0000000000515F18  PVRTStringGetFileExtension(CPVRTString const&)
 *   0x0000000000515FE4  PVRTStringGetContainingDirectoryPath(CPVRTString const&)
 *   0x00000000005160D8  PVRTStringGetFileName(CPVRTString const&)
 *   0x00000000005161D8  PVRTStringStripWhiteSpaceFromStartOf(CPVRTString const&)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *   0x000000000051906C  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *   0x000000000051A914  PVRTDecompressETC(void const*,uint const&,uint const&,void *,int const&)
 *   0x000000000051C3CC  PVRTTextureCreate(uint,uint,uint,uint,uint,bool)
 *   0x000000000051CEB0  __cxa_allocate_exception
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *   0x000000000051D518  __cxa_get_globals
 *   0x000000000051E520  operator new(ulong)
 *   0x00000000005829FC  sub_5829FC
 *   0x0000000000583014  sub_583014
 *   0x00000000005830F4  sub_5830F4
 *
 * Callees: 1
 *   0x00000000006FE6C8  malloc
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E78 string=0x00000000001F5E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *malloc(size_t byte_count)
{
  return malloc(byte_count);
}

