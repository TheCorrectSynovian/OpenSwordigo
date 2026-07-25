/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B6B8
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent19ImplementsInterfaceEl
 * Demangled: Caver::MonsterDeathControllerComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000027DE24  Caver::MonsterDeathControllerComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000029B6B8 string=0x000000000029B6BC "QE"
 *   insn=0x000000000029B6BC string=0x000000000029B6C0 "?"
 *   insn=0x000000000029B6BC string=0x000000000027DE24 "@#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::MonsterDeathControllerComponent::ImplementsInterface(
        Caver::MonsterDeathControllerComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::MonsterDeathControllerComponent *this))(Caver::MonsterDeathControllerComponent *__hidden this))
{
  return a2 == Caver::MonsterDeathControllerComponent::Interface;
}

