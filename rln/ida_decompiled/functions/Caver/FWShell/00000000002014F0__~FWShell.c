/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002014F0
 * Mangled: ._ZN5Caver7FWShellD2Ev
 * Demangled: Caver::FWShell::~FWShell()
 *
 * Callers: 2
 *   0x000000000021163C  Caver::CaverShell::~CaverShell()
 *   0x000000000047DA14  Caver::FWShell::~FWShell()
 *
 * Callees: 1
 *   0x000000000047D880  Caver::FWShell::~FWShell()
 *
 * Referenced strings: 1
 *   insn=0x00000000002014F8 string=0x00000000002014FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FWShell::~FWShell(Caver::FWShell *this)
{
  _ZN5Caver7FWShellD2Ev(this);
}

