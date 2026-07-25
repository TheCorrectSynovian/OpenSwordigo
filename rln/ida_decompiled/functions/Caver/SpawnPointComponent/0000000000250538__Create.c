/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250538
 * Mangled: _ZN5Caver19SpawnPointComponent6CreateEv
 * Demangled: Caver::SpawnPointComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002504F8  Caver::PortalComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC9C0  Caver::SpawnPointComponent::SpawnPointComponent(void)
 *   0x0000000000250578  Caver::TouchableComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250544 string=0x0000000000250548 "&"
 *   insn=0x0000000000250548 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250550 string=0x00000000001FC9C0 "0'"
 *   insn=0x0000000000250568 string=0x000000000025056C "Q"
 *   insn=0x000000000025056C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SpawnPointComponent *__fastcall Caver::SpawnPointComponent::Create(Caver::SpawnPointComponent *this)
{
  Caver::SpawnPointComponent *v1; // x19

  v1 = (Caver::SpawnPointComponent *)operator new(0x80u);
  Caver::SpawnPointComponent::SpawnPointComponent(v1);
  return v1;
}

