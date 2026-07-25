/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9090
 * Mangled: ._ZN5Caver29ProjectileControllerComponentC2Ev
 * Demangled: Caver::ProjectileControllerComponent::ProjectileControllerComponent(void)
 *
 * Callers: 2
 *   0x0000000000250A38  Caver::ProjectileControllerComponent::Create(void)
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000028C500  Caver::ObjectModifierComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9098 string=0x00000000001F909C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProjectileControllerComponent::ProjectileControllerComponent(
        Caver::ProjectileControllerComponent *this)
{
  JUMPOUT(0x28C558);
}

