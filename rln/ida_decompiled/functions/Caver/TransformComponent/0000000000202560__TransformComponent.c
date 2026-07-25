/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202560
 * Mangled: ._ZN5Caver18TransformComponentC2Ev
 * Demangled: Caver::TransformComponent::TransformComponent(void)
 *
 * Callers: 2
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000024F9C4  Caver::TransformComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000240230  Caver::TouchableComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202568 string=0x000000000020256C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::TransformComponent::TransformComponent(Caver::TransformComponent *this)
{
  JUMPOUT(0x240288);
}

