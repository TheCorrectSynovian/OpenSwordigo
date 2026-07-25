/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002037A0
 * Mangled: ._ZN5Caver33ModelTransformControllerComponent6UpdateEf
 * Demangled: Caver::ModelTransformControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002283D0  `non-virtual thunk to'Caver::ModelTransformControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000228040  Caver::ModelTransformControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002037A8 string=0x00000000002037AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ModelTransformControllerComponent::Update(
        Caver::ModelTransformControllerComponent *this,
        float a2)
{
  JUMPOUT(0x228180);
}

