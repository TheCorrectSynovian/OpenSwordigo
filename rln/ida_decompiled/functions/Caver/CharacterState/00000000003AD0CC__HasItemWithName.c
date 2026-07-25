/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD0CC
 * Mangled: _ZN5Caver14CharacterState15HasItemWithNameERKSs
 * Demangled: Caver::CharacterState::HasItemWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FDDE0  Caver::CharacterState::HasItemWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000001FDA10  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003AD0D8 string=0x00000000003AD0DC "`B"
 *   insn=0x00000000003AD0DC string=0x00000000003AD0E0 "LB"
 *   insn=0x00000000003AD0E0 string=0x00000000001FDA10 "0'"
 *   insn=0x00000000003AD0E4 string=0x00000000003AD0E8 "hb"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharacterState::HasItemWithName(__int64 a1)
{
  __int64 v2; // x0

  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find();
  return a1 + 24 != v2;
}

