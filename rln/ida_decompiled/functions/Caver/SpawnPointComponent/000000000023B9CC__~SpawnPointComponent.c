/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023B9CC
 * Mangled: _ZN5Caver19SpawnPointComponentD0Ev
 * Demangled: Caver::SpawnPointComponent::~SpawnPointComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000023BA04  Caver::SpawnPointComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000023B9DC string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023B9E8 string=0x000000000023B9EC "1"
 *   insn=0x000000000023B9EC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023B9F4 string=0x000000000023B9F8 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpawnPointComponent::~SpawnPointComponent(Caver::SpawnPointComponent *this)
{
  Caver::Component::~Component(this);
  operator delete(this);
}

