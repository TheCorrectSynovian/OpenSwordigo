/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E578C
 * Mangled: _ZN5Caver5Proto11GameOptionsD0Ev
 * Demangled: Caver::Proto::GameOptions::~GameOptions()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6A70  Caver::Proto::GameOptions::~GameOptions()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002E57C4  Caver::Proto::GameOptions::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002E579C string=0x00000000001F6A70 "0'"
 *   insn=0x00000000002E57AC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E57BC string=0x00000000002E57C0 "Ap\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GameOptions::~GameOptions(Caver::Proto::GameOptions *this)
{
  Caver::Proto::GameOptions::~GameOptions(this);
  operator delete(this);
}

