/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048EF74
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver16RenderingProgramEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203C40  Caver::RenderingProgram::~RenderingProgram()
 *   0x000000000048EFC0  boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000048EF88 string=0x000000000048EF8C "-"
 *   insn=0x000000000048EF9C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048EFB8 string=0x000000000048EFBC "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::RenderingProgram::~RenderingProgram(*(Caver::RenderingProgram **)(a1 + 24));
    operator delete(v1);
  }
}

