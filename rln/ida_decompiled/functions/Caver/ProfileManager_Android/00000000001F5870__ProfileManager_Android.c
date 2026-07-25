/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5870
 * Mangled: ._ZN5Caver22ProfileManager_AndroidC2Ev
 * Demangled: Caver::ProfileManager_Android::ProfileManager_Android(void)
 *
 * Callers: 1
 *   0x0000000000477D9C  Java_com_touchfoo_swordigo_Native_setFilesDir
 *
 * Callees: 1
 *   0x00000000004BB600  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::_M_create_node(Caver::TargetAction<void ()(bool,std::string const&)> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5878 string=0x00000000001F587C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfileManager_Android::ProfileManager_Android(Caver::ProfileManager_Android *this)
{
  JUMPOUT(0x4BB6E4);
}

