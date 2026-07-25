/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000268FE8
 * Mangled: _ZThn24_N5Caver15EntityComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::EntityComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC070  Caver::EntityComponent::Update(float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000268FE8 string=0x0000000000268FEC "!L"
 *   insn=0x0000000000268FEC string=0x00000000001FC070 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::EntityComponent::Update(Caver::EntityComponent *this, float a2)
{
  return Caver::EntityComponent::Update((Caver::EntityComponent *)((char *)this - 24), a2);
}

