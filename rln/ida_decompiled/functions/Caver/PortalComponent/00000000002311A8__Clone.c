/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002311A8
 * Mangled: _ZNK5Caver15PortalComponent5CloneEv
 * Demangled: Caver::PortalComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000230EE4  Caver::PortalComponent::~PortalComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F64E0  Caver::PortalComponent::PortalComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000231228  Caver::PortalComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x00000000002311B8 string=0x00000000002311BC "\t"
 *   insn=0x00000000002311BC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002311C4 string=0x00000000002311C8 "h"@"
 *   insn=0x00000000002311C4 string=0x00000000001F64E0 "0'"
 *   insn=0x00000000002311C8 string=0x00000000002311CC "a"
 *   insn=0x00000000002311D4 string=0x00000000002311D8 "4"
 *   insn=0x00000000002311D8 string=0x00000000002311DC "hz@"
 *   insn=0x00000000002311DC string=0x00000000002311E0 "a""
 *   insn=0x00000000002311E8 string=0x00000000002311EC "/"
 *   insn=0x00000000002311EC string=0x00000000002311F0 "aB"
 *   insn=0x00000000002311F4 string=0x00000000002311F8 ","
 *   insn=0x00000000002311F8 string=0x00000000002311FC "hbB9"
 *   insn=0x0000000000231218 string=0x000000000023121C "%"
 *   insn=0x000000000023121C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PortalComponent::Clone(Caver::PortalComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0xA8u);
  Caver::PortalComponent::PortalComponent((Caver::PortalComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  sub_56A6A8(v2 + 136);
  sub_56A6A8(v2 + 144);
  result = v2;
  *(_BYTE *)(v2 + 152) = *((_BYTE *)this + 152);
  return result;
}

