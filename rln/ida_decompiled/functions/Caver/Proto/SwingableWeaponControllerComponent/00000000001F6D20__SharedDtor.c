/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D20
 * Mangled: ._ZN5Caver5Proto34SwingableWeaponControllerComponent10SharedDtorEv
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::SharedDtor(void)
 *
 * Callers: 2
 *   0x000000000032A9BC  Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(Caver::Proto::SwingableWeaponControllerComponent const&)
 *   0x000000000032AD30  Caver::Proto::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent()
 *
 * Callees: 1
 *   0x000000000032A9BC  Caver::Proto::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D28 string=0x00000000001F6D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SwingableWeaponControllerComponent::SharedDtor(
        Caver::Proto::SwingableWeaponControllerComponent *this)
{
  JUMPOUT(0x32ABEC);
}

