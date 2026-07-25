/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8D88
 * Mangled: _ZN5Caver19GroundMeshComponent19ImplementsInterfaceEl
 * Demangled: Caver::GroundMeshComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000021C130  Caver::GroundMeshComponent::Interface(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B8D88 string=0x00000000002B8D8C ""
 *   insn=0x00000000002B8D8C string=0x00000000002B8D90 "?"
 *   insn=0x00000000002B8D8C string=0x000000000021C130 "@&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::GroundMeshComponent::ImplementsInterface(
        Caver::GroundMeshComponent *this,
        __int64 (__fastcall *(__fastcall *a2)(Caver::GroundMeshComponent *this))(Caver::GroundMeshComponent *__hidden this))
{
  return a2 == Caver::GroundMeshComponent::Interface;
}

