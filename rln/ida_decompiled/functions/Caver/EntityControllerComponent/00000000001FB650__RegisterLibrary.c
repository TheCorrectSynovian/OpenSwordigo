/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB650
 * Mangled: ._ZN5Caver25EntityControllerComponent15RegisterLibraryEv
 * Demangled: Caver::EntityControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB658 string=0x00000000001FB65C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityControllerComponent::RegisterLibrary(Caver::EntityControllerComponent *this)
{
  JUMPOUT(0x26B708);
}

