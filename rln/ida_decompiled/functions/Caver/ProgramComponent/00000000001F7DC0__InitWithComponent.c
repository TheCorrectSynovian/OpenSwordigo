/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7DC0
 * Mangled: ._ZN5Caver16ProgramComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ProgramComponent::InitWithComponent(Caver::ProgramComponent const*)
 *
 * Callers: 1
 *   0x0000000000232DB0  Caver::ProgramComponent::~ProgramComponent()
 *
 * Callees: 1
 *   0x0000000000231558  Caver::ProgramComponent::InitWithComponent(Caver::ProgramComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7DC8 string=0x00000000001F7DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramComponent::InitWithComponent(
        Caver::ProgramComponent *this,
        const Caver::ProgramComponent *a2)
{
  return _ZN5Caver16ProgramComponent17InitWithComponentEPKS0_(this, a2);
}

