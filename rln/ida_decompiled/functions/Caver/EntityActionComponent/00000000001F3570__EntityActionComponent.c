/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3570
 * Mangled: ._ZN5Caver21EntityActionComponentC2Ev
 * Demangled: Caver::EntityActionComponent::EntityActionComponent(void)
 *
 * Callers: 1
 *   0x000000000024F784  Caver::EntityActionComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000266A04  Caver::DamageComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3578 string=0x00000000001F357C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityActionComponent::EntityActionComponent(Caver::EntityActionComponent *this)
{
  JUMPOUT(0x266EAC);
}

