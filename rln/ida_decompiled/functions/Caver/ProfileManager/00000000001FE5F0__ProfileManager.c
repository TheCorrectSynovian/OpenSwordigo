/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE5F0
 * Mangled: ._ZN5Caver14ProfileManagerC2Ev
 * Demangled: Caver::ProfileManager::ProfileManager(void)
 *
 * Callers: 1
 *   0x00000000004BB600  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *
 * Callees: 1
 *   0x00000000003A5EC4  Caver::ProfileManager::ProfileManager(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE5F4 string=0x00000000003A5EC4 ""
 *   insn=0x00000000001FE5F8 string=0x00000000001FE5FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileManager::ProfileManager(Caver::ProfileManager *this)
{
  return _ZN5Caver14ProfileManagerC2Ev(this);
}

