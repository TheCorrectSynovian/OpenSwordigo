/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6580
 * Mangled: ._ZNK5Caver19EntityInfoComponent9grabbableEv
 * Demangled: Caver::EntityInfoComponent::grabbable(void)
 *
 * Callers: 1
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000026F48C  Caver::EntityInfoComponent::grabbable(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6584 string=0x000000000026F48C "@@"
 *   insn=0x00000000001F6588 string=0x00000000001F658C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::EntityInfoComponent::grabbable(Caver::EntityInfoComponent *this)
{
  return _ZNK5Caver19EntityInfoComponent9grabbableEv(this);
}

