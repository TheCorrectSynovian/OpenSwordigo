/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2A8C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver8GameDataEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GameData>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F74D0  Caver::GameData::~GameData()
 *   0x00000000003C2AD8  boost::detail::sp_counted_impl_p<Caver::GameData>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003C2AA4 string=0x00000000001F74D0 "0'"
 *   insn=0x00000000003C2AB4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2AD0 string=0x00000000003C2AD4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GameData>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GameData::~GameData(*(Caver::GameData **)(a1 + 24));
    operator delete(v1);
  }
}

