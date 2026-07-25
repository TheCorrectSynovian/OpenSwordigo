/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8460
 * Mangled: ._ZN5Caver19EntityInfoComponentC2Ev
 * Demangled: Caver::EntityInfoComponent::EntityInfoComponent(void)
 *
 * Callers: 2
 *   0x000000000024F704  Caver::EntityInfoComponent::Create(void)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000026E96C  Caver::EntityInfoComponent::EntityInfoComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8468 string=0x00000000001F846C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::EntityInfoComponent(Caver::EntityInfoComponent *this)
{
  return _ZN5Caver19EntityInfoComponentC2Ev(this);
}

