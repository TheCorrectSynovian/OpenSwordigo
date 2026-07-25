/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9220
 * Mangled: ._ZN5Caver27ElevatorControllerComponent15RegisterLibraryEv
 * Demangled: Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x00000000002B41F0  Caver::ElevatorControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002B4318  Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9228 string=0x00000000001F922C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ElevatorControllerComponent::RegisterLibrary(Caver::ElevatorControllerComponent *this)
{
  return _ZN5Caver27ElevatorControllerComponent15RegisterLibraryEv(this);
}

