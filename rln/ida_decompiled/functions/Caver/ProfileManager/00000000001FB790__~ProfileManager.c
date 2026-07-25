/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB790
 * Mangled: ._ZN5Caver14ProfileManagerD2Ev
 * Demangled: Caver::ProfileManager::~ProfileManager()
 *
 * Callers: 3
 *   0x00000000003A7934  boost::detail::shared_count::shared_count<Caver::ProfileManager>(Caver::ProfileManager *)
 *   0x00000000003A79C8  boost::detail::sp_counted_impl_p<Caver::ProfileManager>::dispose(void)
 *   0x00000000004BB720  Caver::ProfileManager_Android::~ProfileManager_Android()
 *
 * Callees: 1
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB798 string=0x00000000001FB79C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfileManager::~ProfileManager(Caver::ProfileManager *this)
{
  _ZN5Caver14ProfileManagerD2Ev(this);
}

