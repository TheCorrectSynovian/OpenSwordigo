/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002004F0
 * Mangled: ._ZN5Caver5Proto4Item10SharedDtorEv
 * Demangled: Caver::Proto::Item::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002DF7D4  Caver::Proto::Item::Item(Caver::Proto::Item const&)
 *   0x00000000002DFD9C  Caver::Proto::Item::~Item()
 *
 * Callees: 1
 *   0x00000000002DF7D4  Caver::Proto::Item::Item(Caver::Proto::Item const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002004F8 string=0x00000000002004FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Item::SharedDtor(Caver::Proto::Item *this)
{
  JUMPOUT(0x2DFB50);
}

