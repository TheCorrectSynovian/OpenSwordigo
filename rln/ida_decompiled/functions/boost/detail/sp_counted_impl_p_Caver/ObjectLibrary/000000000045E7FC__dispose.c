/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045E7FC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver13ObjectLibraryEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD10  Caver::ObjectLibrary::~ObjectLibrary()
 *   0x000000000045E848  boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000045E810 string=0x000000000045E814 "?q"
 *   insn=0x000000000045E814 string=0x00000000001FAD10 "0'"
 *   insn=0x000000000045E824 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045E840 string=0x000000000045E844 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::ObjectLibrary>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::ObjectLibrary::~ObjectLibrary(*(Caver::ObjectLibrary **)(a1 + 24));
    operator delete(v1);
  }
}

