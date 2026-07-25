/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4870
 * Mangled: ._ZN5Caver5Proto4MeshC2Ev
 * Demangled: Caver::Proto::Mesh::Mesh(void)
 *
 * Callers: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x000000000033907C  Caver::Proto::MeshMaterial::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4874 string=0x00000000003390D4 " "
 *   insn=0x00000000001F4878 string=0x00000000001F487C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh *this)
{
  JUMPOUT(0x3390D4);
}

