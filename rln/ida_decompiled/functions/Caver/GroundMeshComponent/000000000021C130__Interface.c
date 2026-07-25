/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C130
 * Mangled: _ZN5Caver19GroundMeshComponent9InterfaceEv
 * Demangled: Caver::GroundMeshComponent::Interface(void)
 *
 * Callers: 7
 *   0x000000000021A864  Caver::CollisionShapeComponent::Prepare(void)
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *   0x00000000002B8D88  Caver::GroundMeshComponent::ImplementsInterface(long)
 *   0x00000000002B8D9C  Caver::GroundMeshComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002BE760  Caver::GroundMeshGeneratorComponent::className(void)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x0000000000466454  Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000021C134 string=0x000000000021C130 "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::GroundMeshComponent::Interface(
        Caver::GroundMeshComponent *this))(Caver::GroundMeshComponent *__hidden this)
{
  return Caver::GroundMeshComponent::Interface;
}

