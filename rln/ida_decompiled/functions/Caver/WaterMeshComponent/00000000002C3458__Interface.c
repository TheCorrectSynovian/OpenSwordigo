/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C3458
 * Mangled: _ZN5Caver18WaterMeshComponent9InterfaceEv
 * Demangled: Caver::WaterMeshComponent::Interface(void)
 *
 * Callers: 5
 *   0x00000000002C338C  Caver::WaterMeshComponent::ImplementsInterface(long)
 *   0x00000000002C33A0  Caver::WaterMeshComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002C3458  Caver::WaterMeshComponent::Interface(void)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002C345C string=0x00000000002C3458 " !"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::WaterMeshComponent::Interface(
        Caver::WaterMeshComponent *this))(Caver::WaterMeshComponent *__hidden this)
{
  return Caver::WaterMeshComponent::Interface;
}

