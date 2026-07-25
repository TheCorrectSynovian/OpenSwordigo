/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200AD0
 * Mangled: ._ZN5Caver23DoorControllerComponent4OpenEv
 * Demangled: Caver::DoorControllerComponent::Open(void)
 *
 * Callers: 2
 *   0x00000000002B2D44  Caver::DoorControllerComponent::SetOpen(bool)
 *   0x00000000002B34A4  sub_2B34A4
 *
 * Callees: 1
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200AD8 string=0x0000000000200ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DoorControllerComponent::Open(Caver::DoorControllerComponent *this)
{
  JUMPOUT(0x2B3080);
}

