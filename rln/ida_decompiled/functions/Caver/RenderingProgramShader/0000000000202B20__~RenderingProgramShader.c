/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B20
 * Mangled: ._ZN5Caver22RenderingProgramShaderD2Ev
 * Demangled: Caver::RenderingProgramShader::~RenderingProgramShader()
 *
 * Callers: 2
 *   0x000000000048DB54  Caver::BasicRenderingPrograms::AddToContext(Caver::RenderingContext *)
 *   0x000000000048EE8C  boost::detail::sp_counted_impl_p<Caver::RenderingProgramShader>::dispose(void)
 *
 * Callees: 1
 *   0x00000000004D31A4  Caver::RenderingProgramShader::~RenderingProgramShader()
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B28 string=0x0000000000202B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::RenderingProgramShader::~RenderingProgramShader(Caver::RenderingProgramShader *this)
{
  _ZN5Caver22RenderingProgramShaderD2Ev(this);
}

