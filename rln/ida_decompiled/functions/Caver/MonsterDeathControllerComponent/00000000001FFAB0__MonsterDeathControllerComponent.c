/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFAB0
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponentC2Ev_0
 * Demangled: Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002501F8  Caver::MonsterDeathControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x0000000000299C40  Caver::MonsterControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFAB8 string=0x00000000001FFABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(
        Caver::MonsterDeathControllerComponent *this)
{
  JUMPOUT(0x299C98);
}

