/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A50
 * Mangled: ._ZN5Caver4ItemC2Ev
 * Demangled: Caver::Item::Item(void)
 *
 * Callers: 2
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003BA84C  Caver::Item::Item(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200A54 string=0x00000000003BA84C "H"
 *   insn=0x0000000000200A58 string=0x0000000000200A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Item::Item(Caver::Item *this)
{
  return _ZN5Caver4ItemC2Ev(this);
}

