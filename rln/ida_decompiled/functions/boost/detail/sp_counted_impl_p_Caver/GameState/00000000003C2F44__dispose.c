/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C2F44
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver9GameStateEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::GameState>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA0D0  Caver::GameState::~GameState()
 *   0x00000000003C2F90  boost::detail::sp_counted_impl_p<Caver::GameState>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000003C2F58 string=0x00000000003C2F5C "]"
 *   insn=0x00000000003C2F5C string=0x00000000001FA0D0 "0'"
 *   insn=0x00000000003C2F6C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003C2F88 string=0x00000000003C2F8C "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::GameState>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::GameState::~GameState(*(Caver::GameState **)(a1 + 24));
    operator delete(v1);
  }
}

