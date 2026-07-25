/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE6C0
 * Mangled: _ZNK5Caver28GroundMeshGeneratorComponent5CloneEv
 * Demangled: Caver::GroundMeshGeneratorComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002BE4B0  Caver::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB500  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *   0x00000000001FF450  Caver::GroundMeshGeneratorComponent::InitWithComponent(Caver::GroundMeshGeneratorComponent const*)
 *   0x00000000002BE710  Caver::GroundMeshGeneratorComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002BE6D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002BE6DC string=0x00000000001FB500 "0'"
 *   insn=0x00000000002BE6E4 string=0x00000000002BE6E8 "Z"
 *   insn=0x00000000002BE704 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002BE708 string=0x00000000002BE70C "n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GroundMeshGeneratorComponent *__fastcall Caver::GroundMeshGeneratorComponent::Clone(
        Caver::GroundMeshGeneratorComponent *this)
{
  Caver::GroundMeshGeneratorComponent *v1; // x19

  v1 = (Caver::GroundMeshGeneratorComponent *)operator new(0xF0u);
  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(v1);
  Caver::GroundMeshGeneratorComponent::InitWithComponent();
  return v1;
}

