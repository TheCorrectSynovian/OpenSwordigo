/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F7E0
 * Mangled: _ZNK5Caver23BlendAnimationComponent5CloneEv
 * Demangled: Caver::BlendAnimationComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000021F67C  Caver::BlendAnimationComponent::~BlendAnimationComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202420  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *   0x000000000021F86C  Caver::BlendAnimationComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x000000000021F7F0 string=0x000000000021F7F4 "{W"
 *   insn=0x000000000021F7F4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021F7F8 string=0x000000000021F7FC "\t"
 *   insn=0x000000000021F804 string=0x000000000021F808 "`"
 *   insn=0x000000000021F808 string=0x000000000021F80C "h""
 *   insn=0x000000000021F814 string=0x000000000021F818 "h"
 *   insn=0x000000000021F81C string=0x000000000021F820 "h"
 *   insn=0x000000000021F824 string=0x000000000021F828 "h>@"
 *   insn=0x000000000021F828 string=0x000000000021F82C "*%@"
 *   insn=0x000000000021F82C string=0x000000000021F830 "\n%"
 *   insn=0x000000000021F830 string=0x000000000021F834 " )@"
 *   insn=0x000000000021F834 string=0x000000000021F838 "  "
 *   insn=0x000000000021F838 string=0x000000000021F83C "L"
 *   insn=0x000000000021F83C string=0x000000000021F840 " %@"
 *   insn=0x000000000021F860 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BlendAnimationComponent::Clone(Caver::BlendAnimationComponent *this)
{
  __int64 v2; // x19
  __int64 v3; // x9
  __int64 v4; // x8
  float v5; // s0

  v2 = operator new(0xA0u);
  Caver::BlendAnimationComponent::BlendAnimationComponent((Caver::BlendAnimationComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56, (char *)this + 56);
  *(_DWORD *)(v2 + 128) = *((_DWORD *)this + 32);
  *(_DWORD *)(v2 + 144) = *((_DWORD *)this + 36);
  v3 = *((_QWORD *)this + 15);
  v4 = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(v4 + 36) = *(_DWORD *)(v3 + 36);
  v5 = *(float *)(v3 + 40);
  if ( v5 <= 0.0 )
    v5 = *(float *)(v3 + 36);
  *(float *)(v4 + 40) = v5;
  return v2;
}

