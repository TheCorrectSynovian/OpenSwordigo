/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CA490
 * Mangled: _ZNK5Caver14SwingComponent5CloneEv
 * Demangled: Caver::SwingComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002CA358  Caver::SwingComponent::~SwingComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7B20  Caver::SwingComponent::SwingComponent(void)
 *   0x00000000002CA508  Caver::SwingComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002CA4A0 string=0x00000000002CA4A4 "O"
 *   insn=0x00000000002CA4A4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CA4AC string=0x00000000002CA4B0 "h"@"
 *   insn=0x00000000002CA4AC string=0x00000000001F7B20 "0'"
 *   insn=0x00000000002CA4B0 string=0x00000000002CA4B4 "a"
 *   insn=0x00000000002CA4BC string=0x00000000002CA4C0 "z"
 *   insn=0x00000000002CA4C0 string=0x00000000002CA4C4 "hz@"
 *   insn=0x00000000002CA4D0 string=0x00000000002CA4D4 "hBB9"
 *   insn=0x00000000002CA4D8 string=0x00000000002CA4DC "hFB9"
 *   insn=0x00000000002CA4E0 string=0x00000000002CA4E4 "hF@"
 *   insn=0x00000000002CA4F8 string=0x00000000002CA4FC "m"
 *   insn=0x00000000002CA4FC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingComponent::Clone(Caver::SwingComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0x98u);
  Caver::SwingComponent::SwingComponent((Caver::SwingComponent *)v2);
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_DWORD *)(v2 + 120) = *((_DWORD *)this + 30);
  *(_BYTE *)(v2 + 144) = *((_BYTE *)this + 144);
  *(_BYTE *)(v2 + 145) = *((_BYTE *)this + 145);
  *(_QWORD *)(v2 + 136) = *((_QWORD *)this + 17);
  return result;
}

