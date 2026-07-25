/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9660
 * Mangled: ._ZN5Caver3MapD2Ev
 * Demangled: Caver::Map::~Map()
 *
 * Callers: 2
 *   0x00000000003C239C  boost::detail::shared_count::shared_count<Caver::Map>(Caver::Map *)
 *   0x00000000003C2430  boost::detail::sp_counted_impl_p<Caver::Map>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003C2484  Caver::Map::~Map()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9668 string=0x00000000001F966C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Map::~Map(Caver::Map *this)
{
  _ZN5Caver3MapD2Ev(this);
}

