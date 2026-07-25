/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F46C
 * Mangled: _ZNK5Caver19EntityInfoComponent9stunnableEv
 * Demangled: Caver::EntityInfoComponent::stunnable(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000026F470 string=0x000000000026F474 "I@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityInfoComponent::stunnable(Caver::EntityInfoComponent *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 16);
  return !v1 || *(_BYTE *)(v1 + 18) != 0;
}

