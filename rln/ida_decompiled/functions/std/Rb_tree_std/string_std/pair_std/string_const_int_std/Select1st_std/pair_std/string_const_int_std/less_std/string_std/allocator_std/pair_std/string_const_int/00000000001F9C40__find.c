/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9C40
 * Mangled: ._ZNKSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *
 * Callers: 2
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000034D6CC  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9C48 string=0x00000000001F9C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::find()
{
  return _ZNKSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE4findERS1_();
}

