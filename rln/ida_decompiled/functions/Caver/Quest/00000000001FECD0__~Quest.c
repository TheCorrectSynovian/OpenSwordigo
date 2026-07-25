/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FECD0
 * Mangled: ._ZN5Caver5QuestD2Ev
 * Demangled: Caver::Quest::~Quest()
 *
 * Callers: 2
 *   0x00000000003B1E10  boost::detail::shared_count::shared_count<Caver::Quest>(Caver::Quest *)
 *   0x00000000003B1EA4  boost::detail::sp_counted_impl_p<Caver::Quest>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003B1EF8  Caver::Quest::~Quest()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FECD8 string=0x00000000001FECDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Quest::~Quest(Caver::Quest *this)
{
  _ZN5Caver5QuestD2Ev(this);
}

