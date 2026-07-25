/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8E60
 * Mangled: ._ZN5Caver19AttributePointsView11SetHelpTextERKSs
 * Demangled: Caver::AttributePointsView::SetHelpText(std::string const&)
 *
 * Callers: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Callees: 1
 *   0x00000000003F8A74  Caver::AttributePointsView::SetHelpText(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8E68 string=0x00000000001F8E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AttributePointsView::SetHelpText()
{
  return _ZN5Caver19AttributePointsView11SetHelpTextERKSs();
}

