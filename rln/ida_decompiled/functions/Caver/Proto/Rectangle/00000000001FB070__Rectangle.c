/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB070
 * Mangled: ._ZN5Caver5Proto9RectangleC2Ev
 * Demangled: Caver::Proto::Rectangle::Rectangle(void)
 *
 * Callers: 14
 *   0x0000000000236DAC  Caver::ShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FE598  Caver::Proto::SceneObject::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *   0x0000000000301B2C  Caver::Proto::Scene::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000306EB8  Caver::Proto::GroundMeshComponent::GroundMeshComponent(Caver::Proto::GroundMeshComponent const&)
 *   0x00000000003078F0  Caver::Proto::GroundMeshComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *   0x000000000030AF94  Caver::Proto::ShapeComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *   0x00000000004C9694  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Callees: 1
 *   0x00000000002CEB84  Caver::Proto::Vector3::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB078 string=0x00000000001FB07C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Rectangle::Rectangle(Caver::Proto::Rectangle *this)
{
  JUMPOUT(0x2CEBDC);
}

