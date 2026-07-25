/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3328
 * Mangled: _ZN5Caver20FireEmitterComponent19ImplementsInterfaceEl
 * Demangled: Caver::FireEmitterComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002A34A0  Caver::FireEmitterComponent::Interface(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002A3328 string=0x00000000002A332C ""
 *   insn=0x00000000002A332C string=0x00000000002A3330 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::FireEmitterComponent::ImplementsInterface(
        Caver::FireEmitterComponent *this,
        __int64 (__fastcall *a2)(Caver::FireEmitterComponent *__hidden this))
{
  return a2 == Caver::FireEmitterComponent::Interface;
}

