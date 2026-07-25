/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002035D0
 * Mangled: ._ZN5Caver5Proto9Component10SharedDtorEv
 * Demangled: Caver::Proto::Component::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002035D8 string=0x00000000002035DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Component::SharedDtor(Caver::Proto::Component *this)
{
  JUMPOUT(0x2FB384);
}

