/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D30
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponentC2Ev_0
 * Demangled: Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Callers: 1
 *   0x000000000024F644  Caver::GroundMeshGeneratorComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002BBB48  Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D38 string=0x0000000000201D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(
        Caver::GroundMeshGeneratorComponent *this)
{
  return _ZN5Caver28GroundMeshGeneratorComponentC2Ev(this);
}

