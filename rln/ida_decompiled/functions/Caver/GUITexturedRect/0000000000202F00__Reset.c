/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F00
 * Mangled: ._ZN5Caver15GUITexturedRect5ResetEv
 * Demangled: Caver::GUITexturedRect::Reset(void)
 *
 * Callers: 2
 *   0x0000000000429CC0  Caver::MenuItemSlot::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x000000000042A060  Caver::MenuItemSlot::SetSkill(boost::shared_ptr<Caver::Skill> const&,bool)
 *
 * Callees: 1
 *   0x00000000004AAE3C  Caver::GUITexturedRect::Reset(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F08 string=0x0000000000202F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITexturedRect::Reset(Caver::GUITexturedRect *this)
{
  return _ZN5Caver15GUITexturedRect5ResetEv(this);
}

