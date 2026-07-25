/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC50
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *
 * Callers: 3
 *   0x00000000003C1C9C  Caver::PlayerProfile::ValueForCounter(std::string const&)
 *   0x00000000003C1D60  Caver::PlayerProfile::IncreaseCounterValue(std::string const&,int)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C2F98  Caver::GameState::~GameState()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC58 string=0x00000000001FBC5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find()
{
  JUMPOUT(0x3C3790);
}

