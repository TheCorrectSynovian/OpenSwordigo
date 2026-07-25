/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB410
 * Mangled: ._ZN5Caver22ProfileManager_AndroidD2Ev
 * Demangled: Caver::ProfileManager_Android::~ProfileManager_Android()
 *
 * Callers: 2
 *   0x000000000047B720  boost::detail::shared_count::shared_count<Caver::ProfileManager_Android>(Caver::ProfileManager_Android *)
 *   0x000000000047B7B4  boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::dispose(void)
 *
 * Callees: 1
 *   0x00000000004BB720  Caver::ProfileManager_Android::~ProfileManager_Android()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB418 string=0x00000000001FB41C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfileManager_Android::~ProfileManager_Android(Caver::ProfileManager_Android *this)
{
  _ZN5Caver22ProfileManager_AndroidD2Ev(this);
}

