/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F48C
 * Mangled: _ZNK5Caver19EntityInfoComponent9grabbableEv
 * Demangled: Caver::EntityInfoComponent::grabbable(void)
 *
 * Callers: 1
 *   0x00000000001F6580  Caver::EntityInfoComponent::grabbable(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000026F490 string=0x000000000026F494 "M@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityInfoComponent::grabbable(Caver::EntityInfoComponent *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 16);
  return !v1 || *(_BYTE *)(v1 + 19) != 0;
}

