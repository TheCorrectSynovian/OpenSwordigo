/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB500
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponentC2Ev
 * Demangled: Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Callers: 1
 *   0x00000000002BE6C0  Caver::GroundMeshGeneratorComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002BBB48  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB508 string=0x00000000001FB50C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(
        Caver::GroundMeshGeneratorComponent *this)
{
  return _ZN5Caver28GroundMeshGeneratorComponentC2Ev(this);
}

