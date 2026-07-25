/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200AE0
 * Mangled: ._ZN5Caver14ProfileManager21PlayerProfileWasSavedEPNS_13PlayerProfileEb
 * Demangled: Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callers: 1
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200AE8 string=0x0000000000200AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileManager::PlayerProfileWasSaved(
        Caver::ProfileManager *this,
        Caver::PlayerProfile *a2,
        bool a3)
{
  return _ZN5Caver14ProfileManager21PlayerProfileWasSavedEPNS_13PlayerProfileEb(this, a2, a3);
}

