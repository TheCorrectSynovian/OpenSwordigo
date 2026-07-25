/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD258
 * Mangled: _ZN5Caver14CharacterState9ItemCountERKSs
 * Demangled: Caver::CharacterState::ItemCount(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F80F0  Caver::CharacterState::ItemCount(std::string const&)
 *
 * Callees: 1
 *   0x00000000001FDA10  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find(std::string const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003AD264 string=0x00000000003AD268 "`B"
 *   insn=0x00000000003AD26C string=0x00000000003AD270 "hb"
 *   insn=0x00000000003AD26C string=0x00000000001FDA10 "0'"
 *   insn=0x00000000003AD274 string=0x00000000003AD278 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::ItemCount(__int64 a1)
{
  __int64 v2; // x0

  std::_Rb_tree<std::string,std::pair<std::string const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>>::find();
  if ( a1 + 24 == v2 )
    return 0;
  else
    return *(unsigned int *)(v2 + 56);
}

