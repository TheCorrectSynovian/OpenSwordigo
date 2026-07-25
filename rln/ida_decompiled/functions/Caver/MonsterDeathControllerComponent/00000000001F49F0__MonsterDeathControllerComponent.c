/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F49F0
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponentC2Ev
 * Demangled: Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000029B650  Caver::MonsterDeathControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000299C40  Caver::MonsterControllerComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F49F8 string=0x00000000001F49FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MonsterDeathControllerComponent::MonsterDeathControllerComponent(
        Caver::MonsterDeathControllerComponent *this)
{
  JUMPOUT(0x299C98);
}

