/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC3A0
 * Mangled: ._ZN5Caver23TextureMappingComponentC2Ev
 * Demangled: Caver::TextureMappingComponent::TextureMappingComponent(void)
 *
 * Callers: 1
 *   0x000000000024FAC4  Caver::TextureMappingComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000023E180  Caver::TextureMappingComponent::TextureMappingComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC3A8 string=0x00000000001FC3AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureMappingComponent::TextureMappingComponent(Caver::TextureMappingComponent *this)
{
  return _ZN5Caver23TextureMappingComponentC2Ev(this);
}

