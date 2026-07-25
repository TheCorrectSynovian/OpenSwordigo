/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000286774
 * Mangled: _ZNK5Caver18MagicBombComponent5CloneEv
 * Demangled: Caver::MagicBombComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000286538  Caver::MagicBombComponent::~MagicBombComponent()
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *   0x00000000001F9DF0  Caver::SpellComponent::InitWithComponent(Caver::SpellComponent const*)
 *   0x0000000000286810  Caver::MagicBombComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 15
 *   insn=0x0000000000286788 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000286790 string=0x0000000000286794 "#"
 *   insn=0x0000000000286790 string=0x00000000001F8740 "0'"
 *   insn=0x0000000000286794 string=0x0000000000286798 ""
 *   insn=0x00000000002867A4 string=0x00000000002867A8 "\t!"
 *   insn=0x00000000002867A8 string=0x00000000002867AC " "
 *   insn=0x00000000002867AC string=0x00000000002867B0 "\t!"
 *   insn=0x00000000002867B0 string=0x00000000002867B4 " "
 *   insn=0x00000000002867B4 string=0x00000000002867B8 "\t"
 *   insn=0x00000000002867BC string=0x00000000002867C0 " "
 *   insn=0x00000000002867C0 string=0x00000000002867C4 "A"
 *   insn=0x00000000002867E0 string=0x00000000002867E4 "`6"
 *   insn=0x00000000002867E0 string=0x00000000001F9DF0 "0'"
 *   insn=0x0000000000286804 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000286808 string=0x000000000028680C "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBombComponent::Clone(Caver::MagicBombComponent *this)
{
  __int64 v2; // x20
  __int64 result; // x0

  v2 = operator new(0xF0u);
  Caver::SpellComponent::SpellComponent((Caver::SpellComponent *)v2);
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v2 + 208) = _Q0;
  *(_QWORD *)&_Q0 = &off_6C0768;
  *((_QWORD *)&_Q0 + 1) = &off_6C07A8;
  *(_OWORD *)(v2 + 16) = _Q0;
  *(_QWORD *)(v2 + 200) = 0;
  *(_DWORD *)(v2 + 224) = 0;
  *(_QWORD *)v2 = off_6C0630;
  *(_QWORD *)(v2 + 188) = 0x4080000000000000LL;
  *(_QWORD *)(v2 + 232) = 0;
  Caver::SpellComponent::InitWithComponent((Caver::SpellComponent *)v2, this);
  result = v2;
  *(_OWORD *)(v2 + 208) = *((_OWORD *)this + 13);
  return result;
}

