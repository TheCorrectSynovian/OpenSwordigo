/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D10
 * Mangled: ._ZN5Caver5Proto5Quest10SharedDtorEv
 * Demangled: Caver::Proto::Quest::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002E18FC  Caver::Proto::Quest::Quest(Caver::Proto::Quest const&)
 *   0x00000000002E1E18  Caver::Proto::Quest::~Quest()
 *
 * Callees: 1
 *   0x00000000002E18FC  Caver::Proto::Quest::Quest(Caver::Proto::Quest const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200D18 string=0x0000000000200D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Quest::SharedDtor(Caver::Proto::Quest *this)
{
  JUMPOUT(0x2E1BCC);
}

