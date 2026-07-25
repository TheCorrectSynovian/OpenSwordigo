/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC840
 * Mangled: ._ZN5Caver14SpellComponent13HandleMessageEiPv
 * Demangled: Caver::SpellComponent::HandleMessage(int,void *)
 *
 * Callers: 2
 *   0x0000000000285384  Caver::MagicBoltComponent::HandleMessage(int,void *)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002901BC  Caver::SpellComponent::HandleMessage(int,void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC848 string=0x00000000001FC84C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::HandleMessage(Caver::SpellComponent *this, int a2, void *a3)
{
  return _ZN5Caver14SpellComponent13HandleMessageEiPv(this, a2, a3);
}

