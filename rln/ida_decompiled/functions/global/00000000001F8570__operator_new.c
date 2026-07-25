/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8570
 * Mangled: ._Znam
 * Demangled: operator new[](ulong)
 *
 * Callers: 163
 *   0x0000000000213488  Caver::FloatDataBuffer::FloatDataBuffer(int)
 *   0x00000000002134D8  Caver::FloatDataBuffer::Resize(int)
 *   0x0000000000236488  Caver::FastVector<Caver::ShadowVertex>::Resize(int)
 *   0x0000000000236664  Caver::ShadowVolumeComponent::UpdateVolume(void)
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *   0x000000000025A740  Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x000000000027A464  Caver::ItemDropComponent::className(void)
 *   0x000000000027A824  Caver::FastVector<Caver::ItemDropComponent::ItemDrop>::Resize(int)
 *   0x000000000028329C  Caver::HookshotTrailComponent::CreateVertices(void)
 *   0x0000000000287944  Caver::MagicExplosionComponent::CreateStarPolygon(void)
 *   0x00000000002A0758  Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AB9A4  sub_2AB9A4
 *   0x00000000002AEE6C  Caver::FastVector<Caver::PortalEffectComponent::Vertex>::Resize(int)
 *   0x00000000002AEF4C  Caver::FastVector<ushort>::Resize(int)
 *   0x00000000002B09B8  Caver::SimpleGlowComponent::CreateVertexData(void)
 *   0x00000000002B78CC  Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>> *)
 *   0x00000000002B8F94  Caver::Mesh::~Mesh()
 *   0x00000000002BB564  Caver::GroundMeshGenerator::GenerateFrontMesh(void)
 *   0x00000000002BC4E8  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *   0x00000000002CB43C  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *   0x00000000002CB9AC  Caver::WeaponGlowComponent::CreateVertexData(void)
 *   0x00000000002CC174  Caver::WeaponTrail::InitWithMaxSegments(int)
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
 *   0x0000000000371DD0  Caver::SceneEdgeFade::SceneEdgeFade(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x0000000000443BA0  Caver::FastVector<std::string>::Resize(int)
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x0000000000444A84  Caver::Mesh::AllocIndexBuffer(int)
 *   0x0000000000444AD0  Caver::Mesh::AllocVertexBuffer(int)
 *   0x0000000000444B1C  Caver::Mesh::SetNumTexCoordSets(int)
 *   0x00000000004459BC  Caver::Mesh::AllocateBuffers(int)
 *   0x0000000000447498  Caver::MeshBuilder::InitWithMeshBuilderFaceSubset(Caver::MeshBuilder const&,int *,int)
 *   0x0000000000447FD8  Caver::MeshClipper::InitWithMeshInstance(Caver::MeshInstance *,Caver::Matrix4 const&)
 *   0x00000000004482A4  Caver::MeshClipper::ClippedMesh(int)
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *   0x0000000000448F50  Caver::MeshInstance::UpdateFaceNormals(void)
 *   0x00000000004493B4  Caver::MeshInstance::~MeshInstance()
 *   0x0000000000449DF8  Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(void)
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *   0x000000000044AE48  Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&)
 *   0x000000000044E4FC  Caver::PODLoader::CreateSkeleton(void)
 *   0x000000000044EEB8  Caver::PODLoader::CreateMesh(int)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x0000000000450D7C  Caver::Skeleton::Skeleton(int)
 *   0x0000000000450F00  Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *   0x0000000000453B50  Caver::ParticleSystem::InitWithMaxParticles(int)
 *   0x000000000045A05C  Caver::LightOverlay::CreateVertices(void)
 *   0x000000000045A2DC  Caver::LightOverlay::SetPointLights(Caver::PointLight const*,int)
 *   0x000000000045A38C  Caver::LightOverlay::UpdateWithCamera(Caver::Camera *)
 *   0x00000000004612D4  Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *   0x00000000004620DC  Caver::FastVector<Caver::PointLight>::Resize(int)
 *   0x00000000004621C4  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *   0x000000000046ACFC  Caver::FastVector<Caver::CollisionShapeComponent *>::Resize(int)
 *   0x000000000046D144  Caver::FastVector<boost::shared_ptr<Caver::SceneGridLayer>>::Resize(int)
 *   0x000000000046D924  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *   0x000000000046E85C  Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *   0x0000000000474B24  Caver::FastVector<Caver::SceneObjectGroup *>::Resize(int)
 *   0x0000000000474C48  Caver::FastVector<Caver::Component *>::Resize(int)
 *   0x0000000000476720  Caver::FastVector<Caver::SceneObject *>::Resize(int)
 *   0x0000000000488F20  boost::detail::lexical_stream_limited_src<char,std::basic_streambuf<char,std::char_traits<char>>,std::char_traits<char>>::operator>><float>(float &)
 *   0x00000000004893DC  Caver::SaveProtobufMessageToFile(google::protobuf::MessageLite const&,std::string const&)
 *   0x000000000048ACC0  Caver::GradientColor::GradientColor(int,float *,Caver::Color *)
 *   0x000000000048AD94  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *   0x000000000048D324  Caver::VertexArrayObject::CreateVertexBuffer(int)
 *   0x000000000048D358  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *   0x00000000004A6D18  Caver::GUIEffect::CreateVertices(void)
 *   0x00000000004B4254  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004C2F54  Caver::Font::SetKerningBetweenGlyphsAtIndices(int,int,int)
 *   0x00000000004C3008  Caver::Font::Scale(float)
 *   0x00000000004C7038  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000004C71B4  Caver::Sprite::ResizeVertexBuffer(int)
 *   0x00000000004C7270  Caver::Sprite::ResizeIndexBuffer(int)
 *   0x00000000004C7C14  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *   0x00000000004C7D60  Caver::Sprite::AddFace(int,int,int)
 *   0x00000000004C7F54  Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*)
 *   0x00000000004C82F8  Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *   0x00000000004C86AC  Caver::Sprite::AddFaces(int,ushort *)
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004D20C8  Caver::Image::Image(Caver::Image const&)
 *   0x00000000004D2124  Caver::Image::InitWithImage(Caver::Image const&)
 *   0x00000000004D2194  Caver::Image::Image(int,int,Caver::PixelFormat)
 *   0x00000000004D2200  Caver::Image::Create(int,int,Caver::PixelFormat)
 *   0x00000000004D2868  Caver::Image::Resize(int,int)
 *   0x00000000004D2A00  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *   0x00000000004D67BC  Caver::BinaryFile::SHA1Hash(void)
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
 *   0x00000000004E5D6C  google::protobuf::io::CopyingInputStreamAdaptor::Next(void const**,int *)
 *   0x00000000004E5E50  google::protobuf::io::CopyingInputStreamAdaptor::AllocateBufferIfNeeded(void)
 *   0x00000000004E6458  google::protobuf::io::CopyingOutputStreamAdaptor::Next(void **,int *)
 *   0x00000000004E653C  google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(void)
 *   0x0000000000503F24  CPVRTModelPOD::InitImpl(void)
 *   0x0000000000504930  PVRTModelPODCopyMesh(SPODMesh const&,SPODMesh&)
 *   0x0000000000506484  sub_506484
 *   0x0000000000513A00  CPVRTResourceFile::CPVRTResourceFile(char const*)
 *   0x0000000000513E80  CPVRTMemoryFileSystem::RegisterMemoryFile(char const*,void const*,ulong,bool)
 *   0x00000000005188F4  PVRTTextureLoadFromPointer(void const*,uint *,void const*,bool,uint,void const*,int *,int *)
 *   0x0000000000521338  sub_521338
 *   0x0000000000521C18  sub_521C18
 *   0x0000000000521F50  sub_521F50
 *   0x000000000052B780  sub_52B780
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000052C8FC  sub_52C8FC
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052E854  sub_52E854
 *   0x000000000053C134  sub_53C134
 *   0x000000000053C520  sub_53C520
 *   0x000000000054307C  sub_54307C
 *   0x000000000054BD8C  sub_54BD8C
 *   0x000000000054C178  sub_54C178
 *   0x000000000054DC04  sub_54DC04
 *   0x000000000054EC54  sub_54EC54
 *   0x000000000054FE98  sub_54FE98
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000550C18  sub_550C18
 *   0x000000000055DF60  sub_55DF60
 *   0x000000000055E3D8  sub_55E3D8
 *   0x000000000055EF78  sub_55EF78
 *   0x000000000055F8C0  sub_55F8C0
 *   0x000000000056219C  sub_56219C
 *   0x0000000000563BDC  sub_563BDC
 *   0x0000000000570348  std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570468  std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
 *   0x0000000000570590  std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
 *
 * Callees: 1
 *   0x000000000051E590  operator new[](ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8578 string=0x00000000001F857C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall operator new[](unsigned __int64 a1)
{
  return _Znam(a1);
}

