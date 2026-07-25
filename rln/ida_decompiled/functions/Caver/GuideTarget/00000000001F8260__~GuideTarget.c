/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8260
 * Mangled: ._ZN5Caver11GuideTargetD2Ev
 * Demangled: Caver::GuideTarget::~GuideTarget()
 *
 * Callers: 2
 *   0x00000000003B230C  boost::detail::shared_count::shared_count<Caver::GuideTarget>(Caver::GuideTarget *)
 *   0x00000000003B23A0  boost::detail::sp_counted_impl_p<Caver::GuideTarget>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003B23F4  Caver::GuideTarget::~GuideTarget()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8268 string=0x00000000001F826C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GuideTarget::~GuideTarget(Caver::GuideTarget *this)
{
  _ZN5Caver11GuideTargetD2Ev(this);
}

