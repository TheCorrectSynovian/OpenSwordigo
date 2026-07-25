/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002036B0
 * Mangled: ._ZN5Caver13PlayerProfile13ProfileExistsEv
 * Demangled: Caver::PlayerProfile::ProfileExists(void)
 *
 * Callers: 3
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7124  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BFA90  Caver::PlayerProfile::ProfileExists(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002036B8 string=0x00000000002036BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::ProfileExists(Caver::PlayerProfile *this)
{
  return _ZN5Caver13PlayerProfile13ProfileExistsEv(this);
}

