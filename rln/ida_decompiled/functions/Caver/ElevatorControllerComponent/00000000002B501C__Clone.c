/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B501C
 * Mangled: _ZNK5Caver27ElevatorControllerComponent5CloneEv
 * Demangled: Caver::ElevatorControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002B4EE4  Caver::ElevatorControllerComponent::~ElevatorControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9AF0  Caver::ElevatorControllerComponent::ElevatorControllerComponent(void)
 *   0x00000000002B5084  Caver::ElevatorControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 8
 *   insn=0x00000000002B502C string=0x00000000002B5030 "l"
 *   insn=0x00000000002B5030 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B5038 string=0x00000000002B503C "h"@"
 *   insn=0x00000000002B5038 string=0x00000000001F9AF0 "0'"
 *   insn=0x00000000002B503C string=0x00000000002B5040 "a"
 *   insn=0x00000000002B504C string=0x00000000002B5050 "hz@"
 *   insn=0x00000000002B505C string=0x00000000002B5060 "h"
 *   insn=0x00000000002B5078 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ElevatorControllerComponent *__fastcall Caver::ElevatorControllerComponent::Clone(
        Caver::ElevatorControllerComponent *this)
{
  Caver::ElevatorControllerComponent *v2; // x20
  Caver::ElevatorControllerComponent *result; // x0

  v2 = (Caver::ElevatorControllerComponent *)operator new(0xD0u);
  Caver::ElevatorControllerComponent::ElevatorControllerComponent(v2);
  *((_DWORD *)v2 + 8) = *((_DWORD *)this + 8);
  sub_56A6A8((char *)v2 + 56);
  result = v2;
  *((_DWORD *)v2 + 30) = *((_DWORD *)this + 30);
  *((_DWORD *)v2 + 38) = *((_DWORD *)this + 38);
  return result;
}

