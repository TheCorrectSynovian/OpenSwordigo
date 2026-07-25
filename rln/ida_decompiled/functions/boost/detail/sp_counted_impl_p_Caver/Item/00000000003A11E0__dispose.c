/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A11E0
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver4ItemEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Item>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8950  Caver::Item::~Item()
 *   0x00000000003A122C  boost::detail::sp_counted_impl_p<Caver::Item>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000003A11F8 string=0x00000000001F8950 "0'"
 *   insn=0x00000000003A1204 string=0x00000000003A1208 "*X"
 *   insn=0x00000000003A1208 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003A121C string=0x00000000003A1220 "$X"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Item>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Item::~Item(*(Caver::Item **)(a1 + 24));
    operator delete(v1);
  }
}

