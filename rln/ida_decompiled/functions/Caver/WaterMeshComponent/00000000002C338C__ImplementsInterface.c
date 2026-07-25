/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C338C
 * Mangled: _ZN5Caver18WaterMeshComponent19ImplementsInterfaceEl
 * Demangled: Caver::WaterMeshComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002C3458  Caver::WaterMeshComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002C338C string=0x00000000002C3390 "MB"
 *   insn=0x00000000002C3390 string=0x00000000002C3394 "?"
 *   insn=0x00000000002C3390 string=0x00000000002C3458 " !"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::WaterMeshComponent::ImplementsInterface(
        Caver::WaterMeshComponent *this,
        __int64 (__fastcall *a2)(Caver::WaterMeshComponent *__hidden this))
{
  return a2 == Caver::WaterMeshComponent::Interface;
}

