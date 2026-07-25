/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F67D0
 * Mangled: ._ZN5Caver22MagicHookshotComponent11CreateBlastEv
 * Demangled: Caver::MagicHookshotComponent::CreateBlast(void)
 *
 * Callers: 2
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F67D8 string=0x00000000001F67DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicHookshotComponent::CreateBlast(Caver::MagicHookshotComponent *this)
{
  return _ZN5Caver22MagicHookshotComponent11CreateBlastEv(this);
}

