/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045EDE4
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver7ProgramEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::Program>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000045EE30  boost::detail::sp_counted_impl_p<Caver::Program>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000045EDF8 string=0x000000000045EDFC "]"
 *   insn=0x000000000045EE08 string=0x000000000045EE0C ")a"
 *   insn=0x000000000045EE0C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045EE20 string=0x000000000045EE24 "#a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::Program>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::Program::~Program(*(Caver::Program **)(a1 + 24));
    operator delete(v1);
  }
}

