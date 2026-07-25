/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000299BB8
 * Mangled: _ZN5Caver26MonsterControllerComponentD0Ev
 * Demangled: Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x0000000000299BF0  Caver::MonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000299BC4 string=0x0000000000299BC8 "N"
 *   insn=0x0000000000299BD8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000299BE8 string=0x0000000000299BEC "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterControllerComponent::~MonsterControllerComponent(Caver::MonsterControllerComponent *this)
{
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
  operator delete(this);
}

