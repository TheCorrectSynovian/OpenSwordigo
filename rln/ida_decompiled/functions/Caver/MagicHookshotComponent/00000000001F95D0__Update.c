/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F95D0
 * Mangled: ._ZN5Caver22MagicHookshotComponent6UpdateEf
 * Demangled: Caver::MagicHookshotComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *
 * Callees: 1
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F95D8 string=0x00000000001F95DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicHookshotComponent::Update(Caver::MagicHookshotComponent *this, float a2)
{
  JUMPOUT(0x28A484);
}

