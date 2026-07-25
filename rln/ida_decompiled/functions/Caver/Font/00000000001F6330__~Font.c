/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6330
 * Mangled: ._ZN5Caver4FontD2Ev
 * Demangled: Caver::Font::~Font()
 *
 * Callers: 2
 *   0x00000000004C4AF0  boost::detail::shared_count::shared_count<Caver::Font>(Caver::Font *)
 *   0x00000000004C4B84  boost::detail::sp_counted_impl_p<Caver::Font>::dispose(void)
 *
 * Callees: 1
 *   0x00000000004C4BD8  Caver::Font::~Font()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6338 string=0x00000000001F633C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Font::~Font(Caver::Font *this)
{
  _ZN5Caver4FontD2Ev(this);
}

