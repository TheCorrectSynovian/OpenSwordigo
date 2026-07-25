/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023BAC4
 * Mangled: _ZN5Caver19SpawnPointComponent19ImplementsInterfaceEl
 * Demangled: Caver::SpawnPointComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023BB0C  Caver::SpawnPointComponent::className(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000023BAC4 string=0x000000000023BAC8 "}A"
 *   insn=0x000000000023BAC8 string=0x000000000023BACC "?"
 *   insn=0x000000000023BAC8 string=0x000000000023BB64 "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::SpawnPointComponent::ImplementsInterface(
        Caver::SpawnPointComponent *this,
        _QWORD (*a2)(Caver::SpawnPointComponent *__hidden this))
{
  return a2 == Caver::SpawnPointComponent::Interface;
}

