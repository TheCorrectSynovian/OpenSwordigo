/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2D2C
 * Mangled: _ZN5Caver23DoorControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::DoorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3CB0  Caver::DoorControllerComponent::SetOpen(bool)
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002B2D30 string=0x00000000002B2D34 "H"
 *   insn=0x00000000002B2D30 string=0x00000000002B2D40 "x"
 *   insn=0x00000000002B2D3C string=0x00000000001F3CB0 "P'"
 *   insn=0x00000000002B2D40 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::SetValueForBindedProperty(
        Caver::DoorControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 == 4 )
    return Caver::DoorControllerComponent::SetOpen(this, **((_BYTE **)a3 + 1));
  else
    return Caver::Component::SetValueForBindedProperty(this, a2, a3);
}

