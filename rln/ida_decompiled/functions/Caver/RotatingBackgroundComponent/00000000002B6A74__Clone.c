/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6A74
 * Mangled: _ZNK5Caver27RotatingBackgroundComponent5CloneEv
 * Demangled: Caver::RotatingBackgroundComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002B69B8  Caver::RotatingBackgroundComponent::~RotatingBackgroundComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA190  Caver::BackgroundComponent::InitWithComponent(Caver::BackgroundComponent const*)
 *   0x00000000001FF840  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x00000000002B6AEC  Caver::RotatingBackgroundComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x00000000002B6A88 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B6A8C string=0x00000000002B6A90 "l#"
 *   insn=0x00000000002B6A94 string=0x00000000002B6A98 ""
 *   insn=0x00000000002B6AA4 string=0x00000000002B6AA8 "\n"
 *   insn=0x00000000002B6AA8 string=0x00000000002B6AAC "\tA"
 *   insn=0x00000000002B6AAC string=0x00000000002B6AB0 ""
 *   insn=0x00000000002B6AB0 string=0x00000000002B6AB4 "@"
 *   insn=0x00000000002B6AB8 string=0x00000000002B6ABC "i"
 *   insn=0x00000000002B6ABC string=0x00000000002B6AC0 "`"
 *   insn=0x00000000002B6AC4 string=0x00000000001FA190 "0'"
 *   insn=0x00000000002B6AE0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B6AE4 string=0x00000000002B6AE8 "w+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RotatingBackgroundComponent::Clone(Caver::RotatingBackgroundComponent *this)
{
  __int64 v1; // x19
  __int128 v2; // q0

  v1 = operator new(0x98u);
  Caver::BackgroundComponent::BackgroundComponent((Caver::BackgroundComponent *)v1);
  *(_DWORD *)(v1 + 144) = 0;
  *(_QWORD *)&v2 = &off_6C48D0;
  *((_QWORD *)&v2 + 1) = &off_6C4910;
  *(_QWORD *)v1 = off_6C47B0;
  *(_OWORD *)(v1 + 16) = v2;
  Caver::BackgroundComponent::InitWithComponent();
  return v1;
}

