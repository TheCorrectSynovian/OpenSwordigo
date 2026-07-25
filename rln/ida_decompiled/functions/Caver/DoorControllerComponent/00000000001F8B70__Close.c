/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B70
 * Mangled: ._ZN5Caver23DoorControllerComponent5CloseEv
 * Demangled: Caver::DoorControllerComponent::Close(void)
 *
 * Callers: 2
 *   0x00000000002B2D44  Caver::DoorControllerComponent::SetOpen(bool)
 *   0x00000000002B34E4  sub_2B34E4
 *
 * Callees: 1
 *   0x00000000002B3264  Caver::DoorControllerComponent::Close(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B78 string=0x00000000001F8B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DoorControllerComponent::Close(Caver::DoorControllerComponent *this)
{
  return _ZN5Caver23DoorControllerComponent5CloseEv(this);
}

