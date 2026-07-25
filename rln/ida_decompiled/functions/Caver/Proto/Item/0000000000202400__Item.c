/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202400
 * Mangled: ._ZN5Caver5Proto4ItemC2Ev
 * Demangled: Caver::Proto::Item::Item(void)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000002DF724  Caver::Proto::Item::Item(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202404 string=0x00000000002DF724 "( "
 *   insn=0x0000000000202408 string=0x000000000020240C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Item::Item(Caver::Proto::Item *this)
{
  return _ZN5Caver5Proto4ItemC2Ev(this);
}

