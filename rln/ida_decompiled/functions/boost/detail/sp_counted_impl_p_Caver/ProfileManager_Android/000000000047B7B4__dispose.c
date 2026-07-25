/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B7B4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver22ProfileManager_AndroidEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB410  Caver::ProfileManager_Android::~ProfileManager_Android()
 *   0x000000000047B800  boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000047B7CC string=0x00000000001FB410 "0'"
 *   insn=0x000000000047B7DC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047B7F8 string=0x000000000047B7FC "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::ProfileManager_Android>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::ProfileManager_Android::~ProfileManager_Android(*(Caver::ProfileManager_Android **)(a1 + 24));
    operator delete(v1);
  }
}

