/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7BF0
 * Mangled: ._ZN5Caver8GameData12QuestForNameERKSs
 * Demangled: Caver::GameData::QuestForName(std::string const&)
 *
 * Callers: 3
 *   0x000000000035EB00  sub_35EB00
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *
 * Callees: 1
 *   0x00000000003B0D70  Caver::GameData::QuestForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7BF8 string=0x00000000001F7BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameData::QuestForName()
{
  return _ZN5Caver8GameData12QuestForNameERKSs();
}

