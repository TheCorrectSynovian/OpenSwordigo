/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E374
 * Mangled: _ZNK5Caver25EntityControllerComponent5CloneEv
 * Demangled: Caver::EntityControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000026DE84  sub_26DE84
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC560  Caver::EntityControllerComponent::EntityControllerComponent(void)
 *   0x000000000026E404  Caver::EntityControllerComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000026E388 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000026E38C string=0x000000000026E390 "t8"
 *   insn=0x000000000026E390 string=0x000000000026E394 "h"@"
 *   insn=0x000000000026E390 string=0x00000000001FC560 "0'"
 *   insn=0x000000000026E394 string=0x000000000026E398 "a"
 *   insn=0x000000000026E3A4 string=0x000000000026E3A8 "hz@"
 *   insn=0x000000000026E3B4 string=0x000000000026E3B8 "h"
 *   insn=0x000000000026E3BC string=0x000000000026E3C0 "h"
 *   insn=0x000000000026E3C4 string=0x000000000026E3C8 "h"
 *   insn=0x000000000026E3CC string=0x000000000026E3D0 "hr@"
 *   insn=0x000000000026E3D4 string=0x000000000026E3D8 "h"
 *   insn=0x000000000026E3DC string=0x000000000026E3E0 "h"
 *   insn=0x000000000026E3F8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000026E3FC string=0x000000000026E400 "1M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::Clone(Caver::EntityControllerComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0x150u);
  Caver::EntityControllerComponent::EntityControllerComponent((Caver::EntityControllerComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  *(_DWORD *)(v2 + 168) = *((_DWORD *)this + 42);
  *(_DWORD *)(v2 + 192) = *((_DWORD *)this + 48);
  *(_QWORD *)(v2 + 224) = *((_QWORD *)this + 28);
  *(_DWORD *)(v2 + 232) = *((_DWORD *)this + 58);
  *(_DWORD *)(v2 + 248) = *((_DWORD *)this + 62);
  return result;
}

