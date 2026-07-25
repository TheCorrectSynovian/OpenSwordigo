/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB590
 * Mangled: ._ZN5Caver16RenderingContextD2Ev
 * Demangled: Caver::RenderingContext::~RenderingContext()
 *
 * Callers: 2
 *   0x000000000047B968  boost::detail::shared_count::shared_count<Caver::RenderingContext>(Caver::RenderingContext *)
 *   0x000000000047B9FC  boost::detail::sp_counted_impl_p<Caver::RenderingContext>::dispose(void)
 *
 * Callees: 1
 *   0x000000000047BA50  Caver::RenderingContext::~RenderingContext()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB598 string=0x00000000001FB59C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::RenderingContext::~RenderingContext(Caver::RenderingContext *this)
{
  _ZN5Caver16RenderingContextD2Ev(this);
}

