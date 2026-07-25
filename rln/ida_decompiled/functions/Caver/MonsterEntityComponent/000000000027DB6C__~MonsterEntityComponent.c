/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027DB6C
 * Mangled: _ZN5Caver22MonsterEntityComponentD0Ev
 * Demangled: Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callers: 1
 *   0x000000000027D978  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFC40  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *   0x000000000027DBA4  Caver::MonsterEntityComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000027DB78 string=0x000000000027DB7C "1"
 *   insn=0x000000000027DB8C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000027DB9C string=0x000000000027DBA0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterEntityComponent::~MonsterEntityComponent(Caver::MonsterEntityComponent *this)
{
  Caver::MonsterEntityComponent::~MonsterEntityComponent(this);
  operator delete(this);
}

