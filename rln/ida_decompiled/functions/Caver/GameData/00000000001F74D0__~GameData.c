/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F74D0
 * Mangled: ._ZN5Caver8GameDataD2Ev
 * Demangled: Caver::GameData::~GameData()
 *
 * Callers: 2
 *   0x00000000003C29F8  boost::detail::shared_count::shared_count<Caver::GameData>(Caver::GameData *)
 *   0x00000000003C2A8C  boost::detail::sp_counted_impl_p<Caver::GameData>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003C2AE0  Caver::GameData::~GameData()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F74D8 string=0x00000000001F74DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameData::~GameData(Caver::GameData *this)
{
  _ZN5Caver8GameDataD2Ev(this);
}

