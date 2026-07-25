/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200EA0
 * Mangled: ._ZN5Caver12MeshInstance16InstanceWithMeshERKN5boost10shared_ptrINS_4MeshEEEb
 * Demangled: Caver::MeshInstance::InstanceWithMesh(boost::shared_ptr<Caver::Mesh> const&,bool)
 *
 * Callers: 3
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000044A508  Caver::MeshPrimitives::Cube(bool)
 *   0x000000000044AA1C  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 1
 *   0x00000000004484F8  Caver::MeshInstance::MeshInstance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200EA8 string=0x0000000000200EAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::MeshInstance::InstanceWithMesh()
{
  JUMPOUT(0x4485BC);
}

