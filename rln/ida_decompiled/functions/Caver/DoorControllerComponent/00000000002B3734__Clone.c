/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3734
 * Mangled: _ZNK5Caver23DoorControllerComponent5CloneEv
 * Demangled: Caver::DoorControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002B3524  Caver::DoorControllerComponent::~DoorControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFC80  Caver::DoorControllerComponent::DoorControllerComponent(void)
 *   0x00000000002B37B4  Caver::DoorControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000002B3748 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B374C string=0x00000000002B3750 "L1"
 *   insn=0x00000000002B3750 string=0x00000000002B3754 "h"@"
 *   insn=0x00000000002B3754 string=0x00000000002B3758 "a"
 *   insn=0x00000000002B3764 string=0x00000000002B3768 "hz@"
 *   insn=0x00000000002B3774 string=0x00000000002B3778 "h"
 *   insn=0x00000000002B377C string=0x00000000002B3780 "h"
 *   insn=0x00000000002B3784 string=0x00000000002B3788 "h"
 *   insn=0x00000000002B378C string=0x00000000002B3790 "hBC9"
 *   insn=0x00000000002B37A8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B37AC string=0x00000000002B37B0 "E8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::Clone(Caver::DoorControllerComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0xD8u);
  Caver::DoorControllerComponent::DoorControllerComponent((Caver::DoorControllerComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  *(_DWORD *)(v2 + 168) = *((_DWORD *)this + 42);
  *(_DWORD *)(v2 + 192) = *((_DWORD *)this + 48);
  *(_BYTE *)(v2 + 208) = *((_BYTE *)this + 208);
  return result;
}

