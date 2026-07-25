/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2DF4
 * Mangled: _ZThn16_N5Caver23DoorControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::DoorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3CB0  Caver::DoorControllerComponent::SetOpen(bool)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002B2DFC string=0x00000000002B2E00 "H"
 *   insn=0x00000000002B2DFC string=0x00000000002B2E0C "E"
 *   insn=0x00000000002B2E08 string=0x00000000001F3CB0 "P'"
 *   insn=0x00000000002B2E0C string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DoorControllerComponent::SetValueForBindedProperty(
        Caver::DoorControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::DoorControllerComponent *v3; // x0

  v3 = (Caver::DoorControllerComponent *)((char *)this - 16);
  if ( a2 == 4 )
    return Caver::DoorControllerComponent::SetOpen(v3, **((_BYTE **)a3 + 1));
  else
    return Caver::Component::SetValueForBindedProperty(v3, a2, a3);
}

