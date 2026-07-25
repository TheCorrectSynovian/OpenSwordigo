/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C1F9C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver12ProgramStateEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::ProgramState>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFB50  Caver::ProgramState::~ProgramState()
 *   0x00000000004C1FE8  boost::detail::sp_counted_impl_p<Caver::ProgramState>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000004C1FC4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C1FE0 string=0x00000000004C1FE4 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::ProgramState>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::ProgramState::~ProgramState(*(Caver::ProgramState **)(a1 + 24));
    operator delete(v1);
  }
}

