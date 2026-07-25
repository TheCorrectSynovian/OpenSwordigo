/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201760
 * Mangled: .memcpy
 * Demangled: .memcpy
 *
 * Callers: 171
 *   0x000000000025A740  Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A0758  Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000003128D4  Caver::Proto::CharControllerComponent::CharControllerComponent(Caver::Proto::CharControllerComponent const&)
 *   0x0000000000312E84  Caver::Proto::CharControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000313AAC  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031D0F4  Caver::Proto::ParticleEmitter::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000031D6E0  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<float,(google::protobuf::internal::WireFormatLite::FieldType)2>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<float> *)
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *   0x000000000031E3F0  Caver::Proto::ParticleEmitterComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000003272A0  Caver::Proto::StaticMonsterControllerComponent::StaticMonsterControllerComponent(Caver::Proto::StaticMonsterControllerComponent const&)
 *   0x000000000032759C  Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000033B3E0  Caver::Proto::PackedMesh::PackedMesh(Caver::Proto::PackedMesh const&)
 *   0x000000000033BAB0  Caver::Proto::PackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000033C068  google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)15>(int,uint,google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *   0x000000000033C74C  Caver::Proto::UnpackedMesh::UnpackedMesh(Caver::Proto::UnpackedMesh const&)
 *   0x000000000033CE1C  Caver::Proto::UnpackedMesh::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x0000000000448C88  Caver::MeshInstance::CopyAllData(void)
 *   0x0000000000448EB0  Caver::MeshInstance::CopyData(Caver::MeshData const&,Caver::MeshData const&)
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *   0x000000000046D588  Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry *)
 *   0x000000000046D648  Caver::SceneGridCell::Resize(int)
 *   0x0000000000489FE0  std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(__gnu_cxx::__normal_iterator<char *,std::string>,__gnu_cxx::__normal_iterator<char *,std::string>,std::istreambuf_iterator<char,std::char_traits<char>>,std::istreambuf_iterator<char,std::char_traits<char>>,std::__false_type)
 *   0x000000000048BCEC  Caver::RenderingContext::UseProgram(uint)
 *   0x000000000048BF38  Caver::RenderingContext::SetEnabledVertexAttribArrays(uint const*,int)
 *   0x00000000004B02F8  Caver::Polygon::Polygon(int,Caver::Vector2 const*,bool)
 *   0x00000000004B03D4  Caver::Polygon::SetVertices(int,Caver::Vector2 const*)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004C7038  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000004C71B4  Caver::Sprite::ResizeVertexBuffer(int)
 *   0x00000000004C7270  Caver::Sprite::ResizeIndexBuffer(int)
 *   0x00000000004C7C14  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *   0x00000000004C7D60  Caver::Sprite::AddFace(int,int,int)
 *   0x00000000004C7F54  Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *   0x00000000004C82F8  Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *   0x00000000004C86AC  Caver::Sprite::AddFaces(int,ushort *)
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004D0A94  Caver::CopyToFileBuffer8(uchar *,uchar const*,int)
 *   0x00000000004D0B8C  Caver::CopyFromFileBuffer8(uchar *,uchar const*,int)
 *   0x00000000004D20C8  Caver::Image::Image(Caver::Image const&)
 *   0x00000000004D2124  Caver::Image::InitWithImage(Caver::Image const&)
 *   0x00000000004D22C4  Caver::Image::Blit(int,int,Caver::Image const&)
 *   0x00000000004D235C  Caver::Image::Blit(int,int,Caver::Image const&,int,int,int,int)
 *   0x00000000004D2868  Caver::Image::Resize(int,int)
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *   0x00000000004D9090  google::protobuf::internal::ExtensionSet::GetRepeatedInt32(int,int)
 *   0x00000000004D96A0  google::protobuf::internal::ExtensionSet::GetRepeatedInt64(int,int)
 *   0x00000000004D9CB0  google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(int,int)
 *   0x00000000004DA2C0  google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(int,int)
 *   0x00000000004DA8D0  google::protobuf::internal::ExtensionSet::GetRepeatedFloat(int,int)
 *   0x00000000004DAEE8  google::protobuf::internal::ExtensionSet::GetRepeatedDouble(int,int)
 *   0x00000000004DB508  google::protobuf::internal::ExtensionSet::GetRepeatedBool(int,int)
 *   0x00000000004DBB18  google::protobuf::internal::ExtensionSet::GetRepeatedEnum(int,int)
 *   0x00000000004DCED8  google::protobuf::internal::ExtensionSet::MergeFrom(google::protobuf::internal::ExtensionSet const&)
 *   0x00000000004E26D8  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000004E2BC8  google::protobuf::internal::WireFormatLite::ReadPackedEnumNoInline(google::protobuf::io::CodedInputStream *,bool (*)(int),google::protobuf::RepeatedField<int> *)
 *   0x00000000004E3338  google::protobuf::internal::WireFormatLite::ReadString(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E344C  google::protobuf::internal::WireFormatLite::ReadBytes(google::protobuf::io::CodedInputStream *,std::string *)
 *   0x00000000004E3930  google::protobuf::io::CodedInputStream::Refresh(void)
 *   0x00000000004E3C08  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *   0x00000000004E3D88  google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(uint *)
 *   0x00000000004E3E84  google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(ulong *)
 *   0x00000000004E4950  google::protobuf::io::CodedOutputStream::WriteRaw(void const*,int)
 *   0x00000000004E4A4C  google::protobuf::io::CodedOutputStream::WriteRawToArray(void const*,int,uchar *)
 *   0x00000000004E4A84  google::protobuf::io::CodedOutputStream::WriteLittleEndian32(uint)
 *   0x00000000004E4BDC  google::protobuf::io::CodedOutputStream::WriteLittleEndian64(ulong)
 *   0x00000000004E4D54  google::protobuf::io::CodedOutputStream::WriteVarint32(uint)
 *   0x00000000004E4FF4  google::protobuf::io::CodedOutputStream::WriteVarint64(ulong)
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000004F8758  sub_4F8758
 *   0x00000000004F99A0  luaL_addvalue(luaL_Buffer *)
 *   0x0000000000502FB0  CSourceStream::Read(void *,uint)
 *   0x00000000005037C4  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x0000000000503F24  CPVRTModelPOD::InitImpl(void)
 *   0x0000000000504048  CPVRTModelPOD::CopyFromMemory(SPODScene const&)
 *   0x00000000005043EC  PVRTModelPODCopyNode(SPODNode const&,SPODNode&,int)
 *   0x0000000000504930  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *   0x0000000000504DB0  PVRTModelPODCopyCamera(SPODCamera const&,SPODCamera&,int)
 *   0x0000000000504E44  PVRTModelPODCopyTexture(SPODTexture const&,SPODTexture&)
 *   0x0000000000504EC8  PVRTModelPODCopyMaterial(SPODMaterial const&,SPODMaterial&)
 *   0x0000000000505018  CPVRTModelPOD::FlushCache(void)
 *   0x000000000050CEBC  PVRTModelPODToggleInterleaved(SPODMesh &,uint)
 *   0x000000000050DF90  PVRTModelPODDeIndex(SPODMesh &)
 *   0x000000000050E220  PVRTModelPODToggleStrips(SPODMesh &)
 *   0x000000000050F1E0  PVRTModelPODCopyCPODData(CPODData const&,CPODData&,uint,bool)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000513E80  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *   0x0000000000514058  CPVRTString::CPVRTString(char const*,ulong)
 *   0x0000000000514CA4  CPVRTString::copy(char *,ulong,ulong)
 *   0x0000000000515A14  operator+(CPVRTString const&,CPVRTString const&)
 *   0x0000000000515B1C  operator+(CPVRTString const&,char const*)
 *   0x0000000000515C34  operator+(CPVRTString const&,char)
 *   0x0000000000515D18  operator+(char const*,CPVRTString const&)
 *   0x0000000000515E28  operator+(char,CPVRTString const&)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *   0x000000000051A914  PVRTDecompressETC(void const*,uint const&,uint const&,void *,int const&)
 *   0x000000000051BF60  PVRTTextureLoadTiled(uchar *,uint,uint,uchar const*,uint,uint,uint,bool)
 *   0x000000000051FA44  sub_51FA44
 *   0x000000000051FAD4  sub_51FAD4
 *   0x0000000000528E58  sub_528E58
 *   0x000000000052B4F4  sub_52B4F4
 *   0x000000000052B780  sub_52B780
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000052C8FC  sub_52C8FC
 *   0x000000000052FE5C  sub_52FE5C
 *   0x0000000000530504  sub_530504
 *   0x0000000000530D30  sub_530D30
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x0000000000536428  sub_536428
 *   0x000000000053C134  sub_53C134
 *   0x0000000000544AB8  sub_544AB8
 *   0x000000000054AD98  sub_54AD98
 *   0x000000000054AE74  sub_54AE74
 *   0x000000000054BD8C  sub_54BD8C
 *   0x000000000054C178  sub_54C178
 *   0x000000000054EC54  sub_54EC54
 *   0x000000000055DF60  sub_55DF60
 *   0x000000000055E3D8  sub_55E3D8
 *   0x000000000055EAE0  sub_55EAE0
 *   0x0000000000566294  sub_566294
 *   0x000000000056630C  sub_56630C
 *   0x0000000000566658  sub_566658
 *   0x00000000005666B0  sub_5666B0
 *   0x00000000005666D0  sub_5666D0
 *   0x00000000005666F0  sub_5666F0
 *   0x0000000000566710  sub_566710
 *   0x0000000000566784  sub_566784
 *   0x0000000000566900  sub_566900
 *   0x0000000000566A7C  sub_566A7C
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000566E14  sub_566E14
 *   0x0000000000567088  sub_567088
 *   0x0000000000567254  sub_567254
 *   0x0000000000567614  sub_567614
 *   0x00000000005676D8  sub_5676D8
 *   0x0000000000567B48  sub_567B48
 *   0x0000000000568CB8  sub_568CB8
 *   0x0000000000569110  sub_569110
 *   0x000000000056918C  sub_56918C
 *   0x0000000000569390  sub_569390
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A278  sub_56A278
 *   0x000000000056A3F4  sub_56A3F4
 *   0x000000000056A798  sub_56A798
 *   0x000000000056AA20  sub_56AA20
 *   0x000000000056AB54  sub_56AB54
 *   0x000000000056AC74  sub_56AC74
 *   0x000000000056AD8C  sub_56AD8C
 *   0x000000000056AEBC  sub_56AEBC
 *   0x0000000000570348  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570468  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570AB4  sub_570AB4
 *   0x0000000000572750  sub_572750
 *   0x000000000057F820  __cxa_demangle
 *   0x000000000057FF60  sub_57FF60
 *   0x00000000005801B0  sub_5801B0
 *   0x0000000000581080  sub_581080
 *   0x0000000000581658  sub_581658
 *   0x00000000005817D0  sub_5817D0
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000005819C0  sub_5819C0
 *
 * Callees: 1
 *   0x00000000006FEBE0  memcpy
 *
 * Referenced strings: 1
 *   insn=0x0000000000201768 string=0x000000000020176C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *memcpy(void *a1, const void *a2, size_t a3)
{
  return memcpy(a1, a2, a3);
}

