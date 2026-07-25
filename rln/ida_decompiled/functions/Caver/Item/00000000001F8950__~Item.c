/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8950
 * Mangled: ._ZN5Caver4ItemD2Ev
 * Demangled: Caver::Item::~Item()
 *
 * Callers: 2
 *   0x00000000003A114C  boost::detail::shared_count::shared_count<Caver::Item>(Caver::Item *)
 *   0x00000000003A11E0  boost::detail::sp_counted_impl_p<Caver::Item>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003A1234  Caver::Item::~Item()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8958 string=0x00000000001F895C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Item::~Item(Caver::Item *this)
{
  _ZN5Caver4ItemD2Ev(this);
}

