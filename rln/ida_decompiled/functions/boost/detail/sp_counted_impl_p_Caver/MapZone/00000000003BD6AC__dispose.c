/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BD6AC
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver7MapZoneEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::MapZone>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDEC0  Caver::MapZone::~MapZone()
 *   0x00000000003BD6F8  boost::detail::sp_counted_impl_p<Caver::MapZone>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003BD6C4 string=0x00000000001FDEC0 "0'"
 *   insn=0x00000000003BD6D4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BD6F0 string=0x00000000003BD6F4 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::MapZone>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::MapZone::~MapZone(*(Caver::MapZone **)(a1 + 24));
    operator delete(v1);
  }
}

