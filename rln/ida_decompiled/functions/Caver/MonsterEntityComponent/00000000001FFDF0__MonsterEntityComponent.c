/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFDF0
 * Mangled: ._ZN5Caver22MonsterEntityComponentC2Ev
 * Demangled: Caver::MonsterEntityComponent::MonsterEntityComponent(void)
 *
 * Callers: 1
 *   0x000000000024FEF8  Caver::MonsterEntityComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000027AE80  Caver::ManaComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFDF8 string=0x00000000001FFDFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MonsterEntityComponent::MonsterEntityComponent(Caver::MonsterEntityComponent *this)
{
  JUMPOUT(0x27AED8);
}

