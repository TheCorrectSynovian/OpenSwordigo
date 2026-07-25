/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033154C
 * Mangled: _ZNK5Caver5Proto20OverlayTextComponent3NewEv
 * Demangled: Caver::Proto::OverlayTextComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 9
 *   insn=0x0000000000331554 string=0x0000000000331558 """
 *   insn=0x0000000000331558 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033155C string=0x0000000000331560 ""
 *   insn=0x000000000033156C string=0x0000000000331570 ")\tG"
 *   insn=0x0000000000331570 string=0x0000000000331574 "J"
 *   insn=0x0000000000331574 string=0x0000000000331578 "A"
 *   insn=0x0000000000331578 string=0x000000000033157C ""
 *   insn=0x000000000033157C string=0x0000000000331580 "\t|"
 *   insn=0x0000000000331580 string=0x0000000000331584 "\n|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::OverlayTextComponent::New(Caver::Proto::OverlayTextComponent *this)
{
  __int64 result; // x0

  result = operator new(0x38u);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = off_6C9630;
  *(_QWORD *)(result + 16) = &Caver::Proto::OverlayTextComponent::_default_text_;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = &Caver::Proto::OverlayTextComponent::_default_sprite_name_;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 48) = 0;
  return result;
}

