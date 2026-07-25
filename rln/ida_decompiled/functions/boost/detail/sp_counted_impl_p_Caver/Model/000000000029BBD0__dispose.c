/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BBD0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver5ModelEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Model>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203180  Caver::Model::~Model()
 *   0x000000000029BC1C  boost::detail::sp_counted_impl_p<Caver::Model>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000029BBE4 string=0x000000000029BBE8 "f"
 *   insn=0x000000000029BBF8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029BC14 string=0x000000000029BC18 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Model>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Model::~Model(*(Caver::Model **)(a1 + 24));
    operator delete(v1);
  }
}

