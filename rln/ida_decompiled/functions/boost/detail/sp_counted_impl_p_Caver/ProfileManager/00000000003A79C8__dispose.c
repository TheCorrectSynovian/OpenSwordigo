/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A79C8
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver14ProfileManagerEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ProfileManager>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB790  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7A14  boost::detail::sp_counted_impl_p<Caver::ProfileManager>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000003A79DC string=0x00000000003A79E0 "lO"
 *   insn=0x00000000003A79E0 string=0x00000000001FB790 "0'"
 *   insn=0x00000000003A79EC string=0x00000000003A79F0 "0>"
 *   insn=0x00000000003A79F0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A7A04 string=0x00000000003A7A08 "*>"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::ProfileManager>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::ProfileManager::~ProfileManager(*(Caver::ProfileManager **)(a1 + 24));
    operator delete(v1);
  }
}

