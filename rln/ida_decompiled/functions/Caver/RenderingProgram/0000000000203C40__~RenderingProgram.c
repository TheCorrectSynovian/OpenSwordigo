/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203C40
 * Mangled: ._ZN5Caver16RenderingProgramD2Ev
 * Demangled: Caver::RenderingProgram::~RenderingProgram()
 *
 * Callers: 2
 *   0x000000000048EEE0  boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram *)
 *   0x000000000048EF74  boost::detail::sp_counted_impl_p<Caver::RenderingProgram>::dispose(void)
 *
 * Callees: 1
 *   0x000000000048CE18  Caver::RenderingProgram::~RenderingProgram()
 *
 * Referenced strings: 1
 *   insn=0x0000000000203C48 string=0x0000000000203C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::RenderingProgram::~RenderingProgram(Caver::RenderingProgram *this)
{
  _ZN5Caver16RenderingProgramD2Ev(this);
}

