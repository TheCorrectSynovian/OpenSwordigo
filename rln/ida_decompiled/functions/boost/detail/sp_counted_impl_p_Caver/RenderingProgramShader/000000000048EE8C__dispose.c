/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048EE8C
 * Mangled: _ZN5boost6detail17sp_counted_impl_pIN5Caver22RenderingProgramShaderEE7disposeEv
 * Demangled: boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::dispose(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202B20  Caver::RenderingProgramShader::~RenderingProgramShader()
 *   0x000000000048EED8  boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::get_deleter(std::type_info const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x000000000048EEB4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000048EED0 string=0x000000000048EED4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::dispose(__int64 a1)
{
  void *v1; // x19

  v1 = *(void **)(a1 + 24);
  if ( v1 )
  {
    Caver::RenderingProgramShader::~RenderingProgramShader(*(Caver::RenderingProgramShader **)(a1 + 24));
    operator delete(v1);
  }
}

