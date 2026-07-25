/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF9B0
 * Mangled: ._ZN5Caver28TransformControllerComponent6UpdateEf
 * Demangled: Caver::TransformControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002410B4  `non-virtual thunk to'Caver::TransformControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002407D0  Caver::TransformControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF9B8 string=0x00000000001FF9BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::TransformControllerComponent::Update(Caver::TransformControllerComponent *this, float a2)
{
  JUMPOUT(0x240910);
}

