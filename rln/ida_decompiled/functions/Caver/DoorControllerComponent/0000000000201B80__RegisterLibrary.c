/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B80
 * Mangled: ._ZN5Caver23DoorControllerComponent15RegisterLibraryEv
 * Demangled: Caver::DoorControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B88 string=0x0000000000201B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DoorControllerComponent::RegisterLibrary(Caver::DoorControllerComponent *this)
{
  JUMPOUT(0x2B2F40);
}

