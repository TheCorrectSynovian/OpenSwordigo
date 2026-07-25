/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F44C
 * Mangled: _ZNK5Caver19EntityInfoComponent9freezableEv
 * Demangled: Caver::EntityInfoComponent::freezable(void)
 *
 * Callers: 1
 *   0x00000000001F5FA0  Caver::EntityInfoComponent::freezable(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000026F450 string=0x000000000026F454 "E@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityInfoComponent::freezable(Caver::EntityInfoComponent *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 16);
  return !v1 || *(_BYTE *)(v1 + 17) != 0;
}

