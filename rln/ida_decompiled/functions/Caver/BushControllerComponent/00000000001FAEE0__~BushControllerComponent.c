/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAEE0
 * Mangled: ._ZN5Caver23BushControllerComponentD2Ev
 * Demangled: Caver::BushControllerComponent::~BushControllerComponent()
 *
 * Callers: 1
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAEE8 string=0x00000000001FAEEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BushControllerComponent::~BushControllerComponent(Caver::BushControllerComponent *this)
{
  JUMPOUT(0x2B2070);
}

