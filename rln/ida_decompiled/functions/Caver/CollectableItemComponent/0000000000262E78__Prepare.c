/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000262E78
 * Mangled: _ZN5Caver24CollectableItemComponent7PrepareEv
 * Demangled: Caver::CollectableItemComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F7560  Caver::GameState::CurrentLevelState(bool)
 *   0x00000000001FB270  Caver::CollectableItemComponent::RegisterLibrary(void)
 *
 * Referenced strings: 9
 *   insn=0x0000000000262E8C string=0x00000000001FB270 "0'"
 *   insn=0x0000000000262E94 string=0x0000000000262E98 ""
 *   insn=0x0000000000262E9C string=0x0000000000262EA0 "h"
 *   insn=0x0000000000262EA0 string=0x0000000000262EA4 ""
 *   insn=0x0000000000262EA8 string=0x0000000000262EAC "@"
 *   insn=0x0000000000262EB8 string=0x00000000001F7560 "0'"
 *   insn=0x0000000000262EC4 string=0x0000000000262EC8 "`"
 *   insn=0x0000000000262EC4 string=0x00000000001F7180 "0'"
 *   insn=0x0000000000262EC8 string=0x0000000000262ECC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CollectableItemComponent::Prepare(Caver::CollectableItemComponent *this)
{
  __int64 result; // x0

  result = Caver::CollectableItemComponent::RegisterLibrary(this);
  if ( *(_QWORD *)(*((_QWORD *)this + 16) - 24LL) )
  {
    result = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 32LL) + 16LL);
    if ( result )
    {
      Caver::GameState::CurrentLevelState((Caver::GameState *)result);
      result = Caver::StateProperties::HasFlag();
      if ( (result & 1) != 0 )
        *(_BYTE *)(*((_QWORD *)this + 5) + 244LL) = 1;
    }
  }
  return result;
}

