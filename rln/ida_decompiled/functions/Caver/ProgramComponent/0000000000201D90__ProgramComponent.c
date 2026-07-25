/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D90
 * Mangled: ._ZN5Caver16ProgramComponentC2Ev
 * Demangled: Caver::ProgramComponent::ProgramComponent(void)
 *
 * Callers: 1
 *   0x00000000002506F8  Caver::ProgramComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002314DC  Caver::ProgramComponent::ProgramComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D98 string=0x0000000000201D9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProgramComponent::ProgramComponent(Caver::ProgramComponent *this)
{
  return _ZN5Caver16ProgramComponentC2Ev(this);
}

