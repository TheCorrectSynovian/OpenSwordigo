/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027A41C
 * Mangled: _ZN5Caver17ItemDropComponent19ImplementsInterfaceEl
 * Demangled: Caver::ItemDropComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002560F4  Caver::ItemDropComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000027A41C string=0x000000000027A420 "Q@"
 *   insn=0x000000000027A420 string=0x000000000027A424 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::ItemDropComponent::ImplementsInterface(
        Caver::ItemDropComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::ItemDropComponent *this))(Caver::ItemDropComponent *__hidden this))
{
  return a2 == Caver::ItemDropComponent::Interface;
}

