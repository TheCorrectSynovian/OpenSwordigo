/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F61F0
 * Mangled: ._ZN5Caver23CharControllerComponent6UpdateEf
 * Demangled: Caver::CharControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000025DC78  `non-virtual thunk to'Caver::CharControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F61F8 string=0x00000000001F61FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharControllerComponent::Update(Caver::CharControllerComponent *this, float a2)
{
  JUMPOUT(0x25B718);
}

