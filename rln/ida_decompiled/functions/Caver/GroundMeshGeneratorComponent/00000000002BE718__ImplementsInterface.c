/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE718
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent19ImplementsInterfaceEl
 * Demangled: Caver::GroundMeshGeneratorComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002BE888  Caver::GroundMeshGeneratorComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002BE718 string=0x00000000002BE71C ""
 *   insn=0x00000000002BE71C string=0x00000000002BE720 "?"
 *   insn=0x00000000002BE71C string=0x00000000002BE888 " !"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GroundMeshGeneratorComponent::ImplementsInterface(
        Caver::GroundMeshGeneratorComponent *this,
        __int64 (__fastcall *a2)(Caver::GroundMeshGeneratorComponent *__hidden this))
{
  return a2 == Caver::GroundMeshGeneratorComponent::Interface;
}

