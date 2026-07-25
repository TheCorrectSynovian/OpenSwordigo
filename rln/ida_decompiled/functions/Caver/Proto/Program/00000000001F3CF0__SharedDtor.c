/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3CF0
 * Mangled: ._ZN5Caver5Proto7Program10SharedDtorEv
 * Demangled: Caver::Proto::Program::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002D5604  Caver::Proto::Program::Program(Caver::Proto::Program const&)
 *   0x00000000002D5A3C  Caver::Proto::Program::~Program()
 *
 * Callees: 1
 *   0x00000000002D5604  Caver::Proto::Program::Program(Caver::Proto::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3CF8 string=0x00000000001F3CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Program::SharedDtor(Caver::Proto::Program *this)
{
  JUMPOUT(0x2D5874);
}

