/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3600
 * Mangled: ._ZN5Caver22MagicHookshotComponent7DestroyEv
 * Demangled: Caver::MagicHookshotComponent::Destroy(void)
 *
 * Callers: 2
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3608 string=0x00000000001F360C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MagicHookshotComponent::Destroy(Caver::MagicHookshotComponent *this)
{
  JUMPOUT(0x28A0EC);
}

