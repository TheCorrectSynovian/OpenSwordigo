/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269BBC
 * Mangled: _ZN5Caver15EntityComponent19ImplementsInterfaceEl
 * Demangled: Caver::EntityComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000269BBC string=0x0000000000269BC0 "1F"
 *   insn=0x0000000000269BC0 string=0x0000000000269BC4 "?"
 *   insn=0x0000000000269BC0 string=0x000000000026168C " $"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::EntityComponent::ImplementsInterface(
        Caver::EntityComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::EntityComponent *this))(Caver::EntityComponent *__hidden this))
{
  return a2 == Caver::EntityComponent::Interface;
}

