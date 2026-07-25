/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047DA14
 * Mangled: _ZN5Caver7FWShellD0Ev
 * Demangled: Caver::FWShell::~FWShell()
 *
 * Callers: 1
 *   0x000000000047D880  Caver::FWShell::~FWShell()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002014F0  Caver::FWShell::~FWShell()
 *   0x000000000047DA4C  Caver::FWShell::AddArgument(std::string const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x000000000047DA34 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWShell::~FWShell(Caver::FWShell *this)
{
  Caver::FWShell::~FWShell(this);
  operator delete(this);
}

