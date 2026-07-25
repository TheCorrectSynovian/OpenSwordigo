/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3CB0
 * Mangled: ._ZN5Caver23DoorControllerComponent7SetOpenEb
 * Demangled: Caver::DoorControllerComponent::SetOpen(bool)
 *
 * Callers: 3
 *   0x00000000002B2D2C  Caver::DoorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B2DF4  `non-virtual thunk to'Caver::DoorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002B2D44  Caver::DoorControllerComponent::SetOpen(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3CB8 string=0x00000000001F3CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DoorControllerComponent::SetOpen(Caver::DoorControllerComponent *this, bool a2)
{
  return _ZN5Caver23DoorControllerComponent7SetOpenEb(this, a2);
}

