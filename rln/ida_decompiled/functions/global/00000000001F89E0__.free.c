/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F89E0
 * Mangled: .free
 * Demangled: .free
 *
 * Callers: 56
 *   0x00000000002C18D8  Caver::DestroyVertexList(Caver::VertexList_ *)
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *   0x00000000004D1288  Caver::AudioBuffer::FreeDataImpl(void)
 *   0x00000000004FA0C8  sub_4FA0C8
 *   0x0000000000502D0C  CPODData::Reset(void)
 *   0x0000000000503314  CPVRTModelPOD::ReadFromFile(char const*,char *,ulong,char *,ulong)
 *   0x0000000000503998  CPVRTModelPOD::Destroy(void)
 *   0x000000000050C664  PVRTModelPODDataConvert(CPODData &,uint,EPVRTDataType)
 *   0x000000000050CA84  PVRTModelPODDataShred(CPODData &,uint,int const*)
 *   0x000000000050CEBC  PVRTModelPODToggleInterleaved(SPODMesh &,uint)
 *   0x000000000050DF90  PVRTModelPODDeIndex(SPODMesh &)
 *   0x000000000050E220  PVRTModelPODToggleStrips(SPODMesh &)
 *   0x000000000050F1E0  PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000514110  CPVRTString::assign(char const*)
 *   0x00000000005141A8  CPVRTString::assign(char const*,ulong)
 *   0x00000000005142B8  CPVRTString::assign(CPVRTString const&,ulong,ulong)
 *   0x00000000005143C0  CPVRTString::assign(ulong,char)
 *   0x00000000005144C8  CPVRTString::~CPVRTString()
 *   0x00000000005144E4  CPVRTString::~CPVRTString()
 *   0x000000000051451C  CPVRTString::append(char const*)
 *   0x00000000005145D4  CPVRTString::append(char const*,ulong)
 *   0x0000000000514684  CPVRTString::append(CPVRTString const&)
 *   0x0000000000514730  CPVRTString::append(CPVRTString const&,ulong,ulong)
 *   0x00000000005147E4  CPVRTString::append(ulong,char)
 *   0x0000000000514898  CPVRTString::assign(CPVRTString const&)
 *   0x0000000000514934  CPVRTString::clear(void)
 *   0x0000000000514D00  CPVRTString::erase(ulong,ulong)
 *   0x0000000000514E00  CPVRTString::resize(ulong,char)
 *   0x0000000000515490  CPVRTString::push_back(char)
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
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *   0x000000000051906C  PVRTTextureLoadFromPVRResourceFile(CPVRTResourceFile &,uint *,void const*,bool,uint,int *,int *)
 *   0x000000000051A914  PVRTDecompressETC(void const*,uint const&,uint const&,void *,int const&)
 *   0x000000000051CC80  operator delete(void *)
 *   0x000000000051CFA8  __cxa_free_exception
 *   0x000000000051D15C  __cxa_free_dependent_exception
 *   0x000000000051D484  sub_51D484
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *   0x0000000000572750  sub_572750
 *   0x000000000057F820  __cxa_demangle
 *   0x00000000005829FC  sub_5829FC
 *   0x0000000000583120  sub_583120
 *   0x0000000000583224  sub_583224
 *
 * Callees: 1
 *   0x00000000006FE808  free
 *
 * Referenced strings: 1
 *   insn=0x00000000001F89E8 string=0x00000000001F89EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void free(void *p)
{
  free(p);
}

