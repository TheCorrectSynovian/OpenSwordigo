/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE888
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent9InterfaceEv
 * Demangled: Caver::GroundMeshGeneratorComponent::Interface(void)
 *
 * Callers: 3
 *   0x00000000002BE718  Caver::GroundMeshGeneratorComponent::ImplementsInterface(long)
 *   0x00000000002BE72C  Caver::GroundMeshGeneratorComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x00000000002BE888  Caver::GroundMeshGeneratorComponent::Interface(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002BE88C string=0x00000000002BE888 " !"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::GroundMeshGeneratorComponent::Interface(
        Caver::GroundMeshGeneratorComponent *this))(Caver::GroundMeshGeneratorComponent *__hidden this)
{
  return Caver::GroundMeshGeneratorComponent::Interface;
}

